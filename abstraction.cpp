#include <iostream>

class AbstractEmployee{
    public:
    virtual void AskForPromotion() = 0;

};


class Employee: public AbstractEmployee{
private: 
    std::string company;
    std::string name;
    int age;

public:
    void setCompany(std::string company){
        this-> company = company;
    }
    std::string getCompany(){
        return company;
    }
    void setName(std::string name){
        this-> name = name;
    }
    std::string getName(){
        return name;
    }
    void setAge(int age){
        this->age = age;
    }
    int getAge(){
        return age;
    }
void AskForPromotion() {
    if (age > 30)
        std::cout << name << " got promoted!";
}
Employee(std::string company, std::string name, int age){
    this->company = company;
    this->name=name;
    this->age=age;
}};

int main(){

Employee employee1 = Employee ("TCS", "Mia", 27);
Employee employee2 = Employee ("CloudK","AJ", 35);

std::cout<<employee1.getName();

return 0;

}