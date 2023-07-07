// print odd numbers

#include<iostream>

using namespace std;

int main()  {
    int N;
    cin>>N;
    // YOUR CODE GOES HERE
    int i=0;
    while(i<N)
    {
        i++;
        if(i%2 == 0)
        {
        continue;
        }
        cout << i << endl;
    }
    return 0;
}
