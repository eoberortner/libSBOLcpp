//
//  Context.h
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#ifndef __SBOL__Context__
#define __SBOL__Context__

#include <iostream>
#include <string>
#include "Documented.h"

class Context: public Documented
{
private:
    string measurementDevice;
    string environment;
    string container;
    string medium;
    string composition;
    
public:
    Context(string identity, string displayId);
    
    string getMeasurementDevice();
    string getEnvironment();
    string getContainer();
    string getMedium();
    string getComposition();
    
    void setMeasurementDevice(string measurementDevice);
    void setEnvironment(string environment);
    void setContainer(string container);
    void setMedium(string medium);
    void setComposition(string composition);
    
};

ostream &operator<< (ostream &out, Context &ct);

#endif /* defined(__UML_Diagram__Context__) */
