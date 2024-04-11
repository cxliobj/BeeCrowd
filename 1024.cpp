#include <iostream>
#include <string>

using std::string;

string firstStep (string message, int messageLength)
{
    for (int i = 0; i < messageLength; i++)
    {
        if ((message[i] >= 65 && message[i] <= 90) ||
            (message[i] >= 97 && message[i] <= 122))
        {
            if (message[i] != ' ') 
            {
                message[i] += 3;
            } 
        }
    }
    return message;
}

string thirdStep (string message, int messageLength)
{
    for (int i = messageLength / 2; i < messageLength; i++)
    {
        if (message[i] != ' ') 
        {
            message[i] -= 1; 
        } 
    }
    return message;
}

string wordinverter (string word, int length)
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

int main()
{
    int numStrings;
    std::cin >> numStrings;
    getchar();

    string message;
    for (int i = 0; i < numStrings; i++)
    {
        std::getline(std::cin, message);
        int messageLength = message.size();
        message = firstStep(message, messageLength);
        message = wordinverter(message, messageLength);
        message = thirdStep(message, messageLength);
        std::cout << message << std::endl;
    }

    return 0;
}