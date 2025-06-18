#include "UI.h"

string generateRandomString(int PasswortLength) {
    const string CHARACTERS
        = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
          "abcdefghijklmnopqrstuvwxyz"
          "0123456789";
    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<> distribution(0, CHARACTERS.size() - 1);

    string random_string;
    random_string.reserve(PasswortLength);
    for (int i = 0; i < PasswortLength; ++i) {
        random_string += CHARACTERS[distribution(generator)];
    }
    return random_string;
}

void UI() {
    char choice;
    int PasswortLength;
    int user_input;

    while (true) {
        cout << "1---Generate a random Password\n";
        cout << "2---Quit the Programm\n";
        cout << "    Choice: ";
        cin  >> choice;
        system("cls");

        if (choice == '1') {
            cout << "Password Length: ";
            cin  >> PasswortLength;
            system("cls");

            string random_string = generateRandomString(PasswortLength);
            cout << "Random Passwort: " << random_string << "\n";
            cout << "Press 1:   ";
            cin  >> user_input;
            system("cls");
        }
        else {
            exit(0);
        }
    }
}
