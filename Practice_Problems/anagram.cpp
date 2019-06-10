#include<iostream>
#include<algorithm>

using namespace std ;

bool is_anagram(string word1 , string word2) {
    sort(word1.begin() , word1.end()) ;
    sort(word2.begin() , word2.end()) ;

    return word1 == word2 ;
}

int main(int argc , char *argv[]) {

    string word1 , word2 ;
    word1 = argv[1] ;
    word2 = argv[2] ;

    if(is_anagram(word1 , word2))
        cout << "Words are anagram\n" ;
    else
        cout << "Words are not anagram\n" ;
}