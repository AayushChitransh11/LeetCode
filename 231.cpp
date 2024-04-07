// Given an integer n, return true 
// if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists
//  an integer x such that n == 2^x.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number = ";
    cin>>num;
int target=1;
   for(int i=0;i<=30;i++){
    
    if(num==target){
         cout<<"True";
        break;
    }
    if(target<INT_MAX/2)
    target*=2;
   cout<<"False";
   } 
}