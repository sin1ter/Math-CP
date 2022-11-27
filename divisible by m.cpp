/*
Given a range and a number m and you have to find how many number is divisible by m
first we find out how many numbers is divisible by m from 1 to r
then we find out how many numbers is divisible by m to l - 1
then we subtract them
*/
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

void octane()
{
	int l, r;
	cin >> l >> r;
	
	int m; cin >> m;
	
	cout << (r / m) - (l - 1) / m << endl;
	
	// 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 
	
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