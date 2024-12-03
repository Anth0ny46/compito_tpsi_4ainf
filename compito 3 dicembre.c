#include<stdio.h>

int main (){
	
	int a,b;
	int somma;
    int differenza;
    int moltiplicazione;
   float divisione;
    
    printf("inserisci i due numeri: ");
    scanf("%d && %d ",&a,&b);
    printf("inserire la somma:");
    scanf("%d",&somma);
    printf("inserire la differenza:");
    scanf("%d",&differenza);
    printf("inserisci la moltiplicazione:");
    scanf("%d",&moltiplicazione);
}
#define TRACE() printf("%s %d %s", __FILE__, __LINE__,__func__)

int main (){
	int scelta;
	int c,d;
	do{
		printf("inserici il primo numero:");
		scanf("%d",&c);
		printf("inserisci il secondo numero");
		scanf("%d",&d);
		system("cls");
		printf("+ Somma");
		printf("* Moltiplicazione");
		printf("- Differenza");
		printf("/ Divisione");
		printf("^ Potenza");
		printf("# Logger");
		printf("! Esci");
		printf("scelta");
		switch (scelta){
			case 1:
				printf("il risultato della somma e' %d:",(a,b));
			    break;
			case 2:
				printf("il risultato della motiplicazione e' %d:",(a,b));
			    break;
			case 3:
				printf("il risultato della divisione e' %d:",(a,b));
		       	break;
			case 4:
				printf("il risultato della potenza e' %d:",(a,b));
			    break;
			case 5:
				printf("logger:",(a,b));
			    break;
			case 6:
				printf("Esci");
			    break;
		}
	}while (scelta)	
}
#include <stdio.h>

#define BUF 10
int main(){
	int operando1_[BUF] = {0};
int operando2_[BUF] = {0};
int risultato_[BUF] = {0};
char operazione_[BUF] = {'\0'};
}
void logger(int iterazioni){
	printf("inserire le operazioni,e i risultati eseguite;");
}













