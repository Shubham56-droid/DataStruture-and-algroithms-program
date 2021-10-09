class Solution {
    public long maxMatrixSum(int[][] matrix) {
        int i, j, count = 0, min = Math.abs(matrix[0][0]);
        long sum = 0;
        for(i = 0;i < matrix.length; i++){
            for(j = 0;j < matrix[0].length; j++){
                if(matrix[i][j] <= 0){
                    matrix[i][j] = (-1)*matrix[i][j];
                    count += 1;
                }
                sum += matrix[i][j];
                min = Math.min(matrix[i][j], min);
            }
        }
        if(count % 2 == 0){
            return sum;
        }
        else{
            return sum - (2*min);
        }
    }
}
