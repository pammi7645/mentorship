#include <iostream>
using namespace std;
int main()
{
    int marks;
    cin>>marks;
    if(marks >=80)
    cout<<"A"<<endl;
    else if(marks >=60)
    cout<<"B"<<endl;
    else{
        cout<<"F";
    }
};