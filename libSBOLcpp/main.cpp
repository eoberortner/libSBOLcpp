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
#include "SequenceComponent.h"
#include "GenericComponent.h"


using namespace std;

int main(int argc, const char * argv[])
{
    
    Module m = Module("m","0");
    
    Context* context1 = new Context("ct","1");
    Context* context2 = new Context("ct","2");
    Context* context3 = new Context("ct","3");
    
    context1->setMeasurementDevice("measurement");
    context1->setEnvironment("environment");
    context1->setContainer("container");
    context1->setMedium("medium");
    context1->setComposition("composition");
    
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
    
    Port p1 = Port("p","1");
    

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
    m.addPort(p1);

    //cout << m << endl;
    
    
    
    Collection col1 = Collection("col","1");

    col1.addElement(&s1);
    
    cout << col1 << endl;
    
    Documented d1 = Documented("d","1");
    d1.setName("documented1");
    d1.setDescription("description1");
    
    //cout << d1 << endl;
    
    GenericComponent g1 = GenericComponent("g","1","type1");
    
    //cout << g1 << endl;
    
    
    //Instantiation ins1 = Instantiation("ins","1");
    
    
    Sequence s = Sequence("s","1","element1");
    SequenceAnnotation sa1 = SequenceAnnotation("sa","1",&c1);
    SequenceAnnotation sa2 = SequenceAnnotation("sa","2",&c2);
    SequenceAnnotation sa3 = SequenceAnnotation("sa","3",&c3);
    sa1.addPrecedes(&sa2);
    sa2.addPrecedes(&sa3);
    
    sa1.setStart(1);
    sa1.setEnd(100);
    sa1.setOrientation("orientation");
    
    SequenceComponent sc = SequenceComponent("sc","1","type","sequenceType");
    
    
    sc.setSequence(&s);
    sc.addSequenceAnnotation(sa1);
    sc.addSequenceAnnotation(sa2);
    sc.addSequenceAnnotation(sa3);
    sc.addPort(p1);
    
    cout << sc << endl;
    
    cout << "Hello, World!\n";
    
    return 0;
}

