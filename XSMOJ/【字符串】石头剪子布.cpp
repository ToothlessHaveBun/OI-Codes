#include <iostream>
using namespace std;

signed main()
{
	int n;
	cin >> n ;
	for(int i = 1; i <= n; ++ i)
	{
		string s1, s2;
		cin >> s1 >> s2 ;
		if(s1 == "Rock" && s2 == "Scissors" || s1 == "Scissors" && s2 == "Paper" || s1 == "Paper" && s2 == "Rock") cout << "Player1" << endl ;
		else if(s1 == s2) cout << "Tie" << endl ;
		else cout << "Player2" << endl ;
	}
}