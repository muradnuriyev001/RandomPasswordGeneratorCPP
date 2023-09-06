#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

// Function to generate a random password
string generatePassword(int length) {
    const string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+";
    const int charsetSize = charset.size();
    string password;

    srand(static_cast<unsigned int>(time(nullptr)));

    for (int i = 0; i < length; ++i) {
        int randomIndex = rand() % charsetSize;
        password += charset[randomIndex];
    }

    return password;
}

int main() {
    int passwordLength;

    cout << "Enter the desired password length: ";
    cin >> passwordLength;

    if (passwordLength <= 0) {
        cout << "Invalid password length. Please enter a positive integer." << endl;
        return 1;
    }

    string password = generatePassword(passwordLength);

    cout << "Generated Password: " << password << endl;

    return 0;
}
