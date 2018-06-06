
// UsingSDKDlg.h : ͷ�ļ�
//

#pragma once
#include "afxcmn.h"


// CUsingSDKDlg �Ի���
class CUsingSDKDlg : public CDialog, public IEventReceiver
{
// ����
public:
	CUsingSDKDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_USINGSDK_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��

	IFileEventServer*   m_FileEventServer;

// ʵ��
protected:
	HICON m_hIcon;
	DWORD  CUsingSDKDlg::OnFileEvent(PFILE_EVENT_PACKET  pFileEventPacket) ;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_ListCtrl;
	BOOL      m_bStarted;
	afx_msg void OnBnClickedButtonLoadPolicy();
	afx_msg void OnBnClickedButtonUnloadPolicy();
protected:
	virtual void OnCancel();
public:
	afx_msg void OnBnClickedButton1();
};
