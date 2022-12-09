#include<iostream>
using namespace std;

int main(){
    int number =1;
    int eve=0;
    int odd=0;
 
 while(number != 0){   
    cout << "Enter an integer: ";
    cin >> number;
    if(number != 0){
        if(number%2 == 0){
        eve++;
        }
        else{
        odd++;
        }
    }
    }
    
    cout << "#Even numbers = " << eve << "\n";
    cout << "#Odd numbers = " << odd;
    return 0;
}