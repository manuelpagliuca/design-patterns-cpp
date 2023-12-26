# Design Patterns in C++
![Static Badge](https://img.shields.io/badge/build-passing-green)
![Static Badge](https://img.shields.io/badge/license-MIT-yellowgreen)
![Static Badge](https://img.shields.io/badge/language-C%2B%2B-brightgreen)
[![Ask Me Anything !](https://img.shields.io/badge/Ask%20me-anything-1abc9c.svg)](mailto:pagliuca.manuel@gmail.com)

Personal study project for learning the _Gang of Four_ (GoF) design patterns, a **design pattern** is a general, reusable solution to a commonly occurring problem within a given context in software design.

OOP design patterns typically show relationships and interactions between classes or objects, without specifying the final application classes or objects that are involved.

## GoF patterns
### Creational
| Design Pattern          | Description                                                                                     |
|-------------------------|-------------------------------------------------------------------------------------------------|
| Abstract Factory        | Provides an interface for creating families of related or dependent objects without specifying their concrete classes. |
| Builder                 | Separates the construction of a complex object from its representation, allowing the same construction process to create different representations. |
| Factory Method          | Defines an interface for creating an object but leaves the choice of its type to the subclasses. |
| Prototype               | Creates new objects by copying an existing object, known as the prototype.                       |
| Singleton               | Ensures a class has only one instance and provides a global point of access to that instance.    |

### Structural
| Design Pattern          | Description                                                                                     |
|-------------------------|-------------------------------------------------------------------------------------------------|
| Adapter                 | Allows classes with incompatible interfaces to work together by wrapping its own interface around that of an already existing class.|
| Bridge                  | Decouples an abstraction from its implementation so that the two can vary independently.         |
| Composite               | Composes zero-or-more similar objects so that they can be manipulated as one object.              |
| Decorator               | Dynamically adds/overrides behavior in an existing method of an object.                           |
| Facade                  | Provides a simplified interface to a large body of code.                                          |
| Flyweight               | Reduces the cost of creating and manipulating a large number of similar objects.                  |
| Proxy                   | Provides a placeholder for another object to control access, reduce cost, and reduce complexity.  |

### Behavioral
| Design Pattern             | Description                                                                                      |
|----------------------------|--------------------------------------------------------------------------------------------------|
| Chain of Responsibility    | Delegates commands to a chain of processing objects.                                             |
| Command                    | Creates objects that encapsulate actions and parameters.                                         |
| Interpreter                | Implements a specialized language.                                                               |
| Iterator                   | Accesses the elements of an object sequentially without exposing its underlying representation. |
| Mediator                   | Allows loose coupling between classes by being the only class that has detailed knowledge of their methods. |
| Memento                    | Provides the ability to restore an object to its previous state (undo).                           |
| Observer                   | Is a publish/subscribe pattern, which allows some observer objects to see an event.        |
| State                      | Allows an object to alter its behavior when its internal state changes.                            |
| Strategy                   | Allows one of a family of algorithms to be selected on-the-fly at runtime.                          |
| Template Method            | Defines the skeleton of an algorithm as an abstract class, allowing its subclasses to provide concrete behavior. |
| Visitor                    | Separates an algorithm from an object structure by moving the hierarchy of methods into one object.|

## Extra patterns
Many other patterns outside the original 23 from the GoF have been developed, I would like to add them to the 
repository in the future.

### Creational
Missing patterns:
- [ ] Dependency injection
- [ ] Lazy initialization
- [ ] Multiton
- [ ] Object pool
- [ ] Resource acquisition is initialization (RAII)
### Structural
Missing patterns:
- [ ] Extension object
- [ ] Front controller
- [ ] Marker
- [ ] Module
- [ ] Twin
### Behavioral
| Design Pattern             | Description                                                                                      |
|----------------------------|--------------------------------------------------------------------------------------------------|
| Null Object                | Provides a surrogate for an actual object, implementing the same interface with no operation or default behavior, to encapsulate the absence of the object. |

Missing patterns:
- [ ] Blackboard
- [ ] Fluent interface
- [x] Null object
- [ ] Servant
- [ ] Specification
