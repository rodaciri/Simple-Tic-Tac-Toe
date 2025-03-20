#ifndef FUNCTIONS_H
#define FUNCTIONS_H

void render(char positions[9]);
bool check_winner(char positions[9]);
bool is_it_taken(char positions[9], int position);
int get_position(char positions[9], char player);
bool check_draw(char positions[9]);
#endif