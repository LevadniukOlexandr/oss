#include <iostream>
#include <iomanip>
using namespace std;
 
 struct Time{
   int hour;
   int min;
 };
 int main(){
     Start:
     Time in;
     int period;
     
     cout<<"Enter hours :";
     cin>>in.hour;
     
     cout<<"Ente minutes :";
     cin>>in.min;
     
     cout<<"Enter period (in minutes) :";
     cin>>period;
     
     if(in.hour>23||in.min>59)
     {
         cout<<"Error, check your input data."<<"\n";
         goto Start;
     }
     
     
     Time calc;
     calc.hour = 0;
     calc.min = 0;
     
     calc.hour = in.hour + period/60;
     
     calc.min = in.min + (period%60);
     
     if(calc.min>=60)
     {
         calc.hour = calc.hour+1;
         calc.min = calc.min%60;
         
     }
         
         
    if(calc.hour>23)
    {
        calc.hour = calc.hour%24;
    }
         
         
     cout<<setprecision(3)<<calc.hour;
     cout<<":";
     cout<<setprecision(3)<<calc.min;
 }
