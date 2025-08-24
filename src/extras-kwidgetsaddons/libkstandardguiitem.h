#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKSTANDARDGUIITEM_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKSTANDARDGUIITEM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KGuiItem KGuiItem;
typedef struct KStandardGuiItem KStandardGuiItem;
typedef struct QPushButton QPushButton;
#endif

KGuiItem* KStandardGuiItem_GuiItem(int param1);
libqt_string KStandardGuiItem_StandardItem(int param1);
KGuiItem* KStandardGuiItem_Ok();
KGuiItem* KStandardGuiItem_Cancel();
KGuiItem* KStandardGuiItem_Insert();
KGuiItem* KStandardGuiItem_Discard();
KGuiItem* KStandardGuiItem_Save();
KGuiItem* KStandardGuiItem_Help();
KGuiItem* KStandardGuiItem_DontSave();
KGuiItem* KStandardGuiItem_SaveAs();
KGuiItem* KStandardGuiItem_Apply();
KGuiItem* KStandardGuiItem_Clear();
KGuiItem* KStandardGuiItem_Defaults();
KGuiItem* KStandardGuiItem_Close();
KGuiItem* KStandardGuiItem_CloseWindow();
KGuiItem* KStandardGuiItem_CloseDocument();
KGuiItem* KStandardGuiItem_Print();
KGuiItem* KStandardGuiItem_Properties();
KGuiItem* KStandardGuiItem_Reset();
KGuiItem* KStandardGuiItem_Overwrite();
KGuiItem* KStandardGuiItem_AdminMode();
KGuiItem* KStandardGuiItem_Cont();
KGuiItem* KStandardGuiItem_Del();
KGuiItem* KStandardGuiItem_Open();
KGuiItem* KStandardGuiItem_Back(int param1);
KGuiItem* KStandardGuiItem_Forward(int param1);
KGuiItem* KStandardGuiItem_Configure();
libqt_pair /* tuple of KGuiItem* and KGuiItem* */ KStandardGuiItem_BackAndForward();
KGuiItem* KStandardGuiItem_Quit();
KGuiItem* KStandardGuiItem_Find();
KGuiItem* KStandardGuiItem_Stop();
KGuiItem* KStandardGuiItem_Add();
KGuiItem* KStandardGuiItem_Remove();
KGuiItem* KStandardGuiItem_Test();
void KStandardGuiItem_Assign(QPushButton* param1, int param2);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
