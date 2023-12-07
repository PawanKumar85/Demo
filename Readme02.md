# Types of Inheritance

1. Single Inheritance
   A class can inherit from only one superclass.
   Example:

   ```
   class BaseClass {

    // Base class

   };
    class DerivedClass : public BaseClass {

    // Derived class inherits from BaseClass

    };

   ```

2. Multi Inheritance
   
   A class can inherit from more than one base class.

   ```
   class BaseClass1 {
    // Base class 1
   };

   class BaseClass2 {
   // Base class 2
   };

   class DerivedClass : public BaseClass1, public BaseClass2 {
   // Derived class inherits from both BaseClass1 and BaseClass2
   };

   ```

3. Multiple Inheritance

   A class inherits from another class, and then another class inherits from it.

   ```
   class Grandparent {
    // Grandparent class
   };

   class Parent : public Grandparent {
      // Parent inherits from Grandparent
   };

   class Child : public Parent {
      // Child inherits from Parent
   };

   ```

4. Hierarchical Inheritance
   Multiple classes inherit from a single base class.

   ```
   class Animal {
    // Base class
   };

   class Dog : public Animal {
      // Dog inherits from Animal
   };

   class Cat : public Animal {
      // Cat inherits from Animal
   };

   ```

5. Hybrid Inheritance
   A combination of different types of inheritance.

   ```
   class A {
    // Class A
   };

   class B : public A {
      // Class B inherits from A
   };

   class C : public A {
      // Class C inherits from A
   };

   class D : public B {
      // Class D inherits from B
   };

   class E : public C {
      // Class E inherits from C
   };

   class F : public D, public E {
      // Class F inherits from both D and E
   };

   ```

