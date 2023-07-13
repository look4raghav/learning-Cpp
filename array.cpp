/*
#include<iostream>
using namespace std;
*/

void reverseArray(int arr[], int N){
    
    for(int i=N-1; i>=0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << '\n';
        // Your code goes here
    
}


/*
int main()  {
    int N;
    cin>>N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
    reverseArray(arr, N);
    for(int i = 0; i < N; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
*/
