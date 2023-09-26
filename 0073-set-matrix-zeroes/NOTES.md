for(int i=0; i<n; i++){
for(int j=0; j<m; j++){
if(row.count(i)>0 || col.count(j)>0){   //If either the row or column contains at least one zero, it sets the current element to zero
matrix[i][j]=0;     // If the current row 'i' is in the 'row' set the current element to zero. similarly with col
}
}
}
}