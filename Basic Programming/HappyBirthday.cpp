//The current year is 2020. And it's your friends birthday. You know her name and the year of her birth. You want to wish her and remind her of her current age.


#include <bits/stdc++.h>
using namespace std;

int main() {
	int yob, age=0; string name;
	cin>>name>>yob;
	while(name.length()<=0 || name.length()>100)
		cin>>name;
	while(yob<1980 || yob>=2020)
		cin>>yob;
	age=2020-yob;
	cout<<"Happy Birthday "<<name<<"! Your current age is "<<age;
	return 0;
}