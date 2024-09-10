#include<iostream>
using namespace std;
class bill{
    protected:
    char name[30];
    float units,total_bill,add_charge;
    public:
    void getdata();
    int calculate();
    void display();
};
void bill:: getdata(){
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter your units: ";
    cin>>units;
}
int bill::calculate(){
    if(units<=100){
        total_bill=50+(units*0.60);
    }
    else if(units >100 && units<=300){
        total_bill=50+60+((units-100)*0.80);
    }
    else{
        total_bill=50+60+80+((units-300)*0.90);
    }
    if(total_bill>300){
        add_charge=total_bill*15/100;
        total_bill=total_bill+add_charge;
    }
    return total_bill;
}
void bill::display(){
    
    cout<<"your name is :"<<name<<endl;
    cout<<"units :"<<units<<endl;
    cout<<"Your total bill is :"<<total_bill<<endl;
}
int main(){
    bill b;
    b.getdata();
    b.calculate();
    b.display();
    return 0;
}
