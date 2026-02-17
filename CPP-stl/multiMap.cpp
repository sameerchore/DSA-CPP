#include<bits/stdc++.h>
using namespace std;
//It store duplicates key also in accending order 
 void exMultimap(){
    multimap<int,string> mm;
    mm.insert({1,"sam"});
    mm.insert({3,"samr"});
    mm.insert({1,"safm"});
    mm.insert({1,"safm3"});
    mm.insert({4,"sam"});
    mm.insert({5,"safrm"});
    mm.insert({5,"samde"});

    for(auto it :mm){
        cout<<it.first<<"->"<<it.second<<endl;}

        cout<<"Range of equal key is:"<<endl;
    //we can acess same key by mapping all same key
    auto i1 = mm.equal_range(1); //this give u pair of iteraotor 
    for(auto i=i1.first;i !=i1.second;i++){
        cout<<(*i).first<<"->"<<(*i).second<<endl;
    }
 }
int main(){
    exMultimap();
    return 0;
}