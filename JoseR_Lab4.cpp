#include <sstream>
#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stringstream;
void imprimir(char**matriz,int largo,int ancho){
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
	int ancho;
	int contlibre=0,contramp=0;
	cout<<"Ingrese la primera fila de caracteres"<<endl;
	cin>>fila;
	cout<<"Ingrese la cantidad de filas"<<endl;
	cin>>largo;
	ancho = fila.length();
	stringstream filanterior;
        char** matriz=NULL;
        matriz= new char*[largo];
        for(int i=0;i<largo;i++){
                matriz[i]=new char[ancho];
                }
	for(int i=0;i<ancho;i++){
              matriz[0][i]=fila[i];
	      if(fila[i]=='.'){
		      contlibre++;
	      }
	      else{
		      contramp++;
	      }
                }
	for(int i=1;i<largo;i++){
		for(int j=0;j<ancho;j++){
			if(j==0){
			filanterior<<'.'<<matriz[i-1][j]<<matriz[i-1][j+1];

			}else if(j==ancho-1){
                        filanterior<<matriz[i-1][j-1]<<matriz[i-1][j]<<'.';

                        }else{
			filanterior<<matriz[i-1][j-1]<<matriz[i-1][j]<<matriz[i-1][j+1];
			}	
        	    	if(filanterior.str()=="^^."|| filanterior.str()==".^^"|| filanterior.str()=="^.."|| filanterior.str()=="..^"){
			matriz[i][j]='^';
			filanterior.str("");
			contramp++;
			}else{
				matriz[i][j]='.';
				contlibre++;
				filanterior.str("");

			}
			
               	 }
         }
	imprimir(matriz,largo,ancho);
	 // liberar memoria
        for(int i=0;i<ancho;i++){
                delete[]matriz[i];
                matriz[i]=NULL;
                }
        //liberar ultimo vector
        if(matriz!=NULL){
                delete[]matriz;
                matriz=NULL;
                }

	cout<<"libres: "<<contlibre<<" trampas: "<<contramp<<endl;
}
