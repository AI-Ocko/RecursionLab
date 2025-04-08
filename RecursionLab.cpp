#include <string>
#include <iostream>

using namespace std;

void writeBackward(string userInputPar);

int main () {

    //declarations
    string userInput = " ";

    //get user input
    cout << "Enter a text message: ";
    getline(cin, userInput); 

    //output
    writeBackward(userInput);

    return 0;
}

//version 1 (strip away the last character approach)
void writeBackward(string userInputPar) {
    int lenOfString = userInputPar.length();

    // 0 1 2
    // T O M

    if (lenOfString > 0) {
        cout << userInputPar.substr(lenOfString -1, 1); // display the last character
        writeBackward(userInputPar.substr(0, lenOfString - 1));

    }
    //else if the lenOfString is 0, then we do nothing, implying a base case
}