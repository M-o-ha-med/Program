#include<iostream>
#include<conio.h>
using namespace std;
int pangkat (int basis,int asi);
int main()
{
	int nilai,power;
	cout<<"Masukkan nilai basis: ";
	cin>>nilai;
	cout<<"Masukkan nilai pangkat: ";
	cin>>power;
	cout<<nilai<<"^"<<power<<" = "<<pangkat(nilai,power);
	getch();
	
}

int pangkat(int basis,int asi){
	if(asi== 1)
	return(basis);
	else{
		return(basis*pangkat(basis,asi-1));
	}
}
