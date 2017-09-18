#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int rd,hs;  //road, house

    int r,g,b;
    int in,roads;
    cin>>in;
    for(int i=0; i<in ;i++)
    {
        cin>>roads;
        int rp=0,gp=0,bp=0;
        for(int i=0; i<roads ;i++)
        {
            cin>>r>>g>>b;
            int mini=0;
            mini=min(min(rp,gp),bp);

            if(rp==mini && mini!=0)    r=20*1000+3;
            if(gp==mini && mini!=0)    g=20*1000+3;
            if(bp==mini && mini!=0)    b=20*1000+3;
            rp=mini+r;
            gp=mini+g;
            bp=mini+b;
        }
        int x=min(min(rp,gp),bp);
        cout<<"Case "<<i+1<<": "<<x<<endl;
    }
    return 0;
}
