#include <iostream>

using namespace std;

int* prepareOrders(int order){
    int* orders = new int [order];

    for(int i=0;i<order;i++){
        orders[i] = (i+1)*10;
    }

    return orders;//since this is a pointer it returns the memory reference no the entire array
}

int main(){

    int temperature[5] = {1,2,3,4,5};

    cout <<"temperature"<<endl;

    for(int i=0;i<5;i++){
        cout << temperature[i] <<endl;
    }

    //pointers (dynamic memory)
    int cups = 5;
    int* coffeeOrder = prepareOrders(cups);

    for(int i=0;i<cups;i++){
        cout << coffeeOrder[i] <<endl;
    }

    //if any function is executed in the stack post the execution the reference to the function is lost 

    //in dynamic memory the reference is not lost we have to explicitly delete the memory from heap

    //to clean up memory
    delete[] coffeeOrder;

    //2d array int arr[row][col]

    return 0;
}