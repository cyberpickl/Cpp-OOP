// #include <iostream>

// class Student {
// public:
//     int id;
//     std::string name;
//     int grade;


// void StudentGreet(){
//     std::cout<<name<<" says Hello!"<<std::endl;
//     std::cout<<name<<" "<<id<<" is in grade: "<<grade<<std::endl;
// }

// Student( int i, std::string n, int g){
//     id = i;
//     name = n;
//     grade = g;
// }};

// int main (){

// Student s1 = Student (24225026, "Vanshika", 8);
// s1.StudentGreet();

// }

/*same program with encapsulation - variables are hidden, using functions like setter and getter to assign and access values*/
#include <iostream>

class Student{
private: // anything thats not explicitly declared as public is private by default
    int id;
    std::string name;
    int grade;

public:
Student(int i, std::string n, int g){

    id = i;
    name = n;
    grade =g;
}


void setStudent(int i, std::string n, int g){

    id = i;
    name = n;
    grade =g;
}

void getStudent() { // you can also individual "Gates" for get name, get id, get grade wagera. 
    std::cout << name << " " << id << " grade: " << grade;
}

void StudentGreet(){
     std::cout<<name<<" says Hello!"<<std::endl;
     std::cout<<name<<" "<<id<<" is in grade: "<<grade<<std::endl;
 }

};


int main (){
    Student s1 = Student(24225026,"Ali", 9);
    s1.StudentGreet();
    
}

