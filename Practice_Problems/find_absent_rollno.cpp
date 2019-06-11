#include<iostream>
#include<algorithm>

using namespace std ;

int find_absent_rollnum(int NofStudent , int RollNums[]) {
    sort(RollNums , RollNums+NofStudent) ;
    int AbsentRoll = 1 ;
    
    if(RollNums[0] != 1)
        return 1;
    if(RollNums[NofStudent-2] != NofStudent)
        return NofStudent;

    for (int i = 0; i < NofStudent - 2; i++){
        if(RollNums[i+1] - RollNums[i] != 1) {
            AbsentRoll = RollNums[i]+1 ;
            break;
        }
    }
    return AbsentRoll ;
}

int main() {
    int NofStudent ;
    cin >> NofStudent ;

    int RollNums[NofStudent] ;
    for(int i = 0 ; i < NofStudent-1 ; i++) {
        cin >> RollNums[i] ;
    }

    int absent_rollnum = find_absent_rollnum(NofStudent , RollNums) ;
    cout << absent_rollnum << "\n" ;
}
