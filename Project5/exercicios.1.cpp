#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void even_or_odd(int a = 0, int b = 0, int answer = 0)
{
	// Use the user's choice to print Even/Odd
	if (answer == 0)
		cout << "User: Even";
	else
		cout << "User: Odd";
}

int computer()
{
	int c = rand() % 10 + 1; // 1..10
	cout << "Computer: " << c << endl;
	return c;
}

void win(int a, int b, int answer, int& score_user, int& score_computer)
{
	int sum = a + b;

	if (sum % 2 == 0)
	{
		if (answer == 0)
		{
			cout << "User wins! (sum is evenn)" << endl;
			score_user++;
		}
		else
		{
			cout << "Computer wins! (sum is even)" << endl;
			score_computer++;
		}
	}
	else
	{
		if (answer == 1)
		{
			cout << "User wins! (sum is odd)" << endl;
			score_user++;
		}
		else
		{
			cout << "Computer wins! (sum is odd)" << endl;
			score_computer++;
		}
	}
}

int main()
{
	int score_user = 0, score_computer = 0;
	int answer = 0, a = 0, b = 0;
	char play_again;

	// Seed RNG once
	srand((unsigned)time(0));

	//title
	cout << "\x1b[34m" << "---------Mini_game---------" << "\x1b[0m" << endl;

	cout << "Odds and evens is a simple game between two players. Each player picks a number "
		<< "(from 0 to 10). When playing against the computer, you pick a number and the computer "
		<< " randomly generates its number" << endl;

	do
	{
		// Get user inputs before using them
		cout << "Choose a number (1-10): ";
		cin >> a;
		if (a < 1 || a > 10) a = 1; // basic validation// basic validation

		cout << "Choose parity (0 = even, 1 = odd): ";
		cin >> answer;
		if (answer != 0 && answer != 1) answer = 0;

		even_or_odd(a, b, answer);
		cout << endl;
		b = computer();
		win(a, b, answer, score_user, score_computer);
		cout << "Score - User: " << score_user << " | Computer: " << score_computer << endl;

		cout << "Play again? (s/n): ";
		cin >> play_again;

	} while (play_again == 's');
	return 0;
}