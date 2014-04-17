//
//  PortMap.cpp
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#include "PortMap.h"

PortMap::PortMap(string identity, Port* port):Identified(identity)
{
    this->port = port;
}

void PortMap::setMapping(ComponentInstantiation* mapping)
{
    this->mapping = mapping;
}

ComponentInstantiation* PortMap::getMapping()
{
    return mapping;
}