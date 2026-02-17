#include<bits/stdc++.h>
using namespace std ;


// printint all next possible combinationof the abc;
void ExnextPermuatation(){
string str = "abc";
do{cout<<str<<endl;}
while(next_permutation(str.begin(),str.end()));
// while(next_permutation(str.begin(),str.begin()+1)); we can permuatation only ab a part of string
cout<<"prev permutation is:"<<endl;
}



void ExprevPermuatation(){
// printint all prev possible combination of the cba;
string str = "cba";
do{cout<<str<<endl;}
while(prev_permutation(str.begin(),str.end()));
// while(prev_permutation(str.begin(),str.begin()+1)); we can permuatation only ab a part of string
}



int main(){
ExnextPermuatation();
ExprevPermuatation();
return 0;
}