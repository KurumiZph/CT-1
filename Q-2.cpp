#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, v, x1, x2;
    cout<<"Enter Array Length: ";
    cin>>l;
    int arr[l] = {};
    
    //taking input from user
    for(int i=0; i<l; i++){
        cin>>v;
        arr[i] = v;
    }
    
    //sorting the array
    sort(arr, arr+l);
    v = arr[l-1]-arr[0];
    
    //checking for repeated element if any
    for(int i=0; i<l; i++){
        x1 = arr[i];
        x2 = arr[i+1];
        if(x1 == x2){
            break;
        }
    }
    
    //printing the result
    if(l == v+1){
        cout<<"The array contains consecutive integers from "<<arr[0]<<"to "<<arr[l-1]<<endl;
    }else{
        cout<<"The array does not constain consecutive integers as element "<<x1<<" is repeated";
    }
    
    return 0;
}