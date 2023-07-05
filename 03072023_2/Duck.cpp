#include "Duck.h"

Duck::Duck(const string& name) :Bird(name) {}

void Duck::Sound() const
{
	cout << "Качка каже 'Кря-кря'" << endl;
}

void Duck::Swimming() const
{
	cout << "Качка плаває!" << endl;
}

void Duck::Flying() const
{
	cout << "Качка літає!" << endl;
}
