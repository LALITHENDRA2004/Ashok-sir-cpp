#include<iostream>
using namespace std;

class HumanBeing{
    public:
    string name;
    void display(){
        cout<<"Hi I am "<<name<<endl;
    }
};
int main()
{
    //stores the memory in static
    HumanBeing obj1;
    obj1.name = "Lalithendra";
    obj1.display();
    

    HumanBeing *obj3 = &obj1;
    obj3->display();
    (*obj3).display();

    HumanBeing *obj2 = new HumanBeing();
    obj2->name = "Sairaja";
    obj2->display();
}