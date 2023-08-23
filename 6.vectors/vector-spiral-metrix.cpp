#include<iostream>
#include<cstring>
#include<vector>

using namespace  std;

class spiral{
public:
    vector<int> order(vector<vector<int>>& matrix)
    {
        vector<int> ans;
        int r = matrix.size();
        int c = matrix[0].size();

        int sr=0,er=r-1 ,sc=0,ec=c-1;

        int cal = 0;

        while(sr<=er && sc<=ec)
        {
            ///print start column
            for(int i=sc ; i<=ec ; i++)
            {
                ans.push_back(matrix[sr][i]);
                cal++;
            }
            sr++;
            if(cal == r*c)
            {
                return ans;
            }

            ///printing end column
            for(int i=sr ; i<=er ; i++)
            {
                ans.push_back(matrix[i][ec]);
                cal++;
            }
            ec--;
            if(cal == r*c)
            {
                return ans;
            }

            ///printing end row
            for(int i=ec ; i>=sc ; i--)
            {
                ans.push_back(matrix[er][i]);
                cal++;
            }
            er--;
            if(cal == r*c)
            {
                return ans;
            }
             ///printing start column
             for(int i=er ; i>=sr ; i--)
             {
                  ans.push_back(matrix[i][sc]);
                 cal++;
             }
             sc++;
             if(cal == r*c)
            {
                return ans;
            }

        }

        return ans;

    }



};

int main()
{
       int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    // Accepting arrays
    for (int i = 0; i < n; i++) {
        cout << "Enter elements for row " << i + 1 << ": ";
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    // Displaying the matrix
    cout << "\nMatrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    spiral s1;
    vector<int> result = s1.order(matrix);

    // Displaying the spiral order
    cout << "\nSpiral Order: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;



}
