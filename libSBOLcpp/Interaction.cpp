//
//  Interaction.cpp
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#include "Interaction.h"

Interaction::Interaction(string identity, string displayId, string type, list<Participation> participation):Documented(identity, displayId)
{
    this->type = type;
    
    for(list<Participation>::iterator it = participation.begin(); it != participation.end(); ++it){
		(this->participations).push_back(*it);
	}
}

string Interaction::getType()
{
    return type;
}

void Interaction::addParticipation(Participation p)
{
    (this->participations).push_back(p);
}