#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function used to make things lowercase because the tolower() 
// fuction is stupid and doesn't work how you think it should
string lowerIt(string stringToLower){
    for (auto& x : stringToLower) {
        x = tolower(x);
    }

    return stringToLower;
} 

string removeSpaces(const string& input) {
    string result;
    for (char c : input) {
        if (!isspace(c)) {
            result += c;
        }
    }
    return result;
}

int main() {

    string userInput;
    string reverseWord;

    int wordLength;

    cout << "Palindrome Checker" << endl;
    cout << "Enter a word or phrase: ";

    getline(cin, userInput);

    userInput = lowerIt(userInput);
    userInput = removeSpaces(userInput);

    wordLength = userInput.length();

    for (int i = wordLength - 1; i >= 0; i--) {
        reverseWord = reverseWord + userInput.at(i);
    }
    
    if (reverseWord == userInput){
        cout << "Word or phrase entered is a palindrome.";
    } else{
        cout << "Word or phrase entered is not a palindrome.";
    }
    
    return 0;
}

// Implement feature to find a palindrome in a sentence
// Add word or phrase detection