//
//  Instantiation.h
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#ifndef __SBOL__Instantiation__
#define __SBOL__Instantiation__

#include <iostream>
#include <list>
#include "Documented.h"
#include "PortMap.h"

class Instantiation: public Documented
{
    list<PortMap> portMaps;
    
public:
        
    Instantiation(string identity, string displayId);
    
    void setPortMaps(list<PortMap> portMaps);
    list<PortMap> getPortMaps();
    void addPortMap(PortMap p);
    
    virtual Documented* getInstantiated() const = 0;
    
};

ostream &operator<< (ostream &out, Instantiation &i);

#endif /* defined(__UML_Diagram__Instantiation__) */
