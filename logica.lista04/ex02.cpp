#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
    int num;

    cout << "Digite um n�mero inteiro: ";
    cin >> num;
    
    if(num > 0){
    	cout << "O n�mero " << num << " � positivo " << endl;
	}
	else if(num < 0){
		cout << "O n�mero " << num << " � negativo " << endl;
	}
	else{
		cout << "O n�mero � zero" << endl;
	}
	
	return 0;
}
