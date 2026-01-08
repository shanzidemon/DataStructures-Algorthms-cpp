#include<iostream>
using namespace std;
int main(){
    //If we declare a pointer and not assaign value then it will store gerbage value or random memory adress.
    //thats why we use null pointer.
    int*p;
    cout<<p<<endl;//0x1f68b4060%    
    
    //declaration of null pointer;
    int* q=NULL;
    cout<<q;//0x0%     
    
    //we can not dereference Null pointer;
}