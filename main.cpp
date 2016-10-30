#include<iostream>
#include<string>

#include"pet.h"
#include"animal.h"
#include"plant.h"
#include"rock.h"

using namespace std;

int main(void)
{
    Pet *myPet = new Snake;
    static_cast<Snake*>(myPet)->snek();
    return 0;
}
