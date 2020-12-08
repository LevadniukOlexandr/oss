#include <iostream>
using namespace std;

int main(){
    int sys, num, fti;
    float m, ftfl, in, ft;
    cout<<"Enter number of system which you want to use"<<"\n"<<"0 - metric"<<"\n"<<"1 - imperial"<<"\n";
    cin>>num;
    switch (num){
        case 0:
        cout<<"You chose metric system, enter your value in metres - ";
        cin>>m;
        fti = m * 3.28084;
        ftfl = m * 3.28084;
        ft = (ftfl - fti)*12.;
        cout<<fti<<"'"<<ft<<"''";
        break;
        case 1:
        cout<<"You chose imperial system, enter your value in ft - ";
        cin>>ft;
        cout<<"Enter inches - ";
        cin>>in;
        m = (ft / 3.28084)+((in/12)/3.28084);
        cout<<m<<"m";
        break;
    }
    
    return 0;
}
