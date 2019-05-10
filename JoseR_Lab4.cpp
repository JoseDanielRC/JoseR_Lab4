
#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(){
	string fila;
	int largo=0;
	int ancho=fila.length();
	cout<<"Ingrese la primera fila de caracteres"<<endl;
	cin>>fila;
	cout<<"Ingrese la cantidad de filas"<<endl;
	cin>>largo;
        int** matriz=NULL;
        matriz= new int*[fila.length()];
        for(int i=0;i<largo;i++){
                matriz[i]=new int*[largo];
                }
	for(int i=0;i<fila.length();i++){
                matriz[i]=fila[i];
                }
	
	}
