//
//  GenericComponent.cpp
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#include "GenericComponent.h"

GenericComponent::GenericComponent(string identity, string displayId, string type)
    :Component(identity, displayId, type)
{
    
}


ostream &operator<< (ostream &out, GenericComponent &g)
{
    cout << "GenericComponent " << g.getIdentity() << g.getDisplayId() << "{ " << endl;
    cout << "Type : " << g.getType() << endl;
    cout << "} \n";
    
    return out;
}