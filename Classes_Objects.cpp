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