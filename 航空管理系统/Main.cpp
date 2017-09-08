#include<iostream>
#include<fstream>
#include<windows.h>
#include <io.h>  
#include <direct.h>  
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include<vector>
#include<string>
using namespace std;
#include"corestruct.h"
#include "common.h"
#include "inteface.h"
int main(){
	string datafile[1]={"data/user.txt"};//数据文件夹包括几个TXT就应该在这里定义并且传入highestface()供目录结构分析或者是创建数据文件夹
	int length=1;
	//int result=Entrance();
	//if(result==0){
		highestface(datafile,length);
	//}
	/*else if(result==1);
	else if(result==2);
	else if(result==3);
	else if(result==4);*/
	system("pause");
}