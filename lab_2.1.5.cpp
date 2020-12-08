#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int year;
    cout<<"enter your year : ";
    cin>>year;
    if((year%4==0 || year%400==0)&& year >=1582){
        cout<<"The year "<<year<<" is LEAP";
    }
    else{
        cout<<year<<" is a simple year";
    }
    
    return 0;
