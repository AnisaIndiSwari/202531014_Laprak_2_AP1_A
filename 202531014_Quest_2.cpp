#include <iostream>
using namespace std;

int main()
{
	int umur, kategori;
	
	cout<< " Umur     : " ;
	cin >> umur;
	
	if (umur < 13){
	cout <<	" Kategori : SU" ;
	}
	else if  (umur >= 13 && umur <= 16)
	{
    cout <<	"kategori : R13" ;
	} 
	else if (umur >=17 && umur <= 20) 
	{
	cout << " Kategori : D17 " ;
	}
	else if ( umur >=21 )
	{
	cout << " Kategori : D21 " ;
	}

}
