//
//  Participation.cpp
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#include "Participation.h"


Participation::Participation(string identity, string role, Signal* participant):Identified(identity)
{
    this->role = role;
    this->participant = participant;
}


string Participation::getRole()
{
    return role;
}

Signal* Participation::getParticipant()
{
    return participant;
}

ostream &operator<< (ostream &out, Participation &p)
{
    cout << "Participation " << p.getIdentity() << " { " << endl;
    cout << "Role: " << p.getRole() << endl;
    cout << "Participant: " << *(p.getParticipant()) << endl;
    cout << "}";
    
    return out;
}
