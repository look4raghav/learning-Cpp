/*
#include<iostream>
#include<sstream>
using namespace std;
*/

int main()  {
    string A;
    cin>>A;
    // YOUR CODE GOES HERE
    stringstream ss(A);
    char ch;
    int a,b,c;
    ss>>a>>ch>>b>>ch>>c;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}






/*
#include<iostream>
#include<sstream>
using namespace std;
*/

int main()  {
    string A;
    cin>>A;
    // YOUR CODE GOES HERE
    for(int i=0; i<A.size();i++)
    {
        if(A[i]!=',')
        cout<<A[i];
        else
        {
            cout<<"\n";
        }
    }
    return 0;
}



















