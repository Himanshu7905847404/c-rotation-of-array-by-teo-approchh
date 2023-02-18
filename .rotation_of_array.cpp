#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    cout<<"\n\tRotate the array by k times\n\n \tThere are two approach:\n\n\t1- By normal array \n\n\t2- by using vector\n\n";
    cout<<"\n\t Enter your choice of approach you want to rotate the array\n";
    int c;
    cin>>c;
    if (c == 1){
    int n;
    cout<<"\tenter the size of array\n";
    cin>>n;
    int arr[n];
    
    cout<<"\n\tEnter the elements\n";
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cout<<"\n\tEntered  array is:\n";
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n\tEnter how many times to rotate the array\n";
    int k;
    cin>>k;
    k=k%n;
    int newarr[n]{0};
    int j=0;
    for(int i = n - k ; i < n ; i++){
        newarr[j++] = arr[i];
    }
    for(int i = 0 ; i <= k ; i++){
        newarr[j++] = arr[i];
    }
    cout<<"\n\tYour rotated array is:\n";
     for(int i = 0 ; i < n ; i++){
        cout<<newarr[i]<<" ";
    }
        
    }
    else if (c == 2){
        int n;
        cout<<"\tenter the size of array\n";
        cin>>n;
        vector<int>v(n,0);
        cout<<"\n\tEnter the elements\n";
        for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }
     cout<<"\n\tEnter how many times to rotate the array\n";
    int k;
    cin>>k;
    k=k%n;
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
     cout<<"\n\tYour rotated array is:\n";
     for(int a : v){
         cout<<a<<" ";
     }
    }
    else{
        cout<<"\n\tSorry,You pick wrong choice\n";
    }
    return 0;
}
