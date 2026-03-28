#include<iostream>
#include<string>
using namespace std;

int main ()
{
    char letter;
    bool c = false;
    string word;
    cout << "enter the letter:";
    cin >> letter;
    cin.ignore(); 
    cout << "enter the word:";
    getline(cin, word);
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == letter)
        {
            c = true;
            break;
        }
    }

    if (c == true)
    {
        cout << "yes the letter " << letter << " is found in the word " << word;
    }
    else
    {
        cout << "no";
    }
}