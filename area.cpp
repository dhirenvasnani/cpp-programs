double rect(double l, double b);
double tri(double b, double h);
double circ(double r);
double ecli(double a, double b);
#include <iostream>
using namespace std;

int main() {
  int choice;
  double l, b, h, r, a;
    
  cout << "Area Calculator:- " << endl;
  cout << "Enter your choice: " << endl;
  cout << "Area of Rectangle = 1" << endl;
  cout << "Area of Triangle = 2" << endl;
  cout << "Area of Circle = 3" << endl;
  cout << "Area of Eclipse = 4" << endl;
  cin >> choice;
    
  switch (choice) {
      case 1:
          cout << "Enter the length & breadth: ";
          cin >> l >> b;
          cout << "Area of rectangle is " << rect(l, b) << " sqcm.";
          break;
        
      case 2:
          cout << "Enter the base & height: ";
          cin >> b >> h;
          cout << "Area of Triangle is " << tri(b, h) << " sqcm.";
          break;
        
      case 3:
          cout << "Enter the radius: ";
          cin >> r;
          cout << "Area of Circle is " << circ(r) << " sqcm.";
          break;
        
      case 4:
          cout << "Enter the Major & Minor Axis: ";
          cin >> a >> b;
          cout << "Area of Eclipse is " << ecli(a, b) << " sqcm.";
          break;
        
      default:
          cout << "Error: Invalid Input";
	  }
}


double rect(double l, double b) {
    return l * b;
}

double tri(double b, double h) {
    return 0.5 * b * h;
}

double circ(double r) {
    const double pi = 3.14159;
    return pi * r * r;
}

double ecli(double a, double b) {
    const double pi = 3.14159;
    return pi * a * b;
}
