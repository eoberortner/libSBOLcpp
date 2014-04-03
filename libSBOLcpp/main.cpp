//
//  main.cpp
//  libSBOLcpp
//
//  Created by Jihyun Um on 2014. 3. 20..
//  Copyright (c) 2014년 Jihyun Um. All rights reserved.
//

#include <iostream>
#include <list>
#include "Model.h"
#include "Context.h"
#include "Collection.h"
#include "Interaction.h"
#include "Participation.h"
#include "Signal.h"
#include "ComponentInstantiation.h"


using namespace std;

int main(int argc, const char * argv[])
{
    
    Model m = Model("m","m","m_source","m_language","m_framework","m_role");
    Context c = Context("c","c");
    Collection c2 = Collection("c2","c2");
    
    Component c3 = Component("c3","c3","type");
    Signal s = Signal("s", "s",c3);
    Participation p = Participation("p","role",&s);
    
    list<Participation> p_list;
    p_list.push_back(p);
    Interaction i = Interaction("i", "i", "type", p_list);
    
    cout << "Hello, World!\n";
    
    return 0;
}

