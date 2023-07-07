/*
#include<iostream>
#include<string>
using namespace std;
*/

int main()  {
    string A, B;
    cin>>A>>B;
    // YOUR CODE GOES HERE
    int l1 = A.size();
    int l2 = B.size();
    cout<<l1<<" "<<l2<<endl;
    string C = A + B;
    cout<<C<<endl;
    char tempa = A[0], tempb = B[0];
    A[0] = tempb;
    B[0] = tempa;
    cout<<A<<" "<<B;
    
    return 0;
}
