#include<iostream>
using namespace std;
int bin(int num)
{
    int bin = 0, k = 1;

    while (num)
    {
        bin += (num % 2) * k;
        k *= 10;
        num /= 2;
    }

    return bin;
}
int main()
{
    int i=0;
    int number;
    cout << "\n";
    cin >>number;
    cout<<bin(number)<<"\n";
    int a = bin(number);
    cout<<a;
    for(;a>0;i++){
            a/=10;
        }
    cout<<"\n"<<i<<"\n";
    int A[15];
    
    for(int r=0; r<(16-i);r++){
        A[r]=0;
    }
   a = bin(number);
    int TEMP=a;
    for(int r=15; r>0;r--){
        A[r]=TEMP%10;
        TEMP /= 10;
    }
    for(int re; re<15;re++){
       cout<<A[re];
    }
    cout<<A[15];
    if((A[0]==A[15])&&(A[1]==A[14])&&(A[2]==A[13])&&(A[3]==A[12])&&(A[4]==A[11])&&(A[5]==A[10])&&(A[6]==A[9])&&(A[7]==A[8])){
        cout<<"\nyes";
    }
    else{
        cout<<"\nno";
    }

    return 0;
}
