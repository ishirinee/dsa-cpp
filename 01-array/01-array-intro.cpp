/*
* INTRODUCTION TO ARRAYS
*
* An array is 
* - a collection of elements,
* - of the same type (in C++),
* - placed in contiguous memory locations.
* 
* In C++, a character is 1 byte. 
* A character array may look like this:
*
*           <-1byte->
* Address  100      101     102     103     104
*            _______________________________________
*           |       |       |       |       |       |
*           |  'a'  |  'b'  |  'c'  |  'd'  |  'e'  |
*           |_______|_______|_______|_______|_______|
* index ->     [0]     [1]     [2]     [3]     [4]
* length = 5 
*
* Note that character arrays have to be terminated with a null character '\0'.
*
* If the above was an integer array, 
* - addresses may be 100, 104, 108, etc., 
* - each integer requires 4 bytes.
*/

#include <iostream>
// iostream makes input-output devices available to this program.

using namespace std;

int main () {
    
    // CREATE ARRAY

    int a[10];
    // Note: int = 4 bytes
    // Allocates 100 x 4 bytes = 400 bytes during compile time.
    // This is called static memory allocation.
    // As the array is uninitialized with any value, they contain garbage.
    
    int b[10] = {0};
    // Partially initialized array will contain '0' for uninitialized elements.

    int c[10] = {1, 2, 3}; 
    // Remaining elements will be '0';

    int d[] = {1, 2, 3};
    // It is optional to define the size of an array.

    int s[] = {"apple", "mango", "guava"};
    // Arrays can be created with complex datatypes.
    // In this case, it is an array of strings, where each string is a character array in themselves.

    // INPUT TO ARRAY
    
    int n; 
    cout << "Enter the number of elements :";
    cin >> n;

    for ( int i = 0 ; i < n ; i++ ) {
        cin >> a[i];
    }

    // UPDATE AN ARRAY

    for ( int i = 0 ; i < n ; i++ ) {
        a[i] = a[i]*2;
    }

    // OUTPUT FROM ARRAY

    for ( int i = 0 ; i < n ; i++ ) {
        cout << a[i] << " | ";
    }
    cout << endl;

    return 0;
}