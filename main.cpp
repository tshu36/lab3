#include"pj3.h"
using namespace std;
int main(){
	sorting ss;
	fstream file,fileout;
	file.open("file.in.txt",ios::in);
	fileout.open("file.out.txt",ios::out);
	int size,i;
	char line[100];
	file.getline(line,sizeof(line),'\n');
	size=atoi(line);
	int number,all=0;
	if(size<5||size>10000)
	{
		printf("Wrong number.\n");
		exit(0);
	}
	vector<int>v1(size);
	for(i=0;i<size;++i){
		file.getline(line,sizeof(line),'\n');
		number=atoi(line);
		v1.at(i)=number;
	}
	ss.insertion_sort(v1);
	for(i=1;i<6;i++)
	{
		all=all+v1.at(size-i);
	}
	fileout << all << endl;
	file.close();
	fileout.close();
	return 0;
}
