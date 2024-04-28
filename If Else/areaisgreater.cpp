#include <iostream>
using namespace std;
int main ()
{
    int r, area, circumfrence;
    cout<<"value of r: ";
    cin>>r;
    area=3.14*r*r;
    circumfrence=2*3.14*r;
    if(area>circumfrence)
    {
        cout<<"area is larger";
    }
    else
    {
        cout<<"area is not larger";
    }
return 0;
}