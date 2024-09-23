# ft_printf

## Description
**ft_printf** is a recreation of the standard `printf` function from the C standard library. This project allowed me to explore variadic functions and how to handle a variable number of arguments, a key concept in C programming. The goal was to mimic the behavior of `printf`, handling multiple format specifiers and ensuring proper memory management.

## Features
### Supported Conversions
- **%c**: Prints a single character.
- **%s**: Prints a string.
- **%p**: Prints a pointer in hexadecimal format.
- **%d**: Prints a decimal (base 10) number.
- **%i**: Prints an integer (base 10).
- **%u**: Prints an unsigned decimal number.
- **%x**: Prints a number in hexadecimal (base 16) lowercase format.
- **%X**: Prints a number in hexadecimal (base 16) uppercase format.
- **%%**: Prints a percent sign.

## Installation
1. Clone my repository:
   ```bash
   git clone https://github.com/rui-pedro-pires/ft_printf.git
   ```
2. Navigate to the project directory:
   ```bash
   cd ft_printf
   ```
3. Compile the library:
   ```bash
   make
   ```

## Usage
To use `ft_printf` in your project, simply include it after compiling the library:
```c
#include "ft_printf.h"
```
Then, call `ft_printf` as you would with the standard `printf`:
```c
ft_printf("Hello %s, your score is %d!\n", "world", 100);
```

## Requirements
- The project is written in C.
- Adheres to strict memory management (no leaks).

## External Functions Used
- `malloc`, `free`, `write`
- Variadic functions: `va_start`, `va_arg`, `va_copy`, `va_end`
