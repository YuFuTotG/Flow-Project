/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KaiZen
 *
 * Created on April 7, 2016, 11:00 PM
 */

#include <cstdlib>
#include <iostream>
#include "FlowGrid.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    FlowCell* c1 = new FlowCell();
    FlowCell* c2 = new FlowCell('b');
    
    cout << "Hello World" << endl;
    cout << c1->getColour() << endl;
    cout << c2->getColour() << endl;
    cout << *c1 << endl;
    cout << *c2 << endl;
    
    FlowGrid* g1 = new FlowGrid("testFlowGrid.txt");
    cout << *g1 << endl;
    
    return 0;
}

