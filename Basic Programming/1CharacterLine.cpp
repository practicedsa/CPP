//Write a program to print the letters of the word "WORKATTECH" with each alphabet in a separate line


#include <bits/stdc++.h>
using namespace std;

int main() {
	string str="WORKATTECH"; int i; char str1;
	for(i=0; i<str.length(); i++)
	{
		str1=str.at(i);
		cout<<str1<<"\n";
	}
	return 0;
}