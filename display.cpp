#include <iostream>
#include <iomanip>
#include <string>
#include <array>
#include <time.h>
#include "display.h"

using namespace std;

display::display(){
  
}

void display::displayLetters(string guessLetters){
  cout << guessLetters << "        ";
}

void display::displayGuessedLetters(string missedLetters){
  cout << missedLetters << endl;
}

void display::displayLives(int lives){
  cout << "Lives: " << lives << "        ";
}

