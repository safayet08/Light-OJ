#include<bits/stdc++.h>
using namespace std;

long long P, Q, N, sq, L;
vector <int> v;

int main()
{
    int T;
    cin >> T;
    for( int i = 1; i <=T; i++ )
    {
        cin >> P >> L;
        N = P-L;
        cout<< "Case " << i << ": ";
        if( N<L ) cout<< "impossible" <<endl;
        else
        {
            sq = sqrt(N);
            for( int j = 1; j<=sq ; j++)
            {
                if( N%j==0 )
                {
                    v.push_back(j);
                    v.push_back(N/j);
                }
            }
            sort(v.begin(),v.end());
            for(int j=0; j<v.size(); j++)
            {
                if(v[j] > L) cout<< v[j] << " ";
            }
            v.clear();
        }
        cout<<endl;
    }
    return 0;
}
