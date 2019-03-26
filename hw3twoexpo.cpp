#include<iostream>
using namespace std;

int main()
{
    int a,i,b; //a琌璸Ω跑计(计)i琌材碭计ぇ跑计b琌璸Ω跑计(块)
    int n,m,v,s; //n琌┏计m琌计v琌秈既跑计sノㄓ癘魁俱计计
    while(true)
    {
        cout << "叫块俱计n,mセ祘Α盢璸衡n^m: ";
        cin >> n >> m;
        int x[500000]={0}; //int x皚
        v=0; //睲v
        s=1; //ぃ恨或妓sゲ穦单1俱计﹚Τ计
        x[0]=1; //琵程Ν璶硂皚单1
        for(a=1;a<=m;a++)
        {
            for(i=0;i<s;i++)
            {
                x[i]=x[i]*n+v; //计笲衡Αv琌Τ秈璶
                v=x[i]/10; //v璝0玥惠秈
                x[i]=x[i]%10; //–皚计
                if(v!=0&&i+1==s) //耞计琌+1
                s++; //癘魁俱计计
            }
        }
        cout << "" ;
        for(b=s-1;b>=0;b--) //は块
            cout << x[b];

        cout << endl;
        cout << "" << s << "计" << endl;
    }

    return 0;
}
