//
//  ComponentInstantiation.cpp
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#include "ComponentInstantiation.h"

ComponentInstantiation::ComponentInstantiation(string identity, string displayId)
    :Instantiation(identity,displayId)
{
    
}

ostream &operator<< (ostream &out, ComponentInstantiation &c)
{
    cout << "ComponentInstantiation " << c.getIdentity() << c.getDisplayId() << endl;
    
    return out;
}