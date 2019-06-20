#include <iostream>
using namespace std;

int count_digit(int num) {
	int count = 0 ;
	while(num > 0) {
		count++ ;
		num /= 10 ;
	}
	return count ;
}

void convert_to_array(int num  ,int count , int arr[] ) {
	count-- ;
	while(num > 0) {
		arr[count--] = num%10 ;
		num = num/10 ;
	}
}

int left_split(int arr[] , int count) {
	int left_half = arr[0] ;
    for(int i = 1 ; i < count/2 ; i++) {
        left_half = left_half*10 + arr[i] ;
    }
    return left_half ;
}

int right_split(int arr[] , int count) {
    int right_half ;
    int mid = (count%2) ? (count/2)+1 : count/2 ;

    right_half = arr[mid] ;
    for(int i = mid+1 ; i < count ; i++) {
        right_half = right_half*10 + arr[i] ;
    }
    return right_half ;
}

int combine_number(int left_half ,int count) {
    int palindrome = left_half ;
    if(count%2 == 1) 
        left_half/=10 ;

    while(left_half > 0) {
        palindrome = palindrome*10 + left_half%10 ;
        left_half/=10 ;
    }
    return palindrome ;
}

int next_palindrome(int num) {
	int next_count = 0 ,count = 0 ,flag = 0 , left_half , right_half ;
	
	count = count_digit(num) ;
    if(count == 1 && num < 9)
        return num+1 ;

	next_count = count_digit(num+1) ;
    if(next_count > count) {
        return (num+2) ;
    }
    
    int arr[count] ;
	
    convert_to_array(num , count, arr) ;
    
    left_half = left_split(arr , count) ;
    right_half = right_split(arr , count) ;


    if(right_half == left_half && count%2 == 1) {
        if(arr[count/2] != 9)
           arr[count/2] = arr[count/2]+1 ;
        else {  
            left_half++ ;
            flag = 1 ;
        }
   }
   
    else if(right_half >= left_half) {
       left_half++ ;
       flag = 1 ;
   }

   if(count%2 == 1) { 
      left_half = left_half*10 ;
      if(flag == 0)
          left_half = left_half + arr[count/2] ;
   }
   return combine_number(left_half , count) ;
}

int main() {
	
	int num ;
	cin >> num ;
    cout << next_palindrome(num) << "\n"  ;
	return 0;
}
