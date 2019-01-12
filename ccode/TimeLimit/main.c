#include <stdio.h>
#include <time.h>
#include <stdint.h>  // for uint64_t type

//Prototype of a function that receives another function as parameter
//void timeLimitTest( long long (*f)(int), int parameter, uint64_t loops);

void timeLimitTest1IntParameterReturnInt ( int (*f)(int), int parameter, uint64_t loops) {
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

void timeLimitTest1IntParameterReturnLongLong ( long long (*f)(int), int parameter, uint64_t loops) {
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

void timeLimitTest2IntParametersReturnInt ( int (*f)(int, int), int parameter1, int parameter2, uint64_t loops) {
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

void timeLimitTest2IntParametersReturnLongLong ( long long (*f)(int, int), int parameter1, int parameter2, uint64_t loops) {
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

void timeLimitTest2LongLongParametersReturnLongLong ( long long (*f)(long long, long long), int parameter1, int parameter2, uint64_t loops) {
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




// funtions

int countAlgarisms(int value){
    int count = 0;
    while(value >= 1){
        count++;
        value = value/10;
    }
    return count;
}

int eficientMDC(int a, int b) {
    int current_mdc = 1;
    for (int d = 2; d <= a && d <= b; d++) {
        if (a % d == 0 && b % d == 0) {
            if (d > current_mdc) {
                current_mdc = d;
            }
        }
    }
    return current_mdc;
}

long long eficientMMC(int a, int b) {
    int qA = countAlgarisms(a);
    int qB = countAlgarisms(b);
    // A definir melhor o tamanho máximo = 5. (Valor aleatório)
    if(qA + qB <= 5){
        long long division = a * b / eficientMDC(a, b);
        return division;
    }
    long long biggerInt;
    long long smallerInt;
    if (a > b) {
        biggerInt = (long long)a;
        smallerInt = (long long)b;
    } else {
        biggerInt = (long long)b;
        smallerInt = (long long)a;
    }
    long long division = ( biggerInt / eficientMDC(a, b) ) * smallerInt;
    return division;
}

int naiveMDC(int a, int b){
    int best = 0;
    for(int i = 1; i <= a + b; i++ ){
        if(a%i == 0 && b%i == 0)
            best = i;
    }
    return best;
}

long long euclidianMDC(long long a, long long b){
    if (b == 0){
        return a;
    }
    long long aRemainder = a % b;
    return euclidianMDC(b, aRemainder);
}

long long multiply(int a)
{
	return 45LL;
}

int main()
{
    // 1 int parameter. Return of int. Use of timeLimitTest1IntParameterReturnInt()
    int (*fn1)(int) = countAlgarisms;
    //timeLimitTest1IntParameterReturnInt(fn1, 50, 100000000ULL);

    // 2 int parameters. Return of int. Use of timeLimitTest2IntParametersReturnInt
    int (*fn2)(int, int) = eficientMDC;
    int (*fn3)(int, int) = naiveMDC;
    timeLimitTest2IntParametersReturnInt(fn2, 50, 600, 1000ULL);

    // 1 int parameter. Return of long long. Use of timeLimitTest2IntParametersReturnLongLong
    long long (*fn4)(int, int) = eficientMMC;
    //timeLimitTest2IntParametersReturnLongLong(fn6, 50, 100000000ULL);

    // 2 long long parameters. Return of long long. Use of timeLimitTest2LongLongParametersReturnLongLong
    long long (*fn5)(long long, long long) = euclidianMDC;
    //timeLimitTest2LongLongParametersReturnLongLong(fn6, 50, 100000000ULL);

	return 0;
}