#include <iostream>

using namespace std;

class Chai{
    private:
        string name;
        int servings;
    public:
        Chai(string name,int serve):name(name),servings(serve){}  

        friend bool compareServings(const Chai &chai1,const Chai &chai2);
        
        void display() const{
            cout << name << endl;
        }
};

bool compareServings(const Chai &chai1,const Chai chai2){
    return chai1.servings > chai2.servings;
}

int main (){

    return 0;
}