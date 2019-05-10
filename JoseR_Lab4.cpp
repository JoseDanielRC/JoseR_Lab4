#include <sstream>
#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stringstream;
void impirmir(char**matriz,int largo,int ancho){
	for(int i=0;i<largo;i++){
		for(int j=0;j<ancho;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
}
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
	for(int i=1;i<largo;i++){
		for(int j=0;j<ancho;j++){
			if(j==0){
			filanterior<<'.'<<matriz[i-1][j]<<matriz[i-1][j+1];

			}else if(j==9){
                        filanterior<<matriz[i-1][j-1]<<matriz[i-1][j]<<'.';

                        }else{
			filanterior<<matriz[i-1][j-1]<<matriz[i-1][j]<<matriz[i-1][j+1];
			}	
        	    	if(filanterior.str()=="^^."&&filanterior.str()==".^^"&&filanterior.str()=="^.."&&filanterior.str()=="..^"){
			matriz[i][j]='^';
			}else{
				matriz[i][j]='.';
			}
		filanterior.str()="";	
               	 }
         }
	impirimir(matriz,largo,ancho);
}
