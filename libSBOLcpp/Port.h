//
//  Port.h
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#ifndef __SBOL__Port__
#define __SBOL__Port__

#include <iostream>
#include <string>
#include "Documented.h"
//#include "ComponentInstantiation.h"

class ComponentInstantiation;

class Port: public Documented
{
private:
    string directionality;
    ComponentInstantiation* exposes;
    
public:
    Port(string identity, string displayId);
    
    string getDirectionality();
    void setDirectionality(string directionality);
    
    void setExposes(ComponentInstantiation* exposes);
    ComponentInstantiation* getExposed();
};

#endif /* defined(__UML_Diagram__Port__) */
