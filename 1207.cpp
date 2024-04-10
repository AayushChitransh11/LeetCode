// Given an array of integers arr, return true if the number of 
// occurrences of each value in the array is unique or false otherwise.

#include <iostream>
using namespace std;

bool findUnique(int arr[],int size){
    int occur=0;
    for(int i=0;i<size;i++){
        if(arr[i]==-1)
        {
            continue;
            }
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                occur++;
                arr[j]=-1;
            }
        }
        for(int k=i+1;k<size;k++){
            if(arr[k]==occur){
                return false;
            }
        }
        
    }return true;
}
int main(){
    int arr[]={-3,0,1,-3,1,1,1,-3,10,0};
    int size=10;
    int ans=findUnique(arr,size);
    if(ans){
        cout<<"true";
    }else{
        cout<<"false";
    }
}