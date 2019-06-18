#include<iostream>
#include <string.h>

using namespace std;

int CalculateImpurityIndex(string str) {
    int freq[30] = {0};
    int len = str.size();
    float impurity_index = 0;

    for (int i = 0; i < len; i++) 
        freq[str[i] - 'A']++;

    for (int i = 0; i < 26 ; i++) {
        if(freq[i] > 3) 
            impurity_index += 3;
        else if(freq[i] > 2)    
            impurity_index += 1;
        else if(freq[i] == 2){
            if(i == 1 || i == 5 || i == 9 || i == 15 || i == 21)
                impurity_index += (0.5);
            else
                impurity_index += (0.7);
        }
    }
    return impurity_index;
}

int main(){

    string str;
    str = "Pack my box with five dozen liquor jugs";
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    
    int impurity_index = CalculateImpurityIndex(str);
    cout << impurity_index << "\n";
}