#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"head.h"
#include<vector>
using namespace std;

//����׳�
void calcFactorial() {

	int n = 0;
	int jiecheng = 0;

	cout << "����ĳ�����ֵĽ׳ˣ��س�������" << endl;

	cin >> n;
	jiecheng = n;
	do
	{
		jiecheng = jiecheng * (n - 1);
		n--;
	} while (n > 1);

	cout << "�׳˵��ڣ�" << jiecheng << endl;

}

//�����������������������������鳤�ȣ���Χint s~int e��
void Radomvector(vector<int>&v,int len ,int s, int e) {
	srand(time(0));
	//vector<int>v;
	int a = 0;
	for (int i = 0; i < len; i++) {
		cout << i << " ";
		a = (rand() % e-1 + s);//�������1~10������
		v.push_back(a);//10�����ֻ����η���v
	}
	cout << endl;
	int k = v.size();
	cout << "Radomvector�еõ����ȣ�" <<k << endl;
	//���������һϵ��ֵ
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//������������������С
void calcRadomvectorsize() {
	vector<int>v;
	Radomvector(v, 10,1,10);
	cout << "calcRadomvectorsize�еõ����鳤�ȣ�" << v.size() << endl;
}

void Randomarray(int* a, int n, int l, int r)//���ɷ�Χ��l~r������� 
{
	srand(time(0));  //����ʱ������
	for (int i = 0; i < n; i++) {
		a[i] = rand() % (r - l + 1) + l;//��������r~l������� 
	}
}


//���ֲ���Ԫ��
void binarySearch(int Arr[],int x) {
	int left = 0;
	int len = sizeof(Arr) / sizeof(Arr[0]);
	int x = 0;
	int right = len - 1;
	//cout << "������ҵ�Ԫ�أ��س�����" << endl;
	//cin >> x;
	while (left <= right)
	{
		int mid = (left + right) / 2;//���м�Ԫ�ز���ȡ��
		if (Arr[mid] > x)//����1..5..9����ȡ��mid5���ٷ����м�ֵ����x����right���4���Ӷ���Сmid
		{
			right = mid - 1;
		}
		else if (Arr[mid] < x)
		{
			left = mid + 1;
		}
		else
		{
			cout << "�ҵ��ˣ��±�Ϊ��" << mid << " " << "Ԫ��Ϊ��" << Arr[mid] << endl;
		}
		if (left > right) {
			cout << "�Ҳ�����" << endl;
		}
	}
}


int main() {
	
	//calcFactorial();
	//calcRadomarraysize();
	
	system("pause");
	return 0;
}


