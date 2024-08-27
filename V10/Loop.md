

```markdown
## 3. Loop Structure

- **Definition**: Loop structures are used to execute a block of code repeatedly based on a condition.
- **Model**: 
  ```
  Entry ---> Condition Check ---> True ---> Action ---> Repeat
                      |
                     False
                      |
                     Exit
  ```

### Common Loop Structures in C++:

- **For Loop**: Repeats a block of code a specific number of times.

  **Syntax**:
  ```cpp
  for (initialization; condition; updation) {
      // loop body (C++ code)
  }
  ```

  **Example**:
  ```cpp
  for (int i = 0; i < 5; i++) {
      cout << i << endl;
  }
  ```

- **While Loop**: Repeats a block of code as long as a specified condition is true.

  **Syntax**:
  ```cpp
  while (condition) {
      // C++ statements
  }
  ```

  **Example**:
  ```cpp
  int i = 0;
  while (i < 5) {
      cout << i << " ";
      i++;
  }
  ```

- **Do-While Loop**: Executes a block of code at least once and then repeats it as long as a specified condition is true.

  **Syntax**:
  ```cpp
  do {
      // C++ statements
  } while (condition);
  ```

  **Example**:
  ```cpp
  int i = 0;
  do {
      cout << i << " ";
      i++;
  } while (i < 5);
  ```
```

### Key Points:
1. **For Loop**: Used when the number of iterations is known beforehand.
2. **While Loop**: Ideal when the number of iterations is not known and depends on a condition.
3. **Do-While Loop**: Similar to a while loop, but guarantees the loop body will execute at least once, even if the condition is false initially.

