//
//  Sequence.h
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#ifndef __SBOL__Sequence__
#define __SBOL__Sequence__

#include <iostream>
#include <string>
#include "Documented.h"

class Sequence: public Documented
{
private:
    string elements;
    
public:
    Sequence(string identity, string displayId, string elements);
    
    string getElements();
    
};

ostream &operator<< (ostream &out, Sequence &s);

#endif /* defined(__UML_Diagram__Sequence__) */
