//
//  ModuleInstantiation.h
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#ifndef __SBOL__ModuleInstantiation__
#define __SBOL__ModuleInstantiation__

#include <iostream>
#include "Instantiation.h"
#include "Component.h"

class ModuleInstantiation: public Instantiation
{
private:
    Component* instantiated;
    
public:
    ModuleInstantiation(string identity, string displayId, Component* instantiated);
    Component* getInstantiated() const;
};

#endif /* defined(__UML_Diagram__ModuleInstantiation__) */
