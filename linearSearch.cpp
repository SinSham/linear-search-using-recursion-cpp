#include <iostream>

using namespace std;

bool linearSearch(int arr[], int n, int key){
    if(n==0){
        return false;
    }
    
    if(arr[0] == key){
        return true;
    }
    
    bool answer = linearSearch(arr+1, n-1, key);
    
    return answer;
    
}

int main()
{
    int arr[] = {2, 5, 1, 9, 6, 14};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    bool found = linearSearch(arr, n, key);
    
    if(found){
        cout<<"Element is present"<<endl;
    }
    
    else{
        cout<<"Not is not present"<<endl;
    }
    
    return 0;
}
