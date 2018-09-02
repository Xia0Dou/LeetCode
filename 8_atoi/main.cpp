#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Solution {
public:
    int myAtoi(string str) {
        if(str.empty())
            return 0;
        int i = 0;
        int flag = 0;
        int arr[str.size()];
        int k = 0;
        while(str[i]!='\0'){
            if(str[i]==' ')
                ++i;
            else if(str[i]=='+'){
                flag += 1000;
                ++i;
                if(str[i]<'0'||str[i]>'9')
                    return 0;
            }
            else if(str[i]=='-'){
                flag -= 1;
                ++i;
                if(str[i]<'0'||str[i]>'9')
                    return 0;
            }
            else if(str[i]>='0'&&str[i]<='9'){
                arr[k++] = str[i] - '0';
                ++i;
                if(str[i]<'0'||str[i]>'9')
                    break;
            }
            else
                return 0;
        }
        long out = 0;
        int q = k-1;
        int j;
        for(int i=0;i<k;){
            if(arr[i]==0)
                ++i;
            else{
                j=i;
                break;
            }
        }
        if(k-j>10){
            if(flag==-1)
                return -pow(2,31);
            else if(flag==0||flag==1000)
                return pow(2,31)-1;
            else
                return 0;
        }
        for(int i=0;i<k;++i){
            out += arr[i]*pow(10,q);
            --q;
        }
        if(out>=pow(2,31)){
            if(flag==0||flag==1000)
                out = pow(2,31)-1;
            if(flag==-1)
                out = pow(2,31);
        }
        if(flag==-1)
            return -out;
        else if(flag==0||flag==1000)
            return out;
        else
            return 0;
    }
};

int main() {

    Solution p;
    cout<<p.myAtoi("-   234");
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}