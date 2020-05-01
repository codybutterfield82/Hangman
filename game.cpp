#include <iostream>
#include <iomanip>
#include <string>
#include <array>
#include <time.h>
#include "game.h"

using namespace std;

game::game(){
  letters = "";
  guessing = "";
  lives = 5;
}

void game::setWord(){
  string gameWords[] = {
    "elephant",
    "chocolate",
    "hypocritical",
    "parakeet",
    "blanket",
    "sasquatch",
    "diary",
    "empinada",
    "cemetery"
  };
  string word;
  int rngChoices;

  rngChoices = sizeof(gameWords)/sizeof(gameWords[0]);
  word = gameWords[rand() % rngChoices];

  letters = word;

  for(int i=0; i<word.size(); i++){
    guessing += '-';
  }
}

void game::checkLetter(){
  char guess;
  
  bool isCorrect = false;
  
  cout << "Guess a letter!" << endl;
  cin >> guess;
  
  for(int i=0; i<guessing.size(); i++){
    if(guess == letters[i]){
      guessing[i] = guess;
      isCorrect = true;
    }
  }

  cout << endl;

  if(isCorrect == false){
    setLives();
  } 
}

void game::setLives(){
  lives -= 1;
}

int game::getLives(){
  return lives;
}

string game::getDisplayLetters(){
  return guessing;
}

bool game::checkResult(){
  if(guessing == letters){
    return true;
  }

  return false;
}
