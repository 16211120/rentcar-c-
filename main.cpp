#include <iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void rentcar();
void luxury();
void normal();
void cusreg();
int main()
{
    rentcar();
    return 0;
}
void rentcar()
{
    int opt;

    cout<<"----------Reservation----------";
    cout<<"\n";
    cout<<"\n1.Luxury Vehicle ";
    cout<<"\n2.Normal Vehicle ";
    cout<<"\n3.Exit ";
    cout<<"\n\n";
    cout<<"Enter your option: ";
    do
    {
     cin>>opt;
    switch(opt)
    {
       case 1:luxury();break;
       case 2:normal();break;
       case 3:cout<<"Exit";break;
       default:cout<<"Invalid option";
    }

    }while(opt!=3);
}
void luxury()
{
    fstream a;
    a.open("Cardetails.txt",ios::in);
    int x;
    string y,z,p,q,r;
    string w;

    while(a)
    {
     a>>x>>y>>z>>p>>q>>r;
     if(y=="luxury")
     {
         break;

     }

    }
    cout<<x<<"\t"<<y<<"\t"<<z<<"\t"<<p<<"\t"<<q<<"\t"<<r<<endl;

   char ch;
   cout<<"\n\n";
    cout<<"Do you want to book a car: ";
    cout<<"\n1.yes->y\n2.no->n:: ";
    cin>>ch;
    if(ch=='y')
    {
     cusreg();
    }
    else
    {
        rentcar();
    }



}

void normal()
{
   fstream a;
    a.open("Cardetails.txt",ios::in);
    int x;
    string y,z,p,q,r;
    string w;

    while(a)
    {
     a>>x>>y>>z>>p>>q>>r;
     if(y=="normal")
     {
         break;

     }

    }
    cout<<x<<"\t"<<y<<"\t"<<z<<"\t"<<p<<"\t"<<q<<"\t"<<r;

}

void cusreg()
{

    string cn,na,ctp;
    cout<<"----------Reservation----------";
    cout<<"\n";
    cout<<"\n1.Customer NIC number: ";
    cin>>cn;
    cout<<"\n2.Customer Name: ";
    cin>>na;
    cout<<"\n3.Customer Contact number: ";
    cin>>ctp;




}

