#include <iostream>

using namespace std;

int main(){
    int cal, num, i;
    i=0;
    cout<<"Enter your num: ";
    cin>>num;
    cal =0;
    i = 0;
    if(num>=0){
        while(num){
    cal+=num & 1;
    num>>=1;
    }
    cout<<cal;
    
}
}
