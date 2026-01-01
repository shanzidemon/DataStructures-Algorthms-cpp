//# Dereference mean value of a adress.
#include<iostream>
using namespace std;
int main(){
int x=10;
cout<<&x<<endl;
cout<<"The value of x:"<<*(&x)<<endl;
int* y=&x; //store the memory adress of x
cout<<"The Value of x is :"<<*y<<endl;

int** z=&y; //store the memory adress of y;
//whichh contain the value of x;

cout<<"The value of is :"<<*z<<endl;
cout<<"-------"<<endl;

int p=10;
cout<<"The adress of p is "<<&p<<endl;
int* q=&p;
cout<<"The value of dereference q is "<<*q<<endl; //Q er vitor j adress ache tar value.
int** r=&q;
cout<<"The last value is "<<*r<<endl;
cout<<"The most last value is "<<**r<<endl;
}