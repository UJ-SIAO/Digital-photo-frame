/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.44                          *
*        Compiled Nov 10 2017, 08:53:57                              *
*        (c) 2017 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
extern int sce;
// USER END

#include "DIALOG.h"
#include "stm32746g_discovery_ts.h"
#include "stm32746g_discovery_lcd.h"
#include "stm32746g_discovery.h"
#include "string.h"
#include "ff.h"
#include <stdio.h>
#include <stdlib.h>
/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define ID_WINDOW_0  (GUI_ID_USER + 0x0F)
#define ID_IMAGE_0  (GUI_ID_USER + 0x10)

#define ID_IMAGE_0_IMAGE_0 0x00

// USER START (Optionally insert additional defines)
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/
/*********************************************************************
*
*       _acImage_0, "BMP", ID_IMAGE_0_IMAGE_0
*/
static const U8 _acImage_0[463] = {
  0x42, 0x4D, 0xCE, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x01, 0x00, 0x00, 0x12, 0x0B, 0x00, 0x00,
  0x12, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0xC2, 0x10, 0x84, 0x21, 0x08, 0x42, 0x40, 0x00, 0xA1, 0x08, 0x42, 0x10, 0x84, 0x21,
  0x40, 0x00, 0x90, 0x84, 0x21, 0x08, 0x42, 0x10, 0xC0, 0x00, 0x88, 0x42, 0x10, 0x84, 0x21, 0x08, 0x40, 0x00, 0x84, 0x21, 0x08, 0x42, 0x10, 0x84, 0x40, 0x00, 0xC2, 0x10, 0x84, 0x21, 0x08, 0x42, 0x40, 0x00, 0xA1, 0x08, 0x42, 0x10, 0x84, 0x21, 0x40, 0x00,
  0x90, 0x84, 0x21, 0x08, 0x42, 0x10, 0xC0, 0x00, 0x88, 0x42, 0x10, 0x84, 0x21, 0x08, 0x40, 0x00, 0x84, 0x21, 0x08, 0x42, 0x10, 0x84, 0x40, 0x00, 0xC2, 0x10, 0x84, 0x21, 0x08, 0x42, 0x40, 0x00, 0xA1, 0x08, 0x42, 0x10, 0x84, 0x21, 0x40, 0x00, 0x90, 0x84,
  0x21, 0x08, 0x42, 0x10, 0xC0, 0x00, 0x88, 0x42, 0x10, 0x84, 0x21, 0x08, 0x40, 0x00, 0x84, 0x21, 0x08, 0x42, 0x10, 0x84, 0x40, 0x00, 0xC2, 0x10, 0x84, 0x21, 0x08, 0x42, 0x40, 0x00, 0xA1, 0x08, 0x42, 0x10, 0x84, 0x21, 0x40, 0x00, 0x90, 0x84, 0x21, 0x08,
  0x42, 0x10, 0xC0, 0x00, 0x88, 0x42, 0x10, 0x84, 0x21, 0x08, 0x40, 0x00, 0x84, 0x21, 0x08, 0x42, 0x10, 0x84, 0x40, 0x00, 0xC2, 0x10, 0x84, 0x21, 0x08, 0x42, 0x40, 0x00, 0xA1, 0x08, 0x42, 0x10, 0x84, 0x21, 0x40, 0x00, 0x90, 0x84, 0x21, 0x08, 0x42, 0x10,
  0xC0, 0x00, 0x88, 0x42, 0x10, 0x84, 0x21, 0x08, 0x40, 0x00, 0x84, 0x21, 0x08, 0x42, 0x10, 0x84, 0x40, 0x00, 0xC2, 0x10, 0x84, 0x21, 0x08, 0x42, 0x40, 0x00, 0xA1, 0x08, 0x42, 0x10, 0x84, 0x21, 0x40, 0x00, 0x90, 0x84, 0x21, 0x08, 0x42, 0x10, 0xC0, 0x00,
  0x88, 0x42, 0x10, 0x84, 0x21, 0x08, 0x40, 0x00, 0x84, 0x21, 0x08, 0x42, 0x10, 0x84, 0x40, 0x00, 0xC2, 0x10, 0x84, 0x21, 0x08, 0x42, 0x40, 0x00, 0xA1, 0x08, 0x42, 0x10, 0x84, 0x21, 0x40, 0x00, 0x90, 0x84, 0x21, 0x08, 0x42, 0x10, 0xC0, 0x00, 0x88, 0x42,
  0x10, 0x84, 0x21, 0x08, 0x40, 0x00, 0x84, 0x21, 0x08, 0x42, 0x10, 0x84, 0x40, 0x00, 0xC2, 0x10, 0x84, 0x21, 0x08, 0x42, 0x40, 0x00, 0xA1, 0x08, 0x42, 0x10, 0x84, 0x21, 0x40, 0x00, 0x90, 0x84, 0x21, 0x08, 0x42, 0x10, 0xC0, 0x00, 0x88, 0x42, 0x10, 0x84,
  0x21, 0x08, 0x40, 0x00, 0x84, 0x21, 0x08, 0x42, 0x10, 0x84, 0x40, 0x00, 0xC2, 0x10, 0x84, 0x21, 0x08, 0x42, 0x40, 0x00, 0xA1, 0x08, 0x42, 0x10, 0x84, 0x21, 0x40, 0x00, 0x90, 0x84, 0x21, 0x08, 0x42, 0x10, 0xC0, 0x00, 0x88, 0x42, 0x10, 0x84, 0x21, 0x08,
  0x40, 0x00, 0x84, 0x21, 0x08, 0x42, 0x10, 0x84, 0x40, 0x00, 0xC2, 0x10, 0x84, 0x21, 0x08, 0x42, 0x40, 0x00, 0xA1, 0x08, 0x42, 0x10, 0x84, 0x21, 0x40, 0x00, 0x90, 0x84, 0x21, 0x08, 0x42, 0x10, 0xC0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00,
  0x00,
};

// USER START (Optionally insert additional static data)
extern WM_HWIN window,digi;
extern int second;
int start=1;
void SHOWBMP(int cnt);

// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { WINDOW_CreateIndirect, "DIGI", ID_WINDOW_0, 0, 0, 480, 272, 0, 0x0, 0 },
  { IMAGE_CreateIndirect, "Image", ID_IMAGE_0, 0, 0, 480, 272, 0, 0, 0 },
  // USER START (Optionally insert additional widgets)
  // USER END
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/
/*********************************************************************
*
*       _GetImageById
*/
static const void * _GetImageById(U32 Id, U32 * pSize) {
  switch (Id) {
  case ID_IMAGE_0_IMAGE_0:
    *pSize = sizeof(_acImage_0);
    return (const void *)_acImage_0;
  }
  return NULL;
}

// USER START (Optionally insert additional static code)

	int count;
	FATFS file_system;
	FRESULT file_RESULT;
	FIL		file_d;
	char Filename[11];
	UINT bw;	
	unsigned char			*buffer;
	int pic_Size;
	int pic_wide;
	int pic_height;
	int offset;
	long	hMem;
	int cnt=0;
	TS_StateTypeDef tch;
	int X;
	int first;
// USER END

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
  const void * pData;
  WM_HWIN      hItem;
	WM_HWIN 		 hWin;
  U32          FileSize;
  // USER START (Optionally insert additional variables)
	BSP_TS_GetState(&tch); 
	if(tch.touchDetected == 1 && X==0){
		if(start)
			start=0;
		else
			start=1;
	}
	X=tch.touchDetected;

  // USER END

  switch (pMsg->MsgId) {
  case WM_INIT_DIALOG:
    //
    // Initialization of 'Image'
    //
    /*hItem = WM_GetDialogItem(pMsg->hWin, ID_IMAGE_0);
    pData = _GetImageById(ID_IMAGE_0_IMAGE_0, &FileSize);
    IMAGE_SetBMP(hItem, pData, FileSize);*/
    // USER START (Optionally insert additional code for further widget initialization)
		printf("FATFS test...\r\n");
		file_RESULT = f_mount(&file_system, "0:", 1);
		if(file_RESULT == FR_OK)
		{
				printf("SD card mount ok!\r\n");
		}
		else
		{
				printf("SD card mount error, error code:%d.\r\n",file_RESULT);
		}
		first=1;
    // USER END
    break;
  // USER START (Optionally insert additional message handling)
	case WM_TIMER:
		WM_RestartTimer(pMsg->Data.v,100);
		if(first){
			count=(10*sce);
			start=1;
		}
		first=0;
		if(count==(10*sce)){
			SHOWBMP(cnt);
			if(cnt<4)
				cnt++;
			else
				cnt=0;
			count=0;
		}
		if(start){
		 count++ ;
			//GUI_DispStringAt("start",0,0);
		}
		else{
			//GUI_DispStringAt("pause",0,0);
		}
		
		break;
  // USER END
  default:
    WM_DefaultProc(pMsg);
    break;
  }
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       CreateDIGI
*/
WM_HWIN CreateDIGI(void);
WM_HWIN CreateDIGI(void) {
  WM_HWIN hWin2;

  hWin2 = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
  return hWin2;
}

// USER START (Optionally insert additional public code)
void SHOWBMP(int cnt){
		switch(cnt){
			case 0:
				sprintf(Filename,"logo_1.BMP");
				offset=10;
				break;
			case 1:
				sprintf(Filename,"logo_2.BMP");
				offset=0;
				break;
			case 2:
				sprintf(Filename,"ntust_1.BMP");
				offset=60;
				break;
			case 3:
				sprintf(Filename,"ntust_2.BMP");
				offset=5;
				break;
			case 4:
				sprintf(Filename,"ntust_3.BMP");
				offset=30;
				break;
		}
		
		file_RESULT = f_open(&file_d,Filename,FA_OPEN_EXISTING | FA_READ | FA_OPEN_ALWAYS);
		if(file_RESULT == FR_OK)
			printf("File Find : %s\r\n",Filename);
		else
			printf("File Fail to Find : %s   ERROR : %d \r\n",Filename,file_RESULT);
				file_RESULT=f_lseek(&file_d, 0x12);
				file_RESULT=f_read(&file_d, &pic_wide, 4, &bw);
				file_RESULT=f_lseek(&file_d, 0x00);
				if(file_RESULT != FR_OK){
						printf("File Fail to Read1 : %s   ERROR : %d\r\n",Filename,file_RESULT);
					}
				else
						printf("File Success to Read1 : %s   ERROR : %d\r\n",Filename,file_RESULT);
				hMem = GUI_ALLOC_AllocZero(1024*1024*2);
				buffer = GUI_ALLOC_h2p(hMem);
				//printf("BFSize %d \r\n",sizeof(buffer));
				
							
					file_RESULT=f_read(&file_d,buffer,1024*1024*2, &bw);
					/*if(file_RESULT != FR_OK){
						printf("File Fail to Read2 : %s   ERROR : %d cnt : %d \r\n",Filename[1],file_RESULT,cnt);
					}
					else
						printf("File Success to Read2 : %s   ERROR : %d cnt : %d size :%d    Free: %d \r\n",Filename[1],file_RESULT,cnt,bfSize,GUI_ALLOC_GetNumFreeBytes());
				}*/
				WM_HideWindow(digi);
				GUI_Clear();
				GUI_BMP_DrawScaled(buffer,0,offset,480,pic_wide);
				GUI_SetBkColor(GUI_BLACK);
		GUI_ALLOC_Free(hMem);
		f_close(&file_d);
}
// USER END

/*************************** End of file ****************************/
