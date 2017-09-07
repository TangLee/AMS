#ifndef COMMON_H
#define COMMON_H
bool InArray(int length,int* arr,int var){
	for(int i=0;i<length;i++){
		if(var==arr[i]){
			return true;
		}
	}
	return false;
}
#endif