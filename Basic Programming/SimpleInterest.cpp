//Given the rate of interest and the time you can invest for, calculate the interest you will recieve.

#include <bits/stdc++.h>
using namespace std;

int main() {
	double p, r, t;
	cin>>p>>r>>t;
	while(p<=0 || p>100000)
	{
		cin>>p;
	}
	while(r<=0 || r>20)
	{
		cin>>r;
	}
	while(t<=0 || t>20)
	{
		cin>>t;
	}
	double si=(p*r*t)/100;
	printf("%.6f",si);
	return 0;
}