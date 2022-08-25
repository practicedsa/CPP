//Your mother has sent you to the milkman with a cylindrical bottle. You have to pay the milkman the price for the bottle full of milk at a rate of ₹40 per litre of milk. You are given the radius (r) and the height (h) of the bottle in centimetres. You can assume the value of π as 3.14.


#include <bits/stdc++.h>
using namespace std;

int main() {
	double rad, ht, vol, amt;
	cin>>rad>>ht;
	while(rad<=0 || rad>1000)
	{
		cin>>rad;
	}
	while(ht<=0 || ht>1000)
	{
		cin>>ht;
	}
	vol=(3.14*rad*rad*ht)/1000;
	amt=vol*40;
	printf("%.2f",amt);
	return 0;
}