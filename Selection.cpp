//
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int Choice;

/*
Joke function that prompt the user to add 3 numbers, as long as the first number added (z) isn't larger than or equal to 100
the program will check the second number (x) against the the third number (y) to see if its greater than it or if divided together equals 1.
If passed the console will change to a light blue on blue and give them the all clear,
if failed the console will change to a light red on red and curse them with death.
*/
int Numbers(){

int z;
int x;
int y;

	cum:
	cout << "Type a number: ";
		cin >> z;
	cout << "Type another number: ";
		cin >> x;
	cout << "And a final number: ";
		cin >> y;

	while (z <= 100)
	{
		if (x > y || x / y == 1)
			{
			system("color B0"), cout << "Hmm fair is fair. "; // sets the colour of the console to light blue foreground and blue text colour
			}
		else
		{
		system("color C4"), cout << "Im going to kill you. "; // sets the colour of the console to light red foreground and red text colour
	}
}

	cout << "NO NUMBERS HIGHER THAN 100 YOU CUNT" << endl << endl;
	cout << "LET'S TRY THIS AGAIN" << endl << endl;
	goto cum; // goes to line 11
	return 0;
}

/*

*/
int water(){


return 0;
}

/*
Function that prompts the user select or input fov and fov scale then calculate the actual fov factoring the scaler that it will then
output as a command for cod
(Could add a option to send it to a text document or a cfg with those values already changed even send it to the correct user location)
*/
int FovCreation(){
	// remember every 0.001 point to FovScale is a plus 0.065 to Fov
	float Fov = 0.000;
	float FovScale = 0.000;
	float EndFov;
	int FovSelection;
	int FovScaleSelection;
	int EndFovSelection;
	int EndFovChange;
	int CommandChoice;
	int KillProgram;

	cout << "Current fov" << endl;
	cout << "1. Enter your own" << endl;
	cout << "2. Default (65)" << endl;
	cout << "3. Set to 90" << endl << endl;
	FovOptions:cin >> FovSelection;
	// States the current section that we, the options and prompts them to chose a option

	// Fov Switch
	switch (FovSelection)
	{
		case 1:
			cout << endl << "Enter desired fov" << endl << endl;
			cin >> Fov;
			cout << "Fov set to " << Fov << endl <<endl;
			// sets the Fov to what the end user has set it to
		break;

		case 2:
			Fov += 65;
			cout << endl << "Fov set to " << Fov << endl << endl;
			// sets the Fov to 65 and prints its output
		break;

		case 3:
			Fov += 90;
			cout  << endl << "Fov set to " << Fov << endl << endl;
			// sets the Fov to 90 and prints the output
		break;

		default:
			cout << endl << "Apologies we are going to need you to retype your option" << endl;
			goto FovOptions; // goes to line 18 to repeat option menu selection
			// Switch for all the possible options and makes changes depending on the user previous option
		break;
	}

	cout << "Current Fov Scale" << endl;
	cout << "1. Enter your own" << endl;
	cout << "2. Default (1.000)" << endl;
	cout << "3. Set to 1.676" << endl << endl;
	FovScaleOptions:cin >> FovScaleSelection;
	// States the current section that we, the options and prompts them to chose a option


	switch (FovScaleSelection)
	{
	case 1:
		cout << endl << "Enter desired Fov Scale (1 to 2)" << endl << endl;
		cin >> FovScale;
		if (FovScale > 2.0 || FovScale < 1.0)
		{
			FovScale -= FovScale;
			cout << endl << "Error, number entered is not possible" << endl << "Re-enter your number within 1 to 2" << endl << endl;
			cin >> FovScale;
		}
		cout << endl << "FovScale set to " << FovScale  << endl << endl;
		// sets the FovScale to what the end user has set it to
	break;

	case 2:
		FovScale += 1.000;
		cout << endl << "FovScale set to " << FovScale << endl << endl;
		// sets the FovScale to 1.000 and prints its output
	break;

	case 3:
		FovScale += 1.676;
		cout << endl << "FovScale set to " << FovScale << endl << endl;
		// sets the FovScale to 1.676 and prints the output
	break;

	default:
		cout << endl << "Apologies we are going to need you to retype your option" << endl;
		goto FovScaleOptions; // goes to line 53 to repeat option menu selection
		// Switch for all the possible options and makes changes depending on the user previous option
	break;
	}

	Fucker:cout << "Your choices for your fov and fov scale are " << Fov << " and "<< FovScale << endl;
	cout << "Are you sure theses are the numbers you wish for?" << endl;
	cout << "Type 1 for yes or 2 for no" << endl << endl;
	EndFovSelection -= EndFovSelection;
	cin >> EndFovSelection;

	if (EndFovSelection == 2)
	{
		cout <<endl << "Which one would you like to change?" << endl << "1. Fov" << endl << "2. Fov Scale" << endl << endl;
		EndFovChange -= EndFovChange;
		cout << endl;
		cin >> EndFovChange;

		switch(EndFovChange)
		{
		case 1:
		Fov -= Fov;
		cin >> Fov;
		goto Fucker;
		break;

		case 2:
		FovScale -= FovScale;
		cin >> FovScale;
		if (FovScale >= 2.0 || 0.0 < FovScale)
		{
			FovScale -= FovScale;
			cout << endl << "Error, number entered is not possible" << endl << "Re-enter your number within 1 to 2" << endl << endl;
			cin >> FovScale;
		}
		goto Fucker;
		break;
		}
	}

	EndFov = Fov * FovScale;
	cout << "Your end Fov would be " << EndFov << endl;
	cout << "Would your like this written into a console command?" <<endl;
	cout << "1. Yes" << endl << "2. No" << endl << endl;
	cin >> CommandChoice;

	if(CommandChoice == 1)
	{
		cout <<endl << "/cg_fov " << Fov<< ",cg_fovScale " << FovScale << endl << endl;
	}
	else{
		return 0;
	}

	cout << "End program?" << endl << "1. Yes" << endl << "2. No" << endl << endl;
	cin >> KillProgram;
	if(KillProgram == 1){
		return 0;
	}
	else{
	cout << endl;
	FovCreation();
	}
	return 0;
}

/*
Main function that creates the prompt for the list of programs and access to them to the user
*/
int main (){
	cout << "What would you like to run?" << endl << endl;
	cout << "1. Numbers" << endl << "2. Cod fov calculator" << endl << "9. Credits" << endl << endl;
	cin >> Choice;

	switch (Choice)

	do{
		case 1:
		cout << endl << "Starting Numbers" << endl << endl;
		Numbers();
		break;

		case 2:
			cout << endl << "Starting Cod fov calculator" << endl << endl;
			FovCreation();
		break;

		case 3:
			cout << endl << "Why the fuck did you type 3???" << endl << "Good job, you found the start to any new program I add" << endl;
			cout << "Anyways there's nothing here but me killing the program"; cout << endl << "Get fucked cunt.";
			return 0;
		break;

		case 9:
			cout << endl << "The creation of this program was all done by Numbskull";
			cout << endl << "This all this was made just as a general practice to help learn C++" << endl;
		break;

		default:
		cout << "Error, please retype your choice";
		break;
	}while(Choice == 0);
}
