#include <iostream>
using namespace std;

int main() {
    int t, m, b;
    string item;
    bool found;
    string array[7] = {"Apple", "Banana", "Fig", "Grapes", "Mango", "Orange", "Pineapple"};
    t = 0;
    b = 6;
    
    cout << "Binary Search: " << endl;
    cout << "Enter any fruit to Search: ";
    cin >> item;

    while (t <= b) {
        m = (t + b) / 2;

        if (array[m] == item) {
            cout << item << " found at index: " << m;
            found = true;
            break;
        } else if (array[m] > item) {
            b = m - 1;
        } else if (array[m] < item) {
            t = m + 1;
        }
    }
    
    if (!found) {
        cout << item << " not found";
    }
    return 0;
}
