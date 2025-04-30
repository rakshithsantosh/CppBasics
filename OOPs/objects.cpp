#include <iostream>
#include <vector>

using namespace std;

class Coffee {
    public:
        //data members(attributes)
        string name;
        int servings;
        vector<string> ingredients; 

        //Member function 

        void displayCoffeeDetails(){
            cout << "Coffee name :" << name << endl;
            cout << "Servings :" << servings << endl;
            cout << "Ingredients:" ;
            for (string ingredient : ingredients){
                cout << ingredient <<endl;
            }
            cout << endl;
        }
};

int main (){

    Coffee myCoffee;

    myCoffee.name = "robusta";
    myCoffee.servings= 2;
    myCoffee.ingredients={"water","coffee","sugar"};

    myCoffee.displayCoffeeDetails();


    return 0;
}