#include <iostream>
using namespace std;
#include<vector>

void display(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<"\n";

}


int main() {


    vector<int>v;
    int x;
    cout<<"enter 5 values"<<"\n";

    for(int i=0;i<5;i++)
    {

        cin>>x;
        v.push_back(x);

    }
    display(v);
    std::cout << v.size() << std::endl;
    return 0;
}