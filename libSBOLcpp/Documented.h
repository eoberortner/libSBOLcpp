//
//  Documented.h
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#ifndef __SBOL__Documented__
#define __SBOL__Documented__

#include <iostream>
#include "Identified.h"

using namespace std;

class Documented: public Identified
{
private:
    string displayId;
    string name;
    string description;
    
public:
    Documented(string,string);
    
    const string getDisplayId() const;
    string getName();
    string getDescription();
    
    void setName(string name);
    void setDescription(string description);
};

#endif /* defined(__UML_Diagram__Documented__) */
