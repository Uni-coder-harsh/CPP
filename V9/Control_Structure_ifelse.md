


# C++ Control Structures

Control structures in C++ determine the flow of control in a program. They are categorized into three main types: sequence structure, selection structure, and loop structure. These are considered basic control structures that dictate how the program's instructions are executed.

## Types of Control Structures

1. **Sequence Structure**
2. **Selection Structure**
3. **Loop Structure**

## 1. Sequence Structure

- **Definition**: In a sequence structure, statements are executed in a linear order, one after the other.
- **Model**: 
  ```
  Entry ---> Action1 ---> Action2 ---> Exit
  ```

This is the most basic control structure where each line of code is executed sequentially.

## 2. Selection Structure

- **Definition**: Selection structures are used to make decisions in a program, allowing different actions based on different conditions.
- **Model**: 
  ```
  Entry ---> Condition ---> True/False ---> Action
  ```

### Types of Selection Structures in C++:

- **If-Else Statement**: Executes a block of code if a specified condition is true; otherwise, it executes another block of code.

   ```cpp
   if (i < 3) {
       cout << 1;
       i++;
   } else {
       cout << "i is not less than 3";
   }
   ```

- **If-Else Ladder**: Used when multiple conditions need to be checked sequentially.

   ```cpp
   if (condition1) {
       // Action 1
   } else if (condition2) {
       // Action 2
   } else {
       // Default Action
   }
   ```

- **Switch Case**: An alternative to the if-else ladder that is used for handling multiple conditions based on the value of a single expression.

   ```cpp
   switch (expression) {
       case 1:
           // Action 1
           break;
       case 2:
           // Action 2
           break;
       default:
           // Default Action
   }
   ```

### Summary

Understanding control structures is essential for writing efficient and logical programs in C++. They help in making decisions and executing code blocks based on certain conditions, which allows for more dynamic and interactive programming.
