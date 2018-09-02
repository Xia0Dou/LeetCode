#include <iostream>
#include <memory.h>

using namespace std;

//class Solution {
//public:
//    int countPrimes(int n) {
//        if(n==0||n==1)
//            return 0;
//        int count = 0;
//        int num = 0;
//        for(int i=2;i<n;++i){
//            for(int j=2;j<i;++j){
//                if(i%j==0){
//                    ++num;
//                    break;
//                }
//            }
//            if(num==0)
//                ++count;
//            else
//                num = 0;
//        }
//        return count;
//    }
//};

class Solution {
public:
    int countPrimes(int n) {
        const int cont = n;
        bool isprime[n];
        int num[n];
        memset(isprime,1,sizeof(isprime));
        memset(num,0,sizeof(num));
        isprime[1]=0;
        num[1]=0;
        for(int i = 2;i<cont;i++)
        {
            if(isprime[i])//是素数
            {
                num[i]=num[i-1]+1;
                for(int j = 2*i;j<cont;j+=i)//去掉所有倍数
                    isprime[j]=0;
            }
            else
                num[i]=num[i-1];
        }
        return num[n-1];
    }
};



//int main() {
    //Solution p;
    //cout<<p.countPrimes(499979);

    const int cont = 1000002;
    bool isprime[1000002];
    int num[1000002];
    int main()
    {
        int n;
        memset(isprime,1,sizeof(isprime));
        memset(num,0,sizeof(num));
        isprime[1]=0;
        num[1]=0;
        for(int i = 2;i<cont;i++)
        {
            if(isprime[i])//是素数
            {
                num[i]=num[i-1]+1;
                for(int j = 2*i;j<cont;j+=i)//去掉所有倍数
                    isprime[j]=0;
            }
            else
                num[i]=num[i-1];
        }
        while(~scanf("%d",&n))
        {
            printf("%d\n",num[n]);
        }
        return 0;
    }
    //std::cout << "Hello, World!" << std::endl;
    //return 0;
//}