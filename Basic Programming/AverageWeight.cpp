//Your teacher has assigned you the task of finding out the average weight of your class. She gives you the weights of all the students in the class and expects you to calculate the average weight of the class. Assume that there are only 10 students in your class.


#include <bits/stdc++.h>
using namespace std;

int main() {
	double w[10], sum=0.0, avg=0.0; int i;
	for(i=0; i<10; i++)
	{
		cin>>w[i];
		while(w[i]<0 || w[i]>150)
			cin>>w[i];
		sum=sum+w[i];
	}
	avg=sum/10;
	printf("%.6f",avg);
	return 0;
}