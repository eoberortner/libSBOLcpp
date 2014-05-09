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

ostream &operator<< (ostream &out, Collection &c)
{
    cout << "Collection " << c.getIdentity() << c.getDisplayId() << " { " << endl;
    cout << "Elements: " ;
    
    list<Identified*> elementsList = c.getElements();
    for (list<Identified*>::iterator it = elementsList.begin(); it != elementsList.end(); it++)
    {
        cout << **it << endl;
    }
    
    cout << "} \n";
    
    return out;
}