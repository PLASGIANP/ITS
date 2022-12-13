#include <iostream>

using namespace std;

int main(void){
	int K;
	int H;
	int N;
	int somma = 0;
	int j = 0;
	cout<<"Questo programma permette di sapere quanti N numeri presi in input sono compresi 
	tra i valori presi in input H e K"<<endl;
	cout<<"Inserire il valore di H (numero piccolo)"<<endl;
	cin >> H;

	cout<<"Inserire il valore di K (numero grande)"<<endl;
	cin >> K;
	cout<<"Quanti numeri desidera inserire?"<<endl;
	cin >> N;

	for (int i = 0; i < N; i++){
		cout<<"Inserire il n."<<i+1<<"/"<<N<<endl;
		if (n < K && n > H){
			j++;			
		}
	}
	cout<<"I numeri compresi tra H e K sono: "<<j<<endl;
	return 0;
}