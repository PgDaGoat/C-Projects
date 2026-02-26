#include <iostream> //for std::cout

int main(){
    int width;
    width = 6;
    int y;
    y = 7;
    int x {8}; //defined as an integer and has been initialized with the value of 5
    std::cout << width;
    std::cout << y;
    std::cout << x << std::endl;//std::endl will cause the cursor to move to the next line
    //Below are the different types of initialization
    int a; //default-initialization (no initializer)
    //Traditional initialization forms:
    int b = 5; //copy-initialization (initial value after equals sign)
    int c(6); //direct-initilization (initial value in parenthesis)
    //Modern Initialization forms (preferred):
    int d {7}; //direct list initialization (initial value in braces)
    int e{}; //value initialization (empty braces)
    std::cout <<"x is equal to: " << x;
    return 0;
    
}