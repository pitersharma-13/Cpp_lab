# Information Program - Person Class

## Overview
This program demonstrates Object-Oriented Programming (OOP) concepts in C++, specifically encapsulation using a `Person` class with private members and public accessor methods.

## Program Description
The program defines a `Person` class that stores and manages a person's information (name and age).

### Class Structure
**Class Name:** `Person`

**Private Members:**
- `int age` - Stores the person's age
- `string name` - Stores the person's name

**Public Methods:**
- `void infoTaken(int a, string n)` - Setter method to initialize the person's age and name
- `string getname()` - Getter method to retrieve the person's name
- `int getage()` - Getter method to retrieve the person's age

## How It Works
1. A `Person` object is created
2. The `infoTaken()` method is called to set the person's age (20) and name ("Piter")
3. The `getname()` and `getage()` methods are called to retrieve and display the information

## Sample Output
```
Name : Piter
Age : 20
```

## Key Concepts Demonstrated
- **Encapsulation:** Private members with public getters/setters
- **Class Definition:** Creating a custom data type
- **Object Instantiation:** Creating an instance of the class
- **Data Hiding:** Controlling access to class members

## Theory

### What is a Class?
A class is a blueprint or template for creating objects. It defines the structure (data members) and behavior (methods) that objects of that class will have.

### Encapsulation
Encapsulation is one of the four fundamental OOP concepts. It involves bundling data (attributes) and methods (functions) together within a class and hiding the internal details from the outside world.

**Benefits of Encapsulation:**
- **Data Protection:** Private members prevent unauthorized access and modification
- **Flexibility:** You can change internal implementation without affecting external code
- **Control:** You can add validation logic in setter methods before modifying data

### Access Modifiers
- **Private:** Members are only accessible within the class. External code cannot access them directly.
- **Public:** Members are accessible from anywhere (inside or outside the class).
- **Protected:** Members are accessible within the class and derived classes (used in inheritance).

### Getters and Setters
- **Getters (Accessor Methods):** Read-only methods that return the value of private members. Example: `getname()`, `getage()`
- **Setters (Mutator Methods):** Methods that modify the values of private members. Example: `infoTaken()`

### Why Use Getters and Setters?
1. **Validation:** You can validate data before setting it
2. **Consistency:** Ensure data is modified in a controlled manner
3. **Flexibility:** Change internal representation without changing the interface
4. **Read-Only Properties:** Create getters without setters for read-only attributes

### Example Flow
```
User creates object → Calls setter method → Data is stored in private member
                   → Calls getter method → Retrieves and displays the data
```
