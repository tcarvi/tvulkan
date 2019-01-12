#include <iostream>
#include "PrintSizeOf.h"

/*
 * Namespaces
 */

/*
 * Function definitions:
 */
class PrintSizeOf 
{
    public:
 
        void printSizeOf(char c){
            std::cout << "Size of char " << c << " is " << sizeof(c) << " byte(s).\n";
        }

        void printSizeOf(bool b){
            std::cout << "Size of bool " << b << " is " << sizeof(b) << " byte(s).\n";
        }

        void printSizeOf(int i){
            std::cout << "Size of int " << i << " is " << sizeof(i) << " byte(s).\n";
        }

        void printSizeOf(double d){
            std::cout << "Size of double " << d << " is " << sizeof(d) << " byte(s).\n";
        }

};