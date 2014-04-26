//
//  Module.h
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#ifndef __SBOL__Module__
#define __SBOL__Module__

#include <iostream>
#include <list>
#include "Documented.h"
#include "Signal.h"
#include "ModuleInstantiation.h"
#include "Interaction.h"
#include "Port.h"
#include "Context.h"
#include "Model.h"

class Module: public Documented
{
private:
    list<Signal> signals;
    list<ModuleInstantiation> subModules;
    list<Interaction> interactions;
    list<Port> ports;
    list<Context*> contexts;
    list<Model*> models;
    
public:
    Module(string identity, string displayId);
    
    void setSignals(list<Signal> signals);
    list<Signal> getSignals();
    void addSignal(Signal signal);
    
    void setSubModules(list<ModuleInstantiation> subModules);
    list<ModuleInstantiation> getSubModules();
    void addSubModule(ModuleInstantiation subModule);
    
    void setInteractions(list<Interaction> interactions);
    list<Interaction> getInteractions();
    void addInteraction(Interaction interaction);
    
    void setPorts(list<Port> ports);
    list<Port> getPorts();
    void addPort(Port port);
    
    void setContexts(list<Context*> contexts);
    list<Context*> getContexts();
    void addContext(Context* context);
    
    void setModels(list<Model*> models);
    list<Model*> getModels();
    void addModel(Model* model);
};

ostream &operator<< (ostream &out, Module &m);

#endif /* defined(__UML_Diagram__Module__) */
