/*
#include<iostream>
using namespace std;
*/

void solve(int *A, int *B){
    int temp = *A;
    *A = *A + *B;
    *B = temp - *B;
    
    if(*B<0)
    {
        *B = -(*B);
    }
}



/*
int main()  {
    int A, B;
    int *pA = &A, *pB = &B;
    cin>>A>>B;
    solve(pA, pB);
    cout<<A<<endl;
    cout<<B<<endl;
    return 0;
}
*/
