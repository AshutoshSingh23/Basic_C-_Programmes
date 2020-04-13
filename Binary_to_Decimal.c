#include <iostream>
#include<cmath>

using namespace std;

int main() {
    long long b;
	int a=0,d,p=0;
	cout << "Enter the number in binary form:";
	cin >> b;
	while(b!=0){
		d=b%10;
		b=b/10;
		a=a+d*(pow(2,p));
		p++;
	}
	cout << "The number in decimal form is: " << a;
	return 0;
}
