int factorial(int);
#include <iostream>
using namespace std;

int main() {
	int n, f;
	cout<<"Enter the number of which Factorial is to be Found: ";
	cin>>n;
	f = factorial(n);
	cout<<"The Factorial of "<<n<<" is "<<f;
	return 0;
}

int factorial(int n) {
	int fact;
	
	if (n == 0 || n == 1) {
		return 1;
	}
	
	else {
		fact = factorial(n - 1) * n;
	}
	
	return fact;
}
	
