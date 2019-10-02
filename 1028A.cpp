/* (: Sreejith Codes :) */

#include <bits/stdc++.h>

#define 	ll 	long long
#define 	ld 	long double
#define 	pb 	push_back
#define 	ff 	first
#define 	ss 	second
#define 	mp 	make_pair
#define 	mod 1000000007
#define 	pi 	3.141592653589793

using namespace std;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);  
}

int main()
{
    fast();
    char b;
    vector < pair < ll,ll > > v;
    ll m,n;
    cin>>m>>n;
    for(ll i = 0 ; i < m ; i++)
    {
        for ( ll j = 0 ; j < n ; j++)
        {
            cin>>b;
            if(b=='B')
                v.pb(mp(i,j));
        }
    }

    ll mid=v.size()/2;
    cout<<v[mid].ff+1<<" "<<v[mid].ss+1;

    return 0;
}
