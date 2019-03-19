#include <iostream>
#include <list>

using namespace std;



//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

int selectiveSum(list <int> l)
{
int sum=0;
for(auto it = l.begin(); it!=l.end();++it)
{
if(*it > 0)
sum+=*it;
}
return sum;
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
int main() {
    list<int> values {1, 2, 3};
    cout << selectiveSum(values) << endl;

    list<int> values2 {-5, 10, 0, 6};
    cout << selectiveSum(values2) << endl;

    list<int> values3 {-5};
    cout << selectiveSum(values3) << endl;
}


