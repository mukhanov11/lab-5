#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int X;
	cin>>X;

	while (X>0){
        	cout<<X%10;
        	X/=10;
	}

return 0;
}