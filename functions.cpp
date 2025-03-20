#include <iostream>
#include "functions.h"

void render(char positions[9]) {
    std::cout << "\033c"; // Clear the terminal
    
    std::cout << " " << positions[0] << " | " << positions[1]<< " | " << positions[2] << " " << "\n";
    std::cout << "-----------" << "\n";
    std::cout << " " << positions[3] << " | " << positions[4]<< " | " << positions[5] << " " << "\n";
    std::cout << "-----------" << "\n";
    std::cout << " " << positions[6] << " | " << positions[7]<< " | " << positions[8] << " " << "\n";
}

bool check_winner(char positions[9]) {
    const int winning_combinations[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, // Rows
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, // Columns
        {0, 4, 8}, {2, 4, 6}             // Diagonals
    };

    for (const auto& combo : winning_combinations) {
        if (positions[combo[0]] == positions[combo[1]] && positions[combo[1]] == positions[combo[2]]) {
            return true;
        }
    }
    return false;
}

bool is_it_taken(char positions[9], int position) {
    return positions[position - 1] != 'X' && positions[position - 1] != 'O';
}

int get_position(char positions[9], char player) {
    int position;
    while (true) {
        std::cout << "Player " << player <<": Select position of next movement..." << "\n";
        std::cin >> position;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Invalid input, please only enter numbers!" << "\n";
        }
        else if ((position >= 1 && position <= 9) && is_it_taken(positions, position)) {
            return position;
        }
        else {
            std::cout << "Invalid position!" << "\n";
        }

    }
}

bool check_draw(char positions[9]){
    for (int i = 0; i < 9; i++) {
        if (positions[i] != 'X' && positions[i] != 'O') {
            return false;
        }
    }
    return true;
}