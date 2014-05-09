//
//  Signal.cpp
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#include "Signal.h"

Signal::Signal(string identity, string displayId, Component* instantiated)
    :ComponentInstantiation(identity, displayId), instantiated(instantiated)
{
    this->instantiated = instantiated;
}

Signal::Signal(Signal const& s): ComponentInstantiation(s.getIdentity(), s.getDisplayId())
{
    this->instantiated = new Component((s.getInstantiated())->getIdentity(),(s.getInstantiated())->getDisplayId(),(s.getInstantiated())->getType());
}

Component* Signal::getInstantiated() const
{
    return (this->instantiated);
}
 
ostream &operator<< (ostream &out, Signal &s)
{
    
    cout << "Signal " << s.getIdentity() << s.getDisplayId() << " { " << endl;
    cout << "Intantiates: " << *(s.getInstantiated());
    cout << "} " << endl;
    
    return out;
}