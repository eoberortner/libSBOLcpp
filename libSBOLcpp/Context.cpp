//
//  Context.cpp
//  UML_Diagram
//
//  Created by Jihyun Um on 2014. 2. 25..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#include "Context.h"
Context::Context(string identity, string displayId):Documented(identity,displayId)
{
    this->measurementDevice = "";
    this->environment = "";
    this->container = "";
    this->medium = "";
    this->composition = "";
}



string Context::getMeasurementDevice()
{
    return measurementDevice;
}

string Context::getEnvironment()
{
    return environment;
}

string Context::getContainer()
{
    return container;
}

string Context::getMedium()
{
    return medium;
}

string Context::getComposition()
{
    return composition;
}


void Context::setMeasurementDevice(string measurementDevice)
{
    this->measurementDevice = measurementDevice;
}

void Context::setEnvironment(string environment)
{
    this->environment = environment;
}


void Context::setContainer(string container)
{
    this->container = container;
}

void Context::setMedium(string medium)
{
    this->medium = medium;
}

void Context::setComposition(string composition)
{
    this->composition = composition;
}

ostream &operator<< (ostream &out, Context &ct)
{
    cout << "Context " << ct.getIdentity() << ct.getDisplayId() << endl;
    
    return out;
}