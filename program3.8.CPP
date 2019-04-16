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
      bagi=a/float(b);
      mod=a%b;
      cout<<"\nHasil pembagian 			 = "<<setprecision(3)<<bagi;
      cout<<"\nSisa hasil bagi			 = "<<mod;
      getch();
      }