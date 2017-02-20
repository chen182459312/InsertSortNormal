//
//  InsertSortNormal.h
//  InsertSort
//
//  Created by chentao on 17/2/17.
//  Copyright © 2017年 . All rights reserved.
//

#ifndef InsertSortNormal_h
#define InsertSortNormal_h

#include <iostream>
using namespace std;

template<class T>
void InsertSort(T array[], int count){
    int index = 0;
    int course = 0;
    T temp;
    for(index = 1; index < count; index++) {
        course = index-1;
        temp = array[index];
        while(course >=0 && temp < array[course]){
            array[course+1] = array[course];
            course--;
        }
        array[course+1] = temp;
    }
}
template<class T>
void PrintArray(T array[], int count) {
    int index = 0;
    while (count) {
        cout<<" "<<array[index++]<<" ";
        count--;
    }
    cout<<"\n";
}


#endif /* InsertSortNormal_h */
