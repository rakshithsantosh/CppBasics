#include <iostream>

using namespace std;

int main (){
    int age = 20;

    if(age > 18){
        cout << "you are eligible for vote";
    }
    else if (age == 18){
        cout <<"you are eligible phew!";
    }
    else{
        cout <<"you are not yet eligible for vote";
    }

    int choice ;
    cin >> choice;

    switch(choice){
        case 1:
            cout << "selected 1";
        case 2:
            cout << "selected 2";
        default:
            cout << "selected none";        
    }

    return 0;
}