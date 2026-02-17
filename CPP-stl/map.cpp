#include<bits/stdc++.h>
using namespace std;
//map store unique key in sorted order
//Map use to store value as per key and store in accending order of key
  void exMap(){
    map<int,string> mapp;

    mapp[1]="sam";
    mapp.insert({4,"sam3"});
    mapp[2]="sam1";
    mapp[2]="samekeyLastPrint"; //same key but last will print
    mapp[3]="sam2";

    //map is in form of pair so print in pair
    for(auto i: mapp){ cout<<i.first<<"->"<<i.second<<endl; }


    //find the value name
    auto i1=mapp.find(4);
    if(i1==mapp.end()){
    cout<<"not found";
    }
    else{    cout<<(*i1).first<<"->"<<(*i1).second<<endl;}

     


  }
int main(){
    exMap();  

    return 0;
}