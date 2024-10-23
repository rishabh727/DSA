#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 6, 7, 66, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cout << "Enter the value of x : ";
    cin >> x;
    bool flag = false; // present
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            flag = true; 
            break;
        }
    }
    if (flag == true) cout << x << " present ";
    else cout << x << " not present "; 

    return 0;
}