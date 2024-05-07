#include "rps.h"
#include "art.h"

int playerChoice() {
	int16_t choice;
	do {
		cout << "What shall ye choose? \n\n";
		cout << "1 - Rock\n";
		cout << "2 - Paper\n";
		cout << "3 - Scissors\n";
		cout << "4 - Exit\n";
		cin >> choice;

		if (cin.fail()) {
			cout << "\nIf you read it correctly, you should know you can only enter a number.\n";
			cin.clear();
			cin.ignore();
		}

		switch (choice) {
		case 1:
			Sleep(500);
			cout << "\nYou chose rock.\n";
			blue_rock();
			return choice;
		case 2:
			Sleep(500);
			cout << "\nYou chose paper.\n";
			blue_paper();
			return choice;
		case 3:
			Sleep(500);
			cout << "\nYou chose scissors.\n";
			blue_scissors();
			return choice;
		case 4:
			Sleep(500);
			exit_checksum();
			break;
		default:
			Sleep(500);
			cout << "You did not enter a valid choice.\n\n";
			break;
		}

	} while (choice != 1 && choice != 2 && choice != 3);
}

int AI_Choice() {
	srand(time(NULL));

	int16_t aiChoice = (rand() % 3) + 1;

	switch (aiChoice) {
	case 1:
		Sleep(1200);
		cout << "\nOpponent chose Rock.\n";
		opp_rock();
		return aiChoice;
	case 2:
		Sleep(1200);
		cout << "\nOpponent chose Paper.\n";
		opp_paper();
		return aiChoice;
	case 3:
		Sleep(1200);
		cout << "\nOpponent chose Scissors.\n";
		opp_scissors();
		return aiChoice;
	default:
		cout << "\nFatal Error\n";
		break;
	}
	return 0;
}

void exit() {
	cout << "\nExiting...\n";

	Sleep(2000);
	abort();
}

bool exit_checksum() {
	int16_t choice;

	cout << "\nAre you sure you want to exit? You will lose your score.\n";
	cout << "1 - Yes\n";
	cout << "2 - No\n";
	cin >> choice;
	cout << "\n";

	if (choice == 1) {
		system("pause");
		exit();
		return true;
	}
	else if (choice == 2) {
		return false;
	}
}
