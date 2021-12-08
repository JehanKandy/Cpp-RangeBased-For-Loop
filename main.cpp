#include <iostream>

using namespace std;

int main()
{
    int num[] {1,2,3,4,5,'A','B'};

    for(int i : num)
    {
        cout << i << " ";
    }


    return 0;
}
