//
//  Collection.cpp
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#include "Collection.h"

Collection::Collection(string identity, string displayId):Documented(identity, displayId)
{
    
}

void Collection::setElements(list<Identified*> elements)
{
    this->elements = elements;
}

list<Identified*> Collection::getElements()
{
    return this->elements;
}

void Collection::addElement(Identified* element)
{
    (this->elements).push_back(element);
}