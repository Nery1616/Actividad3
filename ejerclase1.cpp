#include <iostream>
using namespace std;

int main(){
	//Numero es porsitivo>0 o negativo<0
	int num=0;
	cout<<"Ingrese el numero: ";
	cin>>num;
	if(num>0){
		cout<<"Positivo"<<endl;
	}else{
			if(num==0){
				cout<<"Neutro"<<endl;
			}else{
				cout<<"Negativo"<<endl;
			}
	}
	
	system("pause");
	
}