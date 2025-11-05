#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= arrLength; i++)
    {
        for (int j = i + 1; j <= arrLength; j++)
        {
            int num = arr[i];
            int sum = 0;
            if (arr[i] == num)
            {
                sum += 1;
            }
            cout << arr[i] << " appears " << sum << " number of times" << endl;
        }
    }
    return 0;
}