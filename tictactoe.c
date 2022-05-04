/************************
Programming Assignment 10
Author: Desiree Best
Date: 04/26/2022
************************/

#include <stdio.h>
#define FILE_NAME "scores.txt"


//Function Prototypes
int getMenuChoice();
_Bool gameWon();
void updateBoard(int,int,char);
void highScores(FILE*);
void playGame(char,char,char);
void displayScores(FILE*);

int main()
{
	char player1, player2, board[3][3];
	int choice, count, row, column;
	FILE* fp1;
	do
		{
			choice = getMenuChoice();
			if(choice ==1)
			{
				playGame(player1,player2,board[][]);
			}
			else if(choice ==2)
			{
				highScores(fp1);	
			}
			else
			{
				printf("Invalid input");
			}
		}while(choice != 0);

	return 0;
}

int getMenuChoice()
{
	int choice;
	printf("*** TIC TAC TOE!***\n1. Play Game\n2. Show Scores\n0. EXIT\nEnter your choice: ");
	scanf(" %d", &choice);
	return choice;
}

void playGame(char player1,char player2,char board[3][3])
{
	int row,column;
	printf("Player 1, enter your name: ");
	scanf("%c", &player1); 
	printf("Player 2, enter your name: ");
	scanf("%c", &player2);
	printf("******\n");
	printf("%c, you'll be X\n",player1);
	printf("%c, you'll be O\n",player2);
	printf("-----------\n");
	printf("[1]:[%c][%c][%c]\n",board[0][0],board[0][1],board[0][2]);
	printf("[2]:[%c][%c][%c]\n",board[1][0],board[1][1],board[1][2]);
	printf("[3]:[%c][%c][%c]\n",board[2][0],board[2][1],board[2][2]);
	printf("-----------\n");
	printf("     [1][2][3]\n");
	do {
	updateBoard(row, column, board[3][3]);
	} while(board[row][column] = ' ');
}

void updateBoard(int row, int column, char board[3][3])
{
	
	do
	{
		printf("%c Enter your move (row col): ",player1);
		scanf(" %d %d", &row, &column);
		if(board[row][column] != ' ' &&((row > 3 || row < 1) && (column > 3 || column < 1)))
		{
			printf(" Please enter a valid move (row col): ");
			scanf("%d %d", &row,&column);
			row--;
			cloumn--;
		}
		board[row-1][column-1] = 'X';
	}while(board[row][column] != ' ' &&((row > 3 || row < 1) && (column > 3 || column < 1)));
	
	
	do
	{
		printf("%c Enter your move (row col): ",player2);
		scanf(" %d %d", &row, &column);
		if(board[row][column] != ' ' &&((row > 3 || row < 1) && (column > 3 || column < 1)))
		{
			printf(" Please enter a valid move (row col): ");
			scanf("%d %d", &row,&column);
			row--;
			cloumn--;
		}
		board[row-1][column-1] = 'O';
	}while(board[row][column] != ' ' &&((row > 3 || row < 1) && (column > 3 || column < 1)));
				
}
void displayScores(FILE* fp1)
{
	if(fp1 != NULL)
	{
	fp1= fopen("scores.txt","r");
	}
	fclose(fp1);
}
void saveScores(FILE* fp1)
{
	if(fp1 != NULL)
	{
		fp1 = fopen("scores.txt","a");
		int count=0;
		if(gameWon())
		{
			count++;
		}
		fprintf(fp1, "%c", player1);
		fprintf(fp1, "%d\n", count);
		fprintf(fp1, "%c", player1);
		fprintf(fp1, "%d", count);
	}
	fclose(fp1);
}

_Bool gameWon()
{
	int choice;
	char board[3][3];
	char player1,player2;
	if((board[0][0]== 'X' && board[0][1]== 'X' && board[0][2]== 'X') || (board[1][0]== 'X' && board[1][1]== 'X' && board[1][2]== 'X') || (board[2][0]== 'X' && board[2][1]== 'X' && board[2][2]== 'X') || (board[0][0]== 'X' && board[1][0]== 'X' && board[2][0]== 'X') || (board[0][1]== 'X' && board[1][1]== 'X' && board[2][1]== 'X')|| (board[0][2]== 'X' && board[1][2]== 'X' && board[2][2]== 'X') ||(board[0][2]== 'X' && board[1][1]=='X' && board[2][0]== 'X') ||(board[0][0]== 'X' && board[1][1]== 'X' && board[2][2]== 'X'))
	{
		printf("%c YOU WON!! CONGRATS =D", player1);
		return 1;
	}
	else if((board[0][0]== 'O' && board[0][1]== 'O' && board[0][2]== 'O') || (board[1][0]== 'O' && board[1][1]== 'O' && board[1][2]== 'O') || (board[2][0]== 'O' && board[2][1]== 'O' && board[2][2]== 'O') || (board[0][0]== 'O' && board[1][0]== 'O' && board[2][0]== 'O') || (board[0][1]== 'O' && board[1][1]== 'O' && board[2][1]== 'O')|| (board[0][2]== 'O' && board[1][2]== 'O' && board[2][2]== 'O') ||(board[0][2]== 'O' && board[1][1]== 'O' && board[2][0]== 'O') ||(board[0][0]== 'O' && board[1][1]== 'O' && board[2][2]== 'O'))
	{
		printf("%c YOU WON!! CONGRATS =D", player2);
		return 1;
	}
	else
	{
		printf(" It's a tie!");
	}
	getMenuChoice();
}
