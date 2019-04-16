#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

main()
{
	int a,b,mod;
   float bagi;
   	cout<<"contoh penggunaan / dan %\n\n";
      cout<<"masukan angka pertama (a)  = ";cin>>a;
      cout<<"masukan angka kedua (b) 	 = ";cin>>b;
      bagi=float(a)/b;
      mod=a%b;
      cout<<"\nHasil pembagian 			 = "<<setiosflags(ios::fixed)<<setprecision(3)<<bagi;
      cout<<"\nSisa hasil bagi			 = "<<mod;
      getch();
      }