#include "rps.h"
static int32_t aiScore;
static int32_t userScore;

int main() {
	system("Color 0A");
	ASCII();
	do {
		const int32_t player = playerChoice();
		const int32_t AI = AI_Choice();
		winner(player, AI);
		score();
	} while(true);

	system("pause");
	return 0;
}

void winner(int player, int AI) {
	switch (player) {
	case 1: //1 == Rock, 2 == Paper, 3 == Scissors
		if (AI == 1) {
			Sleep(1200);
			cout << "\nDraw, nobody won.\n\n";
		}
		else if (AI == 2) {
			Sleep(1200);
			cout << "\nRock vs Paper, your opponent won.\n\n";
			aiScore++;
		}
		else if (AI == 3) {
			Sleep(1200);
			cout << "\nRock vs Scissors, you won!\n\n";
			userScore++;
		}
		break;

	case 2:
		if (AI == 1) {
			Sleep(1200);
			cout << "\nPaper vs Rock, you won!\n\n";
			userScore++;
		}
		else if (AI == 2) {
			Sleep(1200);
			cout << "\nDraw, nobody won.\n\n";
		}
		else if (AI == 3) {
			Sleep(1200);
			cout << "\nPaper vs Scissors, your opponent won.\n\n";
			aiScore++;
		}
		break;

	case 3:
		if (AI == 1) {
			Sleep(1200);
			cout << "\nScissors vs Rock, your opponent won.\n\n";
			aiScore++;
		}
		else if (AI == 2) {
			Sleep(1200);
			cout << "\nScissors vs Paper, you won!\n\n";
			userScore++;
		}
		else if (AI == 3) {
			Sleep(1200);
			cout << "\nDraw, nobody one.\n\n";
		}
		break;
	}
	
}

void ASCII() {
	cout << R"(
88""Yb  dP"Yb   dP""b8 88  dP     88""Yb    db    88""Yb 888888 88""Yb
88__dP dP   Yb dP   `" 88odP      88__dP   dPYb   88__dP 88__   88__dP
88"Yb  Yb   dP Yb      88"Yb      88"""   dP__Yb  88"""  88""   88"Yb  
88  Yb  YbodP   YboodP 88  Yb     88     dP""""Yb 88     888888 88  Yb)" << '\n';
	cout << R"(
.dP"Y8  dP""b8 88 .dP"Y8 .dP"Y8  dP"Yb  88""Yb .dP"Y8 
`Ybo." dP   `" 88 `Ybo." `Ybo." dP   Yb 88__dP `Ybo." 
o.`Y8b Yb      88 o.`Y8b o.`Y8b Yb   dP 88"Yb  o.`Y8b 
8bodP'  YboodP 88 8bodP' 8bodP'  YbodP  88  Yb 8bodP' )" << '\n' << "---------------------------------------------------------------------------\n";
	
	cout << "Made in C++. Play in fullscreen for best experience.\n\n";
}

void score() {
	cout << "Score:\n";
	cout << "You: " << userScore << '\n';
	cout << "Foe: " << aiScore << "\n\n";

	if (userScore == aiScore) {
		Sleep(500);
		cout << "You are tied with your foe.\n";
		cout << "-----------------------------------\n\n";
	}
	else if (userScore > aiScore) {
		Sleep(500);
		cout << "You are winning!! Keep it up!\n";
		cout << "-----------------------------------\n\n";
	}
	else if (userScore < aiScore) {
		Sleep(500);
		cout << "You are losing. :(\n";
		cout << "-----------------------------------\n\n";
	}

	Sleep(1000);
}
