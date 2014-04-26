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

void SequenceComponent::setSequenceAnnotations(list<SequenceAnnotation> sequenceAnnotations)
{
    this->sequenceAnnotations = sequenceAnnotations;
}

list<SequenceAnnotation> SequenceComponent::getSequenceAnnotations()
{
    return this->sequenceAnnotations;
}

void SequenceComponent::addSequenceAnnotation(SequenceAnnotation sequenceAnnotation)
{
    (this->sequenceAnnotations).push_back(sequenceAnnotation);
}

void SequenceComponent::setPorts(list<Port> ports)
{
    this->ports = ports;
}

list<Port> SequenceComponent::getPorts()
{
    return this->ports;
}

void SequenceComponent::addPort(Port port)
{
    (this->ports).push_back(port);
}
