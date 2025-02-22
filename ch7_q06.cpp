#include <iostream>
#include <unistd.h>
#include <cstdlib>
using namespace std;

class Cards {
private:
    string type, name;

public:
    Cards() : type(""), name("") {}

    void setter(string tp, int i) {
        type = tp;
        if (i == 1) name = "A";
        else if (i > 1 && i < 11) name = to_string(i);
        else if (i == 11) name = "J";
        else if (i == 12) name = "Q";
        else if (i == 13) name = "K";
    }

    void display() const {
        cout << name << type << " ";
    }
};

class Deck {
private:
    Cards* cards;

public:
    Deck(): cards(nullptr) {}

    void initializer() {
        cards = new Cards[52];
        string types[] = { "H", "D", "C", "S" };
        int j = 0;

        for (auto& tp : types) {
            for (int i = 1; i < 14; i++) {
                cards[j++].setter(tp, i);
            }
        }
    }
    Deck(const Deck& dx) {
        cards = new Cards[52];
        for (int i = 0; i < 52; ++i) {
            cards[i] = dx.cards[i];
        }
    }
    Cards& operator[](int index) {
        return cards[index];
    }

    void displayDeck() const {
        for (int i = 0; i < 52; ++i) {
            cards[i].display();
        }
    }
    ~Deck() {
        delete[] cards;
    }
};

class player{
private:
	string name;
	Cards* hand;
public:
	player(): name(""), hand(new Cards[13]){}
    void getHand(string n, Deck& d1, int& currLim){
		name = n;
        int i = 0;
        while(i != 13){
            int x = rand() % currLim;
            hand[i++] = d1[x];
			d1[x] = d1[--currLim];
        }
    }
	void display(){
		cout << "Player " << name << "'s cards:\n";
		for(int i = 0; i < 13; i++){
			hand[i].display();
		}cout << endl;
	}
	~player(){
		delete[] hand;
	}
};



int main() {
    Deck d1;
    d1.initializer();
	Deck d2(d1);
	player * players = new player[4];
	string temp;
	int lim = 52;
	for(int i = 0; i < 4; i++){
		cout << "Enter player name: ";		
		cin >> temp;
		players[i].getHand(temp, d2, lim);
	}
	for(int i = 0; i < 4; i++){
		players[i].display();
		cout << endl;
	}
    return 0;
}