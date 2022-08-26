#include <iostream>
#include <unordered_set>
using namespace std;

//function for checking repeated elemtnt
int whatindex(int arr[], int a)
{
    int index = a;
    unordered_set<int> set;
    for (int i = a - 1; i >= 0; i--)
    {
        if (set.find(arr[i]) != set.end()) {index = i;
        }else{set.insert(arr[i]);}
    }
    if (index == a) {
        return -1;
    }
    return index;
}
 
int main()
{
    int l, v;
    cout<<"Enter Array Length: ";
    cin>>l;
    int arr[l] = {};
    
    //taking input from user
    for(int i=0; i<l; i++){
        cin>>v;
        arr[i] = v;
    }
    
    //determining size fo array
    int a = sizeof(arr) / sizeof(arr[0]);
    
    //checking for repeated elemnt if any
    int index = whatindex(arr, a);
    
    //printing the required result
    if (index != a) {
        if(index != -1){
            cout << "The minimum index of the repeating element is " << index;
        }else{
            cout<< "Invalid Input";
        }
    }
 
    return 0;
}
