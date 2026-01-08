#include<iostream>
using namespace std;


int main(){
//Array is a pointer in c++ and it always point 0 index of a arry.
int arr[]={1,2,3,4,5,6,7,8,9};
cout<<"adress of arr is "<<arr<<endl; //0x16b326c54
cout<<"Value of Arr is "<<*arr<<endl;//it locate index 1;
cout<<"index 0 adress of arr id "<<&arr[0]<<endl; //0x16b326c54 -->Both are same
//array is constant pointer;
//pointer value can be change but array is a special pointer which is immutable;

    return 0;
}