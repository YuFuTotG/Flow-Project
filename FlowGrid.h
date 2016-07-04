/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FlowGrid.h
 * Author: KaiZen
 *
 * Created on April 9, 2016, 1:06 AM
 */

#ifndef FLOWGRID_H
#define FLOWGRID_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "FlowCell.h"

using namespace std;

class FlowGrid {
    int height;
    int width;
    vector<vector<FlowCell*> >* grid;
    
  public:
    FlowGrid();
    FlowGrid(string dir); // dir as directory of text
    FlowGrid(const FlowGrid& orig);
    virtual ~FlowGrid();
    
    friend ostream& operator<<(ostream& os, const FlowGrid &dt);
private:

};

#endif /* FLOWGRID_H */

