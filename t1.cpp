#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int n;
	cin>>n;

	int s=0;
	for (int i=1; i<n; i++) {
		s+=i*i;
	}

	cout<<s+n*n;


return 0;
}