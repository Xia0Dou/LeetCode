#include <iostream>
#include <memory.h>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int arr[256] = {0};
        for(int i=0;i<s.size();++i)
            arr[s[i]] += 1;
        for(int j=0;j<s.size();++j){
            if(arr[s[j]]==1)
                return j;
        }
        return -1;
    }
};

int* multi(int *num1,int size1,int *num2,int size2){
    int size = size1 + size2;
    int *num = new int[size];

    memset(num,0,sizeof(int)*size);

    for(int i=0;i<size1;++i){
        int k = i;
        for(int j=0;j<size2;++j)
            num[k++] += num1[i]*num2[j];
    }

    for(int i=0;i<size;++i){
        if(num[i]>=10){
            num[i+1] += num[i]/10;
            num[i] %=10;
        }
    }

    if(num[size-1]==0){
        int *sun = new int[size-1];
        for(int i=0;i<size-1;++i)
            sun[i] = num[i];
        delete[] num;
        return sun;
    }
    return num;
}

int main() {

    int size = 5;
    int num1[] = {5,4,3,2,1};
    int num2[] = {5,4,3,2,1};

    int *num = multi(num1,size,num2,size);

    for(int i=size*2-2;i>=0;--i)
        cout<<num[i];

    delete[] num;
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}