#include <iostream>
using namespace std;


int main(void)
{
    int a,p,q,x,y;
    //string out;
    cin>>a>>p>>q;
    while(a){
        for(int i=0; i<a ;i++){
            cin>>x>>y;
            //cout<<endl;
            x-=p;
            y-=q;
            if(x==0 || y==0){
                cout<<"divisa"<<endl;
            }
            else if(x>0 && y>0){
                cout<<"NE"<<endl;
            }
            else if(x<0 && y>0){
                cout<<"NO"<<endl;
            }
            else if(x>0 && y<0){
                cout<<"SE"<<endl;
            }
            else if(x<0 && y<0){
                cout<<"SO"<<endl;
            }
        }
        cin>>a;
        if(a==0){
            return 0;
        }
        cin>>p>>q;
    }
    return 0;
}
