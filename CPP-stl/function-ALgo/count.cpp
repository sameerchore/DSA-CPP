#include<bits/stdc++.h>
using namespace std ;


void ExCount(){
  //count use to count how much element present in arr
  int arr[5] ={4,4,2,56,4};
  int target=4;
  cout<<"How many 4 present in arr:"<<count(arr,arr+5,target);

}



int main(){
ExCount();
return 0;
}