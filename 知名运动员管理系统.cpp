#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int num;

class star
{
		friend class starMessage;
	private:
		string Name;
		string Sex;
		string Number;
		double score[5];
		star *next;
		string project; 
		
	public:
		star();
		string getName(){
			return Name;
		}
		
		string getNumber(){
			return Number;
		}
		
		string getSex(){
			return Sex;
		}
		
		double getold(){
			return score[1];
		}
		
		double getheight(){
			return score[2];
		}
		
		double getweight(){
			return score[3];
		}
		
		string getproject(){
			return project;
		}
		
		star*getnext(){
			return next;
		}
		
		void display();
		void swap();
};

star::star()
{
	cout<<"请输入运动员姓名：";
	cin>>Name; 
	
	cout<<"请输入运动员编号："; 
	cin>>Number;
	
	cout<<"请输入运动员的年龄，身高，体重";
	int a,b,c;
	cin>>a;
	while(a<0){
		cout<<"输入年龄有误，请重新输入:"<<endl;
		cin>>a; 
	} 
	cin>>b;
	while(b<0){
		cout<<"输入身高有误，请重新输入:"<<endl;
		cin>>b;
	}
	cin>>c;
	while(c<0){
		cout<<"输入体重有误，请重新输入:"<<endl;
		cin>>b; 
	}
	cout<<"请输入运动员性别(男 或 女)"<<endl;
	cin>>Sex;
	cout<<"请输入参加的项目："<<endl;
	cin>>project; 
	
	score[1]=a;
	score[2]=b;
	score[3]=c;
	next=NULL;
};

void star::display()
{
	cout<<"  "<<setw(3)<<Number<<"      "<<setw(3)<<Name<<"      "<<setw(3)<<Sex<<"      ";
	int i;
	for(i=1;i<=3;i++)
	{
		cout<<setw(3)<<score[i]<<"      ";
	}
	cout<<setw(3)<<project<<"       "<<endl;
}

void star::swap()
{
	int j;
	string na,number;
	double sco[5];
	
	na=Name;
	Name=next->Name;
	next->Name=na;
	
	number=Number;
	Number=next->Number;
	next->Number=number;
	
	for(j=1;j<=4;j++)
	{
		sco[j]=score[j];
		score[j]=next->score[j];
		next->score[j]=sco[j];
	}
 } 

class starMessage
{
	private:
		star *first;
		star *last; 
	
	public:
		starMessage();
		star*getfirst()
		{
			return first;
		}
		star*getlast()
		{
			return last;
		}
		int getnum()
		{
			return num;
		}
		
	void showMenu(); 
	void showall();
	void add();
	void search();
	void del();
	void sort();
	void showOne();
	void clear();
};

starMessage::starMessage()
{
	first=NULL;
	last=NULL;
	num=0;
}

void showMenu()
{
	cout<<"=========================================\n";
	cout<<"知名运动员管理系统\n";
	cout<<"1.显示所有运动员信息\n";
	cout<<"2.添加运动员信息\n";
	cout<<"3.查询运动员信息\n";
	cout<<"4.删除运动员信息\n";
	cout<<"5.运动员排序\n";
	cout<<"6.删除所有运动员信息并退出系统\n";
	cout<<"0.退出\n";
	cout<<"=========================================\n";
} 

void starMessage::showall()
{
	cout<<"-----------------------成绩列表-------------------------"<<endl;
	cout<<"   编号     姓名     性别     年龄     身高     体重     比赛项目    "<<endl;
	star*t=first;
	while(t){
		t->display();
		t=t->next; 
	}
}

void starMessage::sort()
{
	int a,n=0;
	cout<<"想要按照什么排序？请输入相应序号（1.年龄 2.身高 3.体重 ）：";
	while(1)
	{
		cin>>a;
		if(a!=1&&a!=2&&a!=3)
		{
			cout<<"\n输入序号有误，请重新输入：";
		}
		else
		{
			break;
		} 
	}
	star *t=first;
	star *p=t;
	while (p->next)
	{
		t=first;
		while(t->next)
		{
			if(t->next->score[a]>=t->score[a])
			{
				t->swap();
			}
			t=t->next;
		}
		p=p->next;
	}
	t=first;
	cout<<"\n\t 成绩表如下："<<endl;
	cout<<"编号     姓名         性别     年龄/身高/体重    排名    比赛项目"<<endl;
	while(t)
	{
		n++;
		cout<<" "<<t->getNumber()<<"  \t"<<t->getName()<<"  \t"<<t->getSex()<<"  \t";
		switch(a)
		{
			case 1 :cout<<t->getold()<<"  \t"<<n<<"    "<<t->getproject()<<endl;
			break;
			case 2 :cout<<t->getheight()<<"  \t"<<n<<"     "<<t->getproject()<<endl;
			break;
			case 3 :cout<<t->getweight()<<"  \t"<<n<<"     "<<t->getproject()<<endl;
			break;
		}
		t=t->next;
	}
}

void starMessage::add()
{
	star*t=new star;
	star*p=first;
	while(p){
		if(p->Number==t->Number)
		{
			cout<<"\n编号输入错误或该运动员信息已存在！"<<endl;
			return; 
		}
		p=p->next;
	}
	num++;
	if(first==NULL)
	{
		first=last=t;
	}
	else
	{
		last->next=t;
		last=last->next;
	}
}

void starMessage::search()
{
	string a;
	cout<<"\n请输入要查找的运动员的编号：";
	cin>>a;
	star*t=first;
	while(t)
	{
		if(t->Number==a)
			break;
		t=t->next;
	}
	if(!t)
	{
		cout<<"\n未找到要查的运动员！"<<endl;
		return; 
	}
	cout<<"\n查找成功！"<<endl;
	cout<<"   编号     姓名     性别     年龄     身高     体重    " <<endl;
	t->display();
}

void starMessage::del()
{
	string a;
	cout<<"\n请输入要删除的运动员的学号：";
	cin>>a;
	star*t=first;
	star*p=NULL;
	while(t){
		if(t->Number==a)
			break;
		p=t;
		t=t->next;
	}
	if(!t)
	{
		cout<<"\n未找到要删除的运动员！"<<endl;
		return; 
	}
	if(!p)
	{
		first=first->next;
		cout<<"\n成功删除运动员！"<<a<<endl;
		delete t;
	}
	else
	{
		p->next=t->next;
		cout<<"成功删除运动员"<<a<<endl;
		delete t;
	}
	num--;
}

void starMessage::showOne()
{
	int a;
	while(1)
	{
		cout<<"\n想要分析哪一项资料？(1.old 2.height 3.weight):";
		cin>>a;
		if(a!=1&&a!=2&&a!=3)
		{
			cout<<"\n输入编号有误，请重新输入！"<<endl; 
		}
		else
		{
			break;
		}
	}
	cout<<"\n\t运动员资料分析如下：\n"<<endl;
}

void starMessage::clear()
{
	int x;
	cout<<"确认要清楚所有信息？请输入1或2（1.确认 2.取消）：";
	cin>>x;
	if(x==2)
	{
		cout<<"\n取消清楚\n"<<endl;
		return;
	}
	star*t=first;
	star*p;
	while(t)
	{
		p=t;
		t=t->next;
		delete p;
	}
	cout<<"\n清空成功！\n";
	cout<<"退出成功！\n";
}

int main()
{
	starMessage Message=starMessage();
	int h;
	while(1)
	{
		showMenu();
		cout<<"请输入操作对应序号：";
		cin>>h;
		cout<<endl;
		switch(h)
		{
			case 1:Message.showall();
			break;
			case 2:Message.add();
			break;
			case 3:Message.search();
			break;
			case 4:Message.del();
			break;
			case 5:Message.sort();
			break;
			case 6:Message.showOne();
			break;
			case 7:Message.clear();
			return 0;
			case 0:cout<<"\n退出成功！";
			return 0;
			default:cout<<"\n输入序号有误！请输入正确的序号。"<<endl; 
		}
	}
}
