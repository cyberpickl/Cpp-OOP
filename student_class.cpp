#include <iostream>

class Student {
public:
    int id;
    std::string name;
    int grade;


void StudentGreet(){
    std::cout<<name<<" says Hello!"<<std::endl;
    std::cout<<name<<" "<<id<<" is in grade: "<<grade<<std::endl;
}

Student( int i, std::string n, int g){
    id = i;
    name = n;
    grade = g;
}};

int main (){

Student s1 = Student (24225026, "Vanshika", 8);
s1.StudentGreet();

}