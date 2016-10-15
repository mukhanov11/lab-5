#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int X;
	cin>>X;

	int s=0;
	for (int i=1; i<=X; i++){
		if (X%i==0){
			s+=1;
		}
	}
	cout<<s;

return 0;
}