 Overview :
TypeFast is a simple console-based game written in C that helps you practice typing speed and accuracy. The idea is straightforward: the program shows you random words or sentences, you type them as quickly as you can, and then it calculates your speed (in words per minute) and accuracy. It’s lightweight, runs offline, and is perfect for anyone who wants to sharpen their typing skills without relying on heavy software or online tools.

Features :
- Generates random words or sentences for variety
- Tracks how long you take to type
- Calculates both speed (WPM) and accuracy
- Shows results at the end of each round
- Lets you replay and keep practicing
 Tools & Technologies :
- Language: C
- IDE: Visual Studio Code
- Libraries Used:
- <stdio.h> – for input/output
- <stdlib.h> – for randomization and utility functions
- <time.h> – for timing and seeding randomness
- <conio.h> – for real-time input (optional, Windows only)
- Platform: Works in Windows/Linux terminal

How to Run :
- Download or clone the project folder.
- Open it in Visual Studio Code.
- Compile the program using GCC or any C compiler:
  gcc typefast.c -o typefast
- Run the game:
./typefast

How It Works :
- The game starts with a short instruction screen.
- Random words or sentences appear on the console.
- You type them as fast and accurately as possible.
- The program calculates your typing speed and accuracy.
- Results are displayed, and you can choose to play again.**

Current Progress :
- Word generation and input capture are working.
- Timer and accuracy calculation are implemented.
- Replay and result display are functional.
- Future Plans
- Add difficulty levels (easy, medium, hard).
- Save scores in a leaderboard using file storage.
- Introduce paragraph typing challenges.
- Improve visuals with ASCII art for a more engaging UI.

Author:
Created by Parth as an assignement project in C programming.






