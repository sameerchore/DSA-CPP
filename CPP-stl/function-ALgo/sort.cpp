#include<bits/stdc++.h>
using namespace std ;

void SortArray(){
   int arr[8] = {11,20,57,6,8,944,55,11};
    //want specific position index sort
    sort(arr+4,arr+7);
    for(int i=0;i<8;i++){cout<<arr[i]<<" ";}cout<<endl;

    //all sort of array
    sort(arr,arr+8);
    for(int j=0;j<8;j++){cout<<arr[j]<<" ";}cout<<endl;
}

void SortVector(){
     vector<int> v={8,465,7,58,34,678};
     sort(v.begin(),v.end());
cout<<"Sorted vector is:";
     for(auto i: v){
        cout<<i<<" ";
     }
}



int main(){
    SortArray();
    SortVector();

 

    return 0;
}