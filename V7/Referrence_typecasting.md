
# C++ Programming Notes

## 1. Built-in Data Types

In C++, built-in data types are used to declare variables. Here’s an example of how to use them:

```cpp
#include<iostream>
using namespace std;

int c = 45;

int main() {
    int a, b, c;

    cout << "Enter the 1st number" << endl;
    cin >> a;
    cout << "Enter the 2nd number" << endl;
    cin >> b;

    c = a + b;
    cout << "The sum of the numbers is: " << c << endl; // Local variable
    cout << "The global variable is: " << ::c << endl; // Global variable denoted by "::"

    return 0;
}
```

- **Local vs Global Variables**: 
  - `c` in `main()` is a local variable.
  - `::c` is a global variable declared outside of `main()`.

## 2. Float, Double, and Long Double Literals

C++ supports different floating-point data types:

```cpp
#include<iostream>
using namespace std;

int main() {
    float d = 3.14f; // Float literal
    long double e = 3.14L; // Long double literal

    cout << "The value of d is " << d << endl;
    cout << "The value of e is " << e << endl;

    return 0;
}
```

- **Float Literal**: Represented by `f` or `F` (e.g., `3.14f`).
- **Long Double Literal**: Represented by `l` or `L` (e.g., `3.14L`).

## 3. Reference Variables

Reference variables are used to create an alias for another variable:

```cpp
#include<iostream>
using namespace std;

int main() {
    float x = 435;
    float &y = x; // y is a reference to x

    cout << y << endl; // Outputs the value of x, which is 435

    return 0;
}
```

- **Reference Variable**: `y` is a reference to `x`, so any changes to `y` affect `x`.

## 4. Type Casting

Type casting is used to convert a variable from one type to another:

```cpp
#include<iostream>
using namespace std;

int main() {
    float a = 34.474;

    cout << a << endl; // Outputs the float value
    cout << int(a) << endl; // Explicitly casts float to int
    cout << (int)a << endl; // Another way to explicitly cast
    int b = int(a); // Assigns cast value to an integer variable
    cout << b << endl; // Outputs the integer value

    return 0;
}
```

- **Explicit Casting**: `(int)a` converts `a` from `float` to `int`, truncating the decimal part.

```
