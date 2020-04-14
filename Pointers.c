#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array:" << endl;
    cin >> n;
    int a[n],*p;
    cout << "Enter the elements of array:";
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    p=&a[0];
    cout  << "Your array is:";
    for(int i=0;i<n;i++){
        cout << *(p+i) << "\n";
    }

    return 0;
}
