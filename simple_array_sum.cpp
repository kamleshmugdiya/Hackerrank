#include <iostream>

using namespace std;


int main(){
    int n,i=0,total=0;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
        {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
        {
        total+=arr[i];
    }
    cout<<total;
    return 0;
}
