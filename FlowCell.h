/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FlowCell.h
 * Author: KaiZen
 *
 * Created on April 8, 2016, 9:42 PM
 */

#ifndef FLOWCELL_H
#define FLOWCELL_H

#include <iostream>

using namespace std;

class FlowCell {
    char colour;
    
  public:
    FlowCell();
    FlowCell(char col);
    FlowCell(const FlowCell& orig);
    virtual ~FlowCell();
    
    char getColour() const;
    friend ostream& operator<<(ostream& os, const FlowCell &dt);
private:

};

#endif /* FLOWCELL_H */

