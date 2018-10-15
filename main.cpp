#include <iostream>
#include "animal.hpp"

using namespace std;

long Animal::counter = 0;

int main() {
    Animal a(1,2,4);
    Animal b();
    a.sleep();
    cout << b;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}