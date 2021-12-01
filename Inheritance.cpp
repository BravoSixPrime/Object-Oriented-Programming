#include <iostream>
using namespace std;
//Contract that sets while intilization
class AbstractEmployee{
    virtual void AskForPromotion()=0; //Purely virtual function
};
class Employee:AbstractEmployee{
private:  
    string Company;
    int Age;
protected:
    string Name; // We made it protected for child's access
public:  
    //Setter
    void setName(string name){
        Name = name;
    }
    //Getter
    string getName(){
        return Name;
    }
    //Making setter & getter for other attributes
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        if(age>=18)
            Age = age;
    }
    int getAge(){
        return Age;
    }
    //Constructor
    Employee(string name,string company,int age){ // Constructer
        Name = name;
        Age = age;
        Company = company;
    }
    //Method
    void IntroduceYourself(){
        cout<<"Hi I am "<<Name<<"\n";
        cout<<"I am "<<Age<<" years old\n";
        cout<<"I work at "<<Company<<"\n";
    }
    void AskForPromotion(){
        //Setting condition for promotion
        if(Age > 30)
            cout<<Name<<" Got Promoted!";
        else
            cout<<"No promotion for you "<<Name;
    }

};
class Developer : public Employee { //Developer => Child Class     Employee => Parent class
public:
    string ProgrammingLang; // Specific for 'Developer'
    //Constructer
    Developer(string name,string company,int age,string programmingLang)
        :Employee(name,company,age)
    {
        ProgrammingLang = programmingLang;
    }
    //Method
    void FixBug(){
        cout<<Name<<" Fix bug using "<<ProgrammingLang;
    }
};
class Teacher : public Employee{
public:
    string Subject;
    Teacher(string name,string company,int age,string subject )
        :Employee(name,company,age)
    {
        Subject = subject;
    }
    void PrepareLesson(){
        cout<<Name<<" is preapring lessons for "<<Subject;
    }
};

int main(){
    Developer d = Developer("Jay","Google",21,"cpp");
    // d.FixBug();
    // d.AskForPromotion();
    Teacher t = Teacher("Gary","Hogwarts",35,"Magic");
    t.AskForPromotion();
    // Employee emp1 = Employee("Jay","Google",21);//Varible of type Employee
    // Employee emp2 = Employee("Gary","Meta",33);

    // emp1.AskForPromotion();
    // emp2.AskForPromotion();

    // emp1.IntroduceYourself();
    // emp2.IntroduceYourself();
    
    // emp1.setAge(25);
    // cout<<emp1.getName()<<" is "<<emp1.getAge()<<" years old!\n";
}