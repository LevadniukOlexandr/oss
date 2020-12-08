#include <iostream>
using namespace std;
int main(void) {
    int n;
cout<<"Enter the size of the side which you want to see in the square : ";
cin>>n;
if(n>0 && n<=80){
cout << '+';
for(int i = 0; i < n; i++)
cout << '-';
cout << '+' << endl;
for(int i = 0; i < n; i++) {
cout << '|';
for(int j = 0; j < n; j++)
cout << ' ';
cout << '|' << endl;
}
cout << '+';
for(int i = 0; i < n; i++)
cout << '-';
cout << '+' << endl;
return 0;
    }
    else {
        cout<<"The size which you entered was not correct!! (the limits are 1-80)";
    }
