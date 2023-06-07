#include <iostream>
using namespace std;

int main() {
	int i, size;
	string arr[] = {"Hello, World"};
	
	size = sizeof(arr) / sizeof(arr[0]);
	
	for (i = 0; i < size; i++) {
		cout<<arr[0];
	}
	return 0;
}
