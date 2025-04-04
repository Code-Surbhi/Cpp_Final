#include<iostream>
using namespace std;
int main(){
    //PRINTING FULL UPRIGHT PYRAMID
    cout<<"Full Upright Pyramid Pattern : "<<endl;

    int i, space, rows, k = 0;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (i = 1; i <= rows; ++i, k = 0) {
        for (space = 1; space <= rows - i; ++space) {
            cout << "  "; // Two spaces for alignment
        }
        while (k != 2 * i - 1) {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }

    
    //PRINTING INVERTED PYRAMID
    cout<<"Inverted Pyramid Printing: "<<endl;

    int j;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (i = rows; i >= 1; --i) {
        for (space = 0; space < rows - i; ++space)
            cout << "  "; // Two spaces for alignment
        for (j = i; j <= 2 * i - 1; ++j)
            cout << "* ";
        for (j = 0; j < i - 1; ++j)
            cout << "* ";
        cout << endl;
    }
    
}
