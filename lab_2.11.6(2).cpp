#include <iostream>
#include <iomanip>
using namespace std;
 
 struct Time{
   int hourS,minS,hourF,minF,hour,min,timeS,timeF,calc;
 };
 int main(){
     Start:
    Time in;
    cout<<"Enter time of START:"<<"\n";
    cout<<"Enter hours :";
    cin>>in.hourS;
    cout<<"Enter min: ";
    cin>>in.minS;
     cout<<"Enter time of FINISH:"<<"\n";
    cout<<"Enter hours :";
    cin>>in.hourF;
    cout<<"Enter min: ";
    cin>>in.minF;
    if(in.hourS == in.hourF && in.minS>in.minF){ 
        cout<<"Error, check your input data!";
        goto Start;
    }
    if(in.hourS>in.hourF || in.hourS>23 || in.hourF>23 || in.minS>59 || in.minF>59){
        cout<<"Error, check your input data!";
        goto Start;
    }
    Time math;
    math.timeS = (in.hourS*60)+in.minS;//3:20 = 200
    math.timeF = (in.hourF*60)+in.minF;//5:40 = 340
    math.calc = math.timeF - math.timeS;//140
    math.hour = math.calc/60;//2
    math.min = math.calc%60;//20
    cout<<math.hour<<":"<<math.min;
 }
