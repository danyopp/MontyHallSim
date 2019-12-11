#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	unsigned seed = time(0);
	srand(seed);
	int SwitchCount=0;
	int StayCount=0;
	int trials;
	char textin;	

	cout << "Enter number of trials: ";
	cin >> 	trials;

	cout << "Would you like debug text?(y/n): ";
	cin >> textin;

	for(int a = 0; a < trials; a++ )
	{
		//randomly assign prized door as 1 in array of zeros
		int array[3] = {0 ,0 ,0};
		int selector = rand() % 3;
		array[selector] = 1; 
		if(textin == 'y') {cout << "Prize door is "<< selector << endl;}

		//get player's selected door	
		int  playerGuess = rand() % 3;
			if(textin == 'y'){cout << "First guess is " << playerGuess << endl;}

		//get options from door array of the doors that can be opened to player(cannot be prize door!!!) 		
		int option1 = -1;
		int option2 = -1;
		for (int b= 0; b < 3; b++)
		{
			if (array[b] == 0 && option1 == -1)
			{
				option1 = b;
			}	
			else if(array[b] == 0 && option1 != -1)
			{
				option2 = b;	
			}	

		}	

		//make sure door to be shown is not player's choice either
			if ( playerGuess == option1 )  
			{	option1 = option2;}
			if ( playerGuess == option2 )
			{	option2 = option1;}	
			if(textin == 'y'){cout << "Doors that can be shown are " << option1 << " & " << option2 << endl;}
			
		//decide which door to show
		
		//if either door can be shown - i.e. player picked the correct door originally
		//randomly pick a door	
		int showdoor = -1;
		if(rand()%2)
			{
				if(textin == 'y')	{cout << "Option 2 selected to show" << endl;}
				showdoor = option2;
			}
		else
			{
				if(textin == 'y'){cout << "Option 1 selected to show" << endl;}
				showdoor = option1;
			}	


		if(textin == 'y') {cout << " door shown is " << showdoor << endl;}

		//track if player wins or if switch wins
		if(selector==playerGuess)
		{
			if(textin == 'y'){cout << "No switch wins" << endl;}
			StayCount++;
		}

		if(selector != playerGuess)
		{
			if( textin == 'y') { cout << "Switching doors wins" << endl;}
			SwitchCount++;
		}	

	}
	//print results
	cout << "Staycount: " << StayCount << endl << "Switchcount: " << SwitchCount << endl;
	return 0;

}
