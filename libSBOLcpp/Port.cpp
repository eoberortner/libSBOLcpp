//
//  Port.cpp
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#include "Port.h"

Port::Port(string identity, string displayId): Documented(identity, displayId)
{
    
}

string Port::getDirectionality()
{
    return directionality;
}

void Port::setDirectionality(string directionality)
{
    this->directionality = directionality;
}

void Port::setExposes(ComponentInstantiation* exposes)
{
    this->exposes = exposes;
}

ComponentInstantiation* Port::getExposed() const
{
    return (this->exposes);
}

ostream &operator<< (ostream &out, Port &p)
{
    cout << "Port " << p.getIdentity() << p.getDisplayId() << " { " << endl;
    cout << "Exposes: " << (p.getExposed()) << endl;
    cout << "}" << endl;
    
    return out;
}