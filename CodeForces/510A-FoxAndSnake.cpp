
#include <iostream>
    using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    int right = 1, col = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (col % 2 == 0)
            {
                if (right == 1)
                {
                    if (j == c - 1)
                    {
                        cout << "#";
                        right = 0;
                    }
                    else
                        cout << ".";
                }
                else if (right == 0)
                {
                    if (j == 0)
                    {
                        cout << "#";
                    }
                    else if (j == c - 1)
                    {
                        cout << ".";
                        right = 1;
                    }
                    else
                        cout << ".";
                }
            }
            else
            {
                cout << "#";
            }
        }

        col++;
        cout << endl;
    }
}