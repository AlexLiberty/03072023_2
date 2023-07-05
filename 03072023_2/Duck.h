#pragma once
#include "bird.h"
#include "fly.h"
#include <iostream>
#include "Swim.h"

using namespace std;

class Duck :protected Swim, public Bird, protected Fly
{
public:
	Duck(const string& name);
	void Sound() const override;
	void Swimming() const override;
	void Flying() const override;
};

