#include <stdio.h>
#include <stdbool.h>

char Board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

int choice;
int row,column;
char turn = 'X';
bool draw = false;

void display_board(){
    printf("PLAYER - 1 [X]\t PLAYER - 2 [O]\n\n");
    printf("\t\t\t\t     |     |     \n");
    printf("\t\t\t\t  %c  |  %c  |  %c \n", Board[0][0], Board[0][1], Board[0][2]);
    printf("\t\t\t\t_____|_____|_____\n");
    printf("\t\t\t\t     |     |     \n");
    printf("\t\t\t\t  %c  |  %c  |  %c \n", Board[1][0], Board[1][1], Board[1][2]);
    printf("\t\t\t\t_____|_____|_____\n");
    printf("\t\t\t\t     |     |     \n");
    printf("\t\t\t\t  %c  |  %c  |  %c \n", Board[2][0], Board[2][1], Board[2][2]);
    printf("\t\t\t\t     |     |     \n");
}

void player_turn(){
    if(turn == 'X'){
        printf("\nPlayer - 1 [X] turn : ");
    }
    else if(turn == 'O'){
        printf("\nPlayer - 2 [O] turn : ");
    }

    scanf("%d", &choice);

    switch(choice){
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;
        default:
            printf("Invalid Move");
    }

    if(turn == 'X' && Board[row][column] != 'X' && Board[row][column] != 'O'){
        Board[row][column] = 'X';
        turn = 'O';
    }else if(turn == 'O' && Board[row][column] != 'X' && Board[row][column] != 'O'){
        Board[row][column] = 'O';
        turn = 'X';
    }else {
        printf("Box already filled!\nPlease choose another!!\n\n");
        player_turn();
    }

    display_board();
}

bool gameover(){
    for(int i=0; i<3; i++)
        if(Board[i][0] == Board[i][1] && Board[i][0] == Board[i][2] || Board[0][i] == Board[1][i] && Board[0][i] == Board[2][i])
            return false;

    if(Board[0][0] == Board[1][1] && Board[0][0] == Board[2][2] || Board[0][2] == Board[1][1] && Board[0][2] == Board[2][0])
        return false;

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            if(Board[i][j] != 'X' && Board[i][j] != 'O')
                return true;

    draw = true;
    return false;
}

int main()
{
    printf("\t\t\t\t\tWELCOME\n");
	printf("\t\t\tT I C K -- T A C -- T O E -- G A M E\t\t\t");
    printf("\n\t\t\t\t2 PLAYER MODE\n\t\t\t");
    display_board();
    while(gameover()){
        player_turn();
    }

    if(turn == 'O' && draw == false){
        printf("\n\nCongratulations! Player with 'X' has won the game");
    }
    else if(turn == 'X' && draw == false){
        printf("\n\nCongratulations! Player with 'O' has won the game");
    }
    else
        printf("\n\nGAME DRAW!!!\n\n");

    return 0;
}

