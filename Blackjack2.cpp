#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

char caseauswahl;
int i;
int w;
int Anleitung;
int Anfang;
int ifauswahl;
int j;
int n;


int cards[10] = { 0 };

int getTotal() 
{
    int total = 0;
    for (int i = 0; i < 10; i++) {
        if (cards[i] != 0) {
            total = total + cards[i];
        }
    }
    return total;
}

int main()
{
    cout << "Herzlich Wilkommen in der Blackjack - Konsolen Anwendung\n";
    cout << "Show Time ... Der Dealer mischt die Karten und Teilt sie aus!\n";
    cout << "\n";
    cout << "Deine Karten:" << endl;
    cout << "->";

    
    srand(time(0));  // Initialize random number generator.
    for (int i = 0; i < 2; i++) {
        cards[i] = (rand() % 10) + 1;
        cout << cards[i] << "   ";
    }
    cout << "Total: " << getTotal();
    cout << "\n";
   
    
    cout << "\n";
    cout << "Willst du eine weitere Karte ziehen? (j/n)";
    cout << ":"; cin >> caseauswahl;
    cout << "\n";

    switch (caseauswahl)
    {
   
        
        
                case ('j'):
                {
                    

                    srand(time(0));                     // Initialize random number generator.
                    for (int i = 0; i < 1; i++)
                        cout << "Deine Karten:" << endl;
                    cout << "->";
                    cards[3] = (rand() % 10) + 1;       //cout << (rand() % 10) + 1 << " ";
                    cout << cards[3] << "   "; cout << "Total: " << getTotal();
                    cout << "\n";
                    cout << "\n";

                    cout << "Willst du eine weitere Karte ziehen? (j/n)";
                    cout << ":"; cin >> caseauswahl;

                    while (w != 1);
                        
                } break;
             

                case ('n'):
                {

                    cout << "-> Du willst bei dem Wert stehen bleiben\n";

                } break;
        
        
    }



    return 0;

   
    



}
