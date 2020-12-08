#include <iostream>

using namespace std;

int main(){
    
    int number;
    label1:
    cout<<"Введите число:\n";
    cin>>number;
    int sum=0;
    
    if(number>=0)
    {
        // 538
        while(number)
        {
            sum=sum+(number&1);
            number>>=1;
        }
        cout<<sum;
    }
    else
    {
        cout<<"Неправильное число, введите ещё раз";
        goto label1;
    }
    
}
