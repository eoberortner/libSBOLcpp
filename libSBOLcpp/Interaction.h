//
//  Interaction.h
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#ifndef __SBOL__Interaction__
#define __SBOL__Interaction__

#include <iostream>
#include <list>
#include <string>
#include "Documented.h"
#include "Participation.h"

using namespace std;

class Interaction: public Documented
{
private:
    string type;
    list<Participation> participations;
    
public:
    Interaction(string identity, string displayId, string type, list<Participation> participations);
    
    string getType();
    
    list<Participation> getParticipations();
    void addParticipation(Participation p);
};

#endif /* defined(__UML_Diagram__Interaction__) */
