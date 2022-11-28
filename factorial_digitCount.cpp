#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const long long N = 100000000000000LL;
// @author: Symon

// FAST IO //
void FastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve()
{
	int n;
	cin >> n;
	
	if(n < 0)
	{
		cout << 0;
	}
	
	if(n <= 1)
	{
		cout << 1;
	}
	
	double digit_count = 0;
	
	for(int i = 2; i <= n; i++)
	{
		digit_count += log10(i);
	}
	
	cout << floor(digit_count + 1) << endl;
		
	
}

int main()
{
    FastIO();
    int t = 1;
    // cin >> t;
    
    while(t--)
    {  
        //“Whoa . . . what a rush!”
        solve();        
    }   
    
        return 0;
}