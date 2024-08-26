# C++ Programming Notes

## 1. Constants in C++

Constants in C++ are variables whose value cannot be changed once assigned. They are useful for defining values that should remain constant throughout the program, such as mathematical constants, fixed configuration values, etc.

### Syntax
To define a constant, use the `const` keyword before the variable type:

```cpp
const int MAX_VALUE = 100;
const double PI = 3.14159;
```

- **`const` Keyword**: This is used to declare a constant variable.
- Once a constant is defined, its value cannot be modified later in the code.

### Example
```cpp
#include<iostream>
using namespace std;

int main() {
    const int MAX_ATTEMPTS = 5; // This constant cannot be changed later
    cout << "Maximum number of attempts allowed: " << MAX_ATTEMPTS << endl;
    // MAX_ATTEMPTS = 10; // This would cause a compilation error
    return 0;
}
```

## 2. Manipulators in C++

Manipulators are used to format the output of C++ programs. The most common manipulators include `endl` and `setw()`.

### Common Manipulators

1. **`endl`**
   - Moves the cursor to the next line.
   - It is equivalent to using `"\n"` in C++.
   
   ```cpp
   cout << "Hello, World!" << endl; // Moves to the next line after printing
   cout << "This is a new line." << endl;
   ```

2. **`setw()`**
   - This manipulator is used to set the width of the output.
   - It is included in the `<iomanip>` header file.
   - Useful for aligning text output or formatting numbers.

   ```cpp
   #include <iostream>
   #include <iomanip> // Required for setw()
   using namespace std;

   int main() {
       cout << setw(10) << "Hello" << setw(10) << "World" << endl; 
       cout << setw(10) << 123 << setw(10) << 456 << endl;
       return 0;
   }
   ```

   - **`setw(10)`**: Sets the width of the next output to 10 characters. If the output is less than 10 characters, it pads with spaces.

## 3. Operator Precedence and Associativity

Operator precedence and associativity determine the order in which operators are evaluated in expressions. This is crucial in understanding how complex expressions are processed by the compiler.

### Operator Precedence

- **Operator Precedence**: Defines the order in which different operators in an expression are evaluated.
- Operators with higher precedence are evaluated before operators with lower precedence.
- For example, in the expression `3 + 4 * 5`, the multiplication (`*`) has higher precedence than addition (`+`), so `4 * 5` is evaluated first.

### Operator Associativity

- **Associativity**: Defines the direction (left to right or right to left) in which operators of the same precedence level are evaluated.
- Most operators have **left-to-right** associativity, meaning they are evaluated from left to right. For example, the subtraction operator `-` in the expression `100 - 20 - 5` is evaluated as `(100 - 20) - 5`.
- Some operators, like the assignment operator `=`, have **right-to-left** associativity. For example, in `a = b = c`, it is evaluated as `a = (b = c)`.

### Example

```cpp
#include<iostream>
using namespace std;

int main() {
    int a = 10, b = 5, c = 2;
    int result = a - b + c; // '-' and '+' have the same precedence, associativity is left-to-right
    cout << "Result: " << result << endl; // Output will be 7 (10 - 5 + 2)
    
    result = a + b * c; // '*' has higher precedence than '+', so it is evaluated first
    cout << "Result: " << result << endl; // Output will be 20 (10 + (5 * 2))
    
    return 0;
}
```

- In the first example, subtraction and addition have the same precedence and are evaluated from left to right.
- In the second example, multiplication has higher precedence than addition, so it is evaluated first.

By understanding constants, manipulators, and operator precedence and associativity, you can write more accurate and efficient C++ programs.
