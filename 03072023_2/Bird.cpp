#include "Bird.h"
#include <iostream>

Bird::Bird(const string& name)
	:name(name) {}

void Bird::Eat()
{
	cout << "ѕтах "<< name <<" њсть" << endl;
}

void Bird::Drink()
{
	cout << "ѕтах " << name << " п'Ї" << endl;
}

void Bird::Go()
{
	cout << "ѕтах " << name <<" ходить" << endl;
}

