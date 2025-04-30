#include <iostream>

using namespace std;

void getSomething(){
    cout << "something";
}
int main (){

    getSomething();//function calling

    //function overloading : function with same name but with different parameters

    //lamda function running just once 
    auto prepare = [](int para){
        cout << "this is from a lambda function";
    };

    prepare(4);
    return 0;
}