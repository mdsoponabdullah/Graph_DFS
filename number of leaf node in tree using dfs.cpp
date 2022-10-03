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

const int SIZE= 1e5+2345;


int visited[SIZE];
vector<int>adj[SIZE];
int cnt,m;

void dfs(int u)
{

    visited[u] =1;



    int yes=1;

    for(auto v : adj[u])
    {

        if(!visited[v])
        {

            yes=0;
            dfs(v);
        }
    }

    if(yes)
    {
        cout<<u<< " ";
         cnt++;
    }

//cout<< u<<endl;

}


int main()
{


    int node;
    cin>>node;




    for (int i=1; i<=node-1; i++ ) //edge
    {

        int u,v;
        cin>>u>>v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }


 cout<< "leaf nodes are :  ";
    dfs(1);

    cout<<endl<<"number of leaf node : "<<cnt<<endl;


    return 0;
}


/*
7
1 2
1 3
2 4
2 5
3 6
3 7

*/

