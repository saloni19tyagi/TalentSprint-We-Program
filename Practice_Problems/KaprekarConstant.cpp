#include <iostream>

using namespace std;

int find_max_formed(int num, int freq[]){
    int max_num = 0, count = 0;
    for (int i = 9; i >= 0; i--){
        count = freq[i];
        while (count != 0){
            max_num = max_num * 10 + i;
            count--;
        }
    }
    return max_num;
}

int find_min_formed(int num, int freq[]){
    int min_num = 0;
    for (int i = 1; i <= 9; i++){
        while (freq[i] != 0){
            min_num = min_num * 10 + i;
            freq[i]--;
        }
    }
    return min_num;
}

int find_kaprekar(int num, int prev){
    prev = num;
    int freq[12] = {0};

    while (num > 0){
        freq[num % 10]++;
        num /= 10;
    }

    int max = find_max_formed(prev, freq);
    int min = find_min_formed(prev, freq);

    int diff = max - min;
    if (diff == prev)
        return diff;

    return find_kaprekar(diff, prev);
}

int kaprekar(int initial_num){
    int prev = 0;
    return find_kaprekar(initial_num, prev);
}

int main(){

    int initial_num = 324;
    int kaprekar_constant = kaprekar(initial_num);
    cout << kaprekar_constant << "\n";
}
