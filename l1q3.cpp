#include <iostream>
using namespace std; 
#include <iomanip>
//Escreva um programa em C++ que lê um número não conhecido de valores inteiros 
//e conta quantos deles estão em cada um dos intervalos [0; 25), [25; 50), [50; 75), [75; 100) e fora desses intervalos. 
//Para ler um número indeterminado de valores basta incluir o comando de extração associado ao std::cin 
//como condição de parada em um laço (ver abaixo).

int interv1=0;
int interv2=0;
int interv3=0;
int interv4=0; 
int interv5=0;
int total=0;
int x;

float calcula_mostra(int a){

return ((float)a/ total)*100;
//std::cout<<"A porcentagem de numeros no intervalo de 0 a 25 eh de "<<porcentagem<<" %."<<std::endl;
}
int main(){
cout<<"Escreva uma sequencia de numeros entre 0 e 100: "<<endl;

while( std::cin >> std::ws >> x) {

if (x >= 0 && x < 25){
    interv1++;
}
else if(x >= 25 && x < 50){
    interv2++;
}
else if(x >= 50 && x < 75){
    interv3++;
}
else if(x >= 75 && x < 100){
    interv4++;
}
else if(x<0 || x>100){
    interv5++;
}
}

// realização da contagem em relação aos intervalos
total = (interv1+interv2+interv3+interv4+interv5);
//porc1=((float)interv1/total)*100; //Converter ao menos um para float para resultado ser ponto flutuante.
//Modifiquei para chamada de uma função.
cout<<"A porcentagem de numeros no intervalo de 0 a 25 eh de "<<calcula_mostra(interv1)<<" %."<<endl;
cout<<"A porcentagem de numeros no intervalo de 25 a 50 eh de "<<calcula_mostra(interv2)<<" %."<<endl;
cout<<"A porcentagem de numeros no intervalo de 50 a 75 eh de "<<calcula_mostra(interv3)<<" %."<<endl;
cout<<"A porcentagem de numeros no intervalo de 75 a 100 eh de "<<calcula_mostra(interv4)<<" %."<<endl;
cout<<"A porcentagem de numeros fora do intervalo de 0 a 100 eh de "<<calcula_mostra(interv5)<<" %."<<endl;

return 0;

}
