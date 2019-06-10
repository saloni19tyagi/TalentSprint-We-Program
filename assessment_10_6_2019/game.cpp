#include<iostream>
using namespace std ;

int find_winner(char first_player , char second_player) {
	int score = -1 ;
	if(first_player == second_player)
	    return 0 ;

	if(first_player == 'R' && second_player == 'S')
			score = 1 ;

	else if(first_player == 'P' && second_player == 'R')
			score = 1 ;

    else if(second_player == 'P')
			score = 1 ;

    return score ;
}
 
void MatchOutcome(string matchs) {

	int no_of_times = matchs.size() ;
    int win = 0 , draw = 0 , loss = 0, winner = 0 ;

	for(int i = 0 ; i < no_of_times ; i+=2) {
		if(matchs[i] == ',' || matchs[i] == ' ')
		  continue ;
		
		winner = find_winner(matchs[i] , matchs[i+1]) ;

        if(winner == 1)
			win++ ;
		else if(winner == -1)
			loss++ ;
		else
			draw++ ;
	}

	cout << "Wins :" << win << " Loses :"  << loss << " Draw :" << draw << "\n" ;
}

int main() {
    string matchs ;
    getline(cin,matchs)  ;

    MatchOutcome(matchs) ;

}