
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

  char a[2][105];
  int n,m;
 int dx[]= {0,0,-1,1,-1,1,-1,1};
 int dy[]={1,-1,0,1,1,1,-1,-1};
 int vis[2][105];

 int cnt;


 void  DFS(int x,int y)
 {


       vis[x][y]=1;
      // cnt++;
       for (int i=0; i<8;i++ )
       {

           int x1=x+dx[i];
          int  y1=y+dy[i];
           if(x1>=0&&y1>=0&&x1<n&&y1<m&& vis[x1][y1]==0 && a[x1][y1]=='0' )
           {

               //cout<<x1<< " "  <<y1<<endl;

               DFS(x1,y1);
           }
       }




 }




int main()
{

    int tc;
    cin>>tc;


    while(tc--)
    {
        cin>>n>>m;




        for (int i=0; i<n; i++ )
        {
            for (int j=0; j<m;j++ )
            {
                cin>>a[i][j];
                vis[i][j]=0;

            }

        }


        DFS(0,0);



    }

return 0;
}
