#ifndef DLG_DLGCONTACT_HEAD_FILE
#define DLG_DLGCONTACT_HEAD_FILE
#pragma once

//////////////////////////////////////////////////////////////////////////////////
//联系窗口
class CDlgContact : public CFGuiDialog
{
	//函数定义
public:
	//构造函数
	CDlgContact();
	//析构函数
	virtual ~CDlgContact();

	//MFC重载
protected:
	//创建函数
	virtual BOOL OnInitDialog();
	//确定函数
	virtual VOID OnOK();
	//取消消息
	virtual VOID OnCancel();

	//FGUI重载
public:
	//初始函数
	virtual void InitControlUI();
	//皮肤函数
	virtual LPCTSTR GetSkinFile();
	//消息函数
	virtual void Notify(TNotifyUI &  msg);

};

//////////////////////////////////////////////////////////////////////////////////
#endif