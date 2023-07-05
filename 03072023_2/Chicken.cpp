#include "Chicken.h"

using namespace std;

Chicken::Chicken(const string& name) :Bird(name) {}

void Chicken::Sound() const
{
	cout << "Курка каже 'Куд-кудах'" << endl;
}

