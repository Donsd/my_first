#include <iostream>
#include <vector>
using namespace std;

int partition(vector <int> &array,int startingIndex,int endingIndex){
    int pivotItem=array[endingIndex];
    int pIndex= startingIndex;
    for (int i=startingIndex;i<endingIndex;i++){
        if (pivotItem>array[i]){
            swap(array[pIndex],array[i]);
            pIndex=pIndex+1;
        }
    }
    swap(array[pIndex],array[endingIndex]);
    return pIndex;

}

void QuickSort(vector <int> &Array,int starting_index, int ending_index){
    if (starting_index<ending_index){
        int pIndex=partition(Array,starting_index, ending_index);
        QuickSort(Array,starting_index,pIndex-1);
        QuickSort(Array,pIndex+1,ending_index);
    }

}

int main() {
    vector <int> array={1,4,5,16,8,3,26,8,12,69,6};
    QuickSort(array,0,array.size()-1);
    for (int element:array){
        cout<<element<<" ";
    }
    return 0;
}
