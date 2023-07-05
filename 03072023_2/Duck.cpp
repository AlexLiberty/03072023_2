#include "Duck.h"

Duck::Duck(const string& name) :Bird(name) {}

void Duck::Sound() const
{
	cout << "����� ���� '���-���'" << endl;
}

void Duck::Swimming() const
{
	cout << "����� �����!" << endl;
}

void Duck::Flying() const
{
	cout << "����� ���!" << endl;
}
