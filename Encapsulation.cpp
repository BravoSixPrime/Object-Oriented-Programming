#include <iostream>
using namespace std;
class Employee{
private: 
    string Name;
    string Company;
    int Age;
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

};

int main(){
    Employee emp1 = Employee("Jay","Google",21);//Varible of type Employee
    Employee emp2 = Employee("Gary","Meta",33);

    emp1.IntroduceYourself();
    emp2.IntroduceYourself();
    
    emp1.setAge(25);
    cout<<emp1.getName()<<" is "<<emp1.getAge()<<" years old!\n";
}