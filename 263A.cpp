#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define endl "\n"
#define sp " "
using namespace std;

int main(int argc, char const *argv[])
{
	int i,j,n,m;
    int matrix[5][5];
	for(i=0;i<5;i++)
		for (int j = 0; j < 5; j++){
			cin>>matrix[i][j];
			if(matrix[i][j]==1){
				cout<<abs(i-2)+abs(j-2);
			}
		}
	

	return 0;
}