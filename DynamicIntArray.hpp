//
//  Simple_Pointers.hpp
//  CommandLineTool
//
//  Created by Csabi on 29/03/2018.
//  Copyright © 2018 Tom Mitchell. All rights reserved.
//

#ifndef DynamicIntArray_hpp
#define DynamicIntArray_hpp

#include <stdio.h>

/** My Dynamic Array Class*/

using namespace std;

class Array
{
public:
    /** Constructor */
    Array();
    
    /** Destructor */
    ~Array();

    void add (int itemValue); // adds item to the end of the array
    
    void removeLast();          //removes last item
    
    int get (int index);      // returns item at index
    
    int getSize();              // returnes the size of the array
    
    bool testArray(int n);           //returns false if array is broken


private:
    
    int size = 0;                 //num of elements
    
    int nextIndex;               // the next index -> highest
    
    int *ptrArr = nullptr;       //points to the array
    
    
};

#endif /* DynamicIntArray_hpp */
