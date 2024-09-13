#include<iostream>
using namespace std;
class shape{
    protected:
    double length;
    double width;
    public:
    void getdata(){
        cout<<"Enter Length: ";
        cin>>length;
        cout<<"Enter Width: ";
        cin>>width;
    }
    virtual double calculate()=0;
    void display(){
        cout<<"Area: "<<calculate()<<endl;
    }
};
class Triangle:public shape{
    public:
    double calculate(){
        return 0.5 * length * width;
    }
};
class Rectange: public shape{
    public:
    double calculate(){
        return length * width;
    }
};
int main(){
    Triangle t;
    Rectange r;
    cout<<"Enter Triangle Details: "<<endl;
    t.getdata();
    cout<<"Triangle ";
    t.display();

    cout<<"\n Enter Rectangel Details :"<<endl;
    r.getdata();
    cout<<"Rectangel ";
    r.display();
    return 0;
}