//
//  Component.h
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#ifndef __SBOL__Component__
#define __SBOL__Component__

#include <iostream>
#include <string>
#include "Documented.h"

using namespace std;

class Component: public Documented
{
private:
    string type;
    
public:
    Component(string identity, string displayId, string type);
    
    string getType();
    
};

#endif /* defined(__UML_Diagram__Component__) */
