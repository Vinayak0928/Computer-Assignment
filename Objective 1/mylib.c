
#include <stdio.h>
#include <math.h>
#include "mylib.h"
// Function to reverse digits of a number
int reverseDigits(int num) {
 int rev = 0;
    while (num> 0) {
        rev = rev * 10 + (num % 10);
        num = num/10;
    }
    return rev;
}
// Function to check if number is Armstrong
int isArmstrong(int num) {
{
    long a,b,c,len=0,check=0;
    a=num;
    c=num;
    while(a>0)
    {   a=a/10;
        len++; }
    for(int i=0;i<len;i++)
    {   b=c%10;
        check=check+round(pow(b,len));
        c=c/10; 
    }
    return(check==num);
}
}
// Function to check if number is Adams Number
int isAdams(int num) {
 int sqnum, revnum, sqrev;
    sqnum = num * num;           
    revnum = reverseDigits(num);      
    sqrev = revnum * revnum;   
    if (sqnum == reverseDigits(sqrev)&&num==reverseDigits(revnum)){
        return 1;}
    else{
        return 0;}
}
// Function to check if number is prime
int isPrime(int num) {
    int check =0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            check++;
        }
    }
    if(check==2)
    {
        return 1;
    }
    else{
        return 0;
    }
}

// Function to check if number is prime and palindrome
int isPrimePalindrome(int num) 
{
    int revnum;
    if(isPrime(num)){
    revnum=reverseDigits(num);
    if (num == reverseDigits(revnum)){
        return 1;}
    else{
        return 0;}
    }
    else{
        return 0;
    }
}