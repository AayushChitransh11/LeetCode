// Write a function that takes the binary representation of a 
// positive integer and returns the number of 
// set bits
//  it has (also known as the Hamming weight).

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a positive number = ";
    cin>>num;

    int setbits=0;
    int non_setbits=0;
   while(num!=0){
    if(num&1){
        setbits++;
    }
    num=num>>1;
   }
    cout<<setbits<<endl;
    
}