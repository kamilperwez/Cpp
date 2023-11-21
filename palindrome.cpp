// Check whether a given number is a palindrome or not
#include<iostream>
using namespace std;
int main(){
    int n,num,rev=0;
    cout<<"Enter a positive number ";
    cin>>num;
    n=num;
    while (n !=0 ){
        rev=rev*10+(n%10);
        n=n/10;
    }
    if(rev==num){
        cout<<"Palindrome Number";
    }
    else{
        cout<<"Not a Palindrome";
    }
    return 0;
}