#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {

    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);
    std::cout << "\n";

    computer = getComputerChoice();
    std::cout << "Computer choice: ";
    showChoice(computer);
    std::cout << "\n";

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice() {

    char player;
    std::cout << "ROCK - PAPER - SCISSORS GAME\n";

    do
    {
        std::cout << "Choose one of the following:\n";
        std::cout << "r for Rock\n";
        std::cout << "p for Paper\n";
        std::cout << "s for Scissors\n";

        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice() {

    srand(time(NULL));

    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r';

    case 2:
        return 'p';

    case 3:
        return 's';

    }

    return 0;
}

void showChoice(char choice) {
    switch (choice)
    {
    case 'r':
        std::cout << "Rock";
        break;

    case 'p':
        std::cout << "Paper";
        break;

    case 's':
        std::cout << "Scissors";
        break;
    }

}

void chooseWinner(char player, char computer) {

    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            std::cout << "TIE!\n";
        }

        else if (computer == 'p')
        {
            std::cout << "COMPUTER WINS!\n";
        }

        else
        {
            std::cout << "PLAYER WINS!";
        }
        break;

    case 'p':
        if (computer == 'r')
        {
            std::cout << "PLAYER WINS!\n";
        }

        else if (computer == 'p')
        {
            std::cout << "TIE!\n";
        }

        else
        {
            std::cout << "COMPUTER WINS!";
        }
        break;

    case 's':
        if (computer == 'r')
        {
            std::cout << "COMPUTER WINS!\n";
        }

        else if (computer == 'p')
        {
            std::cout << "PLAYER WINS!\n";
        }

        else
        {
            std::cout << "TIE!";
        }
        break;

    }

}