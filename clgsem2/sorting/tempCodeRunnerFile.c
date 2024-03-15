
void mergeSort(int arr[], int l, int u){
    if(l < u){
        int m = (l+u) / 2;
        mergeSort(arr, l, m);    
        me