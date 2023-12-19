#include <iostream>
#include <vector>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    cin.ignore();

    for (int t = 0; t < testCases; t++) {
        int n;
        cin >> n;
        cin.ignore();

        string s;
        getline(cin, s);

        vector<int> mp(26);

        for (int i = 0; i < 26; i++) {
            mp[i] = i + 1;
        }

        int solved = 0;

        for (char j : s) {
            mp[j - 'A']--;

            if (mp[j - 'A'] == 0) {
                solved++;
            }
        }

        cout << solved << endl;
    }

    return 0;
}
