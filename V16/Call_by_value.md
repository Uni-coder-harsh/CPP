# C++ Programming Notes

## Call by Value

In **Call by Value**, a copy of the actual parameter is passed to the function. This means that changes made to the formal parameter inside the function do not affect the actual parameter.

### Key Points:
- The function works on the copy of the passed values.
- Changes made inside the function are not reflected outside.

### Example of Call by Value

```cpp
#include <iostream>
using namespace std;

void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside function: x = " << x << ", y = " << y << endl;
}

int main() {
    int a = 10, b = 20;
    swapByValue(a, b);
    cout << "Outside function: a = " << a << ", b = " << b << endl;
    return 0;
}
```

**Output:**
```
Inside function: x = 20, y = 10
Outside function: a = 10, b = 20
```

In this example, the values of `a` and `b` are not swapped in the main function because the function operates on copies of the values.

---

## Call by Reference

In **Call by Reference**, the actual parameter is passed to the function, so the function works with the actual memory location. Any changes made to the formal parameters affect the actual parameters.

### Key Points:
- The function works on the original variables.
- Changes made inside the function are reflected outside.

---

### Call by Pointer Reference

In **Call by Pointer Reference**, pointers are passed to the function. The pointer holds the address of the actual parameters, allowing the function to manipulate the values directly.

### Example of Swapping Numbers using Pointers

```cpp
#include <iostream>
using namespace std;

void swapByPointer(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10, b = 20;
    swapByPointer(&a, &b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}
```

**Output:**
```
After swapping: a = 20, b = 10
```

In this example, the values of `a` and `b` are swapped in the main function because pointers directly manipulate the memory addresses of the variables.

---

### Call by Reference Variables

In **Call by Reference Variables**, reference variables are used to pass the parameters to the function. This provides a more readable syntax compared to pointers and allows the function to modify the actual parameters.

### Example of Swapping Numbers using Reference Variables

```cpp
#include <iostream>
using namespace std;

void swapByReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10, b = 20;
    swapByReference(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}
```

**Output:**
```
After swapping: a = 20, b = 10
```

In this example, the values of `a` and `b` are swapped in the main function because reference variables allow the function to work directly with the original variables.

---

### Summary:
- **Call by Value**: Only copies of the values are passed, so the original variables are unaffected.
- **Call by Pointer**: Pointers to the actual variables are passed, allowing the function to modify the original variables.
- **Call by Reference Variables**: The function directly works with the actual variables using reference variables, making the code cleaner and simpler.

