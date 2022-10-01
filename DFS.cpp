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

const int msize= 1e5+127;

vector<int>adj[msize];
bool vst[msize];

void DFS(int u)
{
    vst[u]=1;
    cout<< u<<",";

    for( auto x:adj[u])
    {
        if(vst[x]==0)
        {
            DFS(x);
        }
    }

}


int main()
{

    /* 7 8
    1 2
    1 3
    2 5
    3 6
    3 4
    5 6
    5 7
    6 7
    */
    optimize();
     int node,edge;

     cin>>node>>edge;

     for (int i=1; i<=edge;i++ )
     {
         int u,v;
         cin>>u>>v;
         adj[u].push_back(v);
         adj[v].push_back(u);
     }


     cout << "enter the starting node"<<endl;
     int s;
     cin>>s;
     DFS(s);



return 0;
}
