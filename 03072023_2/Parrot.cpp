#include "Parrot.h"

Parrot::Parrot(const string& name) :Bird(name) {}

void Parrot::Sound() const
{
	cout << "������ ���� '��������!'" << endl;
}

void Parrot::Flying() const
{
	cout << "������ ���!" << endl;
}
