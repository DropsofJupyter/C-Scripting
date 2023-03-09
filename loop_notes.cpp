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

// OR Conditional expression
// Variable Y = (condition) ? expr1 : expr2;

    y = (x < 100) ? 0 : x;



// Logical operators inclue && - || -  !
// ORDER OF LOGICAL OPERATORS
/*
-----------------------------

()
!
*%/+-
< <= > >=
== !=
&&
|| 

-----------------------------
*/






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

#include <iostream>
#include <string>
using namespace std;

int main() {
    int numRows;
    int numColumns;
    int currentRow;
    int currentColumn;
    char currentColumnLetter;

    cin >> numRows;
    cin >> numColumns;

    for (currentRow = 1; currentRow <= numRows; ++currentRow) {
        currentColumnLetter = 'A';

        for (currentColumn = 1; currentColumn <= numColumns; ++currentColumn) {
            cout << currentRow << currentColumnLetter << " ";
            ++currentColumnLetter;
        }
    }
}

int main() {
    
    enum HvacStatus {HVAC_OFF, AC_ON, FURNACE_ON};

    HvacStatus systemStatus;

    stystemStatus = AC_ON;
}



#include <vector>

int main(){
    const int NUM_VALS = 8;
    unsigned int i;
    int nthString;
    vector <string> VName(NUM_VALS); // vector VName has 4 elements of string data type.
    
    VName.at(0) = "First string";
    VName.at(1) = "Second string";
    VName.at(2) = "Third string";
    VName.at(3) = "Fourth string";

    // Vector index must be of unsigned (positive) integer data type
    // the index can be an expression.

    cout << VName.at(3-1);

    cin >> nthString

    if ((nthString >= 1) && (nthString <= 4 )) {
        cout << VName.at(nthString - 1)
    }

    for (i = 0; i < VName.size(); ++i) {
        cout << "Value : ";
        cin >> userVals.at(i);
    }
}

#include <vector>

int main() {
    vector<int> myVector(3, -1); // creates a vector with all 3 initial values as -1
    // note the perethesis instead of braces

    vector<int> mySecondVect = {5, 7, 11} // creates a vector with three values 5, 7, 11

    // assigning each vector value via for loops may be necessary for larger vectors


}

int main() {
   const int NUM_VALS = 4;
   vector<int> courseGrades(NUM_VALS);
   int i;

   for (i = 0; i < courseGrades.size(); ++i) {
      cin >> courseGrades.at(i);
   }

   for (i = 0; i < courseGrades.size(); ++i) {
      cout << courseGrades.at(i) << " ";
   }
   cout << endl;
   
   for (i = courseGrades.size() - 1; i >= 0;--i) {
      cout << courseGrades.at(i) << " ";
   }
   cout << endl;
}