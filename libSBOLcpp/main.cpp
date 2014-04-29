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
    
    Module m = Module("m","0");
    
    Context* context1 = new Context("ct","1");
    Context* context2 = new Context("ct","2");
    Context* context3 = new Context("ct","3");
    
    Model model1 = Model("md","1","source1","language1","framework1","role1");
    Model model2 = Model("md","2","source2","language2","framework2","role2");
    Model model3 = Model("md","3","source3","language3","framework3","role3");
    
    Component c1 = Component("c","1","type1");
    Component c2 = Component("c","2","type2");
    Component c3 = Component("c","3","type3");
    
    Signal s1 = Signal("s", "1", &c1);
    Signal s2 = Signal("s", "2", &c2);
    Signal s3 = Signal("s", "3", &c3);
    
    ModuleInstantiation mi1 = ModuleInstantiation("mi","1",&c1);
    
    Participation part1 = Participation("part","role1",&s1);
    list<Participation> part_list;
    part_list.push_back(part1);
    
    Interaction int1 = Interaction("int", "1", "type1", part_list);
    

    m.addSignal(s1);
    m.addSignal(s2);
    m.addSignal(s3);
    m.addContext(context1);
    m.addContext(context2);
    m.addContext(context3);
    m.addModel(&model1);
    m.addModel(&model2);
    m.addModel(&model3);
    m.addSubModule(mi1);
    m.addInteraction(int1);

    cout << m;

    cout << "Hello, World!\n";
    
    return 0;
}

