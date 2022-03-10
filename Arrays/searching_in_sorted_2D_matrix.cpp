//You are at(r, c) 
if (matrix[r][c] == target)
    return true;
if (matrix[r][c] > target)
    c--;
else r++;