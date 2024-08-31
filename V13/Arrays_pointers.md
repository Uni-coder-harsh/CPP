
# C++ Programming Notes

## Arrays

**Arrays** in C++ are collections of elements of the same data type stored in contiguous memory locations. They allow you to store multiple values in a single variable, making it easy to manage groups of related data.

### Creating Arrays

Arrays can be created in several ways in C++. Here are some common methods:

1. **Declaration and Initialization**

   You can declare an array and specify its size or initialize it with values:

   ```cpp
   int numbers[5]; // Declare an array of 5 integers
   int scores[5] = {90, 85, 78, 92, 88}; // Declare and initialize an array
   ```

2. **Automatic Size Deduction**

   You can let the compiler automatically determine the size of the array based on the number of initializers:

   ```cpp
   int values[] = {10, 20, 30, 40}; // Size is automatically set to 4
   ```

3. **Multidimensional Arrays**

   You can create arrays with more than one dimension, often called matrices or grids:

   ```cpp
   int matrix[3][4]; // A 3x4 matrix (2D array)
   int matrix2[2][2] = {{1, 2}, {3, 4}}; // Declare and initialize a 2x2 matrix
   ```

### Modifying Array Values

You can modify the values in an array by accessing each element using its index:

```cpp
int numbers[3] = {1, 2, 3};
numbers[0] = 10; // Change the first element to 10
numbers[2] = 30; // Change the third element to 30
```

#### Example: Working with Arrays

```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[3] = {5, 10, 15};
    
    // Modifying array elements
    numbers[0] = 20;
    numbers[2] = 25;

    // Printing the array elements
    for (int i = 0; i < 3; i++) {
        cout << "Element at index " << i << " : " << numbers[i] << endl;
    }

    return 0;
}
```

### Key Points
- **Indexing**: Array elements are accessed using their indices, starting from 0.
- **Fixed Size**: The size of an array is fixed at the time of declaration and cannot be changed dynamically.
- **Memory Allocation**: Arrays are stored in contiguous memory locations, which allows efficient access and manipulation.

## Array and C++ Pointers

Arrays and pointers are closely related in C++. The name of an array acts as a pointer to its first element, and you can use pointers to manipulate array elements.

### Pointer Arithmetic

**Pointer arithmetic** allows you to navigate through an array using pointers. The arithmetic operations are based on the size of the data type the pointer points to.

- **Address Calculation**: The address of an element at index `i` in an array can be calculated using the formula:
  
  \[
  \text{Address of } arr[i] = \text{Base Address} + i \times \text{Size of Data Type}
  \]

#### Example of Pointer Arithmetic

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};
    int* ptr = arr; // Pointer to the first element of the array

    cout << "Pointer value: " << *ptr << endl; // Output: 10

    ptr++; // Move pointer to the next element
    cout << "Pointer value after increment: " << *ptr << endl; // Output: 20

    ptr += 2; // Move pointer two positions ahead
    cout << "Pointer value after adding 2: " << *ptr << endl; // Output: 40

    return 0;
}
```

### Working with Arrays and Pointers

You can use pointers to manipulate array elements directly. Here’s an example of how to use pointers to iterate through an array:

```cpp
#include <iostream>
using namespace std;

int main() {
    int array[] = {5, 10, 15, 20};
    int* ptr = array; // Pointer to the first element of the array

    for (int i = 0; i < 4; i++) {
        cout << "Element at index " << i << " using pointer: " << *(ptr + i) << endl;
    }

    return 0;
}
```

### Key Points
- **Array Names as Pointers**: The name of an array is a constant pointer to the first element.
- **Pointer Arithmetic**: Pointers can be incremented or decremented to point to the next or previous element in an array, respectively.
- **Efficient Access**: Using pointers with arrays allows for efficient element access and manipulation.

