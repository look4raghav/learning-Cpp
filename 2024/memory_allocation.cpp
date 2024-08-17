#include <iostream>
using namespace std;

int main()
{
    cout << "\nHELLO RAGHAV!" << endl;
    int num = 5;
    float *ptr;
    
    ptr = new float[num];
    
    for (int i =0; i<num; i++)
    {
        *(ptr + i) = i;
    }
    
    cout << "\nDISPLAY" << endl;
    for (int j=0; j<num; j++)
    {
        cout << "Point" << j + 1 << ":" <<*(ptr + j) << endl;
    }
    
    delete[] ptr;
    
    return 0;
}
