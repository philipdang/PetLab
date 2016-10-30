// plant.h

#ifndef plant_h
#define plant_h

#include"pet.h"

using namespace std;

class Pet;

class Plant: public Pet
{
private:
    int greenness; // 1-50
};

// Subclasses

class Fern: public Plant
{
public:
    void fernicate()
    {
        cout << "(fern noises)" << endl;
    }
};

class Cactus: public Plant
{
public:
    void poke()
    {
        cout << "Poke." << endl;
    }
};

#endif
