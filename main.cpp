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
		cout << "Tks for look my user proffile!" << endl;
		cout << endl;
	}
	else{
	 
	    cout << endl; 
	    cout << "The number one key!" << endl;
	    cout << endl; 
	    
	    
	}
	
	cout << "Good, press the number two key for a while condition: " << endl;
	int num2;
	cin >> num2;
	
	if (num2 = 2){
		int x = 0;
		while (x <=10)
		{
		
			cout << "While condition number: " << x++ << endl;
	}
	}
	
	
	
	
	system ("pause");
	return 0;
}
