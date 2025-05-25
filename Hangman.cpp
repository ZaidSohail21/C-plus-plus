#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string word = "hangman";
    string guessed, finalGuess;
    int tries, maxAllowedTries = 6;
    int length = word.length();
    char character;

    for (int i = 0; i < length; i++)
    {
        guessed[i] = '-';
    }
    cout << "Here is the number of letters in the word you have to guess:\n";
    for (int i = 0; i < length; i++)
    {
        cout << guessed[i];
    }
    cout << "\n\n";
    cout << "You are supposed to guess in 6 or less attempts. Type a letter in the word or $ to skip the rest of the guess attempts and type the complete word you want to guess. \n";

    for (int i = 0; i < maxAllowedTries; i++) {
        tries = i + 1;
        cout << "Enter your guess #" << i + 1 << ": ";
        cin >> character;
        if (character == '$') {
            tries--;
            break;
        }
        for (int j = 0; j < length; j++)
        {
            if (word[j] == character)
            {
                guessed[j] = character;
            }
        }
        cout << "\n";
        for (int j = 0; j < length; j++)
        {
            cout << guessed[j];
        }
        cout << "\n\n";
    }

    cout << "You have no more guess attempts left so now you have to type in the complete word you think it would be: \n Enter your word here: ";
    cin >> finalGuess;

    if (finalGuess == word) {
        cout << "Congrats you have guessed it correctly in just " << tries << " attempts";
    }
    else
    {
        cout << "Sorry your guess is incorrect";
    }

    return 0;
}