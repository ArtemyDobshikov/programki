#include <iostream>
#include <string>

using namespace std;

string decoder(string word)
{
    for (int i = 0; i < word.size(); i++) {
        char letter = word[i];
        if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
            word[i] += 2;
    }
    return word;
}
int main()
{
    string word, deword;
    cout << "Enter a sentence in English: ";
    getline(cin, word);
    deword = decoder(word);
    cout << "Decoded text: " << deword << endl;
}
