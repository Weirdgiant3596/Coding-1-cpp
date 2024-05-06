#include "includes.h"
#include "Functions.h"
#include "robot.h"




// can you create a function that accepts a string, and a number
// then uses cout in a for loop to repea the string as man times as the number



int main() {
    srand(time(0));
    ofstream myfile;
        myfile.open ("example.txt", ios::app);        // opne the file, or create if it doesn't
        myfile << "Writing this to a file.\n";
        myfile.close();



        //TODO: can you read from a file?
    ifstream nameFile ("names.txt");
        string line;
        vector<string> names;
        if(nameFile.is_open()){
            while(getline(nameFile, line)) {
                cout << line << endl;
                names.push_back(line);
            }
        } else {
            cout << "could not read nameFile." << endl;
        }
        nameFile.close();

    //can you add all of thes names into a vector of names
    //then pick one ar random to add to repeat
    string randName = names[rand() % names.size()];

    repeat(randName,1);
    
        
        
     return 0; 
    cout << "Hello World!\n";
    string insanity = "sane"; 
    int mind = 5;
    //I don't know how to do any of this. I think I need to make a funtion above then man but I don't remember how to make them. 
    repeat(insanity, mind);

    cout << "What text?\n";
    string inputText;
    getline(cin, inputText);

    cout << "How many times?\n";
    int inputNumber;
    cin >> inputNumber;

    cout << "calling repeat(" << inputText << ", " << inputNumber << ").\n";

    repeat(inputText, inputNumber);
}