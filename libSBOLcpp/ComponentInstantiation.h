//
//  ComponentInstantiation.h
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#ifndef __SBOL__ComponentInstantiation__
#define __SBOL__ComponentInstantiation__

#include <iostream>
#include "Instantiation.h"
#include "Component.h"

class ComponentInstantiation: public Instantiation
{
public:
    ComponentInstantiation(string identity,string displayId);
    virtual Documented getInstantiated() = 0;
};

#endif /* defined(__UML_Diagram__ComponentInstantiation__) */
