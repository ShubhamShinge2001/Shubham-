#include<bits/stdc++.h>
using namespace std;

class Base {
    public :
    virtual void show(){
        cout<<"base_show"<<endl;
    }

    void display(){
        cout<<"base_display"<<endl;
    }
};

class Derived : public Base{
    public :
        void show(){
        cout<<"derived_show"<<endl;
    }

    void display(){
        cout<<"derived_display"<<endl;
    }
};

int main(){
    Base * bpter;

    Derived d;

    bpter = &d;

    bpter->show();
}