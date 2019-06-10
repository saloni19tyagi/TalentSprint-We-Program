#include<iostream>
#include<vector>

using namespace std ;

int factor_sum(int num) {
    int sum = 0 ;
    for(int i = 1 ; i <= num/2 ; i++) {
        if(num%i == 0)
            sum+=i ;
    }
    return sum ;
}

int next_element(int num) {
    return factor_sum(num) ;
}

vector<int> generate_aliquot(int num) {
    vector<int>aliquot_seq ;
    aliquot_seq.push_back(num) ;
    
    while(num != 1) {
        int next_num = next_element(num) ;
        if(next_num == num)
            return aliquot_seq ;
        num = next_num ;
        aliquot_seq.push_back(num) ;

    }
    
    aliquot_seq.push_back(0) ;
    return aliquot_seq ;
}

int main() {

    int num ;
    cin >> num ;
    vector<int>aliquot_seq = generate_aliquot(num) ;

    for(int i =0 ; i < aliquot_seq.size() ;i++) {
        cout << aliquot_seq[i] << " " ;
    }
    
    cout << "\n" ;
    return 0 ;
}
