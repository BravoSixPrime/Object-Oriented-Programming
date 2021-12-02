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
    virtual void Work(){
        cout<<Name<<" is checking email,performing tasks......."<<endl;
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
    void Work(){
        cout<<Name<<" is coding !"<<endl;
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
    void Work(){
        cout<<Name<<" is teaching !"<<endl;
    }
};

int main(){
    Developer d = Developer("Jay","Google",21,"cpp");
    Teacher t = Teacher("Gary","Hogwarts",35,"Magic");

    Employee *e1 = &d; //*e1 => Employee class pointer references 'Developer' Object
    Employee *e2 = &t; //*e2 => Employee class pointer references 'Teacher' Object
    
    e1->Work();
    e2->Work();
}