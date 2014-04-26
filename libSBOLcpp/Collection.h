//
//  Collection.h
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#ifndef __SBOL__Collection__
#define __SBOL__Collection__

#include <iostream>
#include "Documented.h"
#include <list>

using namespace std;

class Collection: public Documented
{
    list<Identified*> elements;
    
public:
    Collection(string identity, string displayId);
   
    void setElements(list<Identified*> elements);
    list<Identified*> getElements();
    void addElement(Identified* element);
};

#endif /* defined(__UML_Diagram__Collection__) */
