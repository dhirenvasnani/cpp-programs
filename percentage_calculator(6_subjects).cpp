void execute();
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

class result {
	public:
	string name, surname;
	float english, maths, it, physics, chemistry, bio, smallest, tot, percent;
	
	void getdata() {
		cout<<"Enter your full name: ";
		cin>>name>>surname;
		cout<<"\nEnter the marks scored:- "<<endl;
		cout<<"1. English: ";
		cin>>english;
		cout<<"2. Maths: ";
		cin>>maths;
		cout<<"3. Information Technology : ";
		cin>>it;
		cout<<"4. Physics: ";
		cin>>physics;
		cout<<"5. Chemistry: ";
		cin>>chemistry;
		cout<<"6. Biology : ";
		cin>>bio;
		cout<<endl<<"------------------------"<<endl;
	}
	
	void best5() {
		smallest = english;
	    
	    if (smallest > maths) {
		    smallest = maths;
	    } else if (smallest > it) {
		    smallest = it;
	    } else if (smallest > physics) {
		    smallest = physics;
	    } else if (smallest > chemistry) {
		    smallest = chemistry;
	    } else if (smallest > bio) {
		    smallest = bio;
	    } else {
		   smallest = english;
	    }    
		
	}
	
	void calculate() {
		tot = english + maths + it + physics + chemistry + bio - smallest;
		if (tot > 500) {
			cout<<"Error: Total is Greater than 500!"<<endl;
			loop();
		}
		
		percent = (tot/500) * 100;
	}
		
		
	void display() {
		
		if (tot < 500) {
			cout<<"Result:- ";
			cout<<"Student Name: "<<name<<" "<<surname;
			cout<<endl<<"------------------------"<<endl;
			cout<<"Marks Scored:- \n"<<"1. English: "<<english<<endl<<"2. Maths: "<<maths<<endl<<"3. Information Technology : "<<it<<endl<<"4. Physics: "<<physics<<endl<<"5. Chemistry: "<<chemistry<<endl<<"6. Biology : "<<bio<<endl;
			cout<<endl<<"------------------------"<<endl;
			cout<<"Total Marks (Out of 500): "<<tot;
			cout<<endl<<"------------------------"<<endl;
			cout<<"Percetage: "<<percent<<"%";
		    cout<<endl<<"------------------------"<<endl;	
		} else {
			cout<<"\nResult:- "<<endl;
			cout<<"Error: Total marks are greater than 500!";
		}
	}
	
	void save() {
		ofstream f1(name + " " + surname + " Result.txt");
		f1<<"Result:- "<<endl;
		f1<<"Student Name: "<<name<<" "<<surname;
		f1<<endl<<"------------------------"<<endl;
		f1<<"Marks Scored:- \n"<<"1. English: "<<english<<endl<<"2. Maths: "<<maths<<endl<<"3. Information Technology : "<<it<<endl<<"4. Physics: "<<physics<<endl<<"5. Chemistry: "<<chemistry<<endl<<"6. Biology : "<<bio<<endl;
		f1<<endl<<"------------------------"<<endl;
		f1<<"Total Marks: "<<tot;
		f1<<endl<<"------------------------"<<endl;
		f1<<"Percetage: "<<percent<<"%";
		cout<<endl<<"------------------------"<<endl;
		cout<<"Result saved as "<<name<<" "<<surname<<" Result.txt";
		cout<<endl<<"------------------------"<<endl;
	}
	
	void loop() {
		char choice;
		cout<<"Do you want to run the program again (y/n)? ";
		cin>>choice;
		
		if (choice == 'y') {
			execute();
		} else {
			exit(0);
		}
	}
};

int main() {
	execute();
	return 0;
}		
		
void execute() {
	result obj;
	obj.getdata();
	obj.best5();
	obj.calculate();
	obj.display();
	
	char save;
	cout<<"Do you want to save the result (y/n)? ";
	cin>>save;
	cout<<"------------------------"<<endl;
	
	if (save == 'y') {
	    obj.save();
	    obj.loop();
	} else if (save == 'n') {
	    cout<<"Result not saved.";
	    cout<<endl<<"------------------------"<<endl;
	    obj.loop();
	} else {
	    cout<<"Error: Invalid Input";
	    cout<<endl<<"------------------------"<<endl;
	    obj.loop();
	}
}
