//Given a number, find out if it is odd or even.


#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, i;
	cin>>T;
	while(T<=0 || T>10000)
		cin>>T;
	int n[T];
	for(i=0; i<T; i++)
	{
		cin>>n[i];
		while(n[i]<0 || n[i]>10000)
			cin>>n[i];
	}
	for(i=0; i<T; i++)
	{
		if(n[i]%2==0)
			cout<<"EVEN \n";
		else
			cout<<"ODD \n";
	}
	return 0;
}