#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "Enter the name of applicant:\n";
    cin >> name;
    int a,b=0;
    cout << "Enter the age of voter:\n";
    cin >> a;
    if(a<18){
            b=18-a;
        cout << "You don't qualify the age criteria. Please apply again after " << b << " years.";
    }else{
        cout << "You qualify the age criteria.\n";
    }
    if(b==0){
        char c;
        cout << "Does the applicant has Aadhaar card/Passport/Driving license or any other address prove(y/n)\n";
        cin >> c;
        if(c=='y'||c=='Y'){
            cout << "Upload your documents in the link given below. You will be notified about the voter ID card soon.";
        }
        else{
            cout << "You don't have the necessary documents.";
        }
    }
    return 0;
}
