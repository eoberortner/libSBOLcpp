//
//  Participation.cpp
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#include "Participation.h"


Participation::Participation(string identity, string role, Signal* participant):Identified(role)
{
    this->role = role;
    this->participant = participant;
}


string Participation::getRole()
{
    return role;
}