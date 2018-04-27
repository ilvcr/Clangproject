/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Fri 27 Apr 2018 01:50:03 PM CST
 @File Name: goto_search_daffodilsnumber.cpp
 @Description:  使用 goto 语句建立循环，查找一个四位数中的最小的水仙花数
************************************************************************/

#include<stdio.h>

int main(int argc, char * argv[])
{
    int i, j, k, f;
    int num;

    for(i=1;i<=9;i++)
        for(j=0;j<=9;j++)
            for(k=0;k<=9;k++)
                for(f=0;f<=9;f++)
                {
                    num = i*1000 + j*100 + k*10 + f;
                    if(num ==(i*i*i*i + j*j*j*j + k*k*k*k + f*f*f*f))
                    {
                        printf("%d\n", num);
                        goto exit;
                    }
                }

exit:
    return 0;
}
