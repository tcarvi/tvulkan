#include "TimeLimitTest.hpp"

using std::cout;

// int func() { return 1; }
// void (int (*func)()) { func(); }
// int main(int argc, char *argv[], char *envp[]) { wow(func); return 0; }


int func() { 
    cout <<  "Tempo de processamento: X nanoseconds\n";
    return 1; }
void wow(int *func()) { func(); }
int main(int argc, char *argv[], char *envp[]) { 
    wow(func); 
    return 0; }