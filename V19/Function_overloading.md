
# C++ Programming Notes

## Function Overloading

**Function Overloading** in C++ is a feature that allows multiple functions with the same name but different parameters to be defined. It enables functions to handle different types or numbers of inputs while maintaining the same function name, leading to improved code readability and usability.

### Key Concepts:
- **Same Function Name**: Functions share the same name but must differ in their parameter list (i.e., different number or types of parameters).
- **Different Parameter List**: The functions must have different signatures (either by changing the number of parameters or their types).
- **Compile-Time Polymorphism**: Function overloading is an example of compile-time polymorphism where the function to be executed is determined at compile time.

### Rules for Function Overloading:
1. **Number of Parameters**: Functions can have different numbers of parameters.
2. **Type of Parameters**: Functions can differ in the types of parameters.
3. **Order of Parameters**: If the order of parameters is different, overloading is allowed.
4. **Return Type**: The return type alone cannot be used to distinguish overloaded functions.

---

### Example 1: Function Overloading with Different Number of Parameters

```cpp
#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Overloaded function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "Sum of 2 and 3: " << add(2, 3) << endl;
    cout << "Sum of 1, 2 and 3: " << add(1, 2, 3) << endl;
    return 0;
}
```

**Output**:
```
Sum of 2 and 3: 5
Sum of 1, 2 and 3: 6
```

### Example 2: Function Overloading with Different Types of Parameters

```cpp
#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Overloaded function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "Sum of integers 2 and 3: " << add(2, 3) << endl;
    cout << "Sum of doubles 2.5 and 3.5: " << add(2.5, 3.5) << endl;
    return 0;
}
```

**Output**:
```
Sum of integers 2 and 3: 5
Sum of doubles 2.5 and 3.5: 6
```

### Example 3: Function Overloading with Different Order of Parameters

```cpp
#include <iostream>
using namespace std;

// Function to print two integers
void print(int a, double b) {
    cout << "Integer: " << a << ", Double: " << b << endl;
}

// Overloaded function to print two numbers with swapped types
void print(double a, int b) {
    cout << "Double: " << a << ", Integer: " << b << endl;
}

int main() {
    print(3, 4.5);
    print(5.5, 7);
    return 0;
}
```

**Output**:
```
Integer: 3, Double: 4.5
Double: 5.5, Integer: 7
```

---

### When to Use Function Overloading:
- When multiple functions perform the same operation but with different types or numbers of inputs.
- To improve code readability and reduce the number of unique function names in a program.
- When the same logical operation is required on different data types (e.g., adding integers and doubles).

### Advantages of Function Overloading:
- **Code Readability**: Helps keep the code clean and easy to read by avoiding different function names for similar operations.
- **Modularity**: Reduces the need to write repetitive code for different data types or input formats.
- **Type Safety**: Since the function selection is done at compile time, the correct function is chosen based on the argument types.

### Limitations of Function Overloading:
- **Ambiguity**: If the function signatures are too similar, it can lead to ambiguous situations where the compiler cannot determine which function to call.
- **Complexity**: Overloading can increase code complexity if not used carefully, especially when many versions of the same function exist.

---

### Summary:
- **Function Overloading** allows multiple functions with the same name but different parameters.
- It provides compile-time polymorphism and is a key feature of C++ to enhance code reusability and readability.
- Overloaded functions must differ in their **number of parameters**, **types of parameters**, or the **order of parameters**.

