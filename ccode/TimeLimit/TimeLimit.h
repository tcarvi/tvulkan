//
//  TimeLimit.h
//  TimeLimitC
//
//  Created by Eduardo dos Santos Leal on 21/05/16.
//  Copyright © 2016 TCARVI. All rights reserved.
//

#ifndef TimeLimit_h
#define TimeLimit_h
#include <stdint.h>

//Prototype of a function that receives another function as parameter
void timeLimitTest( long long (*f)(int), int parameter, uint64_t loops);
void timeLimitTest2( long long (*f)(int, int), int parameter1, int parameter2, uint64_t loops);
void timeLimitTest3( long long (*f)(int, int, int), int parameter1, int parameter2, int parameter3, uint64_t loops);

#endif /* TimeLimit_h */
