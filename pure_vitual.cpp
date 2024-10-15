#include<bits/stdc++.h>
using namespace std;
class Base {
    public :
    virtual void show() = 0;
};

class Derived : public Base{
    public :
    void show(){
        cout<<"show_Derived"<<endl;
    }

};

int main(){
    Base* obj;

    Derived D;

    obj = &D;

    obj->show();
}