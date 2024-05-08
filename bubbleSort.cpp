#include <iostream>
using namespace std;

int main() {
    int arr[10];

    cout << "Enter any 10 numerical values: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 10 - 1; ++i) {
        for (int j = 0; j < i; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}