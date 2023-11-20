// Check whether a given date is valid or not
#include<iostream>
using namespace std ;
bool leap(int y){
    if ((y%4==0 && y%100!=0)||(y%400==0)){
        return true;
    }
    else{
        return false;
    }
}
bool validDate(int d,int m,int y){
    if (y < 0){
        return false;
    }
    if(m<1 || m >12){
        return false;
    }
    int daym=30;
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
        daym=31;
    }
    if (m==2){
        daym=leap(y)?29:28;
    }
    if (d <1 || d>daym){
        return false;
    }
    else{
        return true;
    }

}

int main(){
    int dt,mo,yr;
    cout<<"Enter the day,month,year separated by spaces " ;
    cin>>dt>>mo>>yr;
    if (validDate(dt,mo,yr)){
        cout<<"Valid Date";
    }
    else{
        cout<<"Invalid Date";
    }
    return 0;
}
