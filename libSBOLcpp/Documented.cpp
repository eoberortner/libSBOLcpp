//
//  Documented.cpp
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#include "Documented.h"

Documented::Documented(string identity, string displayId):Identified(identity)
{
    this->displayId = displayId;
}

string Documented::getDisplayId() const
{
    return displayId;
}

string Documented::getName()
{
    return name;
}

string Documented::getDescription()
{
    return description;
}

void Documented::setName(string name)
{
    this->name = name;
}

void Documented::setDescription(string description)
{
    this->description = description;
}

ostream &operator<< (ostream &out, Documented &d)
{
    cout << "Document " << d.getIdentity() << d.getDisplayId() << "{ " << endl;
    cout << "Name: " << d.getName() << endl;
    cout << "Description: " << d.getDescription() << endl;
    cout << "} \n";
    
    return out;
}