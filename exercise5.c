/*We’re implementing an AI system for our rock, paper, scissors mini - game.
Our AI has to lose every game against the player.
Our AI will know the playerChoice and use it to decide the aiChoice (and
print it).
Take into account that:
* Paper is expressed as 'P' and always beats Rock and loses to Scissors
* Rock is expressed as 'R' and always beats Scissors and loses to Paper
* Scissors is expressed as 'S' and always beats Paper and loses to Rock*/

#include <cstdio>
#include <cstdlib>

int main()
{
	char playerChoice;

	printf("Enter your choice (P, R or S): ");
	scanf_s("%c", &playerChoice);

	if (playerChoice == 'P') {
		printf("AI choice was 'R'\n");
		printf("Congrats, you won!");
	}
	if (playerChoice == 'R') {
		printf("AI choice was 'S'\n");
		printf("Congrats, you won!");
	}
	if (playerChoice == 'S') {
		printf("AI choice was 'P'\n");
		printf("Congrats, you won!");
	}
    else
    {
        printf("ERROR");
    }
    
	return(0);
}