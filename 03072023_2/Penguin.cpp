#include "Penguin.h"
#include <iostream>

Penguin::Penguin(const string& name):Bird(name){}

void Penguin::Sound() const
{
	cout << "ϳ���� ���� '����'" << endl;
}

void Penguin::Swimming() const
{
    cout << "ϳ���� �����!" << endl;
}
