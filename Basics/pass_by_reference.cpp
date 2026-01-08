#include<iostream>
using namespace std;
void change(int a){
    a=10;
}

void changeReference(int *p){
    *p=50;
}

int main(){
// Pass by value: a copy of the variable is passed to the function,
// so the original value in main is not changed.
int a=10;
change(a);
cout<<a<<endl;//10
// Pass by reference means the address of the variable is sent to the function.
// So, changing the value in the function also changes the value in main.

//Lower example of pass by reference
int z=100;
changeReference(&z);
cout<<z<<endl;//50
    return 0;
}