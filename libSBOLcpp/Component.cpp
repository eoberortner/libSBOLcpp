//
//  Component.cpp
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#include "Component.h"

Component::Component(string identity, string displayId, string type):Documented(identity, displayId)
{
    this->type = type;
}

string Component::getType() const
{
    return type;
}

ostream &operator<< (ostream &out, Component &c)
{
    cout << "Component " << c.getIdentity() << c.getDisplayId() << " { " << endl;
    cout << "Type: " << c.getType() << endl;
    cout << "}" << endl;
    
    return out;
}