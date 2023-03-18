#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{

    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }

    int arr_2[3][2] = {{23, 34},
                       {1, 2},
                       {5, 7}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr_2[i][j];
        }
    }
}
