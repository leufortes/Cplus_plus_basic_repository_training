#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main ()
{
	cout << "--Welcome to my first CSV--" << endl;
	cout << endl;
	cout << "Press the number one key for personal informations:" << endl;
	int num;
	cin >> num;
	
	if (num == 1)
	{
		cout << endl;
		cout << "GITHUB PROFILE: leufortes" << endl;
		cout << endl;
		cout << "EMAIL: marcogaliofortesa@gmail.com" << endl;
		cout << endl;
		cout << "TEL: 11972183697" << endl;
		cout << endl;
	}
	if (num > 1) { 
	     
	    cout << endl; 
	    cout << "The number one key!" << endl;
	    cout << endl; 
	    
	    
	}
	
	system ("pause");
	return 0;
}
