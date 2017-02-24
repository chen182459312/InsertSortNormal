//
//  main.cpp
//  InsertSort
//
//  Created by chentao on 17/2/17.
//  Copyright © 2017年 . All rights reserved.
//

#include <iostream>
#include "InsertSortNormal.h"
using namespace std;

const int bufferSize = 5;

int main(int argc, const char * argv[]) {
    int array[bufferSize] = {0};
    for(int index = 0; index < bufferSize; index++) {
        array[index] = arc4random()%20;
    }
    
    cout<<"source data: ";
    PrintArray(array, bufferSize);
    InsertSort(array, bufferSize);
    cout<<"\ninsert sort: ";
    PrintArray(array, bufferSize);
    return 0;
}


