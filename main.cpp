#include <iostream>
#include "functions.h"

int main() {
    std::cout << "starting game" << "\n";
    char positions[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    render(positions);

    int position;
    

    while (1)
    {
        //X turn
        position = get_position(positions, 'X');
        positions[position - 1] = 'X';
        render(positions);
        if (check_winner(positions))
        {
            std::cout << "Player X wins!" << "\n";
            break;
        }
        
        //A draw?
        if (check_draw(positions))
        {
            std::cout << "The game ends in a draw!" << "\n";
            break;
        }

        //O turn
        position = get_position(positions, 'O');
        positions[position - 1] = 'O';
        render(positions);
        if (check_winner(positions))
        {
            std::cout << "Player O wins!" << "\n";
            break;
        }


    }
    
    std::cout << "Ending game..." << "\n";
    return 0;
}