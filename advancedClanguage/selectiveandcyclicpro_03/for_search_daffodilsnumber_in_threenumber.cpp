/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Fri 27 Apr 2018 02:11:17 PM CST
 @File Name: for_search_daffodilsnumber_in_threenumber.cpp
 @Description:  for 循环, 通过 if 语句与break 搭配查找一个三位数的最大水仙花数。
************************************************************************/

#include<stdio.h>

int main(int argc, char * argv[])
{
    int i, j, k;
    int num;
    int flag = 0;

    for(i=9;i>=1;i--)
    {
        for(j=9;j>=0;j--)
        {
            for(k=9;k>=0;k--)
            {
                num = i*100 + j*10 +k;
                if(i*i*i + j*j*j + k*k*k == num)
                {
                    flag = 1;
                    printf(" 三位数中的最大水仙花数为 :%d\n", num);
                    break;
                }
            }
            if(1 == flag)
                break;
        }
        if(1 == flag)
            break;
    }

    return 0;
}
