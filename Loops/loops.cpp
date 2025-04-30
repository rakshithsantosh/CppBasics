#include <iostream>

using namespace std;

int main (){

    int score = 6;

    //while loop
    while(score>1){
        cout <<"positive";
        score--;
    }

    //do while loop
    do{
        cout << "this is using do while loop";
        score--;
    }while(score>1);

    int length =10;
    //for loop
    for(int i=0;i<length;i++){
        cout <<"this is inside a for loop";
    }

    return 0;
}