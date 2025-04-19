#ifndef HOUSE_H
#define HOUSE_H
#include "Rooms.h"
#include <iostream>
#include <vector>
using namespace std;

class House {
protected:
    // Address Information
    string city;
    string state;
    string street;

    // House Details
    string Owner;
    string CreationDate;
    int numRooms;
    int Price;
    int Capacity;
    int Space;

    // Room Categories
    vector<Rooms> BathRooms;
    vector<Rooms> BedRooms;
    vector<Rooms> Kitchens;
    vector<Rooms> ExtraRooms; // ( Office Room, Living Room, Guest Room, ...etc )

public:
    House();  // Default Constructor
    House(string city, string state, string street, string owner, string creationDate, int price, int capacity, int space); // Parametrized Constructor

    // Methods for adding rooms
    void add_bedroom(vector<Rooms>Bedroom);
    void add_kitchen(vector<Rooms>kitchen);
    void add_bathroom(vector<Rooms>Bathroom);
    void add_extra_rooms(vector<Rooms>extra);

    // Methods for deleting rooms
    void removeBedroom(int index);
    void removeKitchen(int index);
    void removeBathroom(int index);
    void removeExtraRoom(int index);

    // Display house details
    void DisplayDetails();

    // Setters 
    void setOwner(string newOwner);
    void setPrice(int newPrice);
    void setCapacity(int newCapacity);
    void setSpace(int newSpace);

    //Getters
    string getAddress();
    string getCity();
    string getState();
    string getStreet();
    string getOwner();
    string getCreationDate();
    int getPrice();
    int getCapacity();
    int getSpace();
    int getNumRooooms();
    int getNumBedRooms();
    int getNumBathRooms();
    int getNumKitchens();
    int getNumExtraRooms();

    virtual ~House();
};

#endif // HOUSE_H
