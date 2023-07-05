#pragma once
#include <iostream>
#include "bird.h"
#include "Swim.h"

using namespace std;

class Penguin :protected Swim, public Bird
{
public:
	Penguin(const string& name);
	void Sound() const override;
	void Swimming() const override;
};

