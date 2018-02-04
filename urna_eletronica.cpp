/*
Programa em linguagem C++ que simula o funcionamento de uma urna eletronica.
Existem dois candidatos: 1-Ze, 2-Toin. Voto=0 sera voto em branco e qualquer
outra opcao e voto nulo. A urna sera finalizada com qualquer numero negativo,
e informa a quantidade de votos de cada candidato alem dos brancos e nulos.
*/

#include<iostream>

using namespace std;

int main()
{

	int tz, tt, tb, tn, voto;
	tz=0;
	tt=0;
	tb=0;
	tn=0;
	voto=9;

	while(voto>0){
		cout<<"\nDigite o numero do candidato: ";
		cin>>voto;

		if(voto=1)
			tz=tz+1;
		else
			if(voto=2)
				tt=tt+1;
			else
				if(voto=0)
					tb=tb+1;
				else
					tn=tn+1;
	}

	cout<<"\nVotos de Ze: " << tz;
	cout<<"\nVotos de Toin: " << tt;
	cout<<"\nBrancos: " << tb;
	cout<<"\nNulos: " << tn-1;

	cout<<"\n\n";
	return 0;

}
