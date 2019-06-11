#include<iostream>
#include<vector>

using namespace std ;

bool is_power(int num) {
    return (num&(num-1)) ;
}

int next_num(int num) {
    return (num%2) ? num*3 +1 : num/2 ;
}

vector<int>generate_collatz(int num) {
    vector<int>collatz_seq ;
    collatz_seq.push_back(num) ;

    while(num != 1) {
        num = next_num(num) ;
        collatz_seq.push_back(num) ;
    }
    return collatz_seq ;
}

int main() {

    int num , max_power = 0 ;
    cin >> num ;

    vector<int> collatz_seq = generate_collatz(num) ;

    for(int i =0 ; i < collatz_seq.size() ; i++) {
        if(!is_power(collatz_seq[i])) {
            max_power = max(max_power , collatz_seq[i]) ;
        }
    }
    cout << max_power << "\n" ;
}
