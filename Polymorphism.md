## Polymorphism

Ability of object to have multiple forms

We can redeclare a parent attribute inside child class but with differnet implementation, this is polymorphism
Example:
For parent class 'Employee' attribute Work() is:
```cpp
void Work(){
    cout<<Name<<" is checking email,performing tasks......."<<endl;
}
```
But same attributes can be redefined for its children classes with differnet implementation;
For 'Developer' (child of 'Employee') it can be :
```cpp
void Work(){
    cout<<Name<<" is coding !"<<endl;
}
```
For 'Teacher' (child of 'Employee') it can be :
```cpp
void Work(){
    cout<<Name<<" is teaching!"<<endl;
}
```

<b> The most common use of polymorphism is when a parent class reference is used to refer to a child class object </b>

We will pointer of type employee to reference a child class object
```cpp
Employee *e1 = &d; //*e1 => Employee class pointer references 'Developer' Object
Employee *e2 = &t; //*e2 => Employee class pointer references 'Teacher' Object
```
Now if we do e1->Work() and expect output as a developer then it won't work

In order for this to work we will make the parent attribute a virtual function

```cpp
virtual void Work(){
    cout<<Name<<" is checking email,performing tasks......."<<endl;
}
```

virtual checks whether if derived implementation exists
