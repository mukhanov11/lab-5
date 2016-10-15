#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int a, n;
	cin>>a;
	cin>>n;
	               
	int s=1;
	int ai=1;
	
	for (int i=1; i<=n; i++) {
		ai=a*ai; 
		s+=ai;
    }
	
	cout<<s;

return 0;
}