// Given an integer number n, return the difference between the product
//  of its digits and the sum of its digits.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number = ";
    cin>>num;

    int product=1, sum=0;
    while(num!=0){
    int last_digit=num%10;
    product*=last_digit;
    sum+=last_digit;
    num=num/10;
    }
    

    int difference=product-sum;
    cout<<difference;
}