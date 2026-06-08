#include <iostream>
#include <string>
using namespace std;

int main()
{
    string password;
    cout << "Enter your password: ";
    cin >> password;

    int len = password.length();
    int score = 0;
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSymbol = 0;

    // check length
    if (len >= 8)
    {
        score++;
    }

    // loop to check characters
    for (int i = 0; i < len; i++)
    {
        char c = password[i];

        if (c >= 'A' && c <= 'Z')
        {
            hasUpper = 1;
        }
        if (c >= 'a' && c <= 'z')
        {
            hasLower = 1;
        }
        if (c >= '0' && c <= '9')
        {
            hasDigit = 1;
        }
        if (c == '!' || c == '@' || c == '#' || c == '$' || c == '%' || c == '&' || c == '*')
        {
            hasSymbol = 1;
        }
    }

    if (hasUpper == 1)
        score++;
    if (hasLower == 1)
        score++;
    if (hasDigit == 1)
        score++;
    if (hasSymbol == 1)
        score++;

    // print result
    cout << "\nPassword Strength: ";

    if (score <= 2)
    {
        cout << "Weak" << endl;
    }
    else if (score == 3 || score == 4)
    {
        cout << "Medium" << endl;
    }
    else
    {
        cout << "Strong" << endl;
    }

    return 0;
}