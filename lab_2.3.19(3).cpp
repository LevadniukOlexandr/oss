#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int pow;
    long num =1;
    cout<<"Enter pow which you want to apply to 2 (it has to be between -1 and 63) : ";
    cin>>pow;
     if(pow==0)
        {
            cout<<"any num in the 0 pow = 1!";
        }
    if(pow<=63 && pow>=1){
        int i;
        for (i=1; i<=pow; i++){
            num=num*2;
            
        }
       
        cout<<num;
        
        
        
        
    }
    
}
