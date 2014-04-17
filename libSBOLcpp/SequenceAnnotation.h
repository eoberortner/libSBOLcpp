//
//  SequenceAnnotation.h
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#ifndef __SBOL__SequenceAnnotation__
#define __SBOL__SequenceAnnotation__

#include <iostream>
#include <list>
#include <string>
#include "ComponentInstantiation.h"

class SequenceComponent;

class SequenceAnnotation: public ComponentInstantiation
{
private:
    list<SequenceAnnotation*> precedes;
    int start;
    int end;
    string orientation;
    Component* instantiated;
    
public:
    SequenceAnnotation(string identity, string displayId, Component* instantiated);
    
    int getStart();
    int getEnd();
    void setStart(int start);
    void setEnd(int end);

    void setOrientation(string orientation);
    string getOrientation();
    
    Component* getInstantiated();
    list<SequenceAnnotation*> getPreceded();
    
};

#endif /* defined(__UML_Diagram__SequenceAnnotation__) */
