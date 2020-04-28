#include <iostream>

using namespace std;

class object1
{
public:
    int h,m,s,t;
    void totaltime()
    {
        t=3600*h+60*m+s;
        cout << "The time is = ";
        if(h<10)
        cout << "0" << h << ":";
        else
        cout << h << ":";
        if(m<10)
        cout << "0" << m << ":";
        else
        cout << m << ":";
        if(s<10)
        cout << "0" << s << endl;
        else
        cout << s << endl;
        cout << "Time in total seconds: " << t;
    }
};

int main()
{
    object1 obj1;
    cout << "Enter time:" << endl;
    cout << "Hours?" << endl;
    cin >> obj1.h;
    cout << "Minutes?" << endl;
    cin >> obj1.m;
    cout << "Seconds?" << endl;
    cin >> obj1.s;
    obj1.totaltime();
    return 0;
}
