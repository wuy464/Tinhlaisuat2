#include <iostream>
using namespace std;

int main()
{
	float s; //tiengui
	float ls; //laisuat
	float tkv; // tienkivong
	int sn; //so nam
	
	cout<<"nhap vao tiengui laisuat tienkivong";
	cin>>s>>ls>>tkv;
	
	while(s<0||ls<0||tkv<s||tkv<0)
	{
		cout<<" ban da nhap sai vui long nhap lai";
		cout<<"nhap vao tiengui laisuat tienkivong";
		cin>>s>>ls>>tkv;
	}
	while(s	< tkv)
		{
			s=s+(s*ls)/100;
			sn++;
		}
		cout<<"sau"<<sn<<"nam thi ban nhan duoc so tien ki vong la ";
	return 0;
 } 
