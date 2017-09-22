//
//  main.cpp
//  SmallestMultiple
//
//  Created by Michael Wienands on 9/22/17.
//  Copyright © 2017 Michael Wienands. All rights reserved.
//
//  https://github.com/mwienands/smallestMultiple.git
//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <iostream>

bool testDivisablity(int x){
    for(int i = 1; i<21; i++){
        if(x%i != 0){
            return false;
        }
        
    }
    return true;
}


int main(int argc, const char * argv[]) {
    int i = 20;
    bool div = false;
    while(div ==false){
        i++;
        div = testDivisablity(i);
        
    }
    
    std::cout << i;
    return 0;
}

