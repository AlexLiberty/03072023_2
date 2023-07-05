#pragma once
#include<iostream>

using namespace std;

class Bird
{
private: 
    string name;
public:
    Bird(const string& name);

    void Eat();

    void Drink();

    void Go();

    virtual void Sound() const = 0;
};

