//Given a number, find out if it is divisible by 6 or not.


#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, i;
	cin>>T;
	while(T<=0 || T>100000)
		cin>>T;
	int a[T];
	for(i=0; i<T; i++)
	{
		cin>>a[i];
		while(a[i]<0 || a[i]>100000)
			cin>>a[i];
	}
	for(i=0; i<T; i++)
	{
		if(a[i]%6==0)
			cout<<"True \n";
		else
			cout<<"False \n";
	}
	return 0;
}