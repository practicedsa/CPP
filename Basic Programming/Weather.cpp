//Given the temperature and humidity for the day, determine which category the day's weather falls into.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, temp[10000], hum[10000], i;
	
	cin>>T;
	
	if(0 > T || T> 10000)
	{
		cout<<"Wrong Input";
		return 0;
	}
	
	for(i=0; i<T; i++)
	{
		cin>>temp[i];
		
		if(0 > temp[i] || temp[i]> 50)
		{
			cout<<"Wrong Input";
			return 0;
		}
		
		cin>>hum[i];
		
		if(0>hum[i] || hum[i]>100)
		{
			cout<<"Wrong Input";
			return 0;
		}
	}
	
	for(i=0; i<T; i++)
	{
		if(temp[i]>=30 && hum[i]>=90)
			cout<<"Hot and Humid";
		if(temp[i]>=30 && hum[i]<90)
			cout<<"Hot";
		if(temp[i]<30 && hum[i]>=90)
			cout<<"Cool and Humid";
		if(temp[i]<30 && hum[i]<90)
			cout<<"Cool";
	}
	return 0;
}