#include "House.h"
#include<iostream>
#include <vector>
using namespace std;

House::House() // Default Constructor
{
    this->city = "Un_known";
    this->state = "Un_known";
    this->street = "Un_known";
    this->Owner = "Un_known";
    this->CreationDate = "Un_known";
    this->Capacity = 0;
    this->numRooms = 0;
    this->Price = 0;
    this->Space = 0;
}

House::House(string city, string state, string street, string owner, string creationDate, int price, int capacity, int space) // Parametrized Constructor
{
    this->city = city;
    this->state = state;
    this->street = street;
    this->Owner = owner;
    this->CreationDate = creationDate;
    this->Price = price;
    this->Capacity = capacity;
    this->Space = space;
}


void House::add_bedroom(vector<Rooms>_BedRoom)
{
    if (!this->BedRooms.empty())
    {
        this->numRooms -= (int)this->BedRooms.size();
    }
    this->BedRooms = _BedRoom;
    this->numRooms += (int)_BedRoom.size();
}
void House::add_kitchen(vector<Rooms>_Kitchen)
{
    if (!this->Kitchens.empty())
    {
        this->numRooms -= (int)this->Kitchens.size();
    }
    this->Kitchens = _Kitchen;
    this->numRooms += (int)_Kitchen.size();
}
void House::add_bathroom(vector<Rooms>_BathRoom)
{
    if (!this->BathRooms.empty())
    {
        this->numRooms -= (int)this->BathRooms.size();
    }
    this->BathRooms = _BathRoom;
    this->numRooms += (int)_BathRoom.size();
}
void House::add_extra_rooms(vector<Rooms>Extra)
{
    if (!this->ExtraRooms.empty())
    {
        this->numRooms -= (int)this->ExtraRooms.size();
    }
    this->ExtraRooms = Extra;
    this->numRooms += (int)Extra.size();
}

void House::removeBedroom(int index) {
    if (index >= 0 && index < this->BedRooms.size()) {
        this->Space -= this->BedRooms[index].getSpace();
        this->BedRooms.erase(this->BedRooms.begin() + index);
        this->numRooms--;
    }
    else {
        cout << "Invalid index for bedroom!" << endl;
    }
}

void House::removeKitchen(int index) {
    if (index >= 0 && index < this->Kitchens.size()) {
        this->Space -= this->Kitchens[index].getSpace();
        this->Kitchens.erase(this->Kitchens.begin() + index);
        this->numRooms--;
    }
    else {
        cout << "Invalid index for kitchen!" << endl;
    }
}

void House::removeBathroom(int index) {
    if (index >= 0 && index < this->BathRooms.size()) {
        this->Space -= this->BathRooms[index].getSpace();
        this->BathRooms.erase(this->BathRooms.begin() + index);
        this->numRooms--;
    }
    else {
        cout << "Invalid index for bathroom!" << endl;
    }
}

void House::removeExtraRoom(int index) {
    if (index >= 0 && index < this->ExtraRooms.size()) {
        this->Space -= this->ExtraRooms[index].getSpace();
        this->ExtraRooms.erase(this->ExtraRooms.begin() + index);
        this->numRooms--;
    }
    else {
        cout << "Invalid index for extra room!" << endl;
    }
}

// Setters
void House::setOwner(string newOwner) { this->Owner = newOwner; }
void House::setPrice(int newPrice) { this->Price = newPrice; }
void House::setCapacity(int newCapacity) { this->Capacity = newCapacity; }
void House::setSpace(int newSpace) { this->Space = newSpace; }

// Getters
string House::getAddress() {
    return "City : " + this->city + "\nState : " + this->state + "\nStreet : " + this->street;
}
string House::getCity() { return this->city; }
string House::getState() { return this->state; }
string House::getStreet() { return this->street; }
string House::getOwner() { return this->Owner; }
string House::getCreationDate() { return this->CreationDate; }
int House::getPrice() { return this->Price; }
int House::getCapacity() { return this->Capacity; }
int House::getSpace() { return this->Space; }
int House::getNumRooooms() { return this->numRooms; }
int House::getNumBedRooms() { return this->BedRooms.size(); }
int House::getNumBathRooms() { return this->BathRooms.size(); }
int House::getNumKitchens() { return this->Kitchens.size(); }
int House::getNumExtraRooms() { return this->ExtraRooms.size(); }

void House::DisplayDetails()
{
    cout << "House Details:" << endl;
    cout << "--------------------" << endl;
    cout << "Owner : " << this->Owner << endl;
    cout << "Address : \n" << this->getAddress() << endl;
    cout << "Creation Date : " << this->CreationDate << endl;
    cout << "Price : " << this->Price << endl;
    cout << "Capacity : " << this->Capacity << endl;
    cout << "Total Space : " << this->Space << endl;
    cout << "Number of Rooms : " << this->numRooms << endl;

    cout << "\nRooms Details:" << endl;
    cout << "--------------------" << endl;
    cout << "Number of Bedrooms: " << this->getNumBedRooms() << endl;
    cout << "Number of Bathrooms: " << this->getNumBathRooms() << endl;
    cout << "Number of Kitchens: " << this->getNumKitchens() << endl;
    cout << "Number of Extra Rooms: " << this->getNumExtraRooms() << endl;

    cout << "\nRoom details by type :" << endl;
    cout << "----------------------" << endl;

    // Display bedroom details
    cout << "\nBedRooms : " << endl;
    cout << "Number of BedRooms : " << this->getNumBedRooms() << '\n' << '\n';
    int cnt = 1;
    for (auto badroom : this->BathRooms) {
        cout << "Room number : " << cnt++ << '\n';
        badroom.display(); // print details of BathRoom
        cout << '\n';
    }

    // Display bathroom details
    cout << "------------------------\n";
    cout << "\nBathrooms : " << endl;
    cout << "Number of BathRooms : " << this->getNumBathRooms() << '\n' << '\n';
    cnt = 1;
    for (auto bathroom : this->BathRooms) {
        cout << "Room number : " << cnt++ << '\n';
        bathroom.display(); // print details of BathRoom
        cout << '\n';
    }

    // Display kitchen details
    cout << "------------------------\n";
    cout << "\nKitchens : " << endl;
    cout << "Number of Kitchens : " << this->getNumKitchens() << '\n' << '\n';
    cnt = 1;
    for (auto kitchen : this->Kitchens) {
        cout << "Room number : " << cnt++ << '\n';
        kitchen.display(); // print details of BathRoom
        cout << '\n';
    }

    // Display extra room details
    cout << "------------------------\n";
    cout << "\nExtra Rooms:" << endl;
    cout << "Number of ExtraRooms : " << this->getNumExtraRooms() << '\n' << '\n';
    cnt = 1;
    for (auto extraRoom : this->ExtraRooms) {
        cout << "Room number : " << cnt++ << '\n';
        extraRoom.display(); // print details of BathRoom
        cout << '\n';
    }
}

House::~House() {}
