//Given a temperature t in Centigrade, convert it into Fahrenheit.


#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, i;
	cin>>T;
	while(T<=0 || T>1000)
		cin>>T;
	double t[T];
	for(i=0; i<T; i++)
	{
		cin>>t[i];
		while(t[i]<-100 || t[i]>100)
			cin>>t[i];
	}
	for(i=0; i<T; i++)
	{
		double f=((9*t[i])/5)+32;
		printf("%.2f\n",f);
	}
	return 0;
}