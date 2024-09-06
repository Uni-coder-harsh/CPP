
# C++ Programming Notes

## Inline Function

An **inline function** is a function that is expanded in line when it is called. When an inline function is invoked, the compiler replaces the function call with the actual function code, which can result in faster execution time by eliminating the overhead of function calls.

### How to Use Inline Functions

To define an inline function, you use the `inline` keyword before the function definition. The syntax is as follows:

```cpp
inline return_type function_name(parameter_list) {
    // Function body
}
```

### Example of Inline Function

```cpp
#include <iostream>
using namespace std;

// Inline function definition
inline int square(int x) {
    return x * x;
}

int main() {
    int number = 5;
    cout << "Square of " << number << " is: " << square(number) << endl; // Output: Square of 5 is: 25
    return 0;
}
```

### When to Use Inline Functions

- **Performance Improvement**: Use inline functions when the function is small and frequently called, as they can reduce function call overhead.
- **Code Readability**: Inline functions can make code cleaner by keeping related functionality in one place.

### When Not to Use Inline Functions

- **Large Functions**: Do not use inline functions for large functions, as they can increase the code size due to the code being replicated at each call site.
- **Recursion**: Avoid using inline functions if they are recursive, as this can lead to infinite code expansion.
- **Debugging Difficulty**: Inline functions can complicate debugging, as the function calls may not appear in the stack trace.

---

## Default Arguments

**Default arguments** allow you to define a default value for one or more function parameters. If the caller does not provide an argument for that parameter, the default value is used.

### How to Use Default Arguments

To specify a default argument, provide the default value in the function declaration or definition.

### Example of Default Arguments

```cpp
#include <iostream>
using namespace std;

// Function with default arguments
void greet(string name, string message = "Hello") {
    cout << message << ", " << name << "!" << endl;
}

int main() {
    greet("Alice"); // Uses default message
    greet("Bob", "Welcome"); // Uses custom message
    return 0;
}
```

**Output:**
```
Hello, Alice!
Welcome, Bob!
```

### When to Use Default Arguments

- **Optional Parameters**: Use default arguments when certain parameters are optional, allowing for more flexible function calls.
- **Overloading Simplicity**: Default arguments can reduce the need for function overloading by providing default behavior.

### When Not to Use Default Arguments

- **Ambiguity**: Avoid default arguments in situations where their use can lead to ambiguity, especially in function overloading.
- **Complexity**: Do not use default arguments if they make the function signature complex or hard to read.

---

## Constant Arguments

**Constant arguments** are function parameters that are passed by reference or value but cannot be modified within the function. You use the `const` keyword to declare constant arguments.

### How to Use Constant Arguments

To declare a constant argument, prefix the parameter type with `const`.

### Example of Constant Arguments

```cpp
#include <iostream>
using namespace std;

// Function with constant argument
void displayValue(const int value) {
    // value = 10; // This will cause a compilation error
    cout << "Value: " << value << endl;
}

int main() {
    int num = 42;
    displayValue(num); // Output: Value: 42
    return 0;
}
```

### When to Use Constant Arguments

- **Safety**: Use constant arguments to ensure that the passed values cannot be modified, which helps prevent accidental changes to data.
- **Clarity**: Constant arguments improve code readability by indicating that the function will not modify the input parameters.

### When Not to Use Constant Arguments

- **Modifiable Data Required**: Avoid using constant arguments when the function needs to modify the input data.
- **Unnecessary Restrictions**: Do not use constant arguments when there is no need for immutability, as they may restrict flexibility.

---

### Summary

- **Inline Functions**: Enhance performance by reducing function call overhead but should be small and simple.
- **Default Arguments**: Allow for flexible function calls with optional parameters, but be cautious of ambiguity.
- **Constant Arguments**: Protect function parameters from modification, ensuring data integrity, but should only be used when immutability is required.

