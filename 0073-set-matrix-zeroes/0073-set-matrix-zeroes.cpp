class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        
// Time complexity: O(m * n)
// Space complexity: O(m + n)
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        set<int> row;
        set<int> col;
        
        // This loop identifies rows and columns containing at least one zero and adds their indices to the respective sets.
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(row.count(i)>0 || col.count(j)>0){   
                    matrix[i][j]=0;    
                }
            }
        }
// Time complexity: O(m * n) 
// Space complexity: O(m * n) due to the additional space used by the visited matrix, which has the same dimensions as the input matrix
//         int n = matrix.size();   // n is the number of rows in the matrix
//         int m = matrix[0].size(); // m is the number of columns in the matrix
//         vector<vector<int>> visited = matrix;  // creating a copy of the matrix in the 'visited' variable
        
//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < m; j++){
//                 if(matrix[i][j] == 0){
                    
//                     for(int k = 0; k < m; k++){   // k iterates through the columns to set all elements in the same row to 0
//                         visited[i][k] = 0;
//                     }
//                 }
//             }
//         }
//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < m; j++){
//                 if(matrix[i][j] == 0){
                    
//                     for(int k = 0; k < n; k++){  // k iterates through the rows to set all elements in the same column to 0
//                         visited[k][j] = 0;
//                     }
//                 }
//             }
//         }
//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < m; j++){     
//                         matrix[i][j] = visited[i][j]; // copying the modified matrix back to the original matrix
//             }
//         }
    }
};
