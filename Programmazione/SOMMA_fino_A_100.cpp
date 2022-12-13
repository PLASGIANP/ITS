#include <iostream>

using namespace std;

int main(void){
	float somma = 0;
	float n;
	int i = 1;
	cout<<"Questo programma permette di effettuare la somma di n numeri finchè questi non superino 100"<<endl;
	while(somma < 100){
		cout<<"Inserire il valore n."<<i<<" :"<<endl;
		cin >> n;
		somma = somma + n;
		cout<< "\n il valore di somma e' : "<<somma<<endl;
		i++;

	}
	return 0;
}