#include<bits/stdc++.h>
using namespace std;
class Base{
    public :
    void show(){ 
        cout<<"base show"<<endl;
    }
};
class derived : public Base {
    public :
    void show(){
        cout<<"derived show"<<endl;
    }
};

int main(){
    Base *bptr;
    derived d;

     bptr = &d;

    bptr->show();
    d.show();

}