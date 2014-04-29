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

void Module::addSubModule(ModuleInstantiation subModule)
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

void Module::addInteraction(Interaction interaction)
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

void Module::addPort(Port port)
{
    (this->ports).push_back(port);
}

void Module::setContexts(list<Context*> contexts)
{
    this->contexts = contexts;
}

list<Context*> Module::getContexts()
{
    return (this->contexts);
}

void Module::addContext(Context* context)
{
    (this->contexts).push_back(context);
}

void Module::setModels(list<Model*> models)
{
    this->models = models;
}

list<Model*> Module::getModels()
{
    return (this->models);
}

void Module::addModel(Model* model)
{
    (this->models).push_back(model);
}

ostream &operator<< (ostream &out, Module &m)
{
    cout << "Module " << m.getIdentity() << m.getDisplayId() << " { \n\n";
    
    cout << "Contexts: \n";
    list<Context*> contextList = m.getContexts();
    
    for (list<Context*>::iterator it = contextList.begin(); it != contextList.end(); it++)
    {
        cout << **it << endl;
    }
   
    
    cout << "Models: \n";
    list<Model*> modelList = m.getModels();
   
    for (list<Model*>::iterator it = modelList.begin(); it != modelList.end(); it++)
    {
        cout << **it << endl;
    }
    
    
    cout << "Signals: \n";
    list<Signal> signalList = m.getSignals();
    
    for (list<Signal>::iterator it = signalList.begin(); it != signalList.end(); it++)
    {
        cout << *it << endl;
    }
    
    
    cout << "SubModules: \n";
    list<ModuleInstantiation> subModuleList = m.getSubModules();
    
    for (list<ModuleInstantiation>::iterator it = subModuleList.begin(); it != subModuleList.end(); it++)
    {
        cout << *it << endl;
    }
    
    cout << "Interactions: \n";
    list<Interaction> interactionList = m.getInteractions();
    
    for (list<Interaction>::iterator it = interactionList.begin(); it != interactionList.end(); it++)
    {
        cout << *it << endl;
    }
    
    
    
    cout << "}" << endl;
    return out;
}