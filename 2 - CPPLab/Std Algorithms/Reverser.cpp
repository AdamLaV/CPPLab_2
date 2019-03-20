#include <iostream>
#include <algorithm>
#include <numeric>
#include <cstdlib>


using namespace std;



int main()
{
    vector<int> vec;

    //Fill vector with random numbers 1-10
    int seed;
    cin >> seed;
    srand(seed);
    for(int i = 0; i <= 10; i++) {
        vec.push_back( rand() % 10 + 1);
    }


//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

	int temp;
for (int i = 0; i < vec.size()/2; ++i) {
    temp = vec[i];
    vec[i] = vec[vec.size()-i-1];
    vec[vec.size()-i-1] = temp;
}


//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this

    //Print the vector
    for(int i : vec)
        cout << i << " ";
    cout << endl;
}
