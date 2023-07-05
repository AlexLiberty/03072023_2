#pragma once
#include "bird.h"
#include "fly.h"
#include <iostream>

using namespace std;

class Parrot :public Bird, protected Fly
{
public:
	Parrot(const string& name);
	void Sound() const override;
	void Flying() const override;
};

