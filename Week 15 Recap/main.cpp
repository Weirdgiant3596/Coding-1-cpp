#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

class robot{
private:
    // data members (variable)
    string name;
    int charge;
public:
    // member functions (functions)}
    void status() {
        cout << "[name: " << name << ", charge: " << charge << "]\n";
    }

    // a constructor runs when a new instance of a class is created.
    // it always needs to be named the same as the class.
    robot(string givenName = "Robot", int givenCharge = 10) {
        cout << "[The constructor has been called!]\n";
        name = givenName;
        charge = givenCharge;
    }

    //setters
    void SetName (string givenName) {
        if(givenName.size() < 15){
            name = givenName;
        }
        else {
            cout << "Error, names must be less than 15 characters./n";
        }
    }
    void SetCharge(int givenCharge) {
        if(givenCharge > 0) {
            charge = givenCharge;
        }
        else{
            charge = 0;
        }
    }
    // getters
    string GetName() {return name;}
    int GetCharge() {return charge;}

};

int main() {
    srand(time(0));
  cout << "Let's build some classes\n";

    robot rob;
    //rob.name = "Robbie";
    rob.SetName("Robbie");
    rob.SetCharge(rand() % 5 + 5);

    
    cout << "My robot's name is " << rob.GetName() << ".\n";
    cout << "My robot's charge is " << rob.GetCharge() << ".\n";

    rob.status();



    robot artoo( "R2-D2");
    artoo.status();


    //create a vector of names with atleast four names
    //create a vector of robots
    //use a loop to add 10 robots to the vector, with random names and charges

    vector<string> names {"Iktor", "Verena", "Rose", "Joy"};
    vector<robot> bots;

    for(int i = 0; i < 10; i++) {
        string tempName = names[rand() % 4];
        int tempCharge = rand() % 5 + 5;
        bots.push_back(robot(tempName, tempCharge));
    }

    cout << "The first bot in our vector is " <<bots[0].GetName() << ".\n";
    bots[0].status();

    
 }