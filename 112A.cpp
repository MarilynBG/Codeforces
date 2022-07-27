#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define endl "\n"
#define sp " "
using namespace std;

int main(int argc, char const *argv[])
{
	string s1, s2;
	int i;
	cin>>s1>>s2;

	transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
	transform(s2.begin(), s2.end(), s2.begin(), ::toupper);

	for(i=0; i<s1.length(); i++){
		if(s1[i]<s2[i]){
			cout<<-1<<endl;
			break;
		}
		else if(s2[i]<s1[i]){
			cout<<1<<endl;
			break;
		}
		if(i==(s1.length()-1))
			cout<<0<<endl;
	}



	return 0;
}