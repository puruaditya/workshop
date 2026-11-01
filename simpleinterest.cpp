#include <iostream>
using namespace std;
int main()
{
cout<<"This program calculates simple interest"<< endl;
int i,p,t;
cout<<"Enter the principle amount"<<endl;
cin>>p;
cout<<"Enter the rate"<<endl;
cin>>i;
cout<<"Enter the time period"<<endl;
cin>>t;
cout<<"Your simple interest is"<<endl;
float interest= (float)(p*i*t)/100 ;
cout<< interest<<endl;


    return 0;
}