#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main (){
cout<<"**********************************" << endl;
cout<<" *Bem-vindos ao jogo de advinhacao*"<<endl;
cout<<" *PROJETO : BARBARA ELEN *"<<endl;
cout<<"**********************************"<<endl;

cout<< " ESCOLHA O SEU NIVEL DE DIFICULDADE "<< endl;
cout << "FACIL (F), MEDIO (M), DIFICIL (D)"<<  endl;
char dificuldade;
cin>> dificuldade;

int numero_de_tentativas ;
if(dificuldade == 'F'){
    numero_de_tentativas = 15;
}
 else if (dificuldade == 'M'){
        numero_de_tentativas = 10;
    }
    else {
        numero_de_tentativas = 5;
    }

srand(time(NULL));
const int  NUMERO_SECRETO = rand()%100;




bool nao_acertou =  true;
int tentativas = 0;
double pontos =1000.0;

        for(tentativas = 1; tentativas <= numero_de_tentativas;tentativas++){
int chute ;
cout<<"tentativas "<< tentativas << endl;
cout<<""<<endl;
cout <<" escreva qual seu chute  :"<< endl;
cin >> chute ;

double pontos_perdidos = abs (chute - NUMERO_SECRETO )/2.0;
pontos = pontos - pontos_perdidos;


cout << "valor de seu chute e : " <<chute<< endl;
bool acertou = chute == NUMERO_SECRETO;
bool maior = chute > NUMERO_SECRETO;


if( acertou){
    cout << "Parabens voce acertou o numero secreto"<< endl;
    nao_acertou = false;
    break;
}
else if(maior){
    cout<<"seu chute foi maior que o numero secreto"<< endl;
}
else {
    cout<<"seu chute foi menor que o numero secreto"<< endl;
}
}
cout<<"Fim de Jogo"<< endl;
if(nao_acertou){
    cout<<(" voce perdeu ! tente novamente ")<< endl;


}
else {
cout<<"Voce acertou o numero secreto em "<<tentativas <<" tentativas" <<endl;
cout.precision(2);
cout<< fixed;
cout <<"Sua pontuacao foi de "<< pontos<< "pontos"<<endl;
}
}
