#pragma once
#include <cstdlib>


using namespace std;

class Blackjack
{
public:
	Blackjack();
	void playGame();

private:
	int dhand[5];
	int phand[5];
	int dhandSize;
	int phandSize;
	int dhandSum;
	int phandSum;
	int phit;
	int pstand;
	bool playerDone;
	bool dealerDone;
	void addPlayerCard();
	void addDealerCard();
	void printHand();
	void sumHands();
};


