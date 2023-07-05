#include "Parrot.h"

Parrot::Parrot(const string& name) :Bird(name) {}

void Parrot::Sound() const
{
	cout << "Папуга каже 'Каррамба!'" << endl;
}

void Parrot::Flying() const
{
	cout << "Папуга літає!" << endl;
}
