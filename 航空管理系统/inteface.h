#ifndef __INTERFACE_H
#define __INTERFACE_H
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
#endif