//You are having a get together at your house and your mother asks you to distribute candies equally amongst all your cousins. You want to determine if the number of candies given by your mother can be equally distributed or not.


#include <bits/stdc++.h>
using namespace std;

int main() {
	int candies, cousins;
	cin>>candies>>cousins;
	while(candies<=0 || candies>100000)
	{
		cin>>candies;
	}
	while(cousins<=0 || cousins>100000)
	{
		cin>>cousins;
	}
	if(candies%cousins==0)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}