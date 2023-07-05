#pragma once
#include "bird.h"
#include <iostream>

using namespace std;

class Chicken:public Bird
{
public:
	Chicken(const string& name);
	void Sound() const override;
};

