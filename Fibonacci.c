#include <iostream>

using namespace std;

int main()
{
    int i,a=0,b=1,sum,n;
    cout << "Enter number:";
    cin >> n;
    cout << "0 ";
    for(i=0;i<n-1;i++){
        cout << b << " ";
        sum=a+b;
        a=b;
        b=sum;
    }
    return 0;
}
