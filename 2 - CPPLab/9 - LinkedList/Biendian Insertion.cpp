#include <iostream>
#include <list>

using namespace std;


template <class T>
void print(const list<T>& v) {
    for (auto myIt = v.begin(); myIt != v.end(); ++myIt) {
        cout << *myIt << " ";
    }
    cout << endl;
}

int main() {
    list<int> values;


//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

std::list<int>::iterator it;
  
int arr[6];
  
for(int i=0;i<6;i++){
cin>>arr[i];
}
for(int i=0;i<6;i++){
if(arr[i]>=0){
it=values.end();
values.insert(it,arr[i]);
}
else{
it=values.begin();
values.insert(it,arr[i]);
}
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
    print(values);
}
