Swapping two variables without using a temporary variable can be done using different methods like **arithmetic operations** or **bitwise XOR**. Let's explore these methods with examples.

### 1. **Using Arithmetic Operations (Addition and Subtraction)**

You can use addition and subtraction to swap two variables without a temporary variable.

```cpp
#include <iostream>

int main() {
    int a = 5;
    int b = 10;

    // Swap without temp using arithmetic
    a = a + b;  // a becomes 15 (5 + 10)
    b = a - b;  // b becomes 5 (15 - 10)
    a = a - b;  // a becomes 10 (15 - 5)

    std::cout << "a = " << a << ", b = " << b << std::endl;  // Output: a = 10, b = 5

    return 0;
}
```

### Explanation:
- Initially: `a = 5`, `b = 10`.
- After `a = a + b`: `a = 15`, `b = 10`.
- After `b = a - b`: `a = 15`, `b = 5`.
- After `a = a - b`: `a = 10`, `b = 5`.

### 2. **Using Bitwise XOR Operation**

You can also swap two variables without a temporary variable using the XOR bitwise operation.

```cpp
#include <iostream>

int main() {
    int a = 5;
    int b = 10;

    // Swap without temp using XOR
    a = a ^ b;  // a becomes 15 (XOR of 5 and 10)
    b = a ^ b;  // b becomes 5 (XOR of 15 and 10)
    a = a ^ b;  // a becomes 10 (XOR of 15 and 5)

    std::cout << "a = " << a << ", b = " << b << std::endl;  // Output: a = 10, b = 5

    return 0;
}
```

### Explanation:
- XOR works because it cancels itself out:
  - `a = a ^ b`: Now `a` holds the XOR of both `a` and `b`.
  - `b = a ^ b`: The XOR cancels out `b`, leaving `b` with the original value of `a`.
  - `a = a ^ b`: The XOR cancels out `a`, leaving `a` with the original value of `b`.

### 3. **Using Multiplication and Division**

Another way to swap without a temp variable (though not recommended due to potential overflow) is to use multiplication and division.

```cpp
#include <iostream>

int main() {
    int a = 5;
    int b = 10;

    // Swap without temp using multiplication/division
    a = a * b;  // a becomes 50 (5 * 10)
    b = a / b;  // b becomes 5 (50 / 10)
    a = a / b;  // a becomes 10 (50 / 5)

    std::cout << "a = " << a << ", b = " << b << std::endl;  // Output: a = 10, b = 5

    return 0;
}
```

### Explanation:
- Initially: `a = 5`, `b = 10`.
- After `a = a * b`: `a = 50`.
- After `b = a / b`: `b = 5`.
- After `a = a / b`: `a = 10`.

### Final Thoughts:
- **Arithmetic Operations** (addition/subtraction, multiplication/division) are simple and intuitive but could overflow with large numbers.
- **XOR Operation** is efficient and works safely on integers without risking overflow, but it’s a bit trickier to understand.

