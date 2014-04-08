//
//  Signal.cpp
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#include "Signal.h"

Signal::Signal(string identity, string displayId, Component* instantiated)
:ComponentInstantiation(identity, displayId), instantiated(instantiated)
{
    this->instantiated = instantiated;
}



Component* Signal::getInstantiated()
{
    return (this->instantiated);
}
 
