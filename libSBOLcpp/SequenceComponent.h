//
//  SequenceComponent.h
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#ifndef __SBOL__SequenceComponent__
#define __SBOL__SequenceComponent__

#include <iostream>
#include <list>
#include "Component.h"
#include "Port.h"
#include "Sequence.h"
#include "SequenceAnnotation.h"

class SequenceComponent: public Component
{
private:
    string sequenceType;
    Sequence* sequence;
    list<SequenceAnnotation> sequenceAnnotations;
    list<Port> ports;
    
public:
    SequenceComponent(string identity, string displayId, string type, string sequenceType);

    string getSequenceType();
    
    void setSequence(Sequence* sequence);
    Sequence* getSequence();
    
    void setSequenceAnnotations(list<SequenceAnnotation> sequenceAnnotations);
    list<SequenceAnnotation> getSequenceAnnotations();
    void addSequenceAnnotation(SequenceAnnotation sequenceAnnotation);
    
    void setPorts(list<Port> ports);
    list<Port> getPorts();
    void addPort(Port port);
    
};

ostream &operator<< (ostream &out, SequenceComponent &s);

#endif /* defined(__UML_Diagram__SequenceComponent__) */
