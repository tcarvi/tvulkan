#include <stdio.h>

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

int countAlgarisms(int value){
    int count = 0;
    while(value >= 1){
        count++;
        value = value/10;
    }
    return count;
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

int main(int argc, const char * argv[]) {
    
    // Algoritmo de euclides:
    // long long a, b = 0;
    // scanf("%lld %lld", &a, &b);
    // printf("euclidianMDC = %lld\n", euclidianMDC(a, b));
    
    // Algoritmo correto, mas ineficiente no processamento do MDC:
    // int a, b = 0;
    // printf("naive MDC = %d\n", naive MDC(a, b));
    
    // Processamento mais eficiente do MDC.
    int a, b = 0;
    printf("Escreva os dois inteiros positivos para o cálculo do MDC:\n");
    scanf("%d %d", &a, &b);
    printf("MDC = %d\n", eficientMDC(a, b));
    
    // Processamento do MMC.
    int c, d = 0;
    printf("Escreva os dois inteiros positivos para o cálculo do MMC:\n");
    scanf("%d %d", &c, &d);
    printf("MMC = %lld\n", eficientMMC(c, d));
    
    
    return 0;
}