#include<iostream>

using namespace std ;

string EMPTY = "" ;
string ones[] = {EMPTY, "One ", "Two ", "Three ", "Four ", "Five ","Six ", "Seven ", "Eight ", "Nine ",
               "Ten ", "Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ","Sixteen ", "Seventeen ",
                "Eighteen ", "Nineteen "};
string tens[] = {EMPTY, EMPTY, "Twenty ", "Thirty ", "Forty ", "Fifty ","Sixty ", "Seventy ", "Eighty ", 
                "Ninety "};

string convert_to_word(int num, string suffix){
    string word = "";
    if (num > 19)
        word += tens[num / 10] + ones[num % 10];
    else
        word += ones[num];
    if (num)
        word += suffix;

    return word ;
}

string number_to_word(int num) {
    string result;
    
    result += convert_to_word((num / 10000000), "crore ");
    result += convert_to_word(((num / 100000) % 100), "lakh ");
    result += convert_to_word(((num / 1000) % 100), "thousand ");
    result += convert_to_word(((num / 100) % 10), "hundred ");

    if (num > 100 && num % 100)
        result += "and ";

    result += convert_to_word((num % 100), "");
    return result;
}
int main()
{
    int num;
    cin >> num;
    cout << number_to_word(num) << "\n";

}