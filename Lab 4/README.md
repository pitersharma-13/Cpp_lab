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

---

# Circle Program - Circle Class

## Overview
This program demonstrates the use of a `Circle` class to calculate geometric properties (area and circumference) of a circle based on user input.

## Program Description
The program defines a `Circle` class that takes the radius as input and performs calculations to determine the area and circumference.

### Class Structure
**Class Name:** `Circle`

**Private Members:**
- `float radius` - Stores the radius of the circle
- `float area` - Stores the calculated area
- `float Circumference` - Stores the calculated circumference

**Public Methods:**
- `void inputTaken()` - Takes the radius as input from the user
- `void calcuArea()` - Calculates the area using formula: Area = π × r²
- `void calcCircumferemce()` - Calculates the circumference using formula: Circumference = 2 × π × r
- `void displayInfo()` - Displays the calculated area and circumference

## Mathematical Formulas
- **Area of Circle:** A = π × r²
  - Where π (PI) = 3.14159 and r = radius
- **Circumference of Circle:** C = 2 × π × r
  - Where π (PI) = 3.14159 and r = radius

## How It Works
1. A `Circle` object is created
2. User is prompted to enter the radius of the circle
3. The `calcuArea()` method calculates the area
4. The `calcCircumferemce()` method calculates the circumference
5. The `displayInfo()` method displays both results

## Sample Output
```
Enter the radius of the circle : 
5
Area = 78.5398 Circumference = 31.4159
```

## Key Concepts Demonstrated
- **Mathematical Calculations:** Applying formulas in code
- **Encapsulation:** Private data members with public calculation methods
- **User Input Handling:** Taking input and storing it in member variables
- **Constant Definition:** Using `#define` for mathematical constants

