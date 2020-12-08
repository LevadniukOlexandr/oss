#include <iostream>

using namespace std;

int main(){
    cout<<"Enter your number : ";
    int x;
    cin>>x;
    int sum = 0;
    int per = 1;
    int ant = 1;
    for(int i =2; i<x; i++){
        sum = per+ant;
        per = ant;
        ant = sum;
    }
   cout<<sum; 
}
