#include <iostream>
using namespace std;
int main() {
	int num1, num2, i, sum = 0;
	cout<<"Enter the first number: ";
	cin>>num1;
	cout<<"Enter the second number: ";
	cin>>num2;
	for(i = num1; i <= num2; i++) {
		sum += i;
	}
	cout<<"Sum of numbers from "<<num1<<" to "<<num2<<" is "<<sum;
	return 0;
}
