#ifndef __INTERFACE_H
#define __INTERFACE_H
int Entrance(){
	for(int i=0;i<80;i++)cout<<"\004";
	cout<<"\n";
	for(int i=0;i<30;i++)cout<<" ";cout<<"欢迎使用航空管理系统";
	cout<<"\n";
	cout<<"\n";
	for(int i=0;i<25;i++)cout<<" ";
	time_t time_login;
    struct tm *p;
    time(&time_login);
    p = gmtime(&time_login);
	printf("现在时间: %d年%d月%d日 %d:%d:%d\n",1900+p->tm_year,1+p->tm_mon,p->tm_mday,8+p->tm_hour,p->tm_min,p->tm_sec);
	cout<<endl<<endl;
	for(int i=0;i<30;i++)cout<<" ";cout<<"1、普通用户登录\n\n";
	for(int i=0;i<30;i++)cout<<" ";cout<<"2、超级用户登录\n\n";
	for(int i=0;i<30;i++)cout<<" ";cout<<"3、注册\n\n";
	for(int i=0;i<30;i++)cout<<" ";cout<<"4、离开系统\n\n";
	for(int i=0;i<80;i++)cout<<"\004";
	int limitarr[]={1,2,3,4};
	int choice;
	while(cin>>choice){
		try{
			if(0==InArray(4,limitarr,choice)){ 
				throw runtime_error("");
			}
			else{
				return choice;
			}
			}catch(runtime_error err){
				cout<<err.what()<<"您输入的数据不规范,输入任意键继续,N退出系统\n";
				char retry;
				cin>>retry;
				if(retry=='n'||retry=='N'){
					break;
				}
				else{
					system("cls");
					Entrance();
				}
			}
		}
	}
#endif