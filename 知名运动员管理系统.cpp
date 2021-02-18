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
	cout<<"�������˶�Ա������";
	cin>>Name; 
	
	cout<<"�������˶�Ա��ţ�"; 
	cin>>Number;
	
	cout<<"�������˶�Ա�����䣬��ߣ�����";
	int a,b,c;
	cin>>a;
	while(a<0){
		cout<<"����������������������:"<<endl;
		cin>>a; 
	} 
	cin>>b;
	while(b<0){
		cout<<"���������������������:"<<endl;
		cin>>b;
	}
	cin>>c;
	while(c<0){
		cout<<"����������������������:"<<endl;
		cin>>b; 
	}
	cout<<"�������˶�Ա�Ա�(�� �� Ů)"<<endl;
	cin>>Sex;
	cout<<"������μӵ���Ŀ��"<<endl;
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
	cout<<"֪���˶�Ա����ϵͳ\n";
	cout<<"1.��ʾ�����˶�Ա��Ϣ\n";
	cout<<"2.����˶�Ա��Ϣ\n";
	cout<<"3.��ѯ�˶�Ա��Ϣ\n";
	cout<<"4.ɾ���˶�Ա��Ϣ\n";
	cout<<"5.�˶�Ա����\n";
	cout<<"6.ɾ�������˶�Ա��Ϣ���˳�ϵͳ\n";
	cout<<"0.�˳�\n";
	cout<<"=========================================\n";
} 

void starMessage::showall()
{
	cout<<"-----------------------�ɼ��б�-------------------------"<<endl;
	cout<<"   ���     ����     �Ա�     ����     ���     ����     ������Ŀ    "<<endl;
	star*t=first;
	while(t){
		t->display();
		t=t->next; 
	}
}

void starMessage::sort()
{
	int a,n=0;
	cout<<"��Ҫ����ʲô������������Ӧ��ţ�1.���� 2.��� 3.���� ����";
	while(1)
	{
		cin>>a;
		if(a!=1&&a!=2&&a!=3)
		{
			cout<<"\n��������������������룺";
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
	cout<<"\n\t �ɼ������£�"<<endl;
	cout<<"���     ����         �Ա�     ����/���/����    ����    ������Ŀ"<<endl;
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
			cout<<"\n�������������˶�Ա��Ϣ�Ѵ��ڣ�"<<endl;
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
	cout<<"\n������Ҫ���ҵ��˶�Ա�ı�ţ�";
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
		cout<<"\nδ�ҵ�Ҫ����˶�Ա��"<<endl;
		return; 
	}
	cout<<"\n���ҳɹ���"<<endl;
	cout<<"   ���     ����     �Ա�     ����     ���     ����    " <<endl;
	t->display();
}

void starMessage::del()
{
	string a;
	cout<<"\n������Ҫɾ�����˶�Ա��ѧ�ţ�";
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
		cout<<"\nδ�ҵ�Ҫɾ�����˶�Ա��"<<endl;
		return; 
	}
	if(!p)
	{
		first=first->next;
		cout<<"\n�ɹ�ɾ���˶�Ա��"<<a<<endl;
		delete t;
	}
	else
	{
		p->next=t->next;
		cout<<"�ɹ�ɾ���˶�Ա"<<a<<endl;
		delete t;
	}
	num--;
}

void starMessage::showOne()
{
	int a;
	while(1)
	{
		cout<<"\n��Ҫ������һ�����ϣ�(1.old 2.height 3.weight):";
		cin>>a;
		if(a!=1&&a!=2&&a!=3)
		{
			cout<<"\n�������������������룡"<<endl; 
		}
		else
		{
			break;
		}
	}
	cout<<"\n\t�˶�Ա���Ϸ������£�\n"<<endl;
}

void starMessage::clear()
{
	int x;
	cout<<"ȷ��Ҫ���������Ϣ��������1��2��1.ȷ�� 2.ȡ������";
	cin>>x;
	if(x==2)
	{
		cout<<"\nȡ�����\n"<<endl;
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
	cout<<"\n��ճɹ���\n";
	cout<<"�˳��ɹ���\n";
}

int main()
{
	starMessage Message=starMessage();
	int h;
	while(1)
	{
		showMenu();
		cout<<"�����������Ӧ��ţ�";
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
			case 0:cout<<"\n�˳��ɹ���";
			return 0;
			default:cout<<"\n�������������������ȷ����š�"<<endl; 
		}
	}
}
