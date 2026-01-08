#include <iostream>
using namespace std;
// Pass by value:
// A copy of the variable is passed to the function.
// Changes made inside the function do NOT affect the original variable.
void change(int a) {
    a = 40;
}

// Pass by reference using pointer:
// The address of the variable is passed.
// Changes made inside the function affect the original variable.
void changeByPointer(int *p) {
    *p = 50;
}

// Pass by reference using reference (alias):
// No new variable is created.
// The reference acts as another name for the same memory location.
void changeByReference(int &q) {
    q = 90;
}

int main() {

    //Pass by Value
    int a = 10;
    change(a);
    cout << a << endl;   //10 (original value is unchanged)

    // Pass by Reference (Pointer)
    int z = 100;
    changeByPointer(&z);
    cout << z << endl;   // Output: 50 (original value is changed)

    /*
    There are two ways to pass by reference in C++:
    1. Using pointers
    2. Using references (alias)

    Reference means:
    - It is another name for the same variable
    - No new memory is created
    - Both refer to the same memory address
    */

    //Pass by Reference (Reference / Alias)
    int j = 30;
    changeByReference(j);
    cout << j << endl;   // Output: 90 (same memory location is modified)

    return 0;
}
