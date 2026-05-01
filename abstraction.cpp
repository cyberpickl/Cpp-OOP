#include <iostream>


class Employee {
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