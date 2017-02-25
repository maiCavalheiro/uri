#include <cstdio>
#include <cmath>

using namespace std;

int sorteio(int qtd){
	int ingresos[qtd];
	int sorteado = 0,cont=1;

	for(int i=1;i<=qtd; i++){

		scanf("%d",&ingresos[i]);
		cont = i;

		if (ingresos[i] == cont){
			sorteado = ingresos[i];
		}
	}

	return sorteado;
}

int main(){

	int participantes, sorteado, cont=1;
	scanf("%d",&participantes);

	while(participantes != 0)
	{

	sorteado = sorteio(participantes);

	printf("Teste %d\n",cont);
	printf("%d\n",sorteado);
	printf("\n");

	scanf("%d",&participantes);

	cont++; }

	return 0; 

}