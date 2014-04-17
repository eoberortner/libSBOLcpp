//
//  GenericComponent.h
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#ifndef __SBOL__GenericComponent__
#define __SBOL__GenericComponent__

#include <iostream>
#include "Component.h"

class GenericComponent: public Component
{
public:
    GenericComponent(string identity, string displayId, string type);
    
};

#endif /* defined(__UML_Diagram__GenericComponent__) */
