#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Memory adrees of x is "<<&x<<endl; // here it will show the memory adress of x.

    // # Basically pointer is a variable which store memory adress of another variable.
    //Declaration of a pointer
    int* pointer1=&x;
    int *pointerS=&x; //both declaration is the same thing;
    cout<<"The Memory adress of x is "<<pointer1<<endl;
    // upper p store the memory adress of variable x;
    // so when we show memory adress of x and value of pointer1,both are same;

    // we have to declare same data type for value and memory adress;
    // for example if we want to store memory adress of float then we have to use float data type for declare pointer;

    float y;
    float* pointerY=&y;
    cout<<"Memory adress of y is:"<<&y<<endl;
    cout<<"Memory adress of y is:"<<pointerY<<endl;
    
    //we can print the memory adress of a pointer variable;
    cout<<"The memory adress of pointerY: "<<&pointerY<<endl;

    // #Pointer to Pointer
    //again we can save this memory adress of a pointer in another pointer but we have to declare the new pointer with double astric sighn.
    float** pointerZ=&pointerY;
    cout<<"The memory adrss of pointer Y:"<<pointerZ<<endl;

     // here we can again store another pointer to pointer in another pointer with tripple astric sighn.
    float*** pointerZ1=&pointerZ;
    cout<<"The Memory adress of PointerZ :"<<pointerZ1;
   




}