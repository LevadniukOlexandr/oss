#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main(){
    int date, month, year;
    cout<<"Number of a day: ";
    cin>>date;
    cout<<"Number of month: ";
    cin>>month;
    cout<<"Number of a year: ";
    cin>>year;
    month=month-2;
    if(month<0){
        month=month+12;
        year=year-1;
    }
    else{
        goto next;
    }
    next:
    month=(month*83)/32;
    month=month+date;
    month=month+year;
    month=(year/4)+month;
    month=month -(year/100);
    month=(year/400)+month;
    month=month%7;
    switch (month){
       
        case 0:
        std::cout<<"Sunday";
        break;
         case 1:
         std::cout<<"Monday";
        break;
         case 2:
        std::cout<<"Tuesday";
        break;
         case 3:
        std::cout<<"Wednesday";
       break;
        case 4:
        std::cout<<"Thurstaday";
        break;
         case 5:
         std::cout<<"Friday";
        break;
         case 6:
        std::cout<<"Saturday";
        break;
         
        break;

}}
