//
// Created by Sonny Fung on 2018-10-12.
//

#include "cmake-build-debug/animal.hpp"

Animal::Animal() {
    age = 0;
    ID = counter++;
    alive = true;
    locationX = 0;
    locationY = 0;
    height = 0;
};

Animal::Animal(int a, double x, double y){
    age = a;
    ID = counter++;
    alive = true;
    locationX = x;
    locationY = y;
    height = 0;
};

virtual void Animal::move(double x, double y){
    cout<<"Move to (" << x <<", " << y << " )" << endl;
};

virtual void Animal::move(double x, double y, double h){
    cout<<"Move to (" << x <<", " << y << " ) at Height of " << height << endl;
};

Animal::Animal(const Animal& a){
    age = a.age;
    ID = a.ID;
    alive = a.alive;
    locationX = a.locationX;
    locationY = a.locationY;
    height = a.height;
};

Animal::~Animal() {
    cout<<"Animal Destructor"<<endl;
};

void Animal::sleep(){
    cout<<"Animal Sleeps"<<endl;
};

void Animal::eat(){
    cout<<"Animal Eats"<<endl;
};

friend std::ostream& operator<< (std::ostream& os, const Animal& animal) {
    os << "Animal Age = " << animal.age << " ID = " << animal.ID << " Alive = " << animal.alive
       << " X = " << animal.locationX << " Y = " << animal.locationY << " height = " << animal.height
       << std::endl;
};