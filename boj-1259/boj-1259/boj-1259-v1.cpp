#include <iostream> 
#include <string> 
#include <algorithm> 

using namespace std;
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string num;
	while (num != "0")
	{
		cin >> num;
		string temp = num;
		reverse(num.begin(), num.end());
		if (num == "0")
			break;
		else if (num == temp)
			cout << "yes\n";
		else
			cout << "no\n";
	}
}