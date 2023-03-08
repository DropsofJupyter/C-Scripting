#include <iostream> // allows use of cin and cout
#include <cmath> // basic math functions
#include <string> // for working with type string
#include <cctype> // for working with type character
using namespace std;

int main() {
   int numEggs;

   numEggs = 5;

   if (numEggs <= 4) {
    cout << "b" << endl;
   }
   else {
    cout << "e" << endl;
   }

    cout << "g" << endl;

    return 0;
}

int main() {
    int dogAgeYears;
    int dogAgeMonths;

    cout << "Enter dog's age (in yeras): ";
    cin >> dogAgeYears;

    if (dogAgeYears == 0) {
        cout << "Enter dog's age in months: ";
        cin >> dogAgeMonths;

        switch (dogAgeMonths) {
            case 0:
            case 1:
            case 2:
                cout << "That's 1..14 human months." << endl;
                break;
            
            case 3:
            case 4:
            case 5:
            case 6:
                cout << "That's 1..5 human years." << endl;

            case 7:
            case 8:
                cout << "That's 5..9 human years." << endl;
                break;

            case 9:
            case 10:
            case 11:
            case 12:
                cout << "That's 9..15 human years." << endl;
                break;
            
            default:
                cout << "Invalid input." << endl;
                break;
        }
    }
    else {
        cout << "FIXME: Do earlier dog year cases." << endl;
        switch (dogAgeYears){

        }
    }
    
    return 0;
}

int main() {
    string userWord;

    cout << "Enter a 5-letter word: ";
    cin >> userWord;

    cout << "Scrambled: ";
    cout << userWord.at(3);
    cout << userWord.at(1);
    cout << userWord.at(4);
    cout << userWord.at(0);
    cout << userWord.at(2);
    cout << endl;

    cout << userWord.size();
    cout << userWord.length();

    userWord.append("!");

    return 0;
}



isalpha(c) // boolean checks
isdigit(c) //
isspace(c) //
toupper(c) //
tolower(c) //

userText.find(item) // returns first item occurence in userText
userText.substr(13,4) // returns substring starting at index 13 and having length of 4 characters

push_back(c) // appends c to the end of a string
insert(index,subStr) // inserts subStr starting at index
replace(index, num, substring) // replaces characters at index through num characters with a copy of the substring

str1 + str2 // returns a new string that appends str2 to str1

int main() {
    int x;
    int y;

    if (x < 100) {
        y = 0;
    }
    else {
        y = x;
    }
// OR

    y = (x < 100) ? 0 : x;

// FOR LOOP
// for (initalExpression; conditionExpression; updateExpression) {

    int i;

    for (i = 0; i < 10; ++i) {
        cout << i << endl;
    }

    for (i = 0; i <= 50; i = i + 5) {
        cout << i << " ";
    }
    
}

int main() {
    int userNum;
    int i;
    int j;

    cin >> userNum;

    for (i = 0; i <= userNum; ++i) {
        for (j = 0; j < i; ++j) {
            cout << " ";
            }
        cout << i << endl;
    }
}

