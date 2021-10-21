
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
   int t;
   cin>>t;
   int a[t];
   for(int i=0;i<t;i++)
   {
       cin>>a[i];
   }
   int asize=sizeof(a)/sizeof(a[0]);
    sort(a, a + asize);
    for(int i=0;i<t;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
