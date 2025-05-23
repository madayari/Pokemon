#include <iostream>
using namespace std;

int main() {
    string player_name;

    cout << "Enter your name: ";
    cin >> player_name;

    cout << "Great Start " << player_name << endl;

    cout << "Welcome to the world of Pokémon! I am Professor Oak.\n";
    cout << "Today is a momentous day—you’ll be choosing your very first Pokémon.\n";

    cout << "Every great Trainer remembers this moment for the rest of their lives.\n";

    cout << "So, choose wisely, young one!\n";
    cout << "You can choose one of the following Pokémon:\n";
    cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
    cout << "Which Pokémon would you like to choose? Enter the number: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "You chose Bulbasaur! A wise choice.\n";
    }
    else if (choice == 2) {
        cout << "You chose Charmander! A fiery choice.\n";
    }
    else if (choice == 3) {
        cout << "You chose Squirtle! A cool choice.\n";
    }
    else {
        cout << "Invalid choice. Please restart the game.\n";
    }
    cout << "Ah, an excellent choice!\n";
    cout << "But beware, Trainer,\n";
    cout << "this is only the beginning.\n";
    cout << "Your journey is about to unfold.\n";
    cout << "Now let’s see if you’ve got what it takes to keep going!\n";
    cout << "Good luck, and remember… Choose wisely!\n";
    return 0;
}
