#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while(test--)
    {
	int m,n;
	cin>>m>>n;
	int a[m],b[n];
	for(int i=0;i<m;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	cin>>b[i];
	
	set<int>s;
	for(int i=0;i<m;i++)
	s.insert(a[i]);
	for(int i=0;i<n;i++)
	s.insert(b[i]);
	cout<<s.size();
	
	cout<<endl;
    }
	return 0;
}