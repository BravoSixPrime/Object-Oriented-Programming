## Access Modifiers
* private (default)
* public
* protected
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

## Accessing attibbutes
```cpp
#include <iostream>
using namespace std;
class Employee{ 
public:   
    string Name;
    string Company;
    int Age;

};

int main(){
    Employee emp1;//Varible of type Employee
    emp1.Name="Jay";
    emp1.Company = "Google";
    emp1.Age=21;
    cout<<emp1.Name;
    return 0;
}
```
## Class Method
Setting IntroduceYourselft()
```cpp
#include <iostream>
using namespace std;
class Employee{ 
public:   
    string Name;
    string Company;
    int Age;

    void IntroducYourself(){
        cout<<"Hi I am "<<Name<<"\n";
        cout<<"I am "<<Age<<" years old\n";
        cout<<"I work at "<<Company<<"\n";
    }

};

int main(){
    Employee emp1;//Varible of type Employee
    emp1.Name="Jay";
    emp1.Company = "Google";
    emp1.Age=21;
    emp1.IntroducYourself();
    return 0;
}
```
## Constructer
If we want to initialize many objects we will have to assign each attribute separatly

To prevent this, constructer is called as intializer of a particular class

Constructer should be public and name should be same as class name

Constructer doesn't have return type
```cpp
#include <iostream>
using namespace std;
class Employee{ 
public:   
    string Name;
    string Company;
    int Age;

    Employee(string name,string company,int age){ // Constructer
        Name = name;
        Age = age;
        Company = company;
    }

    void IntroduceYourself(){
        cout<<"Hi I am "<<Name<<"\n";
        cout<<"I am "<<Age<<" years old\n";
        cout<<"I work at "<<Company<<"\n";
    }

};

int main(){
    Employee emp1 = Employee("Jay","Google",21);//Varible of type Employee
    Employee emp2 = Employee("Gary","Meta",33);
    emp1.IntroduceYourself();
    emp2.IntroduceYourself();
    return 0;
}
```





