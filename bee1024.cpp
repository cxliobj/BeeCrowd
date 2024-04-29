#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

string firstStep (string message, int messageLength)
{
    for (int i = 0; i < messageLength; i++)
    {
        if ((message[i] >= 65 && message[i] <= 90) || (message[i] >= 97 && message[i] <= 122))
        {
            message[i] += 3;
        }
    }
    return message;
}

string secondStep (string word, int length)
{
    string aux(length, ' ');
    int j=0;
    for (int i = length - 1; i >= 0; i--)
    {
        aux[j] = word[i];
        j++;
    }
    return aux;
}

string thirdStep (string message, int messageLength)
{
    int halfLength = messageLength / 2;
    for (int i = halfLength; i < messageLength; i++)
    {
        if (message[i] != ' ')
        {
            message[i] -= 1;
        }
    }
    return message;
}

int main()
{
    int numStrings;
    scanf("%d", numStrings);
    getchar();

    string message;
    for (int i = 0; i < numStrings; i++)
    {
        getline(cin, message);
        int messageLength = message.size();

        message = firstStep(message, messageLength);

        message = secondStep(message, messageLength);

        message = thirdStep(message, messageLength);

        cout << message << "\n";
    }

    return 0;
}