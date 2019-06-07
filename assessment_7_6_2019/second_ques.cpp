#include<iostream>

using namespace std ;

string merge_remaining_str(string str, int iterator) {
    int len = str.size() ;
    string merge = "" ;
    while(iterator < len) {
        merge+=str[iterator] ;
        iterator++ ;
    }
    return merge ;
}

string interleaving_of_string(string str1 , string str2) {
    int len1 = str1.size() , len2 = str2.size() ;
    int iterator1 = 0 , iterator2 = 0 ;
    string interleaved_str ;

    while(iterator1 < len1 && iterator2 < len2) {
        interleaved_str += str1[iterator1] ;
        interleaved_str += str2[iterator2] ;
        iterator1++ ;
        iterator2++ ;
    }

    interleaved_str += merge_remaining_str(str1 , iterator1) ;
    interleaved_str += merge_remaining_str(str2, iterator2) ;

    return interleaved_str ;
}

int main() {

    string str1 , str2 ;
    cin >> str1 >> str2 ;

    string interleaved_str = interleaving_of_string(str1 , str2) ;
    cout << interleaved_str << "\n" ;
    return 0 ;
}


