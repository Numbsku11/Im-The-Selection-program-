int FovCreation()
{
    // remember every 0.001 point to FovScale is a plus 0.065 to Fov
#include <iostream>
    float Fov = 0.000;
    float FovScale = 0.000;
    float EndFov;
    int FovSelection;
    int FovScaleSelection;
    int EndFovSelection;
    int EndFovChange;
    int CommandChoice;

    cout << "Current fov" << endl;
    cout << "Type 1 to enter your own" << endl;
    cout << "Type 2 use the default (65)" << endl;
    cout << "Type 3 set to 90" << endl << endl;
FovOptions:
    cin >> FovSelection;
    // States the current section that we, the options and prompts them to chose a option

    // Fov Switch
    switch (FovSelection)
    {
    case 1:
        cout << "Enter desired fov" << endl << endl;
        cin >> Fov;
        cout << "Fov set to " << Fov << endl <<endl;
        // sets the Fov to what the end user has set it to
        break;

    case 2:
        Fov += 65;
        cout << "Fov set to " << Fov << endl << endl;
        // sets the Fov to 65 and prints its output
        break;

    case 3:
        Fov += 90;
        cout << "Fov set to " << Fov << endl << endl;
        // sets the Fov to 90 and prints the output
        break;

    default:
        cout << "Apologies we are going to need you to retype your option" << endl;
        goto FovOptions; // goes to line 18 to repeat option menu selection
        // Switch for all the possible options and makes changes depending on the user previous option
        break;
    }

    cout << "Current Fov Scale" << endl;
    cout << "Type 1 to enter your own" << endl;
    cout << "Type 2 use the default (1.000)" << endl;
    cout << "Type 3 set to 1.676" << endl << endl;
FovScaleOptions:
    cin >> FovScaleSelection;
    // States the current section that we, the options and prompts them to chose a option


    switch (FovScaleSelection)
    {
    case 1:
        cout << "Enter desired Fov Scale (do 1.xxx or it doesn't work)" << endl << endl;
        cin >> FovScale;
        cout << "FovScale set to " << FovScale  << endl << endl;
        // sets the FovScale to what the end user has set it to
        break;

    case 2:
        FovScale += 1.000;
        cout << "FovScale set to " << FovScale << endl << endl;
        // sets the FovScale to 1.000 and prints its output
        break;

    case 3:
        FovScale += 1.676;
        cout << "FovScale set to " << FovScale << endl << endl;
        // sets the FovScale to 1.676 and prints the output
        break;

    default:
        cout << "Apologies we are going to need you to retype your option" << endl;
        goto FovScaleOptions; // goes to line 53 to repeat option menu selection
        // Switch for all the possible options and makes changes depending on the user previous option
        break;
    }

Fucker:
    cout << "Your choices for your fov and fov scale are " << Fov << " and "<< FovScale << endl;
    cout << "Are you sure theses are the numbers you wish for?" << endl;
    cout << "Type 1 for yes or 2 for no" << endl;
    EndFovSelection -= EndFovSelection;
    cin >> EndFovSelection;

    if (EndFovSelection == 2)
    {
        cout << "Which one would you like to change?" << endl << "1. Fov" << endl << "2. Fov Scale" << endl;
        EndFovChange -= EndFovChange;
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
            goto Fucker; // I hate myself, really was using goto?
            break;
        }
    }

    EndFov = Fov * FovScale;
    cout << "Your end Fov would be" << EndFov << endl;
    cout << "Would your like this written into a console command?" <<endl;
    cout << "1. Yes" << endl << "2. No" << endl;
    cin >> CommandChoice;

    if(CommandChoice == 1)
    {
        cout << "/cg_fov " << Fov<< ",cg_fovScale " << FovScale;
    }
    else
    {
        return 0;
    }
}
