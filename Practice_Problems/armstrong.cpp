#include<iostream>
#include<vector>
#include<math.h>

using namespace std ;

int power_sum(int num , int count) {
    int sum = 0 ;
    while(num > 0) {
        sum+=pow(num%10 , count) ;
        num/=10 ;
    }
    return sum ;
}

int count_digits(int num) {
    int count = 0 ;
    while(num > 0) {
        count++ ;
        num/=10 ;
    }
    return count ;
}

bool is_armstrong(int num) {
    int count = 0 ;
    count = count_digits(num) ;
    return power_sum(num , count) == num ;
}


vector<int> generate_armstrong(int num1 ,int  num2) {
    vector<int>armstrong ;
    for(int i = num1+1 ; i <= num2 ; i++) {
        if(is_armstrong(i))
            armstrong.push_back(i) ;
    }
    return armstrong ;
}


int main() {

    int num1 , num2 ;
    cin >> num1 >> num2 ;

    vector<int> armstrong = generate_armstrong(num1 , num2) ;

    for(int i = 0 ; i < armstrong.size() ;i++)
        cout << armstrong[i] ;

    cout << "\n" ;
}
