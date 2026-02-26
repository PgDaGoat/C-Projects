#include <iostream>

main(){ 
    std::cout << "Enter three integers: ";
    int x {};
    int y {};
    int z {};
    std::cin >> x >> y >> z;
    std::cout << "The numbers you have entered are " << x <<" " << y << " " << z;
}