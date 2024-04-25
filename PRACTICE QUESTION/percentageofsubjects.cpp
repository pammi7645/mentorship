#include <iostream>
using namespace std;
int main()
{
int hindi,english,math,science,bio;
cout<<" marks of hindi ";
cin>>hindi;
cout<<"marks of english ";
cin>>english;
cout<<"marks of math";
cin>>math;
cout<<"marks of science";
cin>>science;
cout<<"marks of bio";
cin>>bio;
float per;
per=((hindi+english+english+science+bio)*100)/500;
cout<<"five subject is"<<per<<"%";
return 0;
}
