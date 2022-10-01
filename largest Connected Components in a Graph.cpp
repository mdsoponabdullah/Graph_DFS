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

const int mz=1e5+123;

int cnt;


vector<int>adj[mz];
bool vst[mz];

 void DFS(int u)
 {
      vst[u]=1;
      cnt++;
      for(auto i:adj[u])
      {
          if(vst[i]==0)
          {
              DFS(i);
          }
      }

 }



int main()
{

    int n,e;

    cin>>n>>e;

    for (int i=1; i<=e;i++ )
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);

        adj[v].push_back(u);

    }

   int c=0;


  int large=0;

    for (int i=1; i<=n;i++ )
    {


        if(vst[i]==0)
        {
            cnt=0;
             DFS(i);
            large= max(cnt,large);
        }



    }


  cout<<large<<endl;



return 0;
}



/*8 5
1 2
2 3
2 4
3 5
6 7 */
