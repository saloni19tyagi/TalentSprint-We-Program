#include<iostream>
#include<vector>
#include<map>
#include<math.h>

using namespace std ;

map<int,pair<int, int> > calculate_satisfied_triples() {
    
    map<int, pair<int, int> > first_ten_triples ;
    int decimal_num = 2, first_term, diff ;
    
    while(first_ten_triples.size() != 10) {
        
        int decimal_sqr = decimal_num * decimal_num ;
        
        for(int i = 1 ; i < sqrt(decimal_sqr) ; i++) {
            first_term = pow(i , 3) ;
            diff = (decimal_sqr - first_term) ;
            
            if(cbrt(diff) == pow(diff, 3)) {
                first_ten_triples[decimal_num] = make_pair(first_term,cbrt(diff)) ;
                cout << decimal_num << first_term << cbrt(diff) << "\n" ;
            }
        }
        decimal_num++ ;
    
    }
    return first_ten_triples ;
}

int main() {

    map<int , pair<int, int> > first_ten_triples = calculate_satisfied_triples() ;
    return 0 ;
}

