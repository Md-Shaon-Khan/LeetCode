import numpy as np

class Solution(object):
    def setZeroes(self, matrix):
       
        mat = np.array(matrix)

       
        rows, cols = np.where(mat == 0)

        
        mat[rows, :] = 0
        mat[:, cols] = 0

       
        for i in range(len(matrix)):
            matrix[i][:] = mat[i].tolist()
