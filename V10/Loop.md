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

```cpp
for(initialization ; condition ; updation)
{
    loop body(c++ code)
}
```

   ```cpp
   for (int i = 0; i < 5; i++) {
       cout << i << endl;
   }
   ```


- **While Loop**: Repeats a block of code as long as a specified condition is true.

```cpp
    while(condition);
    {
        C++ statements
    }
    ```

   ```cpp
   while (i < 5) {
       cout << i << " ";
       i++;
   }
   ```

- **Do-While Loop**: Executes a block of code at least once and then repeats it as long as a specified condition is true.

    ```cpp
    do
    {
        c++ statements;
    }while(condition);
    ```
    
   ```cpp
   do {
       cout << i << " ";
       i++;
   } while (i < 5);
   ```