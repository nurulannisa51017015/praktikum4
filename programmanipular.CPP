#include<iostream.h>
#include<conio.h>
#include<iomanip.h>


int nilai1;
float nilai2;
char nama [20];
double gaji;

void main () {
cout<<"masukan nilai bulat : "; cin>>nilai1;
cout<<"tampilkan nilai yang anda masukan "<<endl;
cout<<"menggunakan setw(8) : "<<setw(8)<<nilai1<<endl;
cout<<"menggunakan setw(-8) :"<<setw(-8)<<nilai1<<endl;
cout<<"menggunakan setw(8) dan setfill('*') : ";
cout<<setfill('*')<<setw(8)<<nilai<,endl;
cout<<setfill('*');
getch();
clrscr();
cout<<"masukan nilai pecahaan : ";
cin>>nilai2;
cout<<"tampiulkan nilai yang anda masukan "<<endl;
cout<<"menggunakan setiosflags(ios ::fixed) : "<<setiosflags(ios::fixed<<nilai2<<endl;
cout<<"menggunakan setiosflags(ios ::scentific) : "<<setiosflags(ios::scentific<<nilai2<<endl;
cout<<"resetiosflags(ios::scentific);
cout<<"menggunakan setprecision(4) : ";
cout<<"setprecision(4)<<nilai2<<endl;
getch();
clrscr();
cout<<"masukan mana anda : ";
cin>>nama;
cout<<"masukan uang saku anda perbulan : ";
cin>>gaji;
cout<<"tampilkan data yang anda masukan "<<endl;
cout<<"menggunakan setiosflags(ios::left) dan setiosflags(ios::right) : " ;
cout<<endl;
cout<<setiosflags(ios::left)<<sewt(25)<"N A M A";
cout<<setiosflags(ios::right)<<sewt(10)<"UANG SAKU"<<endl;
cout<<setiosflags(ios::left)<<sewt(25)<"nama";
cout<<setiosflags(ios::left)<<sewt(25)<"gaji";
}


