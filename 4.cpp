#include<iostream>
#include <string>
using namespace std;
int main ()
{
   int i, j,k,banyak,temp;
   int a[10];
   string nama[10], tempname;
   
cout<<"Masukkan banyak data : ";
cin>>banyak;
for (i=0; i<banyak; i++){
	cout<<"Data ke-"<<i+1<<endl;
	cin.ignore(); 
	cout<<"Nama		= ";
	getline(cin,nama[i]);
	cout<<"NIM		= ";
	cin>>a[i];

}
for(i = 0; i<banyak; i++) {
   for(j = i+1; j<banyak; j++)
   {
      if(a[j] < a[i]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        
        tempname=nama[i];
        nama[i]=nama[j];
        nama[j]=tempname;
      }
   }
}
system("cls");
cout <<"Urutan nama Mahasiswa sesuai NIM"<<endl;
cout<<"==========================================="<<endl;
for(i = 0; i<banyak; i++){
	cout<<i+1<<". "<<endl;
	cout<<"Nama		= "<<nama[i]<<endl;
	cout<<"NIM		= "<<a[i]<<endl;
	cout<<"==========================================="<<endl;
}

return 0;
}
