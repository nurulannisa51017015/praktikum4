#include<iostream.h>
#include<conio.h>

main()
{
	int a,b,mod;
   float bagi;
   	cout<<"contoh penggunaan / dan %\n\n";
      cout<<"masukan angka pertama (a)  = ";cin>>a;
      cout<<"masukan angka kedua (b) 	 = ";cin>>b;
      bagi=float(a)/b;
      mod=a%b;
      cout<<"\nHasil pembagian 			 = "<<bagi;
      cout<<"\nSisa hasil bagi			 = "<<mod;
      getch();
      }