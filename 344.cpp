#include <iostream>
#include <vector>
using namespace std;

// Write a function that reverses a string. 
// The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.

int getLen(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }return count;
}
void reverseStr(char name[],int size){
    int start=0;
    int end=size-1;

    while(start<end){
        swap(name[start],name[end]);
        start++;
        end--;
    }
}
int main(){
    char name[20];
    cout<<"Enter a name - > ";
    cin>>name;

    int count=getLen(name);
    reverseStr(name,count);
    
    cout<<"Reversed string -> "<<name<<endl;

    

}