#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define endl "\n"
#define sp " "
using namespace std;

int main(int argc, char const *argv[])
{
	int t, con;

	cin>>t;
	string s;
	for(int j=1; j<=t;j++){
		cin>>s;
		con=0;
		int bandera=0;
		for(int i=0; i<s.size(); i++)
		{
			if(s[i]=='f'&&con==0){
				con++;
			}
			else if(s[i]=='a'&&con==1){
				con++;
			}
			else if(s[i]=='c'&& con==2){
				con++;
			}
			else if(s[i]=='e' && con==3){
				con++;
			}
			else if(s[i]=='b' && con==4){
				con++;
			}
			else if(s[i]=='o'&& con==5){
				con++;
			}
			else if(s[i]=='o'&& con==6){
				con++;
			}
			else if(s[i]=='k'&& con==7){
				bandera=1;
				break;
			}
			else
				continue;
		}

		if(bandera==1)
			cout<<"Case #"<<j<<":"<<" YES"<<endl;
		else
			cout<<"Case #"<<j<<":"<<" NO"<<endl;
	}
	
	return 0;
}