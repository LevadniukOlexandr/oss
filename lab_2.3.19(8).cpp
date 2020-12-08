#include <iostream>

using namespace std;

int main() {
    int n,i,sum,wait;
    sum=1;
    cout<<"Enter your factorial number : ";
    cin>>n;
    if(n>=0){
    for(i=1;i<=n;i++){
        wait = i;
        sum = wait*sum;
    }
    cout<<sum;
    }
    else{cout<<"Error";}
    
}
