#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int num, nmaximo;
	bool mentiroso;

	cout << "Informe o n�mero inteiro de 1 a 10: ";
    cin >> num;
    
    cout << "n�mero m�ximo de multiplica��o: ";
    cin >> nmaximo;
            
    if( num > 10){
    	cout << "N�o disponivel";
	}else{
		for( int i=0; i<=nmaximo ; i++)
            cout<<num<<" * "<<i<<" = " << num*i<<endl;
	}
    
	

}
	
