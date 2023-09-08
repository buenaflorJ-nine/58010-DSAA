#include<iostream>
#include<array>
using namespace std;

int main()
{
    int num[] = {1,2,3,4,5,6,7,8,9,10};
    int len = end(num)-begin(num);
    int x;
    int y;
    int i;
    
    cout<<"Append Algorithm:"<<endl;
    cout<<"Enter a number to Insert: ";
    cin >>x;
    cout<<"Where should you put it: ";
    cin >>y;
    for(int i=0; i<=len; i++)
    {
        if (i==y)
        {
            cout<<x<< " ";
        }
        if (i<y)
        {
            cout<<num[i]<< " ";
        } 
        if (i>=y && i<len)
        {
            cout<<num[i]<< " ";
        }
    }
    return 0;
}
