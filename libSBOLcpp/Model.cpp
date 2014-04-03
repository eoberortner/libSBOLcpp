//
//  Model.cpp
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#include "Model.h"

Model::Model(string identity, string displayId, string source, string language, string framework, string role)
    :Documented(identity, displayId)
{
    this->source = source;
    this->language = language;
    this->framework = framework;
    this->role = role;
}


string Model::getSource()
{
    return source;
}

string Model::getLanguage()
{
    return language;
}

string Model::getFramework()
{
    return framework;
}

string Model::getRole()
{
    return role;
}