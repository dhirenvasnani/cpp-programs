#include <iostream>
#include <fstream>
using namespace std;

class result {
	public:
	string name;
	float english, maths, cs1, physics, chemistry, cs2, smallest, tot, percent;
	
	void getdata() {
		cout<<"Enter your full name: ";
		cin>>name;
		cout<<"\nEnter the marks scored:- "<<endl;
		cout<<"1. English: ";
		cin>>english;
		cout<<"2. Maths: ";
		cin>>maths;
		cout<<"3. Computer Science Paper 1: ";
		cin>>cs1;
		cout<<"4. Physics: ";
		cin>>physics;
		cout<<"5. Chemistry: ";
		cin>>chemistry;
		cout<<"6. Computer Science Paper 2: ";
		cin>>cs2;
		cout<<endl<<"------------------------"<<endl;
	}
	
	void calculate() {
		smallest = english;
		if (smallest < maths) smallest = maths;
		if (smallest < cs1) smallest = cs1;
		if (smallest < physics) smallest = physics;
		if (smallest < chemistry) smallest = chemistry;
		if (smallest < cs2) smallest = cs2;
		
		tot = english + maths + cs1 + physics + chemistry + cs2 - smallest;
		percent = (tot/500) * 100;
	}
	
	void display() {
		
		if (tot < 500) {
			cout<<"Result:- ";
			cout<<"Student Name: "<<name;
			cout<<endl<<"------------------------"<<endl;
			cout<<"Marks Scored:- \n"<<"1. English: "<<english<<endl<<"2. Maths: "<<maths<<endl<<"3. Computer Science Paper 1: "<<cs1<<endl<<"4. Physics: "<<physics<<endl<<"5. Chemistry: "<<chemistry<<endl<<"6. Computer Science Paper 2: "<<cs2<<endl;
			cout<<endl<<"------------------------"<<endl;
			cout<<"Total Marks: "<<tot;
			cout<<endl<<"------------------------"<<endl;
			cout<<"Percetage: "<<percent<<"%";
		} else {
			cout<<"\nResult:- "<<endl;
			cout<<"Error: Total marks are greater than 500!";
		}
	}
	
	void save() {
		ofstream f1(name + " Result.txt");
		f1<<"Result:- ";
		f1<<"Student Name: "<<name;
		f1<<endl<<"------------------------"<<endl;
		f1<<"Marks Scored:- \n"<<"1. English: "<<english<<endl<<"2. Maths: "<<maths<<endl<<"3. Computer Science Paper 1: "<<cs1<<endl<<"4. Physics: "<<physics<<endl<<"5. Chemistry: "<<chemistry<<endl<<"6. Computer Science Paper 2: "<<cs2<<endl;
		f1<<endl<<"------------------------"<<endl;
		f1<<"Total Marks: "<<tot;
		f1<<endl<<"------------------------"<<endl;
		f1<<"Percetage: "<<percent<<"%";
		
		cout<<endl<<"Result saved as "<<name<<" Result.txt";
	}
};

int main() {
	result obj;
	obj.getdata();
	obj.calculate();
	obj.display();
	obj.save();
	return 0;
}
		
		
		
