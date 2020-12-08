#include <iostream>

using namespace std;

int main()
{
    string asterisks;
    
    int number;
    
    cout << "Please enter a number greater than 2 and less than 9: ";
    cin >> number;
    
    if (number <= 2 || number >= 9)
        return 1;
        
    for(int i = 0; i < number - 1; ++i){
        for (int j = 0; j < 3; ++j){
            for(int k = 0; k < 2 * number + 1; ++k)
                if(number - i == k || number + i == k){
                    asterisks = asterisks + "*";
                }
                else asterisks = asterisks + " ";
        }
        asterisks = asterisks + "\n";
    }
    
    for(int i = 0; i < 3; ++i){
        asterisks += " ";
        for(int j = 0; j < 2 * number - 1; ++j){
            asterisks = asterisks + "*";
        }
        asterisks += " ";
    }
    asterisks = asterisks + "\n";
    cout << asterisks;

    return 0;

}
