#include<iostream>
using namespace std;

class time24{
    int h,m;
    public:
    void getData(){
        cout<<"\n Enter hour and minute (24-hour): )";
        cin>>h>>m;
    
    }
    int geth(){
        return h;
    }
    int getm(){
        return m;
    }
    void putdata(){
        cout<<"\n";
        if(h<=9){
            cout<<"0"<<h<<":";
        }
        else{
            cout<<h<<":";
        }
        if(m<=9){
            cout<<"0"<<m;
        }
        else{
            cout<<m;
        }
    }
};
//this time12 returning or converting 12 format to 24 hour format
class time12{
    int h,m;
    public:
    time12(){

    }
    time12(time24 t){
        h=t.geth();
        if(h>12){
            h=h % 12;
            cout<<"hour convetor"<<h;
            m=t.getm();
        }
    }
    void getData(){
        cout<<"\n Enter hour and minut (12-hour format): ";
        cin>>h>>m;
    }
    void putData(){
        cout<<endl;
        if(h<=9){
            cout<<"0"<<h<<":";
        }
        else{
            cout<<h<<":";
        }
        if(m<=9){
            cout<<"0"<<m;
        }
        else{
            cout<<m;
        }
    }
};

int main(){
    time12 t12;
    time24 t24;
    t24.getData();
    t12=t24;
    t12.putData();

    t12.getData();
    t24.putdata();

}
