#include "Bird.h"
#include "Penguin.h"
#include "Duck.h"
#include "Chicken.h"
#include "Parrot.h"
#include "windows.h"
#include "Swim.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Bird* penguin = new Penguin("Пінгвін");
    penguin->Eat();
    penguin->Drink();
    penguin->Go();
    penguin->Sound();
    Penguin* penguin1 = dynamic_cast<Penguin*>(penguin);
    if (penguin1 != nullptr) 
    {
        penguin1->Swimming();
    }

    cout << endl << endl;

    Chicken chicken("Курка");
    chicken.Eat();
    chicken.Drink();
    chicken.Go();
    chicken.Sound();
    cout << endl << endl;

    Duck duck("Качка");
    duck.Eat();
    duck.Drink();
    duck.Go();
    duck.Sound();
    duck.Swimming();
    duck.Flying();

    cout << endl << endl;

    Parrot parrot("Папуга");
    parrot.Eat();
    parrot.Drink();
    parrot.Go();
    parrot.Sound();
    parrot.Flying();

    return 0;
}