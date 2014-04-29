//
//  ModuleInstantiation.cpp
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#include "ModuleInstantiation.h"


ModuleInstantiation::ModuleInstantiation(string identity, string displayId, Component* instantiated):
    Instantiation(identity, displayId)
{
    this->instantiated = instantiated;
}

Component* ModuleInstantiation::getInstantiated() const
{
    return (this->instantiated);
}

ostream &operator<< (ostream &out, ModuleInstantiation &m)
{
    cout << "ModuleInstantiation " << m.getIdentity() << m.getDisplayId() << " { \n";
    cout << "Instantiates: " << *(m.getInstantiated()) ;
    cout << "} \n";
    
    return out;
}