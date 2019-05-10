#include <sstream>
#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stringstream;
int main(){
	string fila;
	int largo=0;
	int ancho=fila.length();
	cout<<"Ingrese la primera fila de caracteres"<<endl;
	cin>>fila;
	cout<<"Ingrese la cantidad de filas"<<endl;
	cin>>largo;
	stringstream filanterior;
        char** matriz=NULL;
        matriz= new char*[fila.length()];
        for(int i=0;i<ancho;i++){
                matriz[i]=new char[largo];
                }
	for(int i=0;i<fila.length();i++){
                matriz[0][i]=fila[i];
                }
	for(int i=0;i<largo;i++){
		for(int j=0;j<ancho;j++){
		filanterior<<matriz[i-1][j]<<matriz[i-1][j-1]<<matriz[i-1][j+1];	
            	if(filanterior.str()=="^^."&&filanterior.str()==".^^"&&filanterior.str()=="^.."&&filanterior.str()=="..^"){
			matriz[i][j]='^';
			}else{
				matriz[i][j]='.';
			}	
               	 }
         }
}
