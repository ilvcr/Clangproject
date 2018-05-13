/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Fri 11 May 2018 10:37:45 PM CST
 @File Name: file_pointer_01.cpp
 @Description:  文件指针的定义
************************************************************************/

//定义文件指针的一般形式
FILE  *BL;

//FILE结构体类型
struct _iobuf{
            char *_ptr;         //表示文件输入的下一个位置
            int   _cnt;         //表示当前缓冲区的相对位置
            char *_base;        //表示文件的起始位置
            int   _flag;        //表示文件标志
            int   _file;        //表示文件的有效性验证
            int   _charbuf;     //表示缓冲区的检查, 若无此成员, 则不读取
            int   _bufsiz;      //表示文件大的小
            char *_tmpfname;    //表示临时文件
};
typedef struct _iobuf FILE;

/*文件操作的步骤:
1->
    定义文件指针
2->
    打开文件
3->
    读写文件
4->
    关闭文件
*/


//打开文件时使用的fopen函数的函数原型为:
FILE *fopen(const char *fname, const char *mode);
/*
参数fname是要打开的文件名,可以带存储路径
参数mode指示文件的打开模式,指示文件打开的基本操作
*/
