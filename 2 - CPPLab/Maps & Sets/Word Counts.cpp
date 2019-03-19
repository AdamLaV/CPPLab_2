#include <iostream>
#include <map>

using namespace std;


int main()
{
    map<string, int> wordCounts;

    for(int i = 0; i < 10; i++) {
        string word;
        cin >> word;
        //add 1 to the count for that word
        //  anything that doesn't exist already
        //  becomes 0 when we try to read it!
        wordCounts[word] = wordCounts[word] + 1;
    }

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

//cout<<endl<<endl<<"Words"<<" "<<"Count"<<endl;
for (const auto &myPair : wordCounts ) {
cout<<myPair.first<< " "<<myPair.second<<endl;
}


//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
    return 0;
}
