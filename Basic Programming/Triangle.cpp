//Given three sticks with lengths L1, L2, L3 - find out if these sticks can form a triangle. If they can form a triangle, calculate the circumference of the triangle.


#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, i, j;
	cin>>T;
	while(T<=0 || T>10000)
		cin>>T;
	int L[T][3];
	for(i=0; i<T; i++)
	{
		for(j=0; j<3; j++)
		{
			cin>>L[i][j];
			while(L[i][j]<=0 || L[i][j]>50000)
				cin>>L[i][j];
		}
	}
	for(i=0; i<T; i++)
	{
			if(((L[i][0]+L[i][1])>=L[i][2]) && ((L[i][1]+L[i][2])>=L[i][0]) && ((L[i][2]+L[i][0])>=L[i][1]))
					{
						int cir=L[i][0]+L[i][1]+L[i][2];
						cout<<"\n"<<cir;
					}
					
			else
				cout<<"\n-1";			
	}
	return 0;
}