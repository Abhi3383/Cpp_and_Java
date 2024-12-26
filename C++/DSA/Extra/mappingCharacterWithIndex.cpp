#include <bits/stdc++.h>
using namespace std;

int main() {
    int freq[26] = {0}; // Initialize the array with zeros
    string str = "ThirUvananthapuram";
    
    for (int i = 0; i < str.length(); i++) {
        char ch = str.at(i);
        if (isalpha(ch)) { // Check if the character is an alphabet
            freq[tolower(ch) - 'a']++; // Convert to lowercase and count
        }
    }

    for (int i = 0; i < 26; i++) { // Loop through the entire alphabet (26 letters)
        cout << static_cast<char>('a' + i) << ": " << freq[i] << endl;
    }

    return 0;
}
