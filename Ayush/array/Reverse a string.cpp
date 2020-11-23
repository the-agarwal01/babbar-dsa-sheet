
#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
  cout<<"enter t ";
	cin>>t;
	while(t--)
	{
	string s;

  cout<<"enter a str ";
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


string reverseWord(string str){
    

  int t;
  int n = str.length();
  for(int i=0;i<n/2;i++)
   { 
       t=str[i];
      str[i]=str[n-i-1];
      str[n-i-1]=t;
       
   }
  return str;
}
