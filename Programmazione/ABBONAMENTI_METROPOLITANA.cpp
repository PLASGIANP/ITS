#include <iostream>

using namespace std;

int verificaCin(int a,int b);
float verificaCostoAbbonamento(int t,char d,int c);

const float ORE_PUNTA = 0.2;

int main(){
	int tipo,priorita; char durata;
	int scelta;
	float costo;
	while(true){
		cout<<"Scegliere cosa fare:"<<endl;
		cout<<"1:Calcolare il tipo di abbonamento\n2:Uscire"<<endl;
		scelta = verificaCin(1,2);
		if (scelta == 1){
			/*cout<<"--------------------------------------------"<<endl;
			cout<<"---TIPO---Settimanale---Mensile---Annuale---"<<endl;
			cout<<"----1--------10€---------30€-------250€-----"<<endl;
			cout<<"----2--------5€----------20€-------150€-----"<<endl;
			cout<<"----3--------15€---------40€-------300€-----"<<endl;
			cout<<"--------------------------------------------"<<endl;*/
			cout<<"Calcolo Abbonamenti metropolitana di Roma"<<endl;
			cout<<"Scegliere il tipo di abbonamento:"<<endl;
			cout<<"Scegliere il tipo:\n1:zona centrale\n2:zona periferica\n3:entrambe le zone"<<endl;
			tipo = verificaCin(1,3);
			cout<<"Scegliere se: \nA: Annuale\nM: Mensile\nS: Settimanale"<<endl;
			fflush(stdin);
			durata = getchar();
			cout<<"Infine scegliere la priorita'(Gli abbonamenti di bassa priorità hanno una riduzione del 20% del costo dell'abbonamento):"<<endl;
			cout<<"1:Alta priorita'\n2:Bassa priorita'"<<endl;
			priorita = verificaCin(1,2);
			costo = verificaCostoAbbonamento(tipo,durata,priorita);
			cout<<"Il costo dell'abbonamento e' di :"<<costo<<"euro"<<endl;
		}
		if (scelta == 2){
			break;
		}
	}
	return 0;

}

int verificaCin(int a,int b){
	int x;
	cin >> x;
	while(x < a && x > b){
		cout<<"ERRORE!!!La prego di inserire dei valori compresi tra a e b"<<endl;
		cin >> x;
	}
	return x;
}

float verificaCostoAbbonamento(int t,char d,int c){
	if (t == 1){

		if (d == 'A'){
			if (c == 1){
				return 250;
			}else if (c == 2){
				return 250 - (250 * ORE_PUNTA);
			}
		}

		else if (d == 'M'){
			if (c == 1){
				return 30;
			}else if (c == 2){
				return 30 - (30 * ORE_PUNTA);
			}
		}

		else if (d == 'S'){
			if (c == 1){
				return 10;
			}else if (c == 2){
				return 10 - (10 * ORE_PUNTA);
			}
		}

	}

	if (t == 2){
		
		if (d == 'A'){
			if (c == 1){
				return 150;
			}else if (c == 2){
				return 150 - (150 * ORE_PUNTA);
			}
		}

		else if (d == 'M'){
			if (c == 1){
				return 20;
			}else if (c == 2){
				return 20 - (20 * ORE_PUNTA);
			}
		}

		else if (d == 'S'){
			if (c == 1){
				return 5;
			}else if (c == 2){
				return 5 - (5 * ORE_PUNTA);
			}
		}

	}

	if (t == 3){
		
		if (d == 'A'){
			if (c == 1){
				return 300;
			}else if (c == 2){
				return 300 - (300 * ORE_PUNTA);
			}
		}

		else if (d == 'M'){
			if (c == 1){
				return 40;
			}else if (c == 2){
				return 40 - (40 * ORE_PUNTA);
			}
		}

		else if (d == 'S'){
			if (c == 1){
				return 15;
			}else if (c == 2){
				return 15 - (15 * ORE_PUNTA);
			}
		}

	}

}