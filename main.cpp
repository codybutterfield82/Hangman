#include <iostream>
#include <iomanip>
#include <string>
#include <array>
#include <time.h>
#include "display.h"
#include "game.h"

using namespace std;

enum Choices {PLAY = 1, QUIT};
int menu();

int main() {
  srand(time(NULL));
  string guessLetters;
  int lives;

  game g;
  display d;

  int choice;
  choice = menu();

  if(choice == PLAY){
    g.setWord();
  }

  while(choice == PLAY){
    g.checkLetter();
    guessLetters = g.getDisplayLetters();
    d.displayLetters(guessLetters);
    lives = g.getLives();
    d.displayLives(lives);
    if(g.checkResult()){
      cout << "You win!" << endl;
      cout << endl;
      choice = QUIT;
    }
    if(g.getLives() == 0){
      cout << "You lose!" << endl;
      cout << endl;
      choice = QUIT;
    }
  }
}

int menu(){
  int choice;

  cout << "Welcome to Hangman!" << endl;
  cout << "1. Play\n2. Quit\n";

  cin >> choice;
  return choice;
}
