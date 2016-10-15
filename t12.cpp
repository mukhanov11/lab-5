#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int X;
	cin>>X;

	int s=0;
	while (X!=0){
		s+=X%10;
		X/=10;
	}
	
	cout<<s;

return 0;
}