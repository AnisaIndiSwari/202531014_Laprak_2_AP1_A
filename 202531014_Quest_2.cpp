#include <iostream>
using namespace std;

int main()
{
	int umur, kategori_film;
	
	cout<< " Umur Penonton : " ;
	cin >> umur;
	
	if (umur <13){
	cout <<	" Kategori Film : SU" ;
	}
	else if  (umur >=13 && umur <=16)
	{
    cout <<	" Kategori Film : R13" ;
	} 
	else if (umur >=17 && umur <=20) 
	{
	cout << " Kategori Film : D17 " ;
	}
	else if ( umur >=21)
	{
	cout << " Kategori Film : D21 " ;
	}
return 0;
}
