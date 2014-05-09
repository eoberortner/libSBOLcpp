//
//  Sequence.cpp
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#include "Sequence.h"

Sequence::Sequence(string identity, string displayId, string elements):Documented(identity, displayId)
{
    this->elements = elements;
}

string Sequence::getElements()
{
    return elements;
}

ostream &operator<< (ostream &out, Sequence &s)
{
    cout << "Sequence " << s.getIdentity() << s.getDisplayId() << " { " << endl;
    cout << "Elements: " << s.getElements() << endl;
    cout << "}";
    
    return out;
}