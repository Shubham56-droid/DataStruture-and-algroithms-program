// C++ program to check if two nodes lies on same path or not

#include <bits/stdc++.h>
using namespace std;

int filter(int x, int y, int z)
{
   if (x != -1 && y != -1)
   {
      return z;
   }
   return x == -1 ? y : x;
}

int samePathUtil(int mtrx[][7], int vrtx,
                 int v1, int v2, int i)
{
   int ans = -1;

   if (i == v1 || i == v2)
      return i;

   for (int j = 0; j < vrtx; j++)
   {

      if (mtrx[i][j] == 1)
      {
         ans = filter(ans, samePathUtil(mtrx, vrtx, v1, v2, j), i);
      }
   }

   return ans;
}

bool isVertexAtSamePath(int mtrx[][7],
                        int vrtx, int v1,
                        int v2, int i)
{
   int lca = samePathUtil(mtrx,
                          vrtx, v1 - 1,
                          v2 - 1, i);

   if (lca == v1 - 1 || lca == v2 - 1)
      return true;

   return false;
}

int main()
{
   int vrtx = 7, edge = 6;
   int mtrx[7][7] = {
       {0, 1, 1, 1, 0, 0, 0},
       {0, 0, 0, 0, 1, 0, 0},
       {0, 0, 0, 0, 0, 1, 0},
       {0, 0, 0, 0, 0, 0, 1},
       {0, 0, 0, 0, 0, 0, 0},
       {0, 0, 0, 0, 0, 0, 0},
       {0, 0, 0, 0, 0, 0, 0}

   };

   int v1 = 1, v2 = 5;

   if (isVertexAtSamePath(mtrx,
                          vrtx, v1,
                          v2, 0))
      cout << "Yes";

   else
      cout << "No";

   return 0;
}
