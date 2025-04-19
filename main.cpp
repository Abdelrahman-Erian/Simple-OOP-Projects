#include <iostream>
#include <vector>
#include "House.h"
#include "Rooms.h"
using namespace std;
int main()
{
    vector<Rooms>BathRooms;
    vector<Rooms>BedRooms;
    vector<Rooms>Kitchen;
    vector<Rooms>ExtraRooms;
    Rooms First_bathroom;
    Rooms Second_bathroom;
    Rooms First_BedRoom;
    Rooms Second_BedRoom;
    Rooms First_kitchen;
    Rooms Second_kitchen;
    Rooms WorkSpace;
    Rooms LivingRoom;
    Rooms GuestRoom;
    // BathRooms
    First_bathroom.add(false, 0, 1, "White", 1, 0, 0, 0, 4, 1, 1, 0);
    Second_bathroom.add(false, 0, 1, "Blue", 1, 0, 0, 0, 3, 1, 1, 1);

    // BedRooms
    First_BedRoom.add(true, 2, 2, "Beige", 1, 0, 0, 0, 12, 1, 0, 2);
    Second_BedRoom.add(true, 1, 1, "Gray", 1, 0, 0, 0, 10, 1, 0, 1);

    // Kitchens
    First_kitchen.add(false, 0, 2, "White", 1, 1, 0, 1, 6, 1, 0, 1);
    Second_kitchen.add(false, 0, 1, "Light Gray", 1, 1, 0, 1, 5, 1, 0, 1);

    // WorkSpace
    WorkSpace.add(true, 0, 1, "Dark Gray", 1, 0, 0, 0, 8, 1, 0, 1);

    // LivingRoom
    LivingRoom.add(true, 0, 4, "Light Blue", 1, 0, 0, 1, 15, 2, 0, 2);

    // GuestRoom
    GuestRoom.add(true, 1, 2, "Light Blue", 1, 0, 0, 1, 10, 1, 0, 1);

    // Add rooms to the Vectors
    BathRooms.push_back(First_bathroom);
    BathRooms.push_back(Second_bathroom);

    BedRooms.push_back(First_BedRoom);
    BedRooms.push_back(Second_BedRoom);

    Kitchen.push_back(First_kitchen);
    Kitchen.push_back(Second_kitchen);

    ExtraRooms.push_back(WorkSpace);
    ExtraRooms.push_back(LivingRoom);
    ExtraRooms.push_back(GuestRoom);


    House First_House(
            "Qena",// city
            "Qena",// state
            "Al-Nasr School",// street
            "Abdo Mohamed",// owner
            "2025-04-19",// creationDate
            2500000,// price
            8,// capacity 
            120 // space
        );

    First_House.add_bedroom(BedRooms);
    First_House.add_kitchen(Kitchen);
    First_House.add_bathroom(BathRooms);
    First_House.add_extra_rooms(ExtraRooms);
    

    First_House.DisplayDetails();
}