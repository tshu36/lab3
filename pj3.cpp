#include"pj3.h"
using namespace std;
void sorting::insertion_sort(vector<int>&v)
{
	int insert,moveitem;
	for(int next=0;next<v.size();++next)
	{
		insert=v.at(next);
		moveitem=next;
		while((moveitem>0)&&(v.at(moveitem-1)>insert)){
			v.at(moveitem)=v.at(moveitem-1);
			--moveitem;
		}
		v.at(moveitem)=insert;
	}
}
