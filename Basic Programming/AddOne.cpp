//You are given the name and age of a person as input. You want to say "Hello" to that person along with what their age will be after one year.


#include <bits/stdc++.h>
using namespace std;

int main() {
	string name; double age; int len=0;
	cin>>name>>age;
	len=name.length();
	while(len<=0 || len>100)
		cin>>name;
	while(age<0 || age>100)
		cin>>age;
	cout<<"Hello "<<name<<"! Next year, you will be "<<(age+1)<<" years old";
	return 0;
}