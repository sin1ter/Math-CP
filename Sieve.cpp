#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const long long N = 100000000000000LL;
// @author: Symon
void IO()
{
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
}

// FAST IO //
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

const int N = 1e5 + 9;

int spf[N];
vector<int> primes;
void sieve()
{
  for(int i = 2; i < N; i++) 
  {
    if (spf[i] == 0) 
    	spf[i] = i, primes.push_back(i);
    int sz = primes.size();
    for (int j = 0; j < sz && i * primes[j] < N && primes[j] <= spf[i]; j++) 
    {
      spf[i * primes[j]] = primes[j];
    }
  }
}

void solve()
{
	
}

int main()
{
    // IO();
    fastIO();
    sieve();
   
    int t = 1;
    cin >> t;
    
    while(t--)
    {  

        solve();        
    }   
    
        return 0;
}