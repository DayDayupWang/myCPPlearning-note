#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"head.h"
#include<vector>
using namespace std;

//计算阶乘
void calcFactorial() {

	int n = 0;
	int jiecheng = 0;

	cout << "计算某个数字的阶乘，回车结束：" << endl;

	cin >> n;
	jiecheng = n;
	do
	{
		jiecheng = jiecheng * (n - 1);
		n--;
	} while (n > 1);

	cout << "阶乘等于：" << jiecheng << endl;

}

//生成填放随机数的容器（容器，数组长度，范围int s~int e）
void Radomvector(vector<int>&v,int len ,int s, int e) {
	srand(time(0));
	//vector<int>v;
	int a = 0;
	for (int i = 0; i < len; i++) {
		cout << i << " ";
		a = (rand() % e-1 + s);//生成随机1~10的数字
		v.push_back(a);//10个数字会依次放入v
	}
	cout << endl;
	int k = v.size();
	cout << "Radomvector中得到长度：" <<k << endl;
	//输出容器中一系列值
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//生成随机容器并计算大小
void calcRadomvectorsize() {
	vector<int>v;
	Radomvector(v, 10,1,10);
	cout << "calcRadomvectorsize中得到数组长度：" << v.size() << endl;
}

void Randomarray(int* a, int n, int l, int r)//生成范围在l~r的随机数 
{
	srand(time(0));  //设置时间种子
	for (int i = 0; i < n; i++) {
		a[i] = rand() % (r - l + 1) + l;//生成区间r~l的随机数 
	}
}


//二分查找元素
void binarySearch(int Arr[],int x) {
	int left = 0;
	int len = sizeof(Arr) / sizeof(Arr[0]);
	int x = 0;
	int right = len - 1;
	//cout << "输入查找的元素，回车结束" << endl;
	//cin >> x;
	while (left <= right)
	{
		int mid = (left + right) / 2;//找中间元素并且取整
		if (Arr[mid] > x)//比如1..5..9，先取到mid5，再发现中间值大于x则让right变成4，从而缩小mid
		{
			right = mid - 1;
		}
		else if (Arr[mid] < x)
		{
			left = mid + 1;
		}
		else
		{
			cout << "找到了，下标为：" << mid << " " << "元素为：" << Arr[mid] << endl;
		}
		if (left > right) {
			cout << "找不到！" << endl;
		}
	}
}


int main() {
	
	//calcFactorial();
	//calcRadomarraysize();
	
	system("pause");
	return 0;
}


