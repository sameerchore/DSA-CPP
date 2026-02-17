#include<bits/stdc++.h>
using namespace std;
// Unordered set use to store unique lement element but in random way
//Unordered use coz it has good time complexity of O(1)
void exUnorderedSet(){
    unordered_set<int> us;
    us.insert(58);
    us.insert(5);
    us.insert(80);
    us.insert(0);
    us.insert(107);
    us.insert(108);
    us.insert(15);

    for(auto i : us){
        cout<<i<<" ";
    }
    cout<<endl;

    auto i1=us.find(15);//O(1) it has !! thats reason we use underored
    cout<<*i1<<endl;
}
int main(){
    exUnorderedSet();
    return 0;
}