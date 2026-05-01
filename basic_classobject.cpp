#include <iostream>



/*so here we've made the blueprint of a class with its attributes THIS IS PRIVATE BY DEFAULT, ALL MEMBERS OF A CLASS ARE PRIVATE UNLESS EXPLICITY SPECIFIED */
class Vehicle {
public:
    std::string Name;  
    std::string Model;
    int ModelYear;


    void Start(){
        std::cout<<"Name - "<<Name; 
        std::cout<<" Model- "<<Model; 
        std::cout<<" ModelYear- "<<ModelYear; 
    }

    Vehicle( std::string n, std::string m, int Y){
        Name = n ;
        Model = m;
        ModelYear = Y;
    }};

/*access modifier - Private; Public; Protected (in between)*/

int main (){ Vehicle Car = Vehicle ("Toyota","M7", 2007);
    std::cout<<Car.Name;

     }
    
     
    


