/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FlowCell.cpp
 * Author: KaiZen
 * 
 * Created on April 8, 2016, 9:42 PM
 */

#include "FlowCell.h"

FlowCell::FlowCell() {
    this->colour = 'e';
}

FlowCell::FlowCell(char col){
    this->colour = col;
}

FlowCell::FlowCell(const FlowCell& orig) {
}

FlowCell::~FlowCell() {
}

char FlowCell::getColour() const{
    return this->colour;
}

std::ostream& operator<<(std::ostream &os, const FlowCell &m){
    if (m.getColour() != 'e'){ // e for empty
        os << "[" << m.getColour() << "]";    
    } else {
        os << "[ ]";    
    }
    return os;
}

