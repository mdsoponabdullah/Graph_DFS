#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;


const double PI = acos(-1);


#define PB push_back
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (abs(a*b)/gcd(a,b))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int sz=30;

bool vst[sz][sz];

char c[sz][sz];

int n,m;

int cont=0;

int dx[]= {+1,-1,0,0};
int dy[]= {0,0,-1,+1};


void DFS(int x,int y)

{
    vst[x][y]=1;
    cont++;

    for (int i=0; i<4; i++ )
    {
        int x1=x+dx[i];
        int y1=y+dy[i];

        if(x1>=1 && x1<=n && y1>=1 && y1<=m && !vst[x1][y1]&&c[x1][y1]!='#')
        {
            DFS(x1,y1);
        }
    }


}




int main()
{

    int T;
    cin>>T;
    for(int tc=1; tc<=T; tc++)
    {

        for (int i=1; i<=sz; i++ )
            for (int j=1; j<=sz; j++ )
                vst[i][j]=0;



        cont =0;





        int x,y;
        cin>>m>>n;


        for (int i=1; i<=n; i++ )
        {
            for (int j=1; j<=m; j++ )

            {
                cin>>c[i][j];
                if(c[i][j]=='@')
                {
                    x=i;
                    y=j;
                }
            }
        }




        //cout<<x<<" " <<y<<endl;
        DFS(x,y);

        cout<<"Case "<<tc<<": "<<cont<<endl;


    }



    return 0;
}
