## Encapsulating by making attribute private

This involves making attributes private

Gives us control over attribute change/assignment

New Methods added to class
```cpp
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
    if(age>=18) // input validation
        Age = age;
}
int getAge(){
    return Age;
}
```
Now we have 3 setters and 3 getters to interact with object properties.

