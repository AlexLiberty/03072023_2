#include "Bird.h"
#include <iostream>

Bird::Bird(const string& name)
	:name(name) {}

void Bird::Eat()
{
	cout << "���� "<< name <<" ����" << endl;
}

void Bird::Drink()
{
	cout << "���� " << name << " �'�" << endl;
}

void Bird::Go()
{
	cout << "���� " << name <<" ������" << endl;
}

