# The Problem
code
```cpp
char x = 'a';
cout << &x << nl;
```
output 
```cpp
_≡↓Ñ⌠_☻
```
# Solution
The difference in how the address of a `char` versus an `int` is displayed when printed using `cout` is due to how `cout` interprets pointers based on their data type.

### Explanation

#### Address of `int`:
When you print the address of an `int` using `cout`:
```cpp
int x = 50;
cout << &x << nl;
```
`&x` is a pointer to `int`. By default, `cout` does not interpret this address as a string but prints it in a readable hexadecimal format that represents the memory address.

#### Address of `char`:
When you print the address of a `char` using `cout`:
```cpp
char x = 'a';
cout << &x << nl;
```
`&x` is a pointer to `char`. `cout` treats this pointer as a `char*` (pointer to a character string). Since `cout` is designed to print `char*` as a string of characters, it attempts to read from that address as if it were a string. This can lead to unpredictable results or unreadable characters because it might read from memory locations that do not contain valid or printable characters.

### Detailed Behavior

1. **Printing `int*` (Address of `int`)**:
   - `cout` knows it’s dealing with an `int*`, so it treats it as a memory address and prints it in hexadecimal format.
   - The output is something like `0x7ffee0321a4c`.

2. **Printing `char*` (Address of `char`)**:
   - `cout` expects a `char*` to be a string (a sequence of characters ending with a null terminator).
   - When you print `&x`, `cout` interprets it as if it's a `char*` and attempts to print characters starting from that address until it finds a null terminator.
   - If the address doesn’t point to a valid null-terminated string, the output will be garbage or non-printable characters.

### Correct Way to Print Addresses

To ensure that addresses are printed correctly, you should cast them to `void*`, which `cout` treats as a generic pointer:

```cpp
cout << static_cast<void*>(&x) << nl;
```

This tells `cout` to print the address in a human-readable hexadecimal format, regardless of the data type of the pointer:

- For `int`:
  ```cpp
  cout << static_cast<void*>(&x) << nl;  // Prints the address of `x` in hexadecimal
  ```
- For `char`:
  ```cpp
  cout << static_cast<void*>(&x) << nl;  // Prints the address of `x` in hexadecimal
  ```

This approach avoids the issues related to `cout` interpreting pointers based on their data type.

## You can use 'printf()' instead of 'cout' with '%x'
```c
char x = 'a';
printf("%x", &x); // '%x' is used to prints the address of variable in hexadecimal
```