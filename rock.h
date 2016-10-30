// rock.h

#ifndef rock_h
#define rock_h

#include"pet.h"

using namespace std;

class Pet;

class Rock: public Pet
{
private:
    int hardness;
    string clevage;
    int color;
    string ChemicalComp;
};

// Subclasses

class Fornacite: public Rock {};

class Fukalite: public Rock {};

class Cummingtonite: public Rock {};

#endif
