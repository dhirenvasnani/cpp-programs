#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int num);

int main() {
	int num1, num2, i;
	
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	
	for (i = num1; i <= num2; i++) {
		if (isprime(i)) {
			cout << i << "\t";
		}
	}
	
	return 0;
}

bool isprime(int num) {
	if (num < 2) {
		return false;
	}
	
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return false;
		}
	}
	
	return true;
}
