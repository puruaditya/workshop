#include <iostream>
using namespace std;
int main(){
    float a;
    float b;
    int choice;
    do{
cout<<"CALCULATOR OF TWO NUMBERS"<<endl;
cout<<"ENTER YOUR FIRST NUMBER"<<endl;
 cin>>a;
cout<<"ENTER YOUR SECOND NUMBER"<<endl;
 cin>>b;
cout<<"Choose what you want to do"<<endl; 
cout<<"1:add 2:sub 3:multiply 4:division 5:exit"<<endl;
 cin>> choice; 
 switch(choice){
case 1 : cout<< "YOUR ANSWER IS"<<(float)(a+b) <<endl;
break;
case 2 :
cout<< "YOUR ANSWER IS "<<(float)(a-b) <<endl;
break;
case 3:
cout<<"YOUR ANSWER IS "<<(float) (a*b) <<endl;
break;
case 4:
cout<<"YOUR ANSWER IS "<<(float)(a/b)<<endl;
break;
case 5:
cout<<"Exitted"<<endl;
break;
}
 }
while (choice!=5);
return 0;    
}