/*10 Em um cinema, certo dia, cada espectador respondeu a um question�rio,
que perguntava a sua idade ( e a opini�o em rela��o ao filme (
seguindo os seguintes crit�rios
Ao final da pesquisa ser� indicado quando a idade do usu�rio for informada
como negativa (idade inexistente) Construa um programa em C++ que, lendo
esses dados, calcule e apresente
A Quantidade de pessoas que respondeu a pesquisa
B M�dia de idade das pessoas que responderam a pesquisa
C Porcentagem de cada uma das respostas*/

#include <iostream>

using namespace std;

int  main ( int argc, char  const *argv[]){
	int contadorOtimo = 0 , contadorBom = 0 , contadorRegular = 0 , contadorRuim = 0 , menu = 0 ;
	float percentOtimo = 0 , percentBom = 0 , percentRegular = 0 , percentRuim = 0 , idade = 0 ;
	float totalEspectadores = 0 , totalIdades = 0 ;
	cout << " PESQUISA DE SATISFA��O. \n " ;
	cout << " -------------------------------------- \n " ;
	fazer {

        cout << " INFORME SUA IDADE. \n " ;
        cin >> idade;
		totalIdades = totalIdades + idade;
		cout << " QUAL SUA OPNIAO EM RELACAO AO FILME? \n " ;
		cout << " [1] - �TIMO \n " ;
		cout << " [2] - BOM \n " ;
		cout << " [3] - REGULAR \n " ;
		cout << " [4] - RUIM \n " ;
		cin >> menu;
		alternar (menu){
			caso  1 :
				contadorOtimo = contadorOtimo + 1 ;
				quebrar ;
			caso  2 :
				contadorBom = contadorBom + 1 ;
				quebrar ;
			caso  3 :
				contadorRegular = contadorRegular + 1 ;
				quebrar ;
			caso  4 :
				contadorRuim = contadorRuim + 1 ;
				quebrar ;
			padr�o :
			    cout << " OP��O INVALIDA " << endl;
				quebrar ;
		}
		totalEspectadores = totalEspectadores + 1 ;
		cout << " DESEJA ADICIONAR NOVA OPINI�O A PESQUISA? \n " ;
		cout << " [1] - SIM \n " ;
		cout << " [0] - NAO \n " ;
		cin >> menu;
	}
	while (menu != 0 );
		cout << " ----------------------------------------- \n " ;
		percentOtimo = (contadorOtimo / totalEspectadores) * 100 ;
		percentBom = (contadorBom / totalEspectadores) * 100 ;
		percentRegular = (contadorRegular / totalEspectadores) * 100 ;
		percentRuim = (contadorRuim / totalEspectadores) * 100 ;
		cout << " QUANTIDADE DE PESSOAS QUE RESPONDERAM A PESQUISA ======= " <<
		totalEspectadores << " PESSOAS \n " ;
		cout << " MEDIA DE IDADE DAS PESSOAS QUE RESPONDERAM A PESQUISA == " <<
		totalIdades / totalEspectadores << " ANOS \n " ;
		cout << " PORCENTAGEM DE OTIMO ===================================== " << percentOtimo << " % \n " ;
		cout << " PORCENTAGEM DE BOM ===================================== " << percentBom << " % \ n " ;
		cout << " PORCENTAGEM DE REGULAR ================================= " << percentRegular << " % \n " ;
		cout << " PORCENTAGEM DE RUIM ==================================== " << percentRuim << " % \n " ;

		retorna  0 ;
}
