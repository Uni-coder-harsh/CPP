
# C++ Programming Notes

## Break and Continue Statements

In C++, the `break` and `continue` statements are used to control the flow of loops. They provide more control over the execution of loops, allowing programmers to exit loops early or skip iterations based on certain conditions.

### Break Statement

- **Definition**: The `break` statement is used to immediately exit a loop or switch statement, regardless of the current iteration or condition.
- **Usage**: It is typically used when a certain condition is met and further iterations are no longer needed.

#### Syntax

```cpp
break;
```

#### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // Exits the loop when i equals 5
        }
        cout << i << " ";
    }
    // Output: 0 1 2 3 4
    return 0;
}
```

In this example, the `break` statement exits the loop when `i` equals 5, stopping any further iterations.

### Continue Statement

- **Definition**: The `continue` statement is used to skip the current iteration of a loop and proceed to the next iteration.
- **Usage**: It is useful when you want to skip certain iterations based on a condition without exiting the loop entirely.

#### Syntax

```cpp
continue;
```

#### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue; // Skips the current iteration if i is even
        }
        cout << i << " ";
    }
    // Output: 1 3 5 7 9
    return 0;
}
```

In this example, the `continue` statement skips printing the value of `i` when it is even, effectively printing only odd numbers.

## Creating C++ Snippets in Visual Studio Code

Snippets in Visual Studio Code (VS Code) allow you to create custom code templates that you can insert quickly. Here’s how to create a C++ snippet:

### Steps to Create a C++ Snippet in VS Code

1. **Open VS Code**: Launch Visual Studio Code on your computer.

2. **Open Command Palette**: Press `Ctrl + Shift + P` (Windows/Linux) or `Cmd + Shift + P` (Mac) to open the Command Palette.

3. **Search for Snippet**: Type `Preferences: Configure User Snippets` and select it from the dropdown.

4. **Choose Language**: In the list of languages, select `cpp` for C++.

5. **Edit Snippet File**: A snippet file will open in the editor. You can now add your custom snippet. Here's an example of a simple C++ snippet:

    ```json
    {
        "C++ Main Function": {
            "prefix": "cppmain",
            "body": [
                "#include <iostream>",
                "",
                "using namespace std;",
                "",
                "int main() {",
                "    ${1:/* code */}",
                "    return 0;",
                "}"
            ],
            "description": "Basic structure of a C++ main function"
        }
    }
    ```

   - **`prefix`**: This is the shortcut text you type in the editor to trigger the snippet (e.g., `cppmain`).
   - **`body`**: This is the code that will be inserted when the snippet is triggered. You can use `$1`, `$2`, etc., to define tab stops, which allow you to quickly jump to different parts of the snippet after insertion.
   - **`description`**: A brief explanation of what the snippet does.

6. **Save the Snippet**: Save the changes to your snippet file.

### Using the Snippet

- In any C++ file, type the prefix you defined (e.g., `cppmain`) and press `Tab` or `Enter`. The snippet will expand into the full code template.

### Example of Using the Snippet in VS Code

1. Create a new C++ file or open an existing one.
2. Type `cppmain` (or whatever prefix you defined) and press `Tab` or `Enter`.
3. The snippet expands to:

    ```cpp
    #include <iostream>

    using namespace std;

    int main() {
        /* code */
        return 0;
    }
    ```

Now you have a quick and easy way to insert frequently used code templates into your C++ projects in VS Code!

