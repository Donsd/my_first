#include <iostream>
#include <vector>
using namespace std;
void BinarySearch(vector <int> Array,int element,int start,int end){
    int middle=(start+end)/2;
    if (start>end) {
        cout << "this element is not in this Array" << endl;
        return;
    }
    if (Array[middle]==element){
        cout<<middle<<endl;
    }else if (Array[middle]>element){
       BinarySearch(Array,element,start,middle-1);
    }else{
        BinarySearch(Array,element,middle+1,end);
    }


}
int main() {
    vector <int> array={1,2,4,5,7,9,10,23,45,67,87,92,100};
    int size=array.size();
    BinarySearch(array,45,0,size-1);
    return 0;
}
