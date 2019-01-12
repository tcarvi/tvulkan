//
//  TimeLimit.c
//  TimeLimitC
//
//  Created by Eduardo dos Santos Leal on 21/05/16.
//  Copyright © 2016 TCARVI. All rights reserved.
//
#include "TimeLimit.h"
#include <stdio.h>
#include <time.h>

void timeLimitTest1 ( long long (*f)(int), int parameter, uint64_t loops) {
    // Not using: typedef uint64_t clock_t;
    uint64_t initialProcessorTimeUsed = clock();
    uint64_t varLoopEficiencia;
    for (varLoopEficiencia=0ull; varLoopEficiencia < loops; varLoopEficiencia++) {
        // Processamento avaliado
        (*f)(parameter);
    }
    uint64_t endProcessorTimeUsed = clock();
    uint64_t totalProcessorTimeUsed = (endProcessorTimeUsed - initialProcessorTimeUsed)/loops;
    printf("Tempo de processamento: %lld nanoseconds\n", totalProcessorTimeUsed);
    uint64_t totalProcessorTimeUsedNotDivided = endProcessorTimeUsed - initialProcessorTimeUsed;
    printf("Tempo de processamento not divided: %lld nanoseconds\n", totalProcessorTimeUsedNotDivided);
}

void timeLimitTest2 ( long long (*f)(int, int), int parameter1, int parameter2, uint64_t loops) {
    // Not using: typedef uint64_t clock_t;
    uint64_t initialProcessorTimeUsed = clock();
    uint64_t varLoopEficiencia;
    for (varLoopEficiencia=0ull; varLoopEficiencia < loops; varLoopEficiencia++) {
        // Processamento avaliado
        (*f)(parameter1, parameter2);
    }
    uint64_t endProcessorTimeUsed = clock();
    uint64_t totalProcessorTimeUsed = (endProcessorTimeUsed - initialProcessorTimeUsed)/loops;
    printf("Tempo de processamento: %lld nanoseconds\n", totalProcessorTimeUsed);
    uint64_t totalProcessorTimeUsedNotDivided = endProcessorTimeUsed - initialProcessorTimeUsed;
    printf("Tempo de processamento not divided: %lld nanoseconds\n", totalProcessorTimeUsedNotDivided);
}

void timeLimitTest3 ( long long (*f)(int, int, int), int parameter1, int parameter2, int parameter3, uint64_t loops) {
    // Not using: typedef uint64_t clock_t;
    uint64_t initialProcessorTimeUsed = clock();
    uint64_t varLoopEficiencia;
    for (varLoopEficiencia=0ull; varLoopEficiencia < loops; varLoopEficiencia++) {
        // Processamento avaliado
        (*f)(parameter1, parameter2, parameter3);
    }
    uint64_t endProcessorTimeUsed = clock();
    uint64_t totalProcessorTimeUsed = (endProcessorTimeUsed - initialProcessorTimeUsed)/loops;
    printf("Tempo de processamento: %lld nanoseconds\n", totalProcessorTimeUsed);
    uint64_t totalProcessorTimeUsedNotDivided = endProcessorTimeUsed - initialProcessorTimeUsed;
    printf("Tempo de processamento not divided: %lld nanoseconds\n", totalProcessorTimeUsedNotDivided);
}