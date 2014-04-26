//
//  Signal.h
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#ifndef __SBOL__Signal__
#define __SBOL__Signal__

#include <iostream>
#include <string>
#include "ComponentInstantiation.h"

using namespace std;

class Signal : public ComponentInstantiation
{
private:
    Component* instantiated;
    
public:
    Signal(string identity, string displayId, Component* instantiated);
    Signal(Signal const& s);
    
    Component* getInstantiated() const;
};

ostream &operator<< (ostream &out, Signal &s);

#endif /* defined(__UML_Diagram__Signal__) */
