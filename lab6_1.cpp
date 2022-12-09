#include<iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int number=1;
    int Odd=0;
    int Even=0;
    while(number != 0){
    cout << "Enter an integer: ";
    cin >> number;
    if(number%2 == 0){
        Even++ ;
    }else{
        Odd++ ;
    }
    }

    cout << "#Even numbers = ";
    cout <<  Even-1;
    cout << "\n#Odd numbers = ";
    cout <<  Odd;
    return 0;
}
