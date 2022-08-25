#include <iostream>
using namespace std;

int main() {
	char wrd[]="WORKATTECH"; int i;

	for(i=0; i<10; i=i+2)
		cout<<wrd[i]<<wrd[i+1]<<"\n";
        
	return 0;
}