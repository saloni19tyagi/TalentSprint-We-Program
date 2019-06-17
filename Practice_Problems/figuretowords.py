one = [ "", "one ", "two ", "three ", "four ",
        "five ", "six ", "seven ", "eight ","nine ", "ten ", "eleven ", "twelve ",
        "thirteen ", "fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ",
        "nineteen "];

ten = [ "", "", "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ",
        "ninety "];

def numToWords(n, s):

    word = "";

    if (n > 19):
        word += ten[n // 10] + one[n % 10];
    else:
        word += one[n];

    if (n):
        word += s;

    return word ;

def convertToWords(n):

    result = "";
    result += numToWords((n // 10000000),"crore ");
    result += numToWords(((n // 100000) % 100),"lakh ");
    result += numToWords(((n // 1000) % 100),"thousand ");
    result += numToWords(((n // 100) % 10),"hundred ");

    if (n > 100 and n % 100):
        result += "and ";
    result += numToWords((n % 100), "");

    return result ;

import sys
num = int(sys.argv[1])
print(convertToWords(num));
