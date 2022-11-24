// Given p and n, find the largest x such that p^x divides n!
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const long long N = 100000000000000LL;
// @author: Symon
void wraith()
{
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
}

// FAST IO //
void fade()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int largestPower(int n, int p)
{
    // Initialize result
    int x = 0;
 
    // Calculate x = n/p + n/(p^2) + n/(p^3) + ....
    while (n)
    {
        n /= p;
        x += n;
    }
    return x;
}
 
void octane()
{
	int n, p; //when p is prime
	cin >> n >> p;
	
	cout << largestPower(n, p);
		
	// important link: https://artofproblemsolving.com/wiki/index.php/Legendre%27s_Formula
}

int main()
{
    // wraith();
    fade();
    // I don't concern myself with the ambitions of insects.
    int t = 1;
    // cin >> t;
    
    while(t--)
    {  
        //“Whoa . . . what a rush!”
        octane();        
    }   
    
        return 0;
}

//n = 10, p = 3, ans = 4

