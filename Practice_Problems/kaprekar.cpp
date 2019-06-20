#include<iostream>
#include<vector>
#include<math.h>
#define power 2 

using namespace std ;

int find_power(int num1) {
    return pow(num1 , power) ;
}

bool is_valid(int num) {
    return num != 0 ;
}

bool is_kaprekar(int num , int num1 , int num2) {
    int pow1 , pow2  ;
    pow1 = find_power(num1) ;
    pow2 = find_power(num2) ;

    return (pow1+pow2) == num ;
}

int left_split(int num , int digits) {
    int count = 0 , left_part = 0 ;
    while(count != digits) {
        left_part = left_part*10 + num%10 ;
        num/=10 ;
    }
    return left_part ;
}

int right_split(int num , int digits) {
    int right_part = 0 , count = 0 ;
    while(num > 0) {
        if(count > digits) 
            right_part = right_part*10 + num%10 ;
        num/=10;
        count++;
    }
    return right_part ;
}

int split_num(int num , int digits) {
    int left_part = 0 ,right_part = 0;
    
    left_part = left_split(num , digits) ;
    right_part = right_split(num , digits) ;

    /*(if(!is_valid(left_part) || !is_valid(right_part))
        return 0 ;*/

    cout << left_part << " " << right_part << "\n" ;
    return is_kaprekar(num , left_part , right_part) ;
}

/*vector<int> generate_kaprekar(int start ,int end) {
    vector<int> kaprekar_num ;
    
    for(int i = start ; i <= end ; i++) {
        for(int digits = 1 ; digits <= 3 ; digits++) {
            if(split_num(i , digits)) {
                kaprekar_num.push_back(i) ;
                break ;
            }
        }
    }
    return kaprekar_num ;
}*/

int main() {
   // int start = 1000 , end = 1002 ;
    //vector<int> kaprekar_num = generate_kaprekar(start , end) ;

    //for(int i = 0 ; i < kaprekar_num.size() ; i++) {
     //   cout << kaprekar_num[i] << " " ;
    //}
   int num;
   cin >> num;
   split_num(num, 2);
   cout << "\n";
}
