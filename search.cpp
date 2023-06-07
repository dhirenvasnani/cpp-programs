#include <iostream>
using namespace std;

int main() {
    int i, size;
    string search;
    string array[] = {"Javascript", "C++", "Python", "C#", "Kotlin", "Java", "Ruby", "Swift", "PHP", "SQL", "HTML"};
    
    size = sizeof(array) / sizeof(array[0]);
    
    cout<<"Enter any thing to search: ";
    cin>>search;
    
    for(i = 0; i < size; i++) {
    	if (array[i] == search) { 
    	    cout<<endl<<search<<" found at index "<<i;
    	    return 0;
    	}
    }
    cout<<"Item not found";
    
    return 0;
}
