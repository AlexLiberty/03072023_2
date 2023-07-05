#include "Penguin.h"
#include <iostream>

Penguin::Penguin(const string& name):Bird(name){}

void Penguin::Sound() const
{
	cout << "Ï³íãâ³í êàæå 'Êàðð'" << endl;
}

void Penguin::Swimming() const
{
    cout << "Ï³íãâ³í ïëàâàº!" << endl;
}
