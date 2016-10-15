#include <iostream>
#include <cmath>
using namespace std;

int main() {
 
	int x, d;
	cin>>x>>d;
	
	int i=0;
	while(x>0){
        	if(x%10==d){
            		i++;
        	}
	x/=10;
	}

	cout<<i;

return 0;
}