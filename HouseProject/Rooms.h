#ifndef ROOMS_H
#define ROOMS_H
#include<iostream>
using namespace std;


class Rooms
{
protected:
    bool hasTV;
    int numBeds;
    int numChairs;
    int numTables;
    int numDoors;
    int numWindows;
    int numToilets;
    int numFridges;
    int numStove;
    int numSofras;
    string color;
    int space;

public:
    Rooms(); // Default Constructor
    void add(bool tv = false, int beds = 0, int chairs = 0, string col = "Un_known", int doors = 0,
        int fridges = 0, int stove = 0, int sofras = 0, int sp = 0, int tables = 0,
        int toilets = 0, int tvs = 0, int windows = 0);
    void display();

    // Setters
    void setBeds(int count);
    void setChairs(int count);
    void setTables(int count);
    void setDoors(int count);
    void setWindows(int count);
    void setToilets(int count);
    void setFridges(int count);
    void setStove(int count);
    void setSofras(int count);
    void setTVs(bool has);
    void setColor(const string& newColor);
    void setSpace(int newSpace);

    // Getters
    int getBeds();
    int getChairs();
    int getTables();
    int getDoors();
    int getWindows();
    int getToilets();
    int getFridges();
    int getStove();
    int getSofras();
    bool getTVs();
    string getColor();
    int getSpace();

    virtual ~Rooms();


};

#endif // ROOMS_H