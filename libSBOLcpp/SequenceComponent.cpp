//
//  SequenceComponent.cpp
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#include "SequenceComponent.h"

SequenceComponent::SequenceComponent(string identity, string displayId, string type, string sequenceType):Component(identity, displayId, type)
{
    this->sequenceType = sequenceType;
}

string SequenceComponent::getSequenceType()
{
    return sequenceType;
}

void SequenceComponent::setSequence(Sequence* sequence)
{
    this->sequence = sequence;
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