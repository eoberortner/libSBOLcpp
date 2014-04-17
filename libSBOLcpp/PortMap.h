//
//  PortMap.h
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#ifndef __SBOL__PortMap__
#define __SBOL__PortMap__

#include <iostream>
#include "Identified.h"
#include "Port.h"

class PortMap: public Identified
{
private:
    Port* port;
    ComponentInstantiation* mapping;
    
public:
    PortMap(string identity, Port* port);
    void setMapping(ComponentInstantiation* mapping);
    ComponentInstantiation* getMapping();
    
    //Port getPort();
};

#endif /* defined(__UML_Diagram__PortMap__) */
