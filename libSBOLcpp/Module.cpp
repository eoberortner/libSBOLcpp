//
//  Module.cpp
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#include "Module.h"


Module::Module(string identity, string displayId):Documented(identity,displayId)
{
    
}

void Module::setSignals(list<Signal> signals)
{
    this->signals = signals;
}

list<Signal> Module::getSignals()
{
    return signals;
}

void Module::addSignal(Signal signal)
{
    (this->signals).push_back(signal);
}

void Module::setSubModules(list<ModuleInstantiation> subModules)
{
    this->subModules = subModules;
}

list<ModuleInstantiation> Module::getSubModules()
{
    return subModules;
}

void Module::addSubModules(ModuleInstantiation subModule)
{
    (this->subModules).push_back(subModule);
}

void Module::setInteractions(list<Interaction> interactions)
{
    this->interactions = interactions;
}

list<Interaction> Module::getInteractions()
{
    return interactions;
}

void Module::addInteractions(Interaction interaction)
{
    (this->interactions).push_back(interaction);
}

void Module::setPorts(list<Port> ports)
{
    this->ports = ports;
}

list<Port> Module::getPorts()
{
    return ports;
}

void Module::addPorts(Port port)
{
    (this->ports).push_back(port);
}

void Module::setContexts(list<Context*> contexts)
{
    this->contexts = contexts;
}

list<Context*> Module::getContexts()
{
    return contexts;
}

void Module::addContexts(Context* context)
{
    (this->contexts).push_back(context);
}

void Module::setModels(list<Model*> models)
{
    this->models = models;
}

list<Model*> Module::getModels()
{
    return models;
}

void Module::addModels(Model* model)
{
    (this->models).push_back(model);
}

ostream &operator<< (ostream &out, Module &m)
{
    cout << "Module " << m.getDisplayId() << " {" << endl;
    
    for (list<Signal>::iterator it = (m.getSignals()).begin(); it != (m.getSignals()).end(); it++)
    {
        cout << *it << endl;
    }
    cout << "}" << endl;
    
    return out;
}