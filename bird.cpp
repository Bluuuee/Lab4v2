//
// Created by Sonny Fung on 2018-10-12.
//

#include "bird.hpp"

Bird::Bird(){

};
Bird::Bird(int a, double x, double y, double h){};
Bird::move(double x, double y, double h){};
Bird(const Bird& a){

};
Bird::~Bird(){cout<<"Bird Destructor"<<endl};
Bird::void sleep(){cout<<"Bird Sleeps"<<endl};
Bird::void eat(){cout<<"Bird Eats"<<endl;};
friend std::ostream& operator<< (std::ostream& os, const Bird& bird) {
    Animal::operator<<(os, bird);
};