#include<iostream>
using namespace std;
class DB;
class DM{
    int m,cm;
    public:
    void get_data(){
        cout<<"\n Enter meater values :";
        cin>>m;
        cout<<"\n Enter Centimeter values :";
        cin>>cm;
    }
    friend float sum(DM a,DB b);
};
class DB{
    int ft,in;
    public:
    void get_data(){
        cout<<"\n Enter feet value : ";
        cin>>ft;
        cout<<"\n Enter inches values: ";
        cin>>in;
    }
    friend float sum(DM a,DB b);
};
float sum(DM a,DB b){
    float x,y,z;
    x=(a.m+(a.cm/100));
    y=(b.ft+(b.in/12));
    z=(x+(y*0.304));
    return z;
}
int main(){
    DM a;
    DB b;
    cout<<"\n Enter the value in meter and centimeter. ";
    a.get_data();
    cout<<"\n Enter the values in feet and inches. ";
    b.get_data();
    sum(a,b);
    cout<<"\n The sum of  values in meter is : "<<sum(a,b);
    return 0;
    
}
