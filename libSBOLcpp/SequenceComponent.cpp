//
//  SequenceComponent.cpp
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#include "SequenceComponent.h"

SequenceComponent::SequenceComponent(string identity, string displayId, string type, string sequenceType, Sequence* sequence):Component(identity, displayId, type)
{
    this->sequenceType = sequenceType;
    this->sequence = sequence;
}

string SequenceComponent::getSequenceType()
{
    return sequenceType;
}

Sequence* SequenceComponent::getSequence()
{
    return sequence;
}


list<SequenceAnnotation> SequenceComponent::getSequenceAnnotations()
{
    return this->sequenceAnnotations;
}

list<Port> SequenceComponent::getPorts()
{
    return this->ports;
}