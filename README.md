# ProgrammingAssignment10

## Project Goals
The goal of this project is to:
1.	Allow students to put together all programming and problem solving skills learned in this class.
### Important Notes:
1.	**Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. For your testing purposes, the autograder will be comparing your output to that of the example executable.
2.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
3.	**Filename**: Save your program as ```tictactoe.c```

## Program
Write a program that will allow the user to play a simplified version of TicTacToe.  

The program should behave as follows:
- The menu is displayed which provides the user some options. The user may play a game, or the user may view scores.   
- If the user chooses to play the game, they should first be prompted to enter their name and their opponent’s name. Those names will be used during game play. The players are then informed which pieces represent them.  
- Then, a grid should be displayed which represents the TicTacToe board. The user should be prompted for which board location they’d like to place their piece. If the move is invalid, they’re prompted to enter a valid selection. Otherwise, their piece is placed in the appropriate spot and the next player is prompted to take their turn.  
- If a player wins, they should be congratulated and the game should keep track of how many times they’ve won. If it is a tie, the players should be notified. At the end of each game, the players should be asked if they want to play again. If they do, a new game should start. If they don’t, they should be taken back to the menu and each player’s total wins should be saved as their scores.  
- If the user chooses to view scores, all the players and their associated scores are displayed to the screen.

## Requirements
- A minimum of 5 functions should be included, but it’s recommended to use more.
- All game information must be saved to a file, named scores.txt. This will include the top 10 players’ names and their corresponding scores.
- You may use the stdio.h and stdbool.h libraries. You may not use the string.h library.
- Scoring is calculated by counting the number of times each player won a game.

Your program should include components incorporating the following concepts from the course:

1. Arrays of Strings
2. Arrays
3. Pass by Address
4. File IO
5. Iteration
6. Functions
7. Selection Statements
8. Expressions
9. Formatted IO
10. Variables

### The example executable:
An example executable is provided in this repository. You should be able to run it from your project folder.
If you encounter a "permission denied" error when attempting to run the executable, type ```chmod u+x tictactoeExecutable``` into the terminal and try running the executable again.

## Submission details
To submit your project, you will have to use git on your VirtualBox installation:
1.	After accepting the assignment invitation, copy the clone URL
2.	Type 
```git clone clone URL```
3.	cd into your new assignment directory
4.	After working on your files
5.	When you’re ready, type the following commands: 
```
git add .
git commit -m “your commit message”
git push
```
## Academic Honesty
Academic dishonesty is against university as well as the system community standards. Academic dishonesty includes, but is not limited to, the following:
Plagiarism: defined as submitting the language, ideas, thoughts or work of another as one's own; or assisting in the act of plagiarism by allowing one's work to be used in this fashion.
Cheating: defined as (1) obtaining or providing unauthorized information during an examination through verbal, visual or unauthorized use of books, notes, text and other materials; (2) obtaining or providing information concerning all or part of an examination prior to that examination; (3) taking an examination for another student, or arranging for another person to take an exam in one's place; (4) altering or changing test answers after submittal for grading, grades after grades have been awarded, or other academic records once these are official.
Cheating, plagiarism or otherwise obtaining grades under false pretenses constitute academic
dishonesty according to the code of this university. Academic dishonesty will not be tolerated and
penalties can include cancelling a student’s enrolment without a grade, giving an F for the course, or for the assignment. For more details, see the University of Nevada, Reno General Catalog.
