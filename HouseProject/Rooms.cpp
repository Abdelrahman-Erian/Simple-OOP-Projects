#include "Rooms.h"
#include<iostream>
using namespace std;

Rooms::Rooms()
{
    this->hasTV = false;
    this->numBeds = 0;
    this->numChairs = 0;
    this->numTables = 0;
    this->numDoors = 0;
    this->numWindows = 0;
    this->numToilets = 0;
    this->numFridges = 0;
    this->numStove = 0;
    this->numSofras = 0;
    this->color = "Un_known";
    this->space = 0;
}

void Rooms::add(bool tv, int beds, int chairs, string col, int doors,
    int fridges, int stove, int sofras, int sp, int tables,
    int toilets, int tvs, int windows)
{
    this->hasTV = tv;
    this->numBeds = beds;
    this->numChairs = chairs;
    this->color = col;
    this->numDoors = doors;
    this->numFridges = fridges;
    this->numStove = stove;
    this->numSofras = sofras;
    this->space = sp;
    this->numTables = tables;
    this->numToilets = toilets;
    this->numWindows = windows;
}

// Setters
void Rooms::setBeds(int count) { numBeds = count; }
void Rooms::setChairs(int count) { numChairs = count; }
void Rooms::setTables(int count) { numTables = count; }
void Rooms::setDoors(int count) { numDoors = count; }
void Rooms::setWindows(int count) { numWindows = count; }
void Rooms::setToilets(int count) { numToilets = count; }
void Rooms::setFridges(int count) { numFridges = count; }
void Rooms::setStove(int count) { numStove = count; }
void Rooms::setSofras(int count) { numSofras = count; }
void Rooms::setTVs(bool has) { hasTV = has; }
void Rooms::setColor(const string& newColor) { color = newColor; }
void Rooms::setSpace(int newSpace) { space = newSpace; }

// Getters
int Rooms::getBeds() { return numBeds; }
int Rooms::getChairs() { return numChairs; }
int Rooms::getTables() { return numTables; }
int Rooms::getDoors() { return numDoors; }
int Rooms::getWindows() { return numWindows; }
int Rooms::getToilets() { return numToilets; }
int Rooms::getFridges() { return numFridges; }
int Rooms::getStove() { return numStove; }
int Rooms::getSofras() { return numSofras; }
bool Rooms::getTVs() { return hasTV; }
string Rooms::getColor() { return color; }
int Rooms::getSpace() { return space; }

void  Rooms::display()
{
    cout << "Number of TVs : " << this->hasTV << '\n';
    cout << "Number of Doors : " << this->numDoors << '\n';
    cout << "Number of Windows : " << this->numWindows << '\n';
    cout << "Number of Chairs : " << this->numChairs << '\n';
    cout << "Number of Beds : " << this->numBeds << '\n';
    cout << "Number of Tables : " << this->numTables << '\n';
    cout << "Number of Fridge : " << this->numFridges << '\n';
    cout << "Number of Stove : " << this->numStove << '\n';
    cout << "Number of Sofra : " << this->numSofras << '\n';
    cout << "Number of Toilet : " << this->numToilets << '\n';
    cout << "Space of Room : " << this->space << '\n';
    cout << "Color of Room : " << this->color << '\n';
}

Rooms::~Rooms() {}