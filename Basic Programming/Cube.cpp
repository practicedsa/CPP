//You have a cube with each edge measuring length a. Find out the surface area and the volume of the cube.

#include <iostream>
using namespace std;

int main() {
	double a;
	cin>>a;
	while(a<=0 || a>100)
	{
		cin>>a;
	}
	double sa=6*a*a;
	double vol=a*a*a;
	cout<<sa<<" "<<vol;
	return 0;
}