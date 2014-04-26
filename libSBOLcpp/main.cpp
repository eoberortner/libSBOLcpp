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
#include "Module.h"


using namespace std;

int main(int argc, const char * argv[])
{
    
    /*
     Model m = Model("m","m","m_source","m_language","m_framework","m_role");
    Context c = Context("c","c");
    Collection c2 = Collection("c2","c2");
    

    
    
    Signal s = Signal("s", "s",&c3);
    Participation p = Participation("p","role",&s);
    
    list<Participation> p_list;
    p_list.push_back(p);
    Interaction i = Interaction("i", "i", "type", p_list);
    */
    
    Module m = Module("m","0");
    
    Context context1 = Context("ct","1");
    Context context2 = Context("ct","2");
    
    Model model1 = Model("md","1","source1","language1","framework1","role1");
    Model model2 = Model("md","2","source2","language2","framework2","role2");
    
    Component c1 = Component("c","1","type1");
    Component c2 = Component("c","2","type2");
    Component c3 = Component("c","3","type3");
    
    Signal s1 = Signal("s", "1", &c1);
    Signal s2 = Signal("s", "2", &c2);
    Signal s3 = Signal("s", "3", &c3);
    
    m.addSignal(s1);
    //m.addSignal(s2);
    //m.addSignal(s3);
    m.addContext(&context1);
    m.addContext(&context2);
    m.addModel(&model1);
    m.addModel(&model2);
    
    cout << c1 << endl;
    cout << s1 << endl;
    cout << m;

    cout << "Hello, World!\n";
    
    return 0;
}

