#include <iostream>

void doNothing(int&){ 
//Creating an empty function to trick the compiler into thinking we are using the variable x

}

int main (){
    //define an integer variable named x
    int x; //Uninitialized variable
    doNothing(x); //make the compiler think that we are assigning a value to x
    std::cout<<x<<'\n';//printing x out to see what we get with an uninitialized var
    return 0;
}
//We ended up getting the value 32758, for some reason.
//That random output is was we can define as an "Undefined Behavior"
//Meaning; Executing code whose behavior is not well-defined by the C++ language