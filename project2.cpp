#include <iostream>
#include <string>
using namespace std;

int main() {
    string message;
    int shift = 3;
    string encrypted = "";
    string decrypted = "";

    cout << "Enter your message: ";
    getline(cin, message);

    // encrypting the message
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];

        if (c >= 'A' && c <= 'Z') {
            // shifting uppercase letter
            char enc = (char)(((c - 'A') + shift) % 26 + 'A');
            encrypted += enc;
        }
        else if (c >= 'a' && c <= 'z') {
            // shifting lowercase letter
            char enc = (char)(((c - 'a') + shift) % 26 + 'a');
            encrypted += enc;
        }
        else {
            // spaces and symbols stay same
            encrypted += c;
        }
    }

    cout << "Encrypted message: " << encrypted << endl;

    // decrypting the message
    for (int i = 0; i < encrypted.length(); i++) {
        char c = encrypted[i];

        if (c >= 'A' && c <= 'Z') {
            char dec = (char)(((c - 'A') - shift + 26) % 26 + 'A');
            decrypted += dec;
        }
        else if (c >= 'a' && c <= 'z') {
            char dec = (char)(((c - 'a') - shift + 26) % 26 + 'a');
            decrypted += dec;
        }
        else {
            decrypted += c;
        }
    }

    cout << "Decrypted message: " << decrypted << endl;

    return 0;
}