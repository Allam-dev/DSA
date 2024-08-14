Here’s a comparison between `int *p` and `int* p` in table format:

| **Aspect**| **int \*p**|**int\* p**|
|-------------------------------|-------------------------------------|-------------------------------------|
| **Declaration Style**          | `int *p;`                           | `int* p;`                           |
| **Pointer Declaration**        | Declares `p` as a pointer to an `int`. The `*` binds closely with the variable `p`. | Declares `p` as a pointer to an `int`. The `*` is associated with `p`. |
| **Common Usage**               | Used by many developers to emphasize that `p` is a pointer. | Preferred by some developers to associate the type directly with the variable. |
| **Compiler Interpretation**    | No difference in interpretation by the compiler. | No difference in interpretation by the compiler. |
| **Readability**                | Some argue it clarifies that `p` is a pointer to an `int`. | Some argue it makes the type and variable association clearer. |
| **Multiple Declarations**      | When declaring multiple variables, `int *p, q;` declares `p` as a pointer to `int` and `q` as an `int`. | Similarly, `int* p, q;` declares `p` as a pointer to `int` and `q` as an `int`. |
| **Best Practice**              | Depends on coding style preferences. | Depends on coding style preferences. |

### Key Takeaway:
- Both `int *p` and `int* p` declare a pointer to an integer, and there is no functional difference between them. The choice between them is largely based on personal or team coding style preferences.