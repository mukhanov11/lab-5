#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N;
	cin>>N;

	int f=1;
	for (int i=1; i<=N; i++){
		f*=i;
	}
	cout<<f;

return 0;
}