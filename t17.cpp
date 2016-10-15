#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int N, n;
	cin>>N;

	int s=0;
	for (int i=1; i<=N; i++){
		cin>>n;
		s+=n;
	}

	cout<<s;
	       
return 0;
}