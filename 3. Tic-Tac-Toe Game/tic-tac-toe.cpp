#include <iostream>
using namespace std;

char board[3][3];

void initBoard()
{
    char ch = '1';
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            board[i][j] = ch++;
}

void displayBoard()
{
    cout << "\n";
    for(int i=0; i<3; i++)
    {
        cout << " ";
        for(int j=0; j<3; j++)
        {
            cout << board[i][j];
            if(j < 2) cout << " | ";
        }
        cout << "\n";
        if(i < 2) cout << "---+---+---\n";
    }
    cout << "\n";
}

bool checkWin(char player)
{
    for(int i=0; i<3; i++)
        if(board[i][0] == player && board[i][1] == player && board[i][2] == player) return true;
    for(int j=0; j<3; j++)
        if(board[0][j] == player && board[1][j] == player && board[2][j] == player) return true;
    if(board[0][0] == player && board[1][1] == player && board[2][2] == player) return true;
    if(board[0][2] == player && board[1][1] == player && board[2][0] == player) return true;
    return false;
}

bool isDraw()
{
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            if(board[i][j] != 'X' && board[i][j] != 'O') return false;
    return true;
}

int main()
{
    initBoard();
    char player = 'X';
    int move;

    while(true)
    {
        displayBoard();
        cout << "Player " << player << ", enter your move (1-9): ";

        cin >> move;

        if(cin.fail())
        {
            cout << "Invalid input! Please enter a number between 1 and 9.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        if(move < 1 || move > 9)
        {
            cout << "Invalid move! Please choose a number between 1 and 9.\n";
            continue;
        }

        int row = (move - 1) / 3;
        int col = (move - 1) % 3;

        if(board[row][col] == 'X' || board[row][col] == 'O')
        {
            cout << "Cell already taken! Try again.\n";
            continue;
        }

        board[row][col] = player;

        if(checkWin(player))
        {
            displayBoard();
            cout << "Player " << player << " wins!\n";
            break;
        }

        if(isDraw())
        {
            displayBoard();
            cout << "It's a draw!\n";
            break;
        }

        player = (player == 'X') ? 'O' : 'X';
    }

    return 0;
}