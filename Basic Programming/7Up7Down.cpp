//Given a number, you have to determine if the number is greater than 7, equal to 7, or less than 7.


#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, i;
	cin>>T;
	while(T<=0 || T>=100000)
		cin>>T;
	double n[T];
	for(i=0; i<T; i++)
	{
		cin>>n[i];
		while(n[i]<0 || n[i]>100000)
			cin>>n[i];
	}
	for(i=0; i<T; i++)
	{
		if(n[i]==7.0)
			cout<<"EQUAL \n";
		else if(n[i]>7.0)
			cout<<"UP \n";
		else
			cout<<"DOWN \n";
	}
	return 0;
}