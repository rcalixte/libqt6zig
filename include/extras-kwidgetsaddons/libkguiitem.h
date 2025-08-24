#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKGUIITEM_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKGUIITEM_H

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
typedef struct QIcon QIcon;
typedef struct QPushButton QPushButton;
#endif

KGuiItem* KGuiItem_new();
KGuiItem* KGuiItem_new2(const libqt_string text);
KGuiItem* KGuiItem_new3(const libqt_string text, const QIcon* icon);
KGuiItem* KGuiItem_new4(const KGuiItem* other);
KGuiItem* KGuiItem_new5(const libqt_string text, const libqt_string iconName);
KGuiItem* KGuiItem_new6(const libqt_string text, const libqt_string iconName, const libqt_string toolTip);
KGuiItem* KGuiItem_new7(const libqt_string text, const libqt_string iconName, const libqt_string toolTip, const libqt_string whatsThis);
KGuiItem* KGuiItem_new8(const libqt_string text, const QIcon* icon, const libqt_string toolTip);
KGuiItem* KGuiItem_new9(const libqt_string text, const QIcon* icon, const libqt_string toolTip, const libqt_string whatsThis);
void KGuiItem_OperatorAssign(KGuiItem* self, const KGuiItem* other);
void KGuiItem_SetText(KGuiItem* self, const libqt_string text);
libqt_string KGuiItem_Text(const KGuiItem* self);
libqt_string KGuiItem_PlainText(const KGuiItem* self);
void KGuiItem_SetIcon(KGuiItem* self, const QIcon* iconset);
QIcon* KGuiItem_Icon(const KGuiItem* self);
void KGuiItem_SetIconName(KGuiItem* self, const libqt_string iconName);
libqt_string KGuiItem_IconName(const KGuiItem* self);
bool KGuiItem_HasIcon(const KGuiItem* self);
void KGuiItem_SetToolTip(KGuiItem* self, const libqt_string tooltip);
libqt_string KGuiItem_ToolTip(const KGuiItem* self);
void KGuiItem_SetWhatsThis(KGuiItem* self, const libqt_string whatsThis);
libqt_string KGuiItem_WhatsThis(const KGuiItem* self);
void KGuiItem_SetEnabled(KGuiItem* self, bool enable);
bool KGuiItem_IsEnabled(const KGuiItem* self);
void KGuiItem_Assign(QPushButton* button, const KGuiItem* item);
void KGuiItem_Delete(KGuiItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
