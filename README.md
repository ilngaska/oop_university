# 📘 Object-Oriented Programming Labs (C++) (Faculty of Engineering and Technology
**Uzhhorod National University (UzhNU)**
**Major:** Computer Engineering (123))

This repository contains a collection of **C++ laboratory works** demonstrating **object-oriented programming (OOP)** concepts such as classes, inheritance, dynamic memory management, operator overloading, and file handling.
All programs were developed for educational purposes as part of the **Computer Engineering (B.Eng)** curriculum.

---

## ⚙️ Technologies

* **Language:** C++17
* **Compiler:** `g++`
* **Paradigm:** Object-Oriented Programming
* **Concepts Covered:** Classes, inheritance, constructors/destructors, operator overloading, file I/O, dynamic memory

---

## 🧮 1. `lab1.cpp` — Rational Numbers and Linear System Solver

### 📄 Description

Implements a **`Rational`** class to represent fractions (numerator/denominator) and perform basic arithmetic operations with automatic reduction to simplest form.

### 🧠 Features

* Constructors, destructor, and reduction logic (`gcd`, `reduce`, `correct`)
* Addition, subtraction, multiplication, and division of rational numbers
* Solves a **system of two linear equations** with rational coefficients:

  ```
  a*x + b*y = c
  d*x + e*y = f
  ```

### ▶️ Example Output

```
Enter coefficients a, b, c, d, e, f: 2 1 7 3 4 20
Solution:
x = 8
y = -9
```

---

## 🔢 2. `lab2.1.cpp` — 1D Dynamic Array with Bubble Sort

### 📄 Description

Implements a **`CArray_1D`** class for managing a one-dimensional dynamic array using manual memory allocation (`malloc`, `free`).

### 🧠 Features

* Create and clear a dynamic array
* Input and display array elements
* **Bubble sort** in descending order

### ▶️ Example Output

```
Enter the size of array:
5
Enter numbers of array:
array[0] = 3
array[1] = 8
array[2] = 1
array[3] = 6
array[4] = 4

Initial array:
3 8 1 6 4

Array after bubble sort (descending):
8 6 4 3 1
```

---

## 🔢 3. `lab2_2.cpp` — 2D Array and Column-Wise Average

### 📄 Description

Implements a **`CArray_2D`** class for two-dimensional dynamic arrays and creates a new 1D array containing the **average of positive numbers in each column**.

### 🧠 Features

* Dynamic allocation of 2D arrays
* Input/output of elements
* Memory cleanup
* Computation of average positive values per column

### ▶️ Example Output

```
Enter number of rows: 3
Enter number of columns: 3
Enter elements:
1 -2 3
4 5 -6
7 8 9

Average positive elements per column:
avg[0] = 4.00
avg[1] = 6.50
avg[2] = 6.00
```

---

## 🔢 4. `lab2_3.cpp` — Transforming Even Elements with Square Root

### 📄 Description

Extends the `CArray_1D` class with a **transformation function** that replaces every even element with its integer square root.

### 🧠 Features

* Function `MySqrt()` for safe square root calculation
* Transformation of even numbers
* Dynamic memory management

### ▶️ Example Output

```
Enter the size of array:
5
Enter numbers of array:
4 7 16 3 25

Transforming even elements to their square roots...
array[0] = 4 -> sqrt = 2
array[2] = 16 -> sqrt = 4

Array after transformation:
2 7 4 3 25
```

---

## 🧾 5. `lab3_1.cpp` — Text Class and Word Counter

### 📄 Description

Implements a **base class `Text`** and a **derived class `WordCounter`** for working with arrays of strings (lines of text).

### 🧠 Features

* Base class:

  * Calculate text length, number of lines, spaces, and remove extra spaces
* Derived class:

  * Count total number of words
* Demonstrates inheritance and method extension

### ▶️ Example Output

```
Text length: 22
Number of lines: 2
Number of spaces: 6
Number of words: 4

After removing extra spaces:
Number of spaces: 2
```

---

## 💾 6. `lab3_2.cpp` — Binary File Copying

### 📄 Description

Creates and copies binary files. The program reads a given number of bytes from a specified position in a binary file and writes them into a new file.

### 🧠 Features

* Generates a binary file with 512 random bytes if it doesn’t exist
* Reads `n` bytes from position `pos` and copies them to a new file
* File handling with `fopen`, `fread`, `fwrite`, and `fseek`

### ▶️ Example Output

```
File /home/markie/lab3_2/lab3_2.bin doesn't exist. Generating a new binary file
Binary file created (512 bytes).

Enter position: 100
Enter quantity: 50
Copied 50 bytes from position 100 to file lab3_2_copy.bin
```

---

## 🧱 7. `lab4.cpp` — Stack Class with Operator Overloading

### 📄 Description

Implements a **`Stack`** class that demonstrates operator overloading.

### 🧠 Features

* `++` — Add an element (push 0 onto the stack)
* `--` — Remove the top element (pop)
* `bool()` — Check if the stack is empty

### ▶️ Example Output

```
Enter number of elements (<= 10): 3
1 2 3
Stack: 1 2 3

After -- :
Stack: 1 2
Stack is not empty
```
