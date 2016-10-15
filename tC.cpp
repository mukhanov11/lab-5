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

	int a=2, N;
	cin>>N;

	cout<<my_pow(a, N);

return 0;
}