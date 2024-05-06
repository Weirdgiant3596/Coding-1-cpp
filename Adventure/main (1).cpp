#include <iostream>
#include <ctime>
#include <cstdlib> 
#include <string> 
#include <vector>
using namespace std;

string askYesNo(string question) {
    string answer;
    cout << question << endl;
    cin >> answer;
    while(answer != "yes" && answer != "no" && answer != "y" && answer != "n") {
        cout << "Invalid answer! Please answer with yes/no or y/n." << endl;
        cin >> answer;
    }
    return answer;
}

int RollDie(int sides) {
    return rand() % sides + 1;
}
    
int main() {
    cout << "Hello Adventurer!\n";
    bool alive = true;
    int health = 10;
    int gold = 0;
    int turns = 0;
    
    do {
        string choice;
        turns += 1;
        choice = askYesNo("Would you like to go adventuring?");
        if(choice == "yes" || choice == "y") {
            cout << "You meet an orc ready to attack!\n";
            int attack = RollDie(6);
            int block = RollDie(6);
            if(block >= attack) {
                cout << "You successfully blocked the attack! You lost " << abs(attack - block) << " health points and ran away.\n";
                gold += RollDie(3);
                health -= (attack - block);
            } else {
                cout << "YOU DIED!!\n";
                alive = false;
            }
        }
    } while(alive && health > 0);
    
    if(alive) {
        cout << "You are still alive! You lasted " << turns << " and found " << gold << " gold.\n";
        if(health < 5) {
            cout << "You should probably go to the doctor, you're pretty banged up.\n";
        }
    } else {
        cout << "Your dead body was found with " << gold << " gold on it.\n";
    }
    return 0;
}

