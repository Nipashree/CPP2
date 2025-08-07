
#include <iostream>
using namespace std;
    int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    
    int arr[n];
    cout<<"Enter elements:";
    int i;
    for (i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(i=0;i<n;i++){
        sum+=arr[i];
    
    cout<<"Sum:"<<sum;
}


    return 0;
}
