bool binarysearch(int high,int** matrix,int target,int key){
    int low=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(matrix[key][mid]==target){
            return true;
        }
        else if(matrix[key][mid]>target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return false;
}
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    if(matrixSize==1 && (*matrixColSize)==1){
        if(matrix[0][0]==target)
          return true;
        else
          return false;
    }
   for(int i=0;i<matrixSize;i++){
         if(target >=matrix[i][0] && target<=matrix[i][(*matrixColSize)-1]){
             return binarysearch((*matrixColSize)-1,matrix,target,i);
         }
   }
   return false;
}