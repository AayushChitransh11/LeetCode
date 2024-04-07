// The complement of an integer is the integer you get when you 
// flip all the 0's to 1's
//  and all the 1's to 0's in its binary representation.
#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number = ";
    cin>>number;

    int num=number;
    int mask=0;
    if(num==0){
        cout<<1;
    }
    while(num!=0){
        mask=(mask<<1)|1;
        num = num>>1;
    }
   int target=(~number) & mask;
   cout<<target;

    
}