#include<bits/stdc++.h>
using namespace std;
void print(int x)
{
    x=100;
   int *a=&x;
    cout<<x<<endl;
    cout<<&a<<endl;
}
int main()
{
    int b=9;
    char arr[6]="abdur";
    cout<<arr<<endl;
    print (b);
    cout<<b<<endl;
}