#include<iostream>
using namespace std;

int main()
{
    int num[] = {1,2,3,4,5,6,7,8,9,10};
    int x;
    int i;
    int n = 10;
    cout<<"Append Algorithm:"<<endl;
    cout<<"Enter a number to Append: ";
    cin >>x;
    for(int i=0; i<n; i++)
    {
        cout<<"num["<<i<<"]="<<num[i]<<endl;
        if (i==9)
            {
                cout<<"num["<<i+1<<"]="<<x<<endl;
            } 
    }
    return 0;
}