#include <algorithm>
int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2) {
    int *mergeArr = new int[lenArr1 + lenArr2];
    for (int i = 0; i < lenArr1; i++) {
        mergeArr[i] = firstArr[i];
    }
    for (int i = 0; i < lenArr2; i++) {
        mergeArr[i + lenArr1] = secondArr[i];
    }
    if (firstArr[0] < firstArr[lenArr1 - 1]) {
        sort(mergeArr, mergeArr + lenArr1 + lenArr2);
    } else {
        sort(mergeArr, mergeArr + lenArr1 + lenArr2, greater<int>());
    }
    return mergeArr;
}