/**
  * @brief Assignment 7
  * @author Daidemang Francis
  */
#include <iostream>
using namespace std;

const int WALL_SIZE = 10;
// gridFiller function
void gridFiller(char grid[WALL_SIZE][WALL_SIZE]);

// radiationChecker function
void radiationChecker(char grid[WALL_SIZE][WALL_SIZE], int x, int y);

// contaminationChecker function
int contaminationChecker(char grid[WALL_SIZE][WALL_SIZE]);

// safetyChecker function
void safetyChecker(char grid[WALL_SIZE][WALL_SIZE]);

// getLocation function
void getLocation(int& row, int& col);

// contaminate function
void contaminate(char grid[WALL_SIZE][WALL_SIZE], int row, int col, int& contamArea);

// printWall function
void printWall(char currentWall[WALL_SIZE][WALL_SIZE]);

int main()
{

    char grid[WALL_SIZE][WALL_SIZE] =
    {{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
    ,{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
    ,{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
    ,{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
    ,{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
    ,{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
    ,{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
    ,{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
    ,{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
    ,{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}};

    //get user input
    int x, y;
    getLocation(x, y);
    cout << endl;

    //fill the area with #
    gridFiller(grid);

    //check if the radiation can leak
    radiationChecker(grid, x, y);

    //checks if the area is safe or not
    safetyChecker(grid);

    //prints the amount of contaminated squares
    int contamArea = 0;
    contaminate(grid, x, y, contamArea);
    cout << "\n Contaminated area: " << contamArea << endl;

    return 0;
}


// gridFiller function
void gridFiller(char grid[WALL_SIZE][WALL_SIZE]){
    int x, y;
    cout << "Enter wall locations (x y), followed by 0 0 to indicate end of input: ";
    for (int i = 0; i < 100; i++){
        cin >> x >> y;
        if (x == 0 && y == 0){
            break;
        }
        else
            grid[x][y] = '#';
    }

}

// radiationChecker function
void radiationChecker(char grid[WALL_SIZE][WALL_SIZE], int x, int y){
    if (x < 0 || y < 0 || x > WALL_SIZE || y > WALL_SIZE){
        return;
    }
    if (grid[x][y] != ' '){
        return;
    }

    grid[x][y] = '*';

    radiationChecker(grid, x + 1 , y + 1 );
    radiationChecker(grid, x + 1 , y - 1 );
    radiationChecker(grid, x - 1 , y + 1 );
    radiationChecker(grid, x - 1 , y - 1 );
    radiationChecker(grid, x + 1 , y );
    radiationChecker(grid, x - 1 , y );
    radiationChecker(grid, x , y + 1 );
    radiationChecker(grid, x , y - 1 );
}

// contaminationChecker function
int contaminationChecker(char grid[WALL_SIZE][WALL_SIZE]){
    int contaminatedArea = 0;
    for (int i = 0; i < WALL_SIZE; i++){
        for (int j = 0; j < WALL_SIZE; j++){
            if (grid[i][j] == '*')
                contaminatedArea++;
        }
    }
    return contaminatedArea;
}

// safetyChecker function
void safetyChecker(char grid[WALL_SIZE][WALL_SIZE]){
    for (int i = 0; i < WALL_SIZE; i++){
        if(grid[0][i] == ' ' || grid[i][0] == ' ') {
            printWall(grid);
            cout << "Not Safe! (We reached the edge, that is unsafe!)";
            break;
        }
        else if (grid[0][i] != ' '){
            printWall(grid);
            cout << "Not Safe! ";
            break;
        }
        else if (grid[i][0] != ' '){
            printWall(grid);
            cout << "Not Safe! ";
            break;
        }
        else if (grid[WALL_SIZE-1][i] != ' '){
            printWall(grid);
            cout << "Not Safe! ";
            break;
        }
        else if (grid[i][WALL_SIZE-1] != ' '){
            printWall(grid);
            cout << "Not Safe! ";
            break;
        }
        else {
            printWall(grid);
            cout << "Safe! ";
            break;
        }
    }
}

// getLocation function
void getLocation(int& row, int& col) {
    while(row >= 0 && col >= 0) {
        cout << "Enter contaminated location (x y): ";
        cin >> row >> col;
        if(row < WALL_SIZE && col < WALL_SIZE) {
            if(row >= 0 && col >= 0) {
                break;
            }
        }
    }
}

// contaminate function
void contaminate(char grid[WALL_SIZE][WALL_SIZE], int row, int col, int& contamArea) {
    if(row < 0 || col < 0 || row >= WALL_SIZE || col >= WALL_SIZE) {
        return;
    }
    if(grid[row][col] != ' ') {
        return;
    }

    grid[row][col] = '*';
    contamArea += 1;

    contaminate(grid, row, col - 1, contamArea);
    contaminate(grid, row, col + 1, contamArea);
    contaminate(grid, row - 1, col, contamArea);
    contaminate(grid, row + 1, col, contamArea);
    contaminate(grid, row - 1, col - 1, contamArea);
    contaminate(grid, row - 1, col + 1, contamArea);
    contaminate(grid, row + 1, col - 1, contamArea);
    contaminate(grid, row + 1, col + 1, contamArea);
}

// printWall function
void printWall(char currentWall[WALL_SIZE][WALL_SIZE]) {
    cout << "   ";
    for(int i = 0; i < WALL_SIZE; i++)
        cout << i << " ";
    cout << endl;
    for(int j = 0; j < WALL_SIZE; j++) {
        cout << j << "  ";
        for(int k = 0; k < WALL_SIZE; k++) {
            cout << currentWall[j][k] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
}
