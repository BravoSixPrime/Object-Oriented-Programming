## Inheriting Classes

When one class inherites a base class it automatically gets all the members (attributes, behaviours)

It can then also add on more of its own members.

Eg. If ElecticCar can inherit from the class 'Car' since it will have all its members
and can also add its own attributes like Charge().

We will create 'Developer' class from class 'Employee'

```cpp
class Developer : Employee { //Developer => subclass     Employee => Parent class
public:
    string ProgrammingLanguage; // Specific for 'Developer'
}
```
* Since Employee class has its own constructor we must also create a constructor for Developer class

* While doing so we don't need to explicitely handle properties of parent constructor, we can just handle the child specific properties.

* Handling properties of parent class in this case can be simply done by:
```cpp
    Developer():Employee(name,company,age){}
```

```cpp
class Developer : Employee { //Developer => subclass     Employee => Parent class
public:
    string ProgrammingLang; // Specific for 'Developer'
    //Constructer
    Developer(string name,string company,int age,string programmingLang):Employee(name,company,age){
        ProgrammingLang = programmingLang;
    }
}
```
Lets construct a object using Developer class :
```cpp
    Developer d = Developer("Jay","Google",21,"cpp");
```

In order to use Parent class property in its child class, that property must be either public or protected (protected is a better option)

<b> By defaul inheritance is private i.e. a child can't access public properties of parent class outside the child class</b>

To make it public, child class should be inherited as:
```cpp
class Developer : public Employee{};
```