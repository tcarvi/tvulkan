#include "lib/PrintSizeOf/PrintSizeOf.h"

/*
 * Namespaces
 */

using namespace std;

/* A program shall contain a global function called main, 
    which is the designated start of the program.
    Model: int main(){ } or int main(int argc, char argv){ } */
int main(){
    PrintSizeOf printer = PrintSizeOf();
    char c = 'a';
    bool b = true;
    int i = 2;
    double d = 3.7;
    printer.printSizeOf(c);
    printer.printSizeOf(b);
    printer.printSizeOf(i);
    printer.printSizeOf(d);

    return 0;
}

/*
 * Function definitions:
 */

