//Write a program to print the letters of the word "WORKATTECH" with two letters in one line.

#include <iostream>
using namespace std;

int main() {
	char wrd[]="WORKATTECH"; int i;

	for(i=0; i<10; i=i+2)
		cout<<wrd[i]<<wrd[i+1]<<"\n";

	return 0;
}