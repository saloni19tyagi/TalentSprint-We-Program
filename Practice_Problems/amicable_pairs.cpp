#include<iostream>
#include<vector>

using namespace std ;

int factor_sum(int num) {
    int sum= 1 , i ;
    for( i = 2; i*i < num; i++) {
        if(num%i == 0)
            sum+=(i+(num/i)) ;
    }
    return sum;
}

vector<pair<int, int> > amicable_pairs(int start , int end) {
    vector<pair<int, int> >amicable; 
    int sum = 0 ;
    for(int i = start ; i <= end ; i++) {
        sum = factor_sum(i) ;
        if (sum < i){
            if (factor_sum(sum) == i)
                amicable.push_back(make_pair(i, sum));
         }
    } 
    return amicable ;
}

int main() {

    int start, end;
    cin >> start >> end;
    vector<pair<int, int> > amicable = amicable_pairs(start , end);

    for(int i=0 ; i < amicable.size() ; i++) {
        cout << amicable[i].first << " " << amicable[i].second << "\n"  ;
    }
    return 0 ;

}
