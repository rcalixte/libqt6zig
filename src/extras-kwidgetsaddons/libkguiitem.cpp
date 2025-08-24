#include <KGuiItem>
#include <QIcon>
#include <QPushButton>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kguiitem.h>
#include "libkguiitem.h"
#include "libkguiitem.hxx"

KGuiItem* KGuiItem_new() {
    return new KGuiItem();
}

KGuiItem* KGuiItem_new2(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new KGuiItem(text_QString);
}

KGuiItem* KGuiItem_new3(const libqt_string text, const QIcon* icon) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new KGuiItem(text_QString, *icon);
}

KGuiItem* KGuiItem_new4(const KGuiItem* other) {
    return new KGuiItem(*other);
}

KGuiItem* KGuiItem_new5(const libqt_string text, const libqt_string iconName) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    return new KGuiItem(text_QString, iconName_QString);
}

KGuiItem* KGuiItem_new6(const libqt_string text, const libqt_string iconName, const libqt_string toolTip) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
    return new KGuiItem(text_QString, iconName_QString, toolTip_QString);
}

KGuiItem* KGuiItem_new7(const libqt_string text, const libqt_string iconName, const libqt_string toolTip, const libqt_string whatsThis) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
    QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
    return new KGuiItem(text_QString, iconName_QString, toolTip_QString, whatsThis_QString);
}

KGuiItem* KGuiItem_new8(const libqt_string text, const QIcon* icon, const libqt_string toolTip) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
    return new KGuiItem(text_QString, *icon, toolTip_QString);
}

KGuiItem* KGuiItem_new9(const libqt_string text, const QIcon* icon, const libqt_string toolTip, const libqt_string whatsThis) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
    QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
    return new KGuiItem(text_QString, *icon, toolTip_QString, whatsThis_QString);
}

void KGuiItem_OperatorAssign(KGuiItem* self, const KGuiItem* other) {
    self->operator=(*other);
}

void KGuiItem_SetText(KGuiItem* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

libqt_string KGuiItem_Text(const KGuiItem* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KGuiItem_PlainText(const KGuiItem* self) {
    QString _ret = self->plainText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KGuiItem_SetIcon(KGuiItem* self, const QIcon* iconset) {
    self->setIcon(*iconset);
}

QIcon* KGuiItem_Icon(const KGuiItem* self) {
    return new QIcon(self->icon());
}

void KGuiItem_SetIconName(KGuiItem* self, const libqt_string iconName) {
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    self->setIconName(iconName_QString);
}

libqt_string KGuiItem_IconName(const KGuiItem* self) {
    QString _ret = self->iconName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KGuiItem_HasIcon(const KGuiItem* self) {
    return self->hasIcon();
}

void KGuiItem_SetToolTip(KGuiItem* self, const libqt_string tooltip) {
    QString tooltip_QString = QString::fromUtf8(tooltip.data, tooltip.len);
    self->setToolTip(tooltip_QString);
}

libqt_string KGuiItem_ToolTip(const KGuiItem* self) {
    QString _ret = self->toolTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KGuiItem_SetWhatsThis(KGuiItem* self, const libqt_string whatsThis) {
    QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
    self->setWhatsThis(whatsThis_QString);
}

libqt_string KGuiItem_WhatsThis(const KGuiItem* self) {
    QString _ret = self->whatsThis();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KGuiItem_SetEnabled(KGuiItem* self, bool enable) {
    self->setEnabled(enable);
}

bool KGuiItem_IsEnabled(const KGuiItem* self) {
    return self->isEnabled();
}

void KGuiItem_Assign(QPushButton* button, const KGuiItem* item) {
    KGuiItem::assign(button, *item);
}

void KGuiItem_Delete(KGuiItem* self) {
    delete self;
}
