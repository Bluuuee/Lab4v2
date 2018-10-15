//
// Created by Sonny Fung on 2018-10-12.
//
#include <iostream>

#ifndef LAB4V2_ANIMAL_HPP
#define LAB4V2_ANIMAL_HPP

class Animal {
protected:
    int age;
    static long ID;
    bool alive;
    double locationX;
    double locationY;
    double height;
public:
    static long counter;
    Animal ();
    Animal(int a, double x, double y);
    virtual void move(double x, double y);
    virtual void move(double x, double y, double h);
    Animal(const Animal& a);
    virtual ~Animal();
    virtual void sleep();
    virtual void eat();
    friend std::ostream& operator<< (std::ostream& os, const Animal& animal);
};

#endif //LAB4V2_ANIMAL_HPP
