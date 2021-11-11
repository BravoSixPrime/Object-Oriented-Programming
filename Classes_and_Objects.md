## Class with private (default) attrubutes
```cpp
#include <iostream>
using namespace std;
class Employee{
    //Attributes
    string Name;
    string Company;
    int Age;

};

int main(){
    Employee emp1;//Varible of type Employee
}
```
Mentioning private explcitely
```cpp
#include <iostream>
using namespace std;
class Employee{
private:
    string Name;
    string Company;
    int Age;

};

int main(){
    Employee emp1;//Varible of type Employee
}
```
Making attributes private will make them inaccessible outside the class

Making attributes protectd will make them inaccessible outside the class but accessible from sub-class

Making attributes public will make them assignable and accessible



