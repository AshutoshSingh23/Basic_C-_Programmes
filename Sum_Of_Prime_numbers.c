#include <iostream>

using namespace std;
bool checkifprime(int n);
int main()
{
    int n,m,x=0;
    cout << "Enter the number:" << endl;
    cin >> n;
    for(int i=2;i<n;i++){
         if(checkifprime(i)){
             m=n-i;
             if(checkifprime(m))
             x=1;
         }
    }
    if(x==1)
    cout << "YES";
    else
    cout << "NO";
    return 0;
}
bool checkifprime(int n){
    int f=0;
    bool b=false;
    for(int i=2;i<n;i++){
        if(n%i==0){
            f++;
        }
    }
    if(f==0&&n!=1)
    b=true;
    return b;
}
