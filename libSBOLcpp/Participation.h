//
//  Participation.h
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#ifndef __SBOL__Participation__
#define __SBOL__Participation__

#include <iostream>
#include "Identified.h"
#include "Signal.h"

class Participation: public Identified
{
private:
    string role;
    Signal* participant;
    
public:
    Participation(string identity, string role, Signal*);
    
    string getRole();
    
};

#endif /* defined(__UML_Diagram__Participation__) */
