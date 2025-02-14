#include <iostream>
#include <cstdio>
#define int long long
using namespace std;

signed main()
{
	char a[1005];
	scanf("%[^\n]", &a);
	int i = 0, cnt = 0;
	while(a[i] != '\0')
	{
		if(((a[i] == 'A' && a[i + 1] == 'C') || a[i] == a[i + 1]) && a[i] != ' ')
		{
			cnt ++ ;
		}
		i ++ ;
	}
	cout << cnt ;
	return 0;
}