#include <iostream> 
#include <ctime> 
#include <cstdlib>
#include <string>

using namespace std; 

int main ()
{
	int word_picked; 
	int comp;
	
	string winner;
	char N; 
	char Y;
	char play_again;
	enum name {rock=1, paper=2, scissors=3 };
	srand(time(0));
	int compscore = 0; 
	int userscore = 0; 	

	do {
		
		comp=rand()%3+1; // picks number 1-3 

		cout <<"Let's play a game. Pick the number ROCK=1, PAPER=2, or SCISSORS=3. \n Best out of three! \n" << endl; // asks message 
		cin >> word_picked;

		try 
			{
			if(word_picked < 1 || word_picked > 3) 
				throw word_picked;
			}

		catch (exception e)
			{
			cout << "Pick the number 1, 2, or 3. /n Rock = 1 /n Paper = 2 /n Scissors = 3 /n" << endl;
			}
		
		if(comp == rock  && word_picked == rock) 
			{ 
				winner == "Tie";
				cout << "This is a tie! No Point! :( \n" << endl;
			}
		else if (comp == scissors && word_picked == scissors) 
			{
				winner == "Tie";
				cout << "This is a tie! No Point :( \n" << endl;
			}
		else if (comp == paper && word_picked == paper ) 
			{
				winner == "Tie"; 
				cout << "This is a tie! No point :( \n"<< endl;
			}
		else if(comp == rock && word_picked == paper) 
			{
				winner == "You won! Paper beats Rock! \n"; 
				cout << "You won! Paper beats Rock! \n";
				userscore++; 
			}
		else if (comp == scissors && word_picked == rock)
			{
				winner == "You won! You now have"; 
				cout << "You won! Rock beats Scissors! \n" << endl;
				userscore++;
			}
		else if(comp == paper && word_picked == scissors) 
			{
				winner == "You won! Scissors beats Paper! \n";
				cout << "You won! Scissors beats Paper! \n";
				userscore++; 
			}
		else if(comp == paper && word_picked == rock)
			{
				winner == "The computer won! Paper beats Rock! \n"; 
				cout << "The computer won! Paper beats Rock! \n";
				compscore++;
			}
		else if(comp == rock && word_picked == scissors)
			{
				winner == "The computer won! Rock beats Scissors! \n";
				cout << "The computer won! Rock beats Scissors! \n";
				compscore++;
			}
		else if(comp == scissors && word_picked == paper)
			{
				winner == "The computer won! Scissors beats Paper! \n";
				cout << "The computer won! Scissors beats Paper! \n";
				compscore++;
			}
		

		cout << "Your score is now " << userscore << endl;
		cout << "The computer's score is " << compscore << endl; 

/* USER'S PLAY AGAIN */		
		
		if(userscore == 3) 
		{
			cout << "Congratulations! You have won! Do you want to play again? Y/N ";
			
			cin >> play_again;
			if( play_again = 'Y') 
			{
				cout << "Okay! We're going to play again! ";
				userscore = 0;
				compscore= 0; 
				
			}
		}

/* COMPUTER WON. PLAY AGAIN */

		else if(compscore == 3)
		{
			cout << "Aww the computer won! Do you want to play again? Y/N"; 
			cin >> play_again;
			
			
			if( play_again == 'Y' || play_again == 'y') 
			{
				//cin >> 'Y' >> 'y';
				cout << "Okay! We're going to play again!\n " << endl;
				compscore = 0; 
				userscore = 0; 
			}

			else if( play_again == 'N'  || play_again == 'n') 
			{
				//cin >> 'N';
				cout << "Thank you for playing! \n" << endl;
				break;
			}
		}

		


	} while( 1 ) ;

	system ("PAUSE");
	return 0;

	}