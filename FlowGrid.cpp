/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FlowGrid.cpp
 * Author: KaiZen
 * 
 * Created on April 9, 2016, 1:06 AM
 */

#include <stdlib.h>

#include "FlowGrid.h"

// helper function
int stringToNum(const string &text);
vector<char> stringToVector(const string &text);

FlowGrid::FlowGrid() {
    this->height = 0;
    this->width = 0;
}

FlowGrid::FlowGrid(string dir) {
    this->grid = new vector<vector<FlowCell*> >();
    string temp;
    ifstream file(dir.c_str());
    if(file.is_open())
    {
        file >> temp;
        this->width =  stringToNum(temp);
        file >> temp;
        this->height = stringToNum(temp);
        
        for (int i = 0; i < this->height; ++i){
            vector<FlowCell*>* row = new vector<FlowCell*>;
            file >> temp;
            for (string::iterator it = temp.begin(); it != temp.end(); ++it){
                if (*it == ' '){
                    //row->push_back(new FlowCell());
                    row->push_back(new FlowCell());
                } else{
                    row->push_back(new FlowCell(*it));
                }
            }
            this->grid->push_back(*row);
        }
        
        //vector.push_back(string)
    }
}

FlowGrid::FlowGrid(const FlowGrid& orig) {
}

FlowGrid::~FlowGrid() {
}

vector<char> stringToVector(const string &text){ // this needs to return a list of Grid Cells
    const vector<char> charVect(text.begin(), text.end());
    return charVect;
}

std::ostream& operator<<(std::ostream &os, const FlowGrid &m){
    
    for (vector<vector<FlowCell*> >::iterator itRow = m.grid->begin(); itRow != m.grid->end(); ++itRow){
        for (vector<FlowCell*>::iterator itCol = itRow->begin(); itCol != itRow->end(); ++itCol){
            os << **itCol;
        }
        os << endl;
    }
    
    return os;
}



int stringToNum(const string &text){
    if (text.length() == 0) {
        return 0;
    } else {
        const char * c = text.substr(text.length() - 1).c_str();
        int intC = c[0] - '0';
        return stringToNum(text.substr(0, text.length() - 1))*10 + intC;
    }
}