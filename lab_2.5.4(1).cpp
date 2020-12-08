#include <iostream>
using namespace std;

int main(void) {
    int func,a;
    reStart:
cout<<"Enter the function of calculator which you want to use: "<<"\n"<<"0 - exit"<<"\n"<<"1 - addition"<<"\n"<<"2 - subtraction"<<"\n"<<"3 - multyplication"
<<"\n"<<"4 - division"<<"\n";
cin>>func;
    if(func>=0 && func<=4){
switch (func){
    case 0:
    cout<<"You chose exit"<<"\n"<<"if you want to START AGAIN - 1"<<"\n"<<"if you want just to FINISH - 0"<<"\n";
    cin>>a;
    if(a==1){
     goto reStart;
    }
    else {break;}
    case 1:
    double n1,n2,sum;
    cout<<"Enter the first num: ";
    cin>>n1;
    cout<<"Enter the secund num: ";
    cin>>n2;
    sum = n1+n2;
    cout<<sum;
    break;
    case 2:
    double s1,s2, sub;
    cout<<"Enter the first num: ";
    cin>>s1;
    cout<<"Enter the secund num: ";
    cin>>s2;
    sub = s1-s2;
    cout<<sub;
    break;
    case 3:
    double m1,m2, mul;
    cout<<"Enter the first num: ";
    cin>>m1;
    cout<<"Enter the secund num: ";
    cin>>m2;
    mul = m1*m2;
    cout<<mul;
    break;
    case 4:
    double d1,d2,div;
    cout<<"Enter the first num: ";
    cin>>d1;
    cout<<"Enter th secund num: ";
    cin>>d2;
    div = d1/d2;
    cout<<div;
    break;
}}
    else{cout<<"Can't find the function...";}



}
