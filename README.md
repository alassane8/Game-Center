# 
<h1 align="center">
Alassane WADE Game-Center
</h1>  

<h2 align="center">
 "⣾⣿⠿⠿⠶⠿⢿⣿⣿⣿⣿⣦⣤⣄⢀⡅⢠⣾⣛⡉⠄⠄⠄⠸⢀⣿. "
</h2>                                      

Game-Center in C Language.

## Instructions
To play the different games in the Games-Center, follow the instructions :

## Open a terminal in full screen.
- Clone this github repository in the path of your choice: 
```bash
git clone https://github.com/alassane8/Game-Center.git
```
- Go to the Sudoku folder :
```bash
cd Game-Center/code
```
- Run the Executable: 
```bash
./Games-Center.exe
```

## Have fun !
You are now ready to play !

<h1 align="center">
Battleship
</h1>  

Game of Battleship in C Language.

<img width="1306" alt="Screen Shot 2021-03-15 at 8 29 18 PM" src="https://github.com/alassane8/BattleShip/blob/main/code/Capture.PNG">

https://github.com/alassane8/BattleShip

## Rules
Here are the rules of the game: 

At the start of the game, Player 1 randomly or manually places all the ships on
the grid. Player 1 does not see the AI grid.

Player 1 shoots at (h,7), corresponding to the square of the enemy grid
at the crossing of the letter h and of number 7.
If Player 1 or the AI fires at an enemy ship, the letter 'X' will appear on the
hit space.

The shooter can play twice in a row to attempt to hit the enemy once more.
If player 1 or the AI does not hit a ship, the message '0' will appear on the
failed space.
The 'X' and '0' marks are used to remember missed shots ('0') and hits ('X').

Each turn, Player 1 can either fire into the enemy's grid, activate air support
which fires 5 shots in the enemy's grid, activate satellite view in
order to see enemy's shipsor launch a flare.
Player 1 is able to save the current game and return to the main menu.
A battleship game ends when one of the players has no ships remaining.

## Informations about the ships
Here are the boats you can place:
Aircraft Carrier, Cruiser, Destroyer and Submarine.
- The unique Aircraft Carrier with the letter P takes up 7 spaces.
- 2 Cruisers with the letter C take up 5 spaces.
- 3 Destroyers with the letter D take 3 spaces.
- 4 Submarines with the letter S take up 1 space.

<h1 align="center">
Sudoku
</h1>                                      

Game of Sudoku in C Language.

<img width="1306" alt="Screen Shot 2021-03-15 at 8 29 18 PM" src="https://github.com/alassane8/Sudoku/blob/main/code/Capture.png">

https://github.com/alassane8/Sudoku

## Rules
- Rule 1 - The player must focus on filling each row of the grid while ensuring there are
    no duplicated numbers. The placement order of the digits is irrelevant.
    Every puzzle, regardless of the difficulty level, begins with allocated numbers on the grid.
    The player should use these numbers as clues to find which digits are missing in each row.
    
- Rule 2 - Each column must contain the numbers from 1 to 9, without repetitions
    The Sudoku rules for the columns on the grid are exactly the same as for the rows. The player must
    also fill these with the numbers from 1 to 9, making sure each digit occurs only once per column.
    The numbers allocated at the beginning of the puzzle work as clues to find which digits are missing
    in each column and their position.

- Rule 3 - The digits can only occur once per block (nonet)
    A regular 9 x 9 grid is divided into 9 smaller blocks of 3 x 3, also known as nonets. The numbers
    from 1 to 9 can only occur once per nonet.
    In practice, this means that the process of filling the rows and columns without duplicated digits
    finds inside each block another restriction to the numbers’ positioning.

- Rule 4 - The sum of every single row, column, and nonet must equal 45
    To find out which numbers are missing from each row, column, or block or if there are any duplicates,
    the player can simply count or flex their math skills and sum the numbers. When the digits occur only once,
    the total of each row, column, and group must be 45.
    
    1+2+3+4+5+6+7+8+9= 45

## Area for improvement
Here, you can find the features I am currently working on in this repository.
This allows you to be aware of the changes that are to come and see what needs to be improve. 