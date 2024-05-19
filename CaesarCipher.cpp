#include <iostream>
#include <string>

using namespace std;

// Function to encrypt the message
string encrypt(string text, int shift) {
    string result = "";

    for (int i = 0; i < text.length(); i++) {
        if (isupper(text[i]))
            result += char(int(text[i] + shift - 65) % 26 + 65);
        else
            result += char(int(text[i] + shift - 97) % 26 + 97);
    }

    return result;
}

// Function to decrypt the message
string decrypt(string text, int shift) {
    string result = "";

    for (int i = 0; i < text.length(); i++) {
        if (isupper(text[i]))
            result += char(int(text[i] - shift - 65 + 26) % 26 + 65);
        else
            result += char(int(text[i] - shift - 97 + 26) % 26 + 97);
    }

    return result;
}

int main() {
    string text;
    int shift;
    char choice;

    cout << "Enter the message: ";
    getline(cin, text);

    cout << "Enter the shift value: ";
    cin >> shift;

    cout << "Encrypt or Decrypt (e/d): ";
    cin >> choice;

    if (choice == 'e' || choice == 'E') {
        cout << "Encrypted message: " << encrypt(text, shift) << endl;
    } else if (choice == 'd' || choice == 'D') {
        cout << "Decrypted message: " << decrypt(text, shift) << endl;
    } else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}