#include<iostream>
#include<array>
using namespace std;

int main()
{
    int num[] = {1,2,3,4,5,6,7,8,9};
    int length = end(num)-begin(num);

    cout<<"Array: ";
    for(int i = 0; i < length; i++)
        {
            cout<<num[i]<<" ";
        }
    for(int i = 0; i < length/2; i++)
        {
            int x = num[i];
            num[i] = num[length-i-1];
            num[length-i-1] = x;
        }
    cout<<"\nSorted Array: ";
    for(int i = 0; i < length; i++)
        {
            cout<<num[i]<<" ";
        }
}
