//
//  Identified.h
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#ifndef __SBOL__Identified__
#define __SBOL__Identified__

#include <iostream>
#include <string>

using namespace std;

class Identified
{
private:
    string identity;
    string annotation;
    
public:
    Identified(string identity);
    
    string getIdentity() const;
    string getAnnotation();
    
    void setAnnotation(string annotation);
};

#endif /* defined(__UML_Diagram__Identified__) */
