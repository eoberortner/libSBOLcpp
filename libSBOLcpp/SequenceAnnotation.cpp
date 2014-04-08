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

string SequenceAnnotation::getOrientation()
{
    return orientation;
}

void SequenceAnnotation::setOrientation(string orientation)
{
    this->orientation = orientation;
}

Component* SequenceAnnotation::getInstantiated()
{
    return instantiated;
}

list<SequenceAnnotation*> SequenceAnnotation::getPreceded()
{
    return precedes;
}
