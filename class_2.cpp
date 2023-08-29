#include<iostream>
using namespace std;

class HumanBeing{
    private:
    string name;
    int age;
    public:
    void SetData(int val,string word){
        age = val;
        name = word;
    }
    void GetData(){
        cout<<"I am "<<name<<"with age "<<age<<endl;
    }
};

int main()
{
    HumanBeing obj1,obj2;
    obj1.SetData(19,"Lalithendra");
    obj1.GetData();
    obj2.SetData(18,"Sairaja");
    obj2.GetData();
}