#include<bits/stdc++.h>

using namespace std ;

bool is_pangram(string str) {
    int freq[30] = {0};
    int len = str.size();
    
    for (int i = 0; i < len;i++) {
        freq[str[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++) {
        if(freq[i] == 0)
            return false;
    }

        return true;
}

int main() {

    string str;
    str = "Pack my box with five dozen liquor jugs";
    transform(str.begin(), str.end(), str.begin(), ::toupper);

    bool check = is_pangram(str);
    if(check) {
        cout << "String is pangram\n";
    }
    else {
        cout << "String is not pangram\n";
    }
    return 0;
}
