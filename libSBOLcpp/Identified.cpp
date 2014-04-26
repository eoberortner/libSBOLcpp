//
//  Identified.cpp
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#include "Identified.h"

Identified::Identified(string identity)
{
    this->identity = identity;
}

string Identified::getIdentity() const
{
    return identity;
}

string Identified::getAnnotation()
{
    return annotation;
}

void Identified::setAnnotation(string annotation)
{
    this->annotation = annotation;
}