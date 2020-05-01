#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <array>

using namespace std;

class game{
  public:
    void setWord();
    void checkLetter();
    int getLives();
    string getDisplayLetters();
    bool checkResult();
    void setLives();
    game();
  private:
    string letters;
    string guessing;
    int lives;
};
