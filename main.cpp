#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main ()
{
	cout << "--Welcome to my first CSV--" << endl;
	cout << endl;
	cout << "Press the 1 for personal informations:" << endl;
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
		cout << "Tks for look my user proffile!" << endl;
		cout << endl;
	}
	else{
	 
	    cout << endl; 
	    cout << "The number 1!" << endl;
	    cout << endl; 	    
	}
	
	cout << "Good, press 2 for a while condition: " << endl;
	
	int num2;
	cin >> num2;
	
	if (num2 = 2){
		int x = 0;
		while (x <=10)
		{
		
			cout << "While condition number: " << x++ << endl;
	}
	}
	
	cout << endl;
	cout << "Now, press 3 for a goodbye!" << endl;
	int good;
	cin >> good;
	
	if (good = 3){
		
		cout << endl;
		cout << "Thanks for test my first code and my first test of CSV! See you later" << endl;
		cout << endl;
		cout << "GOODBYE! :)" << endl;
	}
	else{
		cout << "You don´t wanna to say goodbye?" << endl;
		cout << endl;
		cout << "Please reset and press the number 3! " << endl;
	}
	return 0;
	system ("pause");
}
