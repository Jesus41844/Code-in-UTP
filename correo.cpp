#include<iostream>
#include<string>
using namespace std;


int main(){
    string correo;
    string dominiouser;
    string dominiovalido="@gmail.com";
    cout<<"Escriba su correo electronico: ";
    cin>>correo;
    
    for(int x=0;x<correo.size();x++){
    	if(correo.at(x)=='@'){
    	dominiouser=correo.substr(x,correo.size());
		}
	
	}
	
	 if(dominiouser==dominiovalido){
		cout<<"El dominio es valido";
	}
	
    else{
    	cout<<"El dominio es invalido";
	}
      return 0;
}

