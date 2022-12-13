#include <iostream>

using namespace std;

int main(void){
	int K;
	int n;
	int N;
	int somma = 0;
	int j = 0;
	cout<<"Questo programma permette di prendere in input un numero K\nche sara' usato per calcolare quanti N numeri inseriti dall'utente sono piu' grandi di K"<<endl;
	cout<<"Inserire il valore di K"<<endl;
	cin >> K;

	cout<<"Inserire quanti numeri si desidera comparare rispetto a K"<<endl;
	cin >> N;
	for (int i = 0; i < N; i++){
		cout<<"Inserire il valore n."<<i + 1<<" :"<<endl;
		cin >> n;
		if (n > K){
			j++;
			somma += n;
		}
	}
	cout<<"I numeri maggiori di K sono :"<<j<<endl;
	cout<<"E la loro somma e' :"<<somma;
	return 0;
}