
---

# Variables in C++

## What is a Variable?
- A variable is a container to hold data.
- Variables can be of various types, primarily:
  - **int**: Holds integer values (e.g., `1`, `2`).
  - **float**: Holds decimal values of low precision (e.g., `1.2`, `2.11`).
  - **char**: Holds a single character (e.g., `'a'`); note that more than one character (like `'db'`) will cause an error as `char` is meant for a single character only.
  - **double**: Holds decimal values of high precision (e.g., `1.234242424232`, `3.14525263253`).
  - **Boolean**: Represents logical values `True` (`1`) or `False` (`0`).

Example:
```cpp
int sum = 34; // sum is an integer variable that holds the value 34 in memory
```

## Syntax for Declaring Variables in C++
- **Syntax**: `Data_type Variable_name = Value;`
- **Example**: 
  ```cpp
  int a = 4, b = 6;
  ```

## Variable Scope
- The **scope** of a variable is the region in the code where the existence of the variable is valid.
  - **Local Variables**: Declared inside the braces of any function and can only be accessed within that function.
  - **Global Variables**: Declared outside any function and can be accessed from anywhere in the code.

### Can Global and Local Variables Have the Same Name in C++?
- Yes, global and local variables can have the same name, but the local variable will take precedence within its scope.

## C++ Data Types
Data types define the type of data a variable can hold. For example, an integer variable can hold integer data, a character type can hold character data. In C++, data types are categorized into three types:

1. **Built-in Data Types**
   - **int**: Integer type (e.g., `1`, `2`).
   - **float**: Floating-point type with low precision (e.g., `1.2`, `2.11`).
   - **char**: Character type (e.g., `'a'`).
   - **double**: Floating-point type with high precision (e.g., `1.234242424232`).
   - **Boolean**: Represents `True` or `False`.

2. **User-defined Data Types**
   - `struct`
   - `union`
   - `enum`

3. **Derived Data Types**
   - `Array`
   - `Function`
   - `Pointer`

## Rules for Declaring Variable Names in C++
- Variable names in C++ can range from 1 to 255 characters.
- All variable names must begin with a letter of the alphabet or an underscore (`_`).
- After the first initial letter, variable names can also contain letters and numbers.
- Variable names are case-sensitive.
- No spaces or special characters are allowed.
- You cannot use a C++ keyword as a variable name.

---

You can save this content in a file with a `.md` extension, such as `C++_Variables_and_DataTypes.md`.