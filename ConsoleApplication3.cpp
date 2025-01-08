//Buildings of Rome
//Implement the class Building with the string name as protected member, a constructor that receives a 
//string nameand a public method getName() that returns the name of the building.
//Implement the class Warehouse derived from Building that contains :
//The members wood, rocksand wheat(integers) that cannot be accessed from outside the class
//A constructor that receives a string name, and three integers(wood, rocksand wheat).
//A public method printResources() that prints on the screen the value of the members of the class 
//(in the same way as it can be seen in the screenshot of the next page).
//Implement the class House derived from Building that contains :
//The members floors, inhabitantsand servants(integers) that cannot be accessed from outside the class
//A constructor that receives a string name, and three integers(floors, inhabitantsand servants).
//A public method printHouse() that prints on the screen the value of the members of the class.
//Implement the class Temple derived from Building that contains :
//The members god(string) and priests(integer) that cannot be accessed from outside the class
//A constructor that receives a string name, a string godand the number of priests of the temple(an integer called priest).
//A public method printTemple() that prints on the screen the value of the members of the class.
//Your program must create one of each classand use their print function to display the data
#include <iostream>
#include <string>
using namespace std;


class Building {
public:
    string name;  

 
    Building(string buildingName) : name(buildingName) {}
};


class Warehouse : public Building {
private:
    int wood, rocks, wheat;  

public:
   
    Warehouse(string buildingName, int woodAmount, int rockAmount, int wheatAmount)
        : Building(buildingName), wood(woodAmount), rocks(rockAmount), wheat(wheatAmount) {}

    void printResources() {
        cout << "Warehouse: " << name << endl;
        cout << "Wood: " << wood << ", Rocks: " << rocks << ", Wheat: " << wheat << endl;
    }
};

class House : public Building {
private:
    int floors, inhabitants, servants;  

public:
  
    House(string buildingName, int numFloors, int numInhabitants, int numServants)
        : Building(buildingName), floors(numFloors), inhabitants(numInhabitants), servants(numServants) {}


    void printHouse() {
        cout << "House: " << name << endl;
        cout << "Floors: " << floors << ", Inhabitants: " << inhabitants << ", Servants: " << servants << endl;
    }
};


class Temple : public Building {
private:
    string god; 
    int priests;  

public:
 
    Temple(string buildingName, string templeGod, int numPriests)
        : Building(buildingName), god(templeGod), priests(numPriests) {}


    void printTemple() {
        cout << "Temple: " << name << endl;
        cout << "God: " << god << ", Priests: " << priests << endl;
    }
};

int main() {
 
    Warehouse warehouse("Rome Warehouse", 100, 200, 50);
    House house("Roman House", 2, 5, 3);
    Temple temple("Roman Temple", "Jupiter", 10);


    warehouse.printResources();
    house.printHouse();
    temple.printTemple();

    return 0;
}
