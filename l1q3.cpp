#include <iostream>
using namespace std; 

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

int main(){
cout<<"Escreva uma sequencia de numeros entre 0 e 100: "<<endl;

while( cin >> std::ws >> x) {
  // realização da contagem em relação aos intervalos
}
cout<<"Os numeros que voce digitou foram:"<<x<<endl;

if(0<=x<=25){
    interv1++;
}
else if(25<=x<=50){
    interv2++;
}
else if(50<=x<=75){
    interv3++;
}
else if(75<=x<=100){
    interv4++;
}
else if(x>100){
    interv5++;
}
else if(x<100){
    interv5++;
}
total=(interv1+interv2+interv3+interv4+interv5);

float porc1,porc2,porc3,porc4,porc5;
porc1=(interv1/total)*100;
porc2=(interv2/total)*100;
porc3=(interv3/total)*100;
porc4=(interv4/total)*100;
porc5=(interv4/total)*100;


cout<<"A porcentagem de numeros no intervalo de 0 a 25 eh de "<<porc1<<" %."<<endl;

cout<<"A porcentagem de numeros no intervalo de 25 a 50 eh de "<<porc2<<" %."<<endl;

cout<<"A porcentagem de numeros no intervalo de 50 a 75 eh de "<<porc3<<" %."<<endl;

cout<<"A porcentagem de numeros no intervalo de 75 a 100 eh de "<<porc4<<" %."<<endl;

cout<<"A porcentagem de numeros fora do intervalo de 0 a 100 eh de "<<porc5<<" %."<<endl;

return 0;

}