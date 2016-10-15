#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int n, k;
	cin>>n;
	cin>>k;

	int a=1;
	for (int i=1; i<=n; i++) {
		a*=i;
	}
	
	int b=1;
	for (int j=1; j<=k; j++) {
		b*=j;
	}

	int c=1;
	for (int l=1; l<=(n-k); l++) {
		c*=l; 
	}
	                 
	cout<<a/(b*c);


return 0;
}