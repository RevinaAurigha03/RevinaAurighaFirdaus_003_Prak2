//* Revina Aurigha Firdaus (21091397003)

#include <conio.h>
#include<iostream>
using namespace std;

int main(int argc, char *argv[]){
	int matA[2] [2] = {4, 8, 2, 10};
	int matB[2] [2] = {-5, 4, 8, -12};
	int transpose[2][2];
	
	cout<<"Matriks A"<<endl;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			cout<<matA[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Matriks B"<<endl;
	for (int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<matB[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Hasil transpose matriks A"<<endl;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			//soal transpose matriks
			transpose[i][j] = matA[j][i];
			cout<<transpose[i][j]<<" ";
		}
		cout<<endl;
	}
	
	system("PAUSE");
	return 0;
}
