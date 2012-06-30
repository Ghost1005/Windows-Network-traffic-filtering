// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__537CB6EE_E7B0_4215_919F_5C6012EA167F__INCLUDED_)
#define AFX_STDAFX_H__537CB6EE_E7B0_4215_919F_5C6012EA167F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxdisp.h>        // MFC Automation classes
#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#include <iostream>
#include <vector>

using namespace std;

#endif // _AFX_NO_AFXCMN_SUPPORT

#define UNICODE
#define _UNICODE



typedef struct _PassthruFilter
{
	USHORT protocol;		// ʹ�õ�Э��

	ULONG sourceIP;			// ԴIP��ַ
	ULONG sourceMask;		// Դ��ַ������     ����ʹ����������Ϊ���ܹ�����һ��IP��ַ��Χ

	ULONG destinationIP;	// Ŀ��IP��ַ
	ULONG destinationMask;	// Ŀ�ĵ�ַ������

	USHORT sourcePort;		// Դ�˿ں�
	USHORT destinationPort;	// Ŀ�Ķ˿ں�
	
	BOOLEAN bDrop;			// �Ƿ����˷��

}PassthruFilter, *PPassthruFilter;

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__537CB6EE_E7B0_4215_919F_5C6012EA167F__INCLUDED_)
