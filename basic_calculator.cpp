double add(double, double);
double sub(double, double);
double mul(double, double);
double div(double, double);

#include <iostream>
using namespace std;

int main() {
	double num1, num2;
	char op;
	cout<<"Basic Calculator using C++"<<endl;
	cin>>num1>>op>>num2;
	
	switch(op) {
		case '+':
		cout<<add(num1, num2);
		break;
		
		case '-':
		cout<<sub(num1, num2);
		break;
		
		case '*':
		cout<<mul(num1, num2);
		break;
		
		case '/':
		cout<<div(num1, num2);
		break;
		
		default:
		cout<<"Error: Invaaid Input";
	}
	
	return 0;
}

double add(double num1, double num2) {
	return num1 + num2;
}

double sub(double num1, double num2) {
	return num1 - num2;
}

double mul(double num1, double num2) {
	return num1 * num2;
}

double div(double num1,double num2) {
	return num1 / num2;
}
