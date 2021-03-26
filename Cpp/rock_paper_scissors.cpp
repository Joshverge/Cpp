
/*
   Plays rock paper scissor spock with players
*/

#include <iostream>
#include <cstdlib>

int main(){
    // Live long and prosper:

    srand(time(NULL));
    int computer = rand() % 3 + 1;
    int user = 0;

    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";
    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n"; 
    std::cout << "shoot! ";

    std::cin >> user;

    if (user == 1)
        std::cout << "You choose ✊ !\n";
    else if (user == 2)
        std::cout << "You choose ✋ !\n";
    else if (user == 3)
        std::cout << "You choose ✌️ !\n";
    else
        std::cout << "Invalid option!";
    
    if (computer == 1)
        std::cout << "Computer chose ✊ !\n";
    else if (computer == 2)
        std::cout << "Computer chose ✋ !\n";
    else
        std::cout << "Computer chose ✌️ !\n";

    // tie 

    if (user == computer)
        std::cout << "It's a tie! \n";

    // user rock

    if (user == 1){
        if (computer == 2)
            std::cout << "Computer wins :(\n";
        if (computer == 3)
            std::cout << "You win :D\n";
    }

    // user paper

    if (user == 2){
        if (computer == 1)
            std::cout << "You win :D\n";
        if (computer == 3)
            std::cout << "Computer wins :(\n";
    }

    // user scissors 

    if (user == 3){
        if (computer == 1)
            std::cout << "Computer wins :(\n";
        if (computer == 2)
            std::cout << "You win :D \n";
    }

}

