//You and your friend decide to play a game where given some numbers, you have to find the maximum number. If the maximum is an even number, you win and if it is odd, your friend wins.


#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, i; int max=0;
	cin>>N;
	while(N<=0 || N>100000)
	{
		cin>>N;
	}
	int n[N];
	for(i=0; i<N; i++)
	{
		cin>>n[i];
		while(n[i]<1 || n[i]>100000)
			cin>>n[i];
		if(n[i]>max)
			max=n[i];
	}
	if(max%2==0)
		cout<<"WON";
	else
		cout<<"LOST";
	
	return 0;
}