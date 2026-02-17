#include<bits/stdc++.h>
using namespace std ;


void revArr(){
int arr[] ={1,2,4,5,8,58};
reverse(arr,arr+6);
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}

}



int main(){
revArr();
return 0;
}