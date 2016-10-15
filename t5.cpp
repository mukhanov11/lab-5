#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int n;
	cin>>n;

    double s=1;
    for (int i=2; i<=n; i++) {
    	s=s+1.0/(i*i);
    }
    cout<<s;           
	
return 0;
}