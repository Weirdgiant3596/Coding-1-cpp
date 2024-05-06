//Matthew Sanders Week 13 Wednesday Coding 1b
// C++ Headers, File i/o, and recap of classes.

// how to use classes in main
// constructors
// hierarchy, parent/child, classes to other classes and classes to vectors.
// initiation vs declaration (declaring vs defining a class.)

// classes are definitions for 
    // objects (instances) that have variables inside.

// vectors and arrays are containers, containers hold objects.




#include <iostream>
#include <string>
#include <vector>
using namespace std;

// declaring vs defining a class, or a function.

// declare a function but define it later (after main).
int triple(int number);

class dogs {
public: 
    string name;
    int hungerLevel;
    int mood;


    dogs(string givenName = "Max");

    void bark();
    void runAround();
    void snarf();
    void passTime();

};



int main() {
    cout << "Hello World!\n";

    string name = "Brian";                // strings are a class.
                                    // they have variables and functions inside them.
    int age = 35;

    cout << "There are " << name.size() << " characters in the name " << name << ".\n";
    cout << age << ".\n";

    name.erase(name.begin() + 2);

    cout << name << "\n";

    dogs bluey;
    dogs bingo = dogs("Bingo");
    dogs shelty;
    dogs goldie = dogs("Mr Good Boy");

    // create a variable of the type dogs named dog with the dogs.name of "Mr. Good Boy"
    dogs dog = dogs("Mr. Good Boy");
    dog.bark();

    while(true) {
        string input;
        // cout << "Type STOP to stop.\n";
        // cout << "Type BARK to hear from your dog.\n";
        // cout << "Type PLAY to watch your dog run around.\n";
        // cout << "Type FEED to feed your dog.\n";

        getline(cin, input);

        if(input == "STOP") {
            cout << "Thanks for playing!\n";
            break;
        } else if(input == "BARK") {
            dog.bark();
        } else if(input == "PLAY") {
            dog.runAround();
        } else if(input == "FEED") {
            dog.snarf();
        } else {
            cout << "That wasn't one of the options.\n";
        }


    } // END OF TAMAGOTCHI GAME

    // create a variable with the type vector<dogs> named poodles with 5 dogs inside.
    vector<dogs> poodles(5);

    // creating a variable with the type vector<string> named names with 5 strings inside.
    vector<string> names(5);

    // create a for loop that calls the .bark() function on each doggo in dogs.
    for(int i = 0; i < poodles.size(); i++) {
        cout << i << ". ";
        poodles[i].bark();
    }


} // end of main

// defining a function.
int triple(int n) {
    return n + n + n;
}

dogs::dogs() {
    cout << "This is a default constructor.\n";
}

void dogs::bark() {
    cout << "My name is " << name << ".\n";
    if(mood + hungerLevel > 15) cout << "I am raging!\n";
    else if(mood + hungerLevel > 10) cout << "I am upset.\n";
    else if(mood + hungerLevel > 5) cout << "I am cranky.\n";
    else cout << "I am great.\n";
    passTime();
}

// the definition of the member function inside of the dogs class.
void dogs::runAround() {
    cout << "I can catch the ball!! Watch me go!!!\n";
    mood -= 1;
    if(mood < 0) mood = 0;    // clamp mood to max of 5.
}

void dogs::snarf() {
    cout << "OM NOM NOM\n";
    hungerLevel -= 1;
    if (hungerLevel < 0) hungerLevel = 0;    // clamp hungerlevel to min of 0.
}

void dogs::passTime() {
    hungerLevel += 1;
    mood += 1;
}

// constructor
dogs::dogs(string givenName) {
    name = givenName;
    hungerLevel = 2;
    mood = 2;
}
