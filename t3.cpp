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
	cin>>a>>n;

	cout<<my_pow(a, n);

return 0;
}