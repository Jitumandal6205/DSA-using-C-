#include<iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter the character: ";
    cin >> ch;
    if( ch >= 65 && ch <= 90){
        cout << "The character is an uppercase letter.";
    }
    else {
        cout << "The character is a lowercase letter.";
    }
  
    return 0;
}