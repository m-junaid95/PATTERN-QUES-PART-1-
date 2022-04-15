#include <iostream>
using namespace std;
int main()
{

    cout << "Pattern (1 -- 7) IMP Questions" << endl;

    // 1. Print a solid rectangle
    int rows, columns;
    cout << "Enter the number of rows: \n";
    cin >> rows;
    cout << "Enter the number of columns: \n";
    cin >> columns;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {

            cout << "* ";
        }
        cout << endl;
    }

    // 2. Print a hollow rectangle
    // int rows, columns;
    // cout << "Enter the number of rows: \n";
    // cin >> rows;
    // cout << "Enter the number of columns: \n";
    // cin >> columns;

    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= columns; j++)
    //     {
    //         if (i == 1 || i == rows || j == 1 || j == columns)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    // 3. Print Half Pyramid Pattern using Stars
    // int n;
    // cout<<"Please enter input number";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 4. Print an Inverted Half pyramid
    // int n;
    // cout << "Please enter input number: \n";
    // cin >> n;
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 5. Print Half Pyramid after 180 degree rotation
    // 1st method
    //  int n;
    //  cin >> n;
    //  for (int i = 1; i <= n; i++)
    //  {
    //      for (int j = 1; j <= n; j++)
    //      {
    //          if (j <= n - i)
    //          {
    //              cout << "  ";
    //          }
    //          else
    //          {
    //              cout << "* ";
    //          }
    //      }
    //      cout << endl;
    //  }

    // 2nd method
    //  int n;
    //  cin >> n;
    //  for (int i = 1; i <= n; i++)
    //  {
    //      for (int j = 1; j <= n - i; j++)
    //      {
    //          cout << "  ";
    //      }
    //      for (int j = 1; j <= i; j++)
    //      {
    //          cout << "* ";
    //      }

    //     cout << endl;
    // }

    // 6. Print Half Pyramid using numbers
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; ++i)
    // {
    //     for (int j = 1; j <= i; ++j)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << "\n";
    // }

    // 7. Floyd's Triangle
    // int n;
    // cin >> n;
    // int count = 1;
    // for (int i = 1; i <= n; ++i)
    // {
    //     for (int j = 1; j <= i; ++j)
    //     {
    //         cout << count++ << " ";
    //     }
    //     cout << "\n";
    // }

 



    return 0;
}







