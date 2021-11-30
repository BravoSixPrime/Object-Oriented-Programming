## Hiding complex things behind a procedure that makes them simple

Say if we want to know whether an employee is eligible for promotion

To simply this process we will: 

Create Abstract class called AbstractEmployee
```cpp
class AbstractEmployee{
    virtual void AskForPromotion()=0; //Purely virtual function
}
```

In order to make this obligatory for every employee instance we will make changes for the class Employee:

class Employee<b> : AbstractEmployee</b> {
    ...
}

Now we need to implement this method in public members
```cpp
void AskForPromotion(){
    //Setting condition for promotion
    if(Age > 30)
        cout<<Name<<" Got Promoted!";
    else
        cout<<"No promotion for you "<<Name;
}
```

Extraction allowed us to set up a contract that helped reduce complexity of the code
