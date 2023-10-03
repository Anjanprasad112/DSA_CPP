#include <bits\stdc++.h>
using namespace std;

class Hero{
    public:
    int health;
    int price;

    Hero(){
        cout<<"Default Constructor Called"<<endl;
    }
    Hero(int health, int price){
        this->health = health;
        this->price = price;
        cout<<"Parameterized Constructor Called"<<endl;
    }

    ~Hero(){
        cout<<"Default Destructure Called"<<endl;
    }


};

int main(){
    Hero h1;
    h1.health = 100;
    int a = h1.health;
    cout<<"health of a : "<<a<<endl;

    Hero h2(10,500);
     cout<<"health of h2 : "<<h2.health<<endl;

     Hero *h3 = new Hero();
     delete h3;


}