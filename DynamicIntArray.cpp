//
//  Simple_Pointers.cpp
//  CommandLineTool
//
//  Created by Csabi on 29/03/2018.
//  Copyright © 2018 Tom Mitchell. All rights reserved.
//

#include <iostream>
#include "DynamicIntArray.hpp"
using namespace std;


Array::Array(){
    ptrArr = new int [0];
    size = 0;
    nextIndex = 0;
}

Array::~Array(){
    delete [] ptrArr;
}

void Array::add(int itemValue){
    
    size++;

    if (nextIndex == size){
        int *tempArray = new int[size+1];
        for (int i = 0; i<size; i++){
            tempArray[i] = ptrArr [i];
        }
        delete [] ptrArr;
        ptrArr = tempArray;
        ptrArr[nextIndex] = itemValue;
        nextIndex++;
    }
    
    else{
        ptrArr[nextIndex] = itemValue;
        nextIndex++;
    }
}

void Array::removeLast() {

    int* tempArray= new int[size-1];
    for (int i =0; i<size-1; i++) {
        tempArray[i] = ptrArr[i];
    }
    
    delete [] ptrArr;
    ptrArr = tempArray;
    size--;
    nextIndex--;
}

int Array::getSize() {
    return size;
}

int Array::get(int index) {
    if (index >= nextIndex) {
        cout<< "out of range, requested index doesnt exits";
        return 0;
    }
    else {
        return ptrArr[index];
    }
}

bool Array::testArray(int n) {
    
    Array* testArray = new Array();
    
    if (testArray->getSize() == 0) {
        testArray->add(n);
        if (testArray->getSize() == 1) {
            if (testArray->nextIndex == 1) {
              if  (testArray->get(0) == n) {
                   delete testArray;
                  return true;
              }
            }
        }
    }
        return false;
}


