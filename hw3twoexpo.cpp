#include<iostream>
using namespace std;

int main()
{
    int a,i,b; //a�O�p���ܼ�(���ƪ�)�Fi�O�ĴX��Ƥ��ܼơFb�O�p���ܼ�(��X��)
    int n,m,v,s; //n�O���ơFm�O���ơFv�O�i��Ȧs�ܼơFs�ΨӰO����Ʀ��
    while(true)
    {
        cout << "�п�J�G���n,m�A���{���N�p��n^m: ";
        cin >> n >> m;
        int x[500000]={0}; //�ŧiint x�}�C
        v=0; //�M��v����
        s=1; //���ޫ��ˡAs���|�j�󵥩�1�A�]����Ƥ@�w�����
        x[0]=1; //�����̦��n�����o��}�C�ȵ���1
        for(a=1;a<=m;a++)
        {
            for(i=0;i<s;i++)
            {
                x[i]=x[i]*n+v; //�U�Ӧ�ƹB�⦡�Av�O���i��ɭn�[�W�h��
                v=x[i]/10; //v�Y�j��0�A�h�ݶi��
                x[i]=x[i]%10; //�C��}�C�s�@���
                if(v!=0&&i+1==s) //�P�_��ƬO�_+1
                s++; //�O����Ʀ��
            }
        }
        cout << "�ȡG" ;
        for(b=s-1;b>=0;b--) //�ϦV��X
            cout << x[b];

        cout << endl;
        cout << "�@" << s << "�Ӧ��" << endl;
    }

    return 0;
}
