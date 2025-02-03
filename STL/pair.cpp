#include <bits/stdc++.h>
using namespace std;
int main()
{
    //! declure pair
    //todo pair<datatype1/container,datatype1/container>p;
    pair<int, string> p;
    //* add data in pair
    // todo:  make_pair(data1,data2)
    // p = make_pair(2, "abc");
    // p = make_pair(2,"hello");
    p = {2, "qweq"};
    pair<int, string> &p1 = p;
    //! acess value
    // todo variable.first()/second()
    // todo variable= {data,data}

    //! get data from user
    //todo cin>> p.first>>p.second
    p1.first = 3;
    cout << p.first << " " << p.second << endl;
    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};

    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};
    swap(p_array[0], p_array[2]);
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
};