#include "includes.h"

class robot{
public:
    string name;
    int charge;

    robot(string givenName = "Rob", int givenCharge = 10) {
        name = givenName;
        charge = givenCharge;
        Status();
    }

    void Status() {
        cout << "My name is " << name << " and my charge is " << charge << endl;
    }
};