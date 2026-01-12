#include<iostream>
using namespace std;
int main(){
int arr[5];
int x=40;
//arr[0]=&x;
//we can not store like this.if want to store memory adress in array.
//we have to declare array of pointer like 

int *arr2[10];
arr2[0]=&x;
cout<<&x<<endl;
cout<<arr2[0]<<endl;


}