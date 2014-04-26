//
//  Instantiation.cpp
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#include "Instantiation.h"

Instantiation::Instantiation(string identity, string displayId):Documented(identity, displayId)
{
    
}

void Instantiation::setPortMaps(list<PortMap> portMaps)
{
    this->portMaps = portMaps;
}

list<PortMap> Instantiation::getPortMaps()
{
    return this->portMaps;
}

void Instantiation::addPortMap(PortMap p)
{
    (this->portMaps).push_back(p);
}

