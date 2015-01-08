#include <iostream> 
#include <ctime> 
#include <cstdlib>
#include <string>

using namespace std; 

int main ()
{
	//int rock = 1;
	//int paper = 2; 
	//int scissors = 3; 
	int word_picked; 
	int comp;
	
	string winner;
	string N; 
	string Y;
	string play_again;
	enum name {rock=1, paper=2, scissors=3 };
	srand(time(0));
	int compscore = 0; 
	int userscore = 0; 	

	do {
		
		comp=rand()%3+1; // picks number 1-3 

		cout << "Let's play a game. Pick the number ROCK=1, PAPER=2, or SCISSORS=3 \n" << endl; // asks message 
		cin >> word_picked;
		if(word_picked < 1 || word_picked > 3) break;
		
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
			if( play_again == Y) 
			{
				cout << "Okay! We're going to play again! ";
				compscore = 0; 
				userscore = 0; 
			}
		}

/* COMPUTER WON. PLAY AGAIN */

		else if(compscore == 3)
		{
			cout << "Aww the computer won! Do you want to play again? Y/N"; 
			cin >> play_again;
			
			
			if( play_again == Y) 
			{
				cout << "Okay! We're going to play again! ";
				compscore = 0; 
				userscore = 0; 
			}

			if( play_again == N) 
			{
				break;
			}
		}

		


	} while( 1 ) ;

	system ("PAUSE");
	return 0;

	}