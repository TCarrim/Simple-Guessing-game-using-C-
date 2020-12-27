#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void play_game() 
{
    int random = rand() % 251;
    std::cout << "Guess a number: ";
    while(true) {
        int guess;
        std::cin >> guess;
        if(guess == random)
        {
            std::cout << "You win!\n";
            break;
        } else if (guess < random)
        {
            std::cout << "Guess is too low\n";
        } else
        {
            std::cout << "Guess it too high\n";
        }
    }
}

int main()
{
    srand(time(NULL));
    int choice;
    int score=0;
    do 
    {
        std::cout <<"0. Quit" << std::endl << "1. Play Game \n";
        std::cin >> choice;
        switch(choice) 
        {
        case 0:
            std::cout << "You exited the game \n";
            return 0;
        case 1:
            play_game();
            score++;
            std::cout << "Your score is: " << score << std::endl;
            break;

        }
    } while (choice != 0);
    std::cout << "Your total score is: " << score << std::endl;
}