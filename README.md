## ✍️ ft\_printf: Custom `printf` Implementation

This project is a custom implementation of the standard C library function `printf`. It was developed as part of the **42 school curriculum** and aims to recreate the function's core functionality without including the bonus features (like floating-point numbers or array handling).

-----

### 🚀 Usage

The function is called as `ft_printf` and takes a format string followed by a variable number of arguments, just like the standard `printf`.

```c
int ft_printf(const char *format, ...);
```

It writes the output to the standard output and returns the **total number of characters printed**.

-----

### ✨ Supported Conversions

This implementation handles the following basic conversion specifiers (excluding any bonus flags, widths, precisions, or handling of specific length modifiers beyond the core requirement):

| Specifier | Description |
| :---: | :--- |
| **`%c`** | Prints a single **character**. |
| **`%s`** | Prints a **string** of characters. |
| **`%p`** | The **void**\* pointer argument is printed in **hexadecimal** format. |
| **`%d`** | Prints a **signed decimal** integer. |
| **`%i`** | Prints an **integer** (same as `%d`). |
| **`%u`** | Prints an **unsigned decimal** integer. |
| **`%x`** | Prints an unsigned integer in **lowercase hexadecimal** format. |
| **`%X`** | Prints an unsigned integer in **uppercase hexadecimal** format. |
| **`%%`** | Prints a **percent sign**. |
