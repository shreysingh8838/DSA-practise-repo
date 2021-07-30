#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

class Solution
{
    // A recursive function to replace
    // previous color is temp = 'image[sr][sc]' at  '(sr, sc)'
    // and all surrounding pixels of (sr, sc)
    // // with new color 'newColor' and
    // floodFil(image[M][N], i, j, temp, newColor)
    // 1) If i or j is outside the screen, then return.
    // 2) If color of image[i][j] is not same as temp, then return
    // 3) Recur for north, south, east and west.
    //     floodFillUtil(screen, i+1, j, temp, newColor);
    //     floodFillUtil(screen, i-1, j, temp, newColor);
    //     floodFillUtil(screen, i, j+1, temp, newColor);
    //     floodFillUtil(screen, i, j-1, temp, newColor);
    void floodfill(vector<vector<int>> &image, int i, int j, int newColor, int temp)
    {
        if (i < 0 || i >= image.size() || j < 0 || j >= image[0].size())
            return;
        if (image[i][j] != temp)
            return;
        if (image[i][j] == newColor)
            return;
        image[i][j] = newColor;
        floodfill(image, i + 1, j, newColor, temp);
        floodfill(image, i, j + 1, newColor, temp);
        floodfill(image, i, j - 1, newColor, temp);
        floodfill(image, i - 1, j, newColor, temp);
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
    {
        int temp = image[sr][sc];
        floodfill(image, sr, sc, newColor, temp);
        return image;
    }
};

int main()
{
    fast;

    return 0;
}