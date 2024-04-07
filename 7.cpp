// Given a signed 32-bit integer x, return x with its digits reversed. 
// If reversing x causes the value to go outside the signed 32-bit
//  integer range [-231, 231 - 1], then return 0.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number = ";
    cin>>num;
    int reverse_num=0;
    while(num!=0){
        int last_digit=num%10;
        if((reverse_num> INT_MAX/10) || (reverse_num<INT_MIN/10)){
            cout<< 0;
        }
        reverse_num=last_digit+ (reverse_num*10);
        num=num/10;
    }cout<< reverse_num;
}