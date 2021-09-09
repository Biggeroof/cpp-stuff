#include <iostream>
#include <string>

using namespace std;

class Chef
{
    public:
        void makeChicken()
        {
            cout << "the chef makes chicken" << endl;
        }
        void makeSalad()
        {
            cout << "the chef makes salad" << endl;
        }
        void makeSpecialDish(){
            cout << "the chef makes bbq ribs" << endl;
        }
};

class italianChef : public Chef
{
    public:
        void makeSpecialDish(){
            cout << "the chef makes pasta" << endl;
        }

};

int main()
{
    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();

    italianChef chefTwo;
    //inherits makeChicken function from Chef class
    chefTwo.makeChicken();
    //overrides the function from the Chef class
    chefTwo.makeSpecialDish();
}