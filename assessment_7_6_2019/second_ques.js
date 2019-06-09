const rl = require("readline")
const obj = {
    input : process.stdin ,
    output : process.stdout
} ;
const input = rl.createInterface(obj) ;
input.question(" " ,function(str){
    var str1 = str ;
    input.question(" ", function(str) {
        var str2= str ;
        let len1 = str1.length;
        let len2 = str.length ;
        let index1 = 0 , index2 = 0 ;
        str = "" ;
        while(index1 < len1 && index2 < len2) {
            str+=(str1[index1++] + str2[index2++]) ;
        }
        str+=(str1.slice(index1 ,len1)) ;
        str+=(str2.slice(index2 , len2)) ;
        console.log(str) ;
    })
});
