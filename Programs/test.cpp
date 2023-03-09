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