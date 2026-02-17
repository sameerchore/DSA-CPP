#include<bits/stdc++.h>
using namespace std;
//it store unique but in unoered way
//use when time complexity required constant
void Exunorderedmap(){
    unordered_map<int,string> um;
    um[1] = "vrd";
    um[3] = "sfrd";
    um[5] = "sfrfd";
    um[3] = "sdwfrf";
    um.insert({4,"ferf"});

    for(auto it :um){
        cout<<it<<" ";
    }

}
int main(){
    Exunorderedmap();
    return 0;
}