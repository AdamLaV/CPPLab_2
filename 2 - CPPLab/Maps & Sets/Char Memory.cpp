#include <iostream>
#include <set>

using namespace std;

int main()
{

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

set<char> letters;
for(int i=0;i<20;i++){
char ch;
cin>>ch;
letters.insert(ch);
}
set <char> :: iterator itr;
for (itr = letters.begin(); itr != letters.end(); ++itr)
{
cout << *itr;
}
	

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
    return 0;
}
