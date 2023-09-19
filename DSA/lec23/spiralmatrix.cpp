#include<iostream>
#include<vector>
using namespace std;

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row*col;

        int startingrow = 0;
        int startingcol = 0;
        int endingrow = row - 1;
        int endingcol = col - 1;

        while(count < total){

            //print starting row
            for(int index = startingcol;count < total && index <= endingcol; index++){
                ans.push_back(matrix[startingrow][index]);
                count++;
            }
            startingrow++;
            

            //print ending col
            for(int index = startingrow;count < total && index <= endingrow; index++){
                ans.push_back(matrix[index][endingcol]);
                count++;
            }
            endingcol--;

            //print ending row
            for(int index = endingcol;count < total && index >= startingcol; index--){
                ans.push_back(matrix[endingrow][index]);
                count++;
            }
            endingrow--;

            //print starting col
            for(int index = endingrow;count < total && index >= startingrow; index--){
                ans.push_back(matrix[index][startingcol]);
                count++;
            }
            startingcol++;
        }
        return ans;
    }

    int main(){ 

        vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
        };

        vector<int> result = spiralOrder(matrix);

        cout << "Spiral Order Traversal: ";

        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;

        return 0;

    }
