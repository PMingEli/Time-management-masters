#include<fstream>
#include<stdlib.h>
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
#pragma once
using namespace std;
char* tokenaly();
int tableget(char tra[100][15], char cmp[15]);
bool traverse(char tra[100][15], char cmp[15]);//�����ս���ͷ��ս�����鿴�Ƿ����Ҫ����Ԫ��
void tableend();//��ɷ�����
void inittable();//������ĳ�ʼ��
void initproduct();//��ʼ������ʽ�ṹ