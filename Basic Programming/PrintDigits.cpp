//Given a two-digit number n, print both the digits of the number.


#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, i;
	cin>>T;
	while(T<1 || T>100000)
		cin>>T;
	int n[T];
	for(i=0; i<T; i++)
	{
		cin>>n[i];
		while(n[i]<10 || n[i]>99)
			cin>>n[i];
	}
	for(i=0; i<T; i++)
	{
		int a=n[i]%10;
		n[i]=n[i]/10;
		int b=n[i];
		cout<<b<<" "<<a<<"\n";
	}
	return 0;
}