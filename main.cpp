#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    //cout<<n;

    char a[100];
    int count=0;
    while(scanf("%s", a)!=EOF)
    {
        //cout<<a<<endl;
        if(0==strcmp(a,"true"))
        {
            count++;
        }

    }
    if(count==n)
        printf("true");
    else
        printf("false");
    return 0;
}
