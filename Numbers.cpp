#include <iostream>#include <windows.h>#include <fstream>using namespace std;void numb() {	int x;	int y;	int z;	cum:		cout << "Type a number: ";			cin >> z;		cout << "Type another number: ";			cin >> x;		cout << "And a final number: ";			cin >> y;	while (z <= 100){		if (x > y || x / y == 1)			{			system("color B0"), cout << "Hmm fair is fair. "; // sets the colour of the console to light blue foreground and blue text colour			}		else		{		system("color C4"), cout << "Im going to kill you. "; // sets the colour of the console to light red foreground and red text colour	}}	cout << "NO NUMBERS HIGHER THAN 100 YOU CUNT" << endl << endl;	cout << "LET'S TRY THIS AGAIN" << endl << endl;	goto cum; // goes to line 11}