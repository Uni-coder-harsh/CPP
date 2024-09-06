
# C++ Programming Notes

## Recursion

**Recursion** is a process in which a function calls itself, either directly or indirectly, to solve a problem. It is generally used to break down a problem into smaller subproblems.

### Key Points:
- **Base Case**: A condition that stops the recursion. Without it, the recursion will run infinitely.
- **Recursive Case**: The part where the function calls itself with a smaller or simpler input.

---

### Example 1: Factorial

The factorial of a non-negative integer `n` is the product of all positive integers less than or equal to `n`. It is denoted by `n!`.

\[
n! = n \times (n-1) \times (n-2) \times ... \times 1
\]

#### Factorial using Recursion:

```cpp
#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case
    }
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    return 0;
}


**Output**:
```
Factorial of 5 is: 120
```

---

### Example 2: Fibonacci Series

The **Fibonacci series** is a sequence of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1.

\[
F(n) = F(n-1) + F(n-2)
\]

The first few terms are: 0, 1, 1, 2, 3, 5, 8, 13, ...

#### Fibonacci using Recursion:

```cpp
#include <iostream>
using namespace std;

// Recursive function to calculate Fibonacci number
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Base case
    }
    if (n == 1) {
        return 1; // Base case
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int terms = 10;
    cout << "Fibonacci series: ";
    for (int i = 0; i < terms; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}
```

**Output**:
```
Fibonacci series: 0 1 1 2 3 5 8 13 21 34
```

---

### Example 3: Sum of Natural Numbers

The sum of the first `n` natural numbers is given by:

\[
S(n) = n + (n-1) + (n-2) + ... + 1
\]

#### Sum of Natural Numbers using Recursion:

```cpp
#include <iostream>
using namespace std;

// Recursive function to calculate sum of natural numbers
int sum(int n) {
    if (n == 0) {
        return 0; // Base case
    }
    return n + sum(n - 1); // Recursive case
}

int main() {
    int num = 10;
    cout << "Sum of first " << num << " natural numbers is: " << sum(num) << endl;
    return 0;
}
```

**Output**:
```
Sum of first 10 natural numbers is: 55
```

---

### Example 4: Power Calculation

To calculate `x` raised to the power `n` (i.e., `x^n`), recursion can be used as:

\[
x^n = x \times x^{n-1}
\]

#### Power Calculation using Recursion:

```cpp
#include <iostream>
using namespace std;

// Recursive function to calculate x^n
int power(int x, int n) {
    if (n == 0) {
        return 1; // Base case
    }
    return x * power(x, n - 1); // Recursive case
}

int main() {
    int base = 2, exponent = 4;
    cout << base << " raised to the power of " << exponent << " is: " << power(base, exponent) << endl;
    return 0;
}
```

**Output**:
```
2 raised to the power of 4 is: 16
```

---

### General Structure of Recursive Function

1. **Base Case**: A condition that stops the recursion.
2. **Recursive Case**: A smaller version of the original problem is solved by calling the function itself.

```cpp
return_type function_name(parameters) {
    if (base_condition) {
        // Return base value
    }
    return function_name(smaller_problem); // Recursive call
}
```

---

### When to Use Recursion:
- When a problem can be broken down into smaller, similar subproblems.
- For problems like tree traversals, factorial, Fibonacci series, etc.

### When Not to Use Recursion:
- For large input sizes where recursion can lead to **stack overflow** due to too many recursive calls.
- When iterative solutions are more efficient in terms of time and space complexity.

---

### Advantages of Recursion:
- **Code simplicity**: Recursion can make complex problems easier to solve and understand.
- **Modularity**: Recursive solutions can be more modular and easier to maintain.

### Disadvantages of Recursion:
- **Overhead**: Recursive calls involve function call overhead.
- **Stack overflow**: Deep recursion can lead to stack overflow if the recursion depth is too high.

---

### Summary:
- **Recursion** is a technique where a function calls itself to solve a problem.
- **Base case** is essential to stop the recursion.
- Recursion is useful for problems like factorial, Fibonacci series, sum of natural numbers, and power calculations.

