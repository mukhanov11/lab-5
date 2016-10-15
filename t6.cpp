#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double n, s=0;
	cin>>n;

	for(double i=0; i<=n; i++){
		s+=pow(-1, i) / (2*i+1);
	}

	cout<<4*s;

return 0;
}