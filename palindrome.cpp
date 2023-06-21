#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int i, s;
    cout<<"Palindrome Checker:- "<<endl;
    cout<<"Palindrome simply means a word that reads the same backwards as forwards."<<endl;
    cout<<"\nEnter the length of the word: ";
    cin>>s;
    char word[s], after[s], before[s];
    cout<<"Enter the Word(Keep all the letters capital): ";
    cin>>word;

    for (i = 0; i < s; i++) {
        before[i] = word[i];
    }

    for (i = 0; i < s; i++) {
        after[i] = before[s - i - 1];
    }
    after[s] = '\0';

    if (strcmp(word, after) == 0) {
		cout<<after<<" is a Palindrome!";
	} else {
		cout<<before<<" is not a Palindrome";
	}
    return 0;
}
