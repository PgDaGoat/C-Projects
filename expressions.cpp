#include <iostream>

int five(){
    return 5;
}

int main(){
    int a{2};                   //initialize variable a with literal value 2
    int b{2+3};                 //initialize variable b with computed value 5
    int c{(2*3) + 4};           //initialize variable c with computed value 10
    int d{b};                   //initialize variable d with variable value 5
    int e{five()};              //initialize variable e with function return value 5
    std::cout<<a<<b<<c<<d<<e;

    return 0;
    /*
    What do all these initializers above have in common? They make use of an expression
    In general programming, an expression is a non-empty sequence of literals, variables, operators
    and function calls that calculates a value. The process of executing an expression
    is called evaluation, and the resulting value produced is caleld the result of the expression(
    also sometimes called te return value).
    
    */
}