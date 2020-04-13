#include <iostream>
#include<cmath>

using namespace std;

int main() {
    long b=0;
	int a,d,p=1;
	cout << "Enter the number in decimal form:";
	cin >> a;
	int c=a;
	while(a!=0){
	    d=a%2;
	    a=a/2;
	    b+=d*p;
	    p*=10;
	}
	cout << "The number in binary form is: " << b;
	return 0;
}
