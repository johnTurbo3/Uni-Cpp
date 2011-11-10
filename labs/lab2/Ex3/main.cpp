#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
   cout << "number of columns: " << endl;
   int cols;
   cin >> cols;

   cout << "number of rows: " << endl;
   int rows;
   cin >> rows;

   vector<vector<float> > matrix;

   for(int i = 0; i < rows; i++)
   {
       vector<float> temp;
        for(int j = 0; j < cols; j++)
        {
            cout << "Enter number for row " << (i+1) << ", column " << (j+1) << endl;
            float x;
            cin >> x;
           temp.push_back(x);
        }
        matrix.push_back(temp);
   }

   vector<float> vector1;

    for(int i = 0; i < cols; i++)
    {
        cout << "Enter number for vector element " << (i+1)  << endl;
        float x;
        cin >> x;
        vector1.push_back(x);
    }

    vector<float> results;

    for(int i = 0; i < rows; i++)
    {
        float x = 0;

        for(int j = 0; j < cols; j++)
        {
            //float y = matrix.at(i).at(j);
            //float z =
            x += (matrix.at(i).at(j)) * vector1.at(j);
        }

        results.push_back(x);
    }

    ostream_iterator< float > output( cout, " " );
    copy( results.begin(), results.end(), output );

}
