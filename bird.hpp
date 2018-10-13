//
// Created by Sonny Fung on 2018-10-12.
//

#ifndef LAB4V2_BIRD_HPP
#define LAB4V2_BIRD_HPP
class Bird: public Animal {
public:
    Bird(){};
    Bird(int a, double x, double y, double h) {};
    move(double x, double y, double h){};
    Bird(const Bird& a){};
    ~Bird();
    void sleep(){};
    void eat(){};
    friend std::ostream& operator<< (std::ostream& os, const Bird& bird) {};
};
#endif //LAB4V2_BIRD_HPP
