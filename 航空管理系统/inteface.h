#ifndef INTERFACE_H
#define INTERFACE_H
#include "plug.h"
int Entrance(){
	for(int i=0;i<80;i++)cout<<"\004";
	cout<<"\n";
	for(int i=0;i<30;i++)cout<<" ";cout<<"��ӭʹ�ú��չ���ϵͳ";
	cout<<"\n";
	cout<<"\n";
	for(int i=0;i<25;i++)cout<<" ";
	time_t time_login;
    struct tm *p;
    time(&time_login);
    p = gmtime(&time_login);
	printf("����ʱ��: %d��%d��%d�� %d:%d:%d\n",1900+p->tm_year,1+p->tm_mon,p->tm_mday,8+p->tm_hour,p->tm_min,p->tm_sec);
	cout<<endl<<endl;
	for(int i=0;i<30;i++)cout<<" ";cout<<"1����ͨ�û���¼\n\n";
	for(int i=0;i<30;i++)cout<<" ";cout<<"2�������û���¼\n\n";
	for(int i=0;i<30;i++)cout<<" ";cout<<"3��ע��\n\n";
	for(int i=0;i<30;i++)cout<<" ";cout<<"4���뿪ϵͳ\n\n";
	for(int i=0;i<80;i++)cout<<"\004";
	int limitarr[]={0,1,2,3,4};
	int choice;
	while(cin>>choice){
		try{
			if(0==InArray(5,limitarr,choice)){ 
				throw runtime_error("");
			}
			else{
				return choice;
			}
			}catch(runtime_error err){
				cout<<err.what()<<"����������ݲ��淶,�������������,N�˳�ϵͳ\n";
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
int highestface(string* data,int length){
	system("cls");
	for(int i=0;i<27;i++)cout<<"\004";cout<<"����Ա�������";for(int i=0;i<35;i++)cout<<"\004";
	cout<<"\n\n";
	for(int i=0;i<25;i++)cout<<" ";cout<<"0��ɾ�������ļ���";cout<<"\n\n";
	for(int i=0;i<25;i++)cout<<" ";cout<<"1�����������ļ���";cout<<"\n\n";
	for(int i=0;i<25;i++)cout<<" ";cout<<"2������Ʊ�����Ա";cout<<"\n\n";
	for(int i=0;i<25;i++)cout<<" ";cout<<"3��ɾ��Ʊ�����Ա";cout<<"\n\n";
		char* filepath="data";
		if(-1==access("data",00)){
			for(int i=0;i<27;i++)cout<<" ";
			cout<<"û�������ļ��У�"<<endl;
		}
	    else if(0==access("data",00)){
		vector<string> files;  
		getFiles(filepath, files );  
		char str[30];  
		int size = files.size();
		for(int i=0;i<80;i++)cout<<"\004";
		cout<<endl;
		for(int i=0;i<25;i++)cout<<" ";
		cout<<"�����ļ����½ṹΪ��"<<endl;
		for (int i = 0;i < size;i++)  
		{  
			for(int i=0;i<27;i++)cout<<" ";
			cout<<files[i].c_str(); 
			cout<<endl;
		}
		int choice;
		int limitarr[]={0,1,2};
		while(cin>>choice){
		try{
			if(0==InArray(3,limitarr,choice)){ 
				throw runtime_error("");
			}
			else{
				if(choice==0){
				}
				else if(choice==1){
				mkdir("data");
				for(int i=0;i<length;i++){
					FILE* fp;
					fp=fopen(data[i].c_str(),"a");
					fclose(fp);
				}
				highestface(data,length);
				}
			}
			}catch(runtime_error err){
				cout<<err.what()<<"����������ݲ��淶,�������������,N�˳�ϵͳ\n";
				char retry;
				cin>>retry;
				if(retry=='n'||retry=='N'){
					break;
				}
				else{
					system("cls");
					highestface(data,length);
				}
			}
		}
	}
}
#endif