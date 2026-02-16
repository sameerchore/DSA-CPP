#include<bits/stdc++.h>
using namespace std;

void listEx(){
    list<int> ls ={5,6,7};
    ls.push_front(4);
    ls.push_back(8);
    for(int x: ls)cout<<x<<" ";
    cout<<endl;
}
int main(){
    listEx();
    return 0;
}