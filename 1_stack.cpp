#include <iostream>
#include <stack>

using namespace std;
#define max 5
int indeks=0;
stack<int>s;

bool isFull(){
	if (indeks>= max) return true;
	else return false;
}

bool isEmpty(){
	if (indeks == 0) return true;
	else return false;
}

void push(int nilai){
	if(!isFull()){
		s.push(nilai);
		indeks++;
	}
	else{
		cout<<"Data Telah Penuh"<<endl;
	}
}

void pop(){
	if(!isEmpty()){
		s.pop();
		indeks--;
		cout<<"Satu data telah di pop"<<endl;
	}
	else{
		cout<<"Data Kosong"<<endl;
	}
}

void print(){
	if(!isEmpty()){
		cout<<"Tampilan data = ";
		do{
			cout<<s.top()<<" ";
			s.pop();
		}while (s.size()!=0);
	}
	else{
		cout<<"Data Kosong"<<endl;
	}
}


int main(){
	
	int data, pilih;
	
	awal:
		system("cls");
		cout<<"+================+"<<endl;
		cout<<"|    Pilihan     |"<<endl;
		cout<<"+================+"<<endl;
		cout<<"|1. Push         |\n|2. Pop          |\n|3. Print & Clear|\n|4. Quit         |"<<endl;
		cout<<"+================+"<<endl;
		cout<<"=> ";
		cin>>pilih;
		switch (pilih){
		case 1:
			cout<<"+============+"<<endl;
			cout<<"|    Push    |"<<endl;
			cout<<"+============+"<<endl;
			cout<<"Masukkan data = ";
			cin>>data;
			push(data);
			break;
		
		case 2:
			cout<<"+============+"<<endl;
			cout<<"|     Pop    |"<<endl;
			cout<<"+============+"<<endl;
			pop();
		break;
		
		case 3:
			cout<<"+=============+"<<endl;
			cout<<"|Print & Clear|"<<endl;
			cout<<"+=============+"<<endl;
			cout<<"=> ";
			print();
			cout<<"Data telah Bersih"<<endl;
		break;
		
		case 4:
			goto akhir;
		break;
		
		default:
			cout<<"Error"<<endl;
		}
	system("pause");
	goto awal;	
	akhir:
	return 0;
}
