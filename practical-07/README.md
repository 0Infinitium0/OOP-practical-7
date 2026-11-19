# Practical 07: Compile-Time Polymorphism: Overloading

- **Student Name:** Satinderpal Singh Chaney
- **Roll Number:** E26B00S2034

## Aim
To understand how C++ selects functions at compile time based on parameters and operator definitions.

## Question
Demonstrate function overloading and operator overloading using a `ComplexNumber` or `Matrix` class.

## Why the Overloaded `+` Operator Is Useful
Overloading the `+` operator allows `ComplexNumber` objects to be added with standard mathematical syntax (`c1 + c2`) rather than verbose method calls like `c1.add(c2)`. This makes expressions involving user-defined numeric types intuitive, readable, and consistent with built-in arithmetic types.

## Function Overloading vs. Operator Overloading vs. Runtime Polymorphism
- **Function Overloading (Compile-Time):** Multiple functions share the same name within the same scope but differ in parameter count or types (`add(int, int)` vs. `add(double, double)`). The compiler resolves the exact function call during compilation via name mangling and overload resolution.
- **Operator Overloading (Compile-Time):** Built-in C++ operators (`+`, `-`, `==`, `<<`, etc.) are given user-defined meanings when applied to class/struct operands (`ComplexNumber::operator+`). Like function overloading, resolution happens statically at compile time.
- **Runtime Polymorphism (Dynamic Dispatch):** Achieved through inheritance and `virtual` functions overridden in derived classes, invoked via a base-class pointer or reference (`Shape*`). The target implementation is resolved dynamically at runtime using the object's vtable rather than at compile time.

## Compilation & Execution

### Windows (PowerShell / MinGW `g++`)
```powershell
g++ -std=c++17 -Wall -Wextra practical7.cpp -o practical7.exe
.\practical7.exe
```

### Linux / macOS (`g++` / `clang++`)
```bash
g++ -std=c++17 -Wall -Wextra practical7.cpp -o practical7
./practical7
```

## Memory-Checking Instructions

### Option 1: AddressSanitizer & UndefinedBehaviorSanitizer (GCC / Clang — Linux, macOS, WSL)
```bash
g++ -std=c++17 -g -O1 -fsanitize=address,undefined practical7.cpp -o practical7_asan
./practical7_asan
```

### Option 2: Valgrind (Linux / WSL)
```bash
g++ -std=c++17 -g practical7.cpp -o practical7_dbg
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./practical7_dbg
```
Expected summary: `All heap blocks were freed -- no leaks are possible` and `0 errors from 0 contexts`.

## Uploading to GitHub
1. Create a new repository on GitHub (for example, `practical-07-compile-time-polymorphism` or `practical 7`).
2. Extract the ZIP archive into a local folder and push:
   ```bash
   git init
   git add .
   git commit -m "Add Practical 07: Compile-Time Polymorphism - Overloading"
   git branch -M main
   git remote add origin <YOUR_GITHUB_REPOSITORY_URL>
   git push -u origin main
   ```
