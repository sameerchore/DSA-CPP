#include<bits/stdc++.h>
using namespace std;


//Power function
int power(int a,int b){
   return pow(a,b);
}

//pairing stl class of same data type
void pairing(){
pair<int,int> pr = make_pair(1,2);
cout<<pr.first<<" "<<pr.second<<endl;
}

//pair class of diff data type
void pairing1(){
pair<int,char> pr1 = make_pair(1,'s');
cout<<pr1.first<<" "<<pr1.second<<endl;
}

void pairing2(){
pair<pair<int,char>,int> pr2 = {{2,'g'},7};
cout<<pr2.first.second<<" "<<pr2.second<<endl;
}


int main(){
    pairing();
    pairing1();
    pairing2();
   cout<< power(2,5);
    return 0;
}