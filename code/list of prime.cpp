#include <iostream>
using namespace std;
#include <math.h>
void test(int,int);
int counter;
int a[1000];
int it=0;


int main(){



    //find all prime number upto 1000
    for(int i=2; i<=1000; i++)
    {
        bool b=false;
        for(int k=2; k<i; k++)
        {
            if(i%k == 0)
            {
                b=true;
                break;
            }
        }
        if(b==false){
            a[it]=i;
            cout<<a[it]<<endl;
            it++;
        }
        //cout<<a[it]<<endl;
    }

    //final
    int ina,ins,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>ina>>ins;

    }
    test(ina,ins);

}

void test(int ina,int ins)
{
    int midINA=ina/2;

    bool found=false;
    while(found)
    {
        int i;
        if(a[i]<=midINA)
        {
           if((a[i]+ina)<ins){
                counter++;
                test(a[i]+ina,ins);
            }
            if((a[i]+ina)==ins)
            {
                found=true;
            }


        }
        i++;
    }

}
