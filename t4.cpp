#include <iostream>
#include <cmath>
using namespace std;
int my_pow(int a, int n) {
	int s=1;
	for (int i=1; i<=n; i++) {
		s*=a;
	}
return s;
}


int main() {

	int a, n;
	cin>>a;
	cin>>n;
	               
	int s=0;
	for (int i=0; i<=n; i++) {
		s+=my_pow(a, i);
    }
	
	cout<<s;

return 0;
}