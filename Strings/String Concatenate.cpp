#include <iostream>
using namespace std;
#include <bits/stdc++.h>

class Player{
  private:
  string name;

  public:
  Player (string name){
    this->name = name;
  }
  string operator+(Player otherPlayer){
    return name + otherPlayer.name;
  }
};
int main() {
  Player player1("Bella");
  Player player2("Ciao");

  cout<<"The result is "<<player1+player2;

}