#include<bits/stdc++.h>
using namespace std;
//Multiset use to store duplicate order in accending order
void multisetEx(){
multiset <int> ms;
ms.insert(0);
ms.insert(1);
ms.insert(1);
ms.insert(180);
ms.insert(50);
ms.insert(50);
ms.insert(0);
ms.insert(1);

for(auto i:ms){cout<<i<<" ";}
cout<<endl;


//for finding element
auto i1 = ms.find(50);//print first number 50 present its index
cout<<*i1<<endl;

//erase-use to delete all the duplicate present
ms.erase(1);
for(auto i:ms){cout<<i<<" ";}
cout<<endl;


//to delete only one elment: 50
ms.erase(ms.find(50));
for(auto i:ms){cout<<i<<" ";}
cout<<endl; 


//total count of element present in multiset :
cout<<"total 0 present in multiset is:"<<ms.count(0);}
int main(){
    multisetEx();
    return 0;
}