
# C++ Programming Notes

## Structures

**Structures** in C++ are user-defined data types that allow grouping variables of different data types under a single name. They are similar to classes, but their members are public by default.

### Definition

A structure is defined using the `struct` keyword followed by the structure name and a set of curly braces containing the structure members.

### Syntax

```cpp
struct StructureName {
    dataType member1;
    dataType member2;
    // More members...
};
```

### Example

```cpp
#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
    float height;
};

int main() {
    Person person1;
    person1.name = "John";
    person1.age = 25;
    person1.height = 5.9;

    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Height: " << person1.height << endl;

    return 0;
}
```

### Key Points
- **Accessing Members**: Use the dot (`.`) operator to access members of a structure.
- **Initialization**: Structure members can be initialized after declaring a structure variable.

## Unions

**Unions** in C++ are similar to structures but with a key difference: all members of a union share the same memory location. This means that a union can only hold one of its members' values at a time.

### Definition

A union is defined using the `union` keyword followed by the union name and a set of curly braces containing the union members.

### Syntax

```cpp
union UnionName {
    dataType member1;
    dataType member2;
    // More members...
};
```

### Example

```cpp
#include <iostream>
using namespace std;

union Data {
    int integer;
    float floatingPoint;
    char character;
};

int main() {
    Data data;
    data.integer = 10;
    cout << "Integer: " << data.integer << endl;

    data.floatingPoint = 5.5;
    cout << "Floating Point: " << data.floatingPoint << endl;

    data.character = 'A';
    cout << "Character: " << data.character << endl;

    return 0;
}
```

### Key Points
- **Memory Sharing**: All members share the same memory space, so changing one member affects all others.
- **Efficient Memory Usage**: Unions are useful when you need to store different data types in the same memory location but not simultaneously.

## Enums

**Enums** (short for enumerations) in C++ are user-defined data types that consist of integral constants, each with a unique name. Enums are typically used to represent a collection of related constants.

### Definition

Enums are defined using the `enum` keyword followed by the enum name and a set of curly braces containing the enum constants.

### Syntax

```cpp
enum EnumName {
    constant1,
    constant2,
    // More constants...
};
```

### Example

```cpp
#include <iostream>
using namespace std;

enum Color {
    Red,
    Green,
    Blue
};

int main() {
    Color color = Green;
    cout << "Selected Color: " << color << endl; // Output: 1 (index of Green)

    return 0;
}
```

### Key Points
- **Automatic Indexing**: Enum constants are assigned integer values starting from 0 by default, but you can assign specific values.
- **Type Safety**: Enums improve code readability and type safety by restricting the values a variable can take.

### Customizing Enum Values

You can specify custom values for enum constants:

```cpp
enum Color {
    Red = 1,
    Green = 5,
    Blue = 10
};
```

In this example, `Red` is assigned 1, `Green` is assigned 5, and `Blue` is assigned 10.

### Example with Custom Values

```cpp
#include <iostream>
using namespace std;

enum DaysOfWeek {
    Monday = 1,
    Tuesday = 2,
    Wednesday = 3,
    Thursday = 4,
    Friday = 5,
    Saturday = 6,
    Sunday = 7
};

int main() {
    DaysOfWeek today = Friday;
    cout << "Today is day number: " << today << endl; // Output: 5

    return 0;
}
```

This example assigns custom values to each day of the week and prints the day number for Friday.

