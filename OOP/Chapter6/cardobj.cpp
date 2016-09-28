#include <iostream>
using namespace std;

enum Suit {
  CLUBS,
  DIAMONDS,
  HEARTS,
  SPADES
};

const int jack  = 11;
const int queen = 12;
const int king  = 13;
const int ace   = 14;

class Card {
private:
  int number;
  Suit suit;
public:
  Card() {
    //constructor no args
  }
  Card(int n, Suit s) : number(n), suit(s) {
    //constructot two args
  }
  void display();
  bool isEqual(Card);
};

void Card::display() {
  if(number <=10 && number >= 2) {
    cout << number << " of ";
  }
  else {
    switch(number) {
      case jack  : cout << "Jack of ";  break;
      case queen : cout << "Queen of "; break;
      case king  : cout << "King if ";  break;
      case ace   : cout << "Ace of ";   break;
    }
    switch(suit) {
      case CLUBS    : cout << "clubs";    break;
      case DIAMONDS : cout << "diamonds"; break;
      case HEARTS   : cout << "hearts";   break;
      case SPADES   : cout << "spades";   break;
    }
  }
}

bool Card::isEqual(Card c2) {
  return (number==c2.number && suit==c2.suit) ? true : false;
}

int main() {
  Card temp, chosen, prize;
  int position;

  Card card1(7, CLUBS);
  cout << "\nCard 1 is the "; card1.display();

  Card card2(jack, HEARTS);
  cout << "\nCard 2 is the "; card2.display();

  Card card3(ace, SPADES);
  cout << "\nCard 3 is the"; card3.display();

  prize = card3;

  temp = card3; card3 = card1; card1 = temp;
  temp = card3; card3 = card2; card2 = temp;
  temp = card2; card2 = card1; card1 = temp;

  cout << "\nWhere is the "; prize.display();
  cout << "?" << endl;
  cin >> position;

  switch(position) {
    case 1 : chosen = card1; break;
    case 2 : chosen = card2; break;
    case 3 : chosen = card3; break;
  }

  if(chosen.isEqual(prize)) {
    cout << "\nThat is right! You win!" << endl;
  }
  else {
    cout << "Wrong! You lose!" << endl;
  }
  return 0;
}