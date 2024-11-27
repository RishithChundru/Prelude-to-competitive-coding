#include <bits/stdc++.h>
using namespace std;

vector<string> frequentWords(string str, int k) {
    unordered_map<string, int> freq;

    string word = "";
    for (char c : str) {
        if (c == ' ') {
            if (!word.empty()) {
                freq[word]++;
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) freq[word]++;

    // Use a multimap to sort by frequency and lexicographically
    multimap<int, string, greater<int>> sortedFreq; // Key is frequency, value is word
    for (auto &entry : freq) {
        sortedFreq.insert({entry.second, entry.first});
    }

    vector<string> result;
    int count = 0;
    for (auto &entry : sortedFreq) {
        if (count < k) {
            result.push_back(entry.second);
            count++;
        } else {
            break;
        }
    }

    return result;
}

int main() {
    string str = "to jog is the best way to jog and jog to be fit";
    int k = 2;
    vector<string> result = frequentWords(str, k);

    cout << "The " << k << " most frequent words are: " << endl;
    for (const string &word : result) {
        cout << word << endl;
    }
    return 0;
}
