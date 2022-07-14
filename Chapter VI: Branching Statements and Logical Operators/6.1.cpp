//
// Created by 孙啟航 on 2022/7/14.
//
#include <iostream>
#include <cctype>
using namespace std;

int main(){
    char c;
    cin.get(c);
    while(c != '@'){
        if(!isdigit(c)){
            if(islower(c)){
                c=toupper(c);
            }else if(isupper(c)){
                c=tolower(c);
            }else{
                ;
            }
        }
        cout<<c;
        cin.get(c);
    }
    cout<<endl;
    return 0;
}