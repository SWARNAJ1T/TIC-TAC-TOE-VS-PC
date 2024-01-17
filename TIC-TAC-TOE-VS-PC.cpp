#include <iostream>
#include <string>
#include <conio.h>
#include <time.h>
using namespace std;
int checkwin(char[]);
void board(char[], string s, string n);
int main()
{
    srand(time(NULL));
    string s;
    string n = "COMPUTER";
    char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int player = 1, i, choice;
    choice = rand() % 9;
    cout << endl;
    cout << endl;
    cout << "ENTER YOUR NAME" << endl;
    getline(cin, s);
    char mark;
    do
    {
        board(square, s, n);
        if (player % 2 == 1)
            player = 1;
        else
            player = 2;
        if (player == 2)
        {
            cout << "\nPRESS ENTER FOR " << n << endl;
            mark = 'O';
            int placed = 0;
            while (placed == 0)
            {
                if (square[1] == 'O' && square[2] == 'O' && square[3] == '3')
                {
                    square[3] = mark;
                    break;
                }
                else if (square[1] == '1' && square[2] == 'O' && square[3] == 'O')
                {
                    square[1] = mark;
                    break;
                }
                else if (square[1] == 'O' && square[2] == '2' && square[3] == 'O')
                {
                    square[2] = mark;
                    break;
                }
                else if (square[4] == 'O' && square[5] == 'O' && square[6] == '6')
                {
                    square[6] = mark;
                    break;
                }
                else if (square[4] == 'O' && square[5] == '5' && square[6] == 'O')
                {
                    square[5] = mark;
                    break;
                }
                else if (square[4] == '4' && square[5] == 'O' && square[6] == 'O')
                {
                    square[4] = mark;
                    break;
                }
                else if (square[7] == 'O' && square[8] == 'O' && square[9] == '9')
                {
                    square[9] = mark;
                    break;
                }
                else if (square[7] == 'O' && square[8] == '8' && square[9] == 'O')
                {
                    square[8] = mark;
                    break;
                }
                else if (square[7] == '7' && square[8] == 'O' && square[9] == 'O')
                {
                    square[7] = mark;
                    break;
                }
                else if (square[1] == 'O' && square[4] == 'O' && square[7] == '7')
                {
                    square[7] = mark;
                    break;
                }
                else if (square[1] == 'O' && square[4] == '4' && square[7] == 'O')
                {
                    square[4] = mark;
                    break;
                }
                else if (square[1] == '1' && square[4] == 'O' && square[7] == 'O')
                {
                    square[1] = mark;
                    break;
                }
                else if (square[2] == 'O' && square[5] == 'O' && square[8] == '8')
                {
                    square[8] = mark;
                    break;
                }
                else if (square[2] == 'O' && square[5] == '5' && square[8] == 'O')
                {
                    square[5] = mark;
                    break;
                }
                else if (square[2] == '2' && square[5] == 'O' && square[8] == 'O')
                {
                    square[2] = mark;
                    break;
                }
                else if (square[3] == 'O' && square[6] == 'O' && square[9] == '9')
                {
                    square[9] = mark;
                    break;
                }
                else if (square[3] == 'O' && square[6] == '6' && square[9] == 'O')
                {
                    square[6] = mark;
                    break;
                }
                else if (square[3] == '3' && square[6] == 'O' && square[9] == 'O')
                {
                    square[3] = mark;
                    break;
                }
                else if (square[1] == 'O' && square[5] == 'O' && square[9] == '9')
                {
                    square[9] = mark;
                    break;
                }
                else if (square[1] == 'O' && square[5] == '5' && square[9] == 'O')
                {
                    square[5] = mark;
                    break;
                }
                else if (square[1] == '1' && square[5] == 'O' && square[9] == 'O')
                {
                    square[1] = mark;
                    break;
                }
                else if (square[3] == 'O' && square[5] == 'O' && square[7] == '7')
                {
                    square[7] = mark;
                    break;
                }
                else if (square[3] == 'O' && square[5] == '5' && square[7] == 'O')
                {
                    square[5] = mark;
                    break;
                }
                else if (square[3] == '3' && square[5] == 'O' && square[7] == 'O')
                {
                    square[3] = mark;
                    break;
                }
                // for X
                else if (square[1] == 'X' && square[2] == 'X' && square[3] == '3')
                {
                    square[3] = mark;
                    break;
                }
                else if (square[1] == '1' && square[2] == 'X' && square[3] == 'X')
                {
                    square[1] = mark;
                    break;
                }
                else if (square[1] == 'X' && square[2] == '2' && square[3] == 'X')
                {
                    square[2] = mark;
                    break;
                }
                else if (square[4] == 'X' && square[5] == 'X' && square[6] == '6')
                {
                    square[6] = mark;
                    break;
                }
                else if (square[4] == 'X' && square[5] == '5' && square[6] == 'X')
                {
                    square[5] = mark;
                    break;
                }
                else if (square[4] == '4' && square[5] == 'X' && square[6] == 'X')
                {
                    square[4] = mark;
                    break;
                }
                else if (square[7] == 'X' && square[8] == 'X' && square[9] == '9')
                {
                    square[9] = mark;
                    break;
                }
                else if (square[7] == 'X' && square[8] == '8' && square[9] == 'X')
                {
                    square[8] = mark;
                    break;
                }
                else if (square[7] == '7' && square[8] == 'X' && square[9] == 'X')
                {
                    square[7] = mark;
                    break;
                }
                else if (square[1] == 'X' && square[4] == 'X' && square[7] == '7')
                {
                    square[7] = mark;
                    break;
                }
                else if (square[1] == 'X' && square[4] == '4' && square[7] == 'X')
                {
                    square[4] = mark;
                    break;
                }
                else if (square[1] == '1' && square[4] == 'X' && square[7] == 'X')
                {
                    square[1] = mark;
                    break;
                }
                else if (square[2] == 'X' && square[5] == 'X' && square[8] == '8')
                {
                    square[8] = mark;
                    break;
                }
                else if (square[2] == 'X' && square[5] == '5' && square[8] == 'X')
                {
                    square[5] = mark;
                    break;
                }
                else if (square[2] == '2' && square[5] == 'X' && square[8] == 'X')
                {
                    square[2] = mark;
                    break;
                }
                else if (square[3] == 'X' && square[6] == 'X' && square[9] == '9')
                {
                    square[9] = mark;
                    break;
                }
                else if (square[3] == 'X' && square[6] == '6' && square[9] == 'X')
                {
                    square[6] = mark;
                    break;
                }
                else if (square[3] == '3' && square[6] == 'X' && square[9] == 'X')
                {
                    square[3] = mark;
                    break;
                }
                else if (square[1] == 'X' && square[5] == 'X' && square[9] == '9')
                {
                    square[9] = mark;
                    break;
                }
                else if (square[1] == 'X' && square[5] == '5' && square[9] == 'X')
                {
                    square[5] = mark;
                    break;
                }
                else if (square[1] == '1' && square[5] == 'X' && square[9] == 'X')
                {
                    square[1] = mark;
                    break;
                }
                else if (square[3] == 'X' && square[5] == 'X' && square[7] == '7')
                {
                    square[7] = mark;
                    break;
                }
                else if (square[3] == 'X' && square[5] == '5' && square[7] == 'X')
                {
                    square[5] = mark;
                    break;
                }
                else if (square[3] == '3' && square[5] == 'X' && square[7] == 'X')
                {
                    square[3] = mark;
                    break;
                }
                else if (choice == 1 && square[1] == '1')
                {
                    square[1] = mark;
                    placed = 1;
                }
                else if (choice == 2 && square[2] == '2')
                {
                    square[2] = mark;
                    placed = 1;
                }
                else if (choice == 3 && square[3] == '3')
                {
                    square[3] = mark;
                    placed = 1;
                }
                else if (choice == 4 && square[4] == '4')
                {
                    placed = 1;
                    square[4] = mark;
                }
                else if (choice == 5 && square[5] == '5')
                {
                    square[5] = mark;
                    placed = 1;
                }
                else if (choice == 6 && square[6] == '6')
                {
                    square[6] = mark;
                    placed = 1;
                }
                else if (choice == 7 && square[7] == '7')
                {
                    square[7] = mark;
                    placed = 1;
                }
                else if (choice == 8 && square[8] == '8')
                {
                    square[8] = mark;
                    placed = 1;
                }
                else if (choice == 9 && square[9] == '9')
                {
                    square[9] = mark;
                    placed = 1;
                }
                else
                {
                    choice = rand() % 9;
                }
            }
            i = checkwin(square);
            player++;
            getche();
            board(square, s, n);
        }
        else if (player == 1)
        {
            cout << s << " ENTER A NUMBER: ";
            cin >> choice;
            mark = 'X';
            if ((choice < 1 || choice > 9) || (square[choice] == 'X' || square[choice] == 'O'))
            {
                cout << "INVALID MOVE, PRESS ENTER TO RE-TRY ";
                player--;
                getche();
            }
            else
            {
                square[choice] = mark;
            }
            i = checkwin(square);
            player++;
        }
    } while (i == -1);
    board(square, s, n);
    if (i == 1 && player == 2)
    {
        cout << "CONGRATULATIONS! " << s << " WON THE MATCH";
    }
    else if (i == 0)
    {
        cout << "  OOPS!\nGAME DRAW";
    }
    else
    {
        cout << n << " WON THE GAME, BETTER LUCK NEXT TIME " << s << endl;
    }
}
void board(char square[], string s, string n)
{
    system("cls");
    cout << "\n\n    TIC-TAC-TOE\n\n";
    cout << s << " (X) "
         << " -  " << n << " (O)" << endl
         << endl;
    cout << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
    cout << "     |     |     " << endl
         << endl;
}
int checkwin(char square[])
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
        return 0;
    else
        return -1;
}