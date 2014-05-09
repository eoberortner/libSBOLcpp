//
//  SequenceAnnotation.cpp
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#include "SequenceAnnotation.h"

SequenceAnnotation::SequenceAnnotation(string identity, string displayId, Component* instantiated): ComponentInstantiation(identity, displayId)
{
    this->instantiated = instantiated;
}

int SequenceAnnotation::getStart()
{
    return start;
}

int SequenceAnnotation::getEnd()
{
    return end;
}

void SequenceAnnotation::setStart(int start)
{
    this->start = start;
}

void SequenceAnnotation::setEnd(int end)
{
    this->end = end;
}

void SequenceAnnotation::setOrientation(string orientation)
{
    this->orientation = orientation;
}

string SequenceAnnotation::getOrientation()
{
    return orientation;
}

Component* SequenceAnnotation::getInstantiated() const
{
    return instantiated;
}

void SequenceAnnotation::setPrecedes(list<SequenceAnnotation*> precedes)
{
    this->precedes = precedes;
}

list<SequenceAnnotation*> SequenceAnnotation::getPreceded()
{
    return precedes;
}

void SequenceAnnotation::addPrecedes(SequenceAnnotation* precedes)
{
    (this->precedes).push_back(precedes);
}


ostream &operator<< (ostream &out, SequenceAnnotation &s)
{
    cout << "Sequence " << s.getIdentity() << s.getDisplayId() << " { " << endl;
    cout << "Start: " << s.getStart() << endl;
    cout << "End: " << s.getEnd() << endl;
    cout << "Orientation: " << s.getOrientation() << endl;
    cout << "Instantiates: " << *(s.getInstantiated());
   
    cout << "Precedes: ";
    
    list<SequenceAnnotation*> precedesList = s.getPreceded();
    for (list<SequenceAnnotation*>::iterator it = precedesList.begin(); it != precedesList.end(); it++)
    {
        cout << "Instantiates: " << (*((**it).getInstantiated())).getIdentity() << (*((**it).getInstantiated())).getDisplayId() << endl;
    }
    

    cout << "}";
    
    return out;
}