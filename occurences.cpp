#include <iostream>
using namespace std;

int main() {
	cout<<"Ouccurence Checker: "
    int i, j = 0, s;
    char letter;
    cout << "Enter the length of the word: ";
    cin >> s;
    char name[s];
    cout << "Enter the word: ";
    cin >> name;
    cout << "Enter the letter to find its occurrence: ";
    cin >> letter;

    for (i = 0; i < s; i++) {
        if (name[i] == letter) {
            j++;
        }
    }

    cout << "The letter '" << letter << "' occurs " << j << " time(s).";
    return 0;
}
