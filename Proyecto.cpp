#include <iostream>
using namespace std;
int main(){
  int monto = 0;
  int inicio;
  int final;
  int tarifa1 = 0;
  int tarifa2 = 0;
  int contador = inicio;
  cout << " Ingrese sus horas de inicio "<< endl;
  cin >> inicio;
  cout << " Ingrese sus horas final "<< endl;
  cin >> final;
  if (contador <=0 || contador >23){
    cout <<" debe estar entre 0 y 23 "<< endl; 
  }
  if ( final == 0){
    cout << " horas debe de ser mayor a 0!"<< endl; 

  }
  for ( int i = 0; i<=final; i++ ){
    if (inicio >24){
      inicio = inicio - 24;
    }
    if ( 0<= inicio <7 || 17 <= inicio <=24){
      monto+= 1;
      tarifa1 +=0;
    }
    if ( 7<=inicio <17){
      monto +=2;
      tarifa2 +=1;
    }
  }
  cout<< tarifa1<< " hora(s) con" << "tarifa a 1bs"<< endl;
  cout<< tarifa2<< " hora(s) con" << "tarifa a 2bs"<< endl;
  cout << " El monto total a pagar es de "<< monto << "bs"<<endl;
  return 0;

}