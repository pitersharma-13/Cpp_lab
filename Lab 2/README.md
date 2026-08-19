# Lab 2: Constructors

This lab demonstrates default, parameterized, and copy constructors using a `Mobile` class.

## Program

### `constructor.cpp`

The program creates several `Mobile` objects:

1. A default constructor object.
2. A parameterized object with brand `Samsung`, price `11`, and model `Aa`.
3. A copy constructed object based on the parameterized object.
4. Another object copied from the first copied object.

The program prints a message whenever each constructor is called and displays the brand, price, and model of the copied objects. The copy constructor intentionally increases the copied price by `120`, so each copy has a different price.

Concepts demonstrated:

- A class with private data members
- Default constructors
- Parameterized constructors
- Copy constructors
- Passing an object by constant reference
- Object initialization and copying
