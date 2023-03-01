#include <iostream>
using namespace std;

int main(){
	int codigo=0;
	cout<<"ingrese codigo de area: "<<endl;
	cin>>codigo;
	switch(codigo){
		case 502:
			cout<<"Guatemala"<<endl;
			break;
		case 503:
			cout<<"El salvador"<<endl;
			break;
		case 504:
			cout<<"Honduras"<<endl;
			break;
		case 505:
			cout<<"Nicaragua"<<endl;
			break;
		case 506:
			cout<<"Costa rica"<<endl;
			break;
		case 507:
			cout<<"Panama"<<endl;
			break;
			
		default : cout<<"Este codigo no es de centroamerica"<<endl;
	}
	
	
	system("pause");
} 