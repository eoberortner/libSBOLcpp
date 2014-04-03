//
//  Model.h
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#ifndef __SBOL__Model__
#define __SBOL__Model__

#include <iostream>
#include "Documented.h"

class Model: public Documented
{
private:
    string source;
    string language;
    string framework;
    string role;
    
public:
    Model(string identity, string displayId, string source, string language, string framework, string role);
    
    string getSource();
    string getLanguage();
    string getFramework();
    string getRole();
};

#endif /* defined(__UML_Diagram__Model__) */
