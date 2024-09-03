
# C++ Programming Notes

## Functions

**Functions** in C++ are blocks of code designed to perform specific tasks. Functions allow code reusability, modularity, and better organization of programs. In C++, there are two main types of functions: **built-in functions** (provided by the C++ Standard Library) and **user-defined functions** (created by the programmer).

### Key Components of Functions

1. **Return Type**: The data type of the value returned by the function (e.g., `int`, `void`, `float`).
2. **Function Name**: The name that identifies the function (e.g., `sum`, `print`).
3. **Parameters (Arguments)**: The values or variables passed to the function when it is called.
4. **Function Body**: The block of code that defines the actions to be performed by the function.

### Syntax of a Function

```cpp
return_type function_name(parameter_list) {
    // Function body
    // Statements to be executed
}
```

### Example of a Function

```cpp
#include <iostream>
using namespace std;

// Function to calculate the sum of two numbers
int sum(int a, int b) {
    return a + b;
}

int main() {
    int result = sum(5, 3);
    cout << "Sum: " << result << endl; // Output: Sum: 8
    return 0;
}
```

### Types of Functions

- **Built-in Functions**: Functions provided by C++ (e.g., `sqrt()`, `pow()`, `cout`).
- **User-defined Functions**: Functions defined by the user to perform specific tasks.

## Function Prototypes

A **function prototype** is a declaration of a function that specifies the function's name, return type, and parameters without including the function body. Function prototypes are necessary when defining a function after it is called in the program, as they inform the compiler about the function's existence and its interface.

### Syntax of a Function Prototype

```cpp
return_type function_name(parameter_list);
```

- **return_type**: The type of value the function returns.
- **function_name**: The name of the function.
- **parameter_list**: The list of parameters (types and optionally names) that the function takes.

### Example of a Function Prototype

```cpp
#include <iostream>
using namespace std;

// Function prototype
int multiply(int, int);

int main() {
    int result = multiply(4, 5); // Function call
    cout << "Product: " << result << endl; // Output: Product: 20
    return 0;
}

// Function definition
int multiply(int a, int b) {
    return a * b;
}
```

### Key Points
- **Declaration Before Use**: Function prototypes allow you to declare a function before its use in the program, ensuring the compiler recognizes the function during the initial compilation pass.
- **Parameter Names**: In function prototypes, parameter names are optional, but their types are required.

## Actual vs. Formal Parameters

- **Actual Parameters**: The actual values passed to the function when it is called. These are also known as **arguments**.

  ```cpp
  int result = sum(5, 3); // 5 and 3 are actual parameters
  ```

- **Formal Parameters**: The variables declared in the function definition that receive the values of the actual parameters. These are also known as **parameters**.

  ```cpp
  int sum(int a, int b) { // a and b are formal parameters
      return a + b;
  }
  ```

### Example of Actual and Formal Parameters

```cpp
#include <iostream>
using namespace std;

void displaySum(int x, int y) { // x and y are formal parameters
    cout << "Sum: " << x + y << endl;
}

int main() {
    int a = 10;
    int b = 20;
    displaySum(a, b); // a and b are actual parameters
    return 0;
}
```

### Key Points
- **Scope**: Actual parameters are in the scope of the calling function, while formal parameters are in the scope of the called function.
- **Value Passing**: By default, C++ uses **pass-by-value**, meaning that the actual parameter values are copied into the formal parameters.

