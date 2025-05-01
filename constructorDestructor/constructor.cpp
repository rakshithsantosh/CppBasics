#include <iostream>
#include <vector>

using namespace std;

class Chai{
   public:
    string name;
    int servings;
    vector<string> ingridients; 

    //default constructor
    Chai(){
        name="something";
        servings=1;
        ingridients={"water","coffee"};
    }
};

int main(){

    //as the object is called constructor is called there can be default constructor or parameter constructor
    Chai chai;
    cout<<chai.name<<endl;


    //destructor frees the memory allocation
    ~Chai(){
        delete name;
    }
    return 0;
}