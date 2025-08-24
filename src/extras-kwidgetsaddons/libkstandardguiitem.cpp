#include <KGuiItem>
#include <KStandardGuiItem>
#include <QPair>
#include <QPushButton>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kstandardguiitem.h>
#include "libkstandardguiitem.h"
#include "libkstandardguiitem.hxx"

KGuiItem* KStandardGuiItem_GuiItem(int param1) {
    return new KGuiItem(KStandardGuiItem::guiItem(static_cast<KStandardGuiItem::StandardItem>(param1)));
}

libqt_string KStandardGuiItem_StandardItem(int param1) {
    QString _ret = KStandardGuiItem::standardItem(static_cast<KStandardGuiItem::StandardItem>(param1));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KGuiItem* KStandardGuiItem_Ok() {
    return new KGuiItem(KStandardGuiItem::ok());
}

KGuiItem* KStandardGuiItem_Cancel() {
    return new KGuiItem(KStandardGuiItem::cancel());
}

KGuiItem* KStandardGuiItem_Insert() {
    return new KGuiItem(KStandardGuiItem::insert());
}

KGuiItem* KStandardGuiItem_Discard() {
    return new KGuiItem(KStandardGuiItem::discard());
}

KGuiItem* KStandardGuiItem_Save() {
    return new KGuiItem(KStandardGuiItem::save());
}

KGuiItem* KStandardGuiItem_Help() {
    return new KGuiItem(KStandardGuiItem::help());
}

KGuiItem* KStandardGuiItem_DontSave() {
    return new KGuiItem(KStandardGuiItem::dontSave());
}

KGuiItem* KStandardGuiItem_SaveAs() {
    return new KGuiItem(KStandardGuiItem::saveAs());
}

KGuiItem* KStandardGuiItem_Apply() {
    return new KGuiItem(KStandardGuiItem::apply());
}

KGuiItem* KStandardGuiItem_Clear() {
    return new KGuiItem(KStandardGuiItem::clear());
}

KGuiItem* KStandardGuiItem_Defaults() {
    return new KGuiItem(KStandardGuiItem::defaults());
}

KGuiItem* KStandardGuiItem_Close() {
    return new KGuiItem(KStandardGuiItem::close());
}

KGuiItem* KStandardGuiItem_CloseWindow() {
    return new KGuiItem(KStandardGuiItem::closeWindow());
}

KGuiItem* KStandardGuiItem_CloseDocument() {
    return new KGuiItem(KStandardGuiItem::closeDocument());
}

KGuiItem* KStandardGuiItem_Print() {
    return new KGuiItem(KStandardGuiItem::print());
}

KGuiItem* KStandardGuiItem_Properties() {
    return new KGuiItem(KStandardGuiItem::properties());
}

KGuiItem* KStandardGuiItem_Reset() {
    return new KGuiItem(KStandardGuiItem::reset());
}

KGuiItem* KStandardGuiItem_Overwrite() {
    return new KGuiItem(KStandardGuiItem::overwrite());
}

KGuiItem* KStandardGuiItem_AdminMode() {
    return new KGuiItem(KStandardGuiItem::adminMode());
}

KGuiItem* KStandardGuiItem_Cont() {
    return new KGuiItem(KStandardGuiItem::cont());
}

KGuiItem* KStandardGuiItem_Del() {
    return new KGuiItem(KStandardGuiItem::del());
}

KGuiItem* KStandardGuiItem_Open() {
    return new KGuiItem(KStandardGuiItem::open());
}

KGuiItem* KStandardGuiItem_Back(int param1) {
    return new KGuiItem(KStandardGuiItem::back(static_cast<KStandardGuiItem::BidiMode>(param1)));
}

KGuiItem* KStandardGuiItem_Forward(int param1) {
    return new KGuiItem(KStandardGuiItem::forward(static_cast<KStandardGuiItem::BidiMode>(param1)));
}

KGuiItem* KStandardGuiItem_Configure() {
    return new KGuiItem(KStandardGuiItem::configure());
}

libqt_pair /* tuple of KGuiItem* and KGuiItem* */ KStandardGuiItem_BackAndForward() {
    QPair<KGuiItem, KGuiItem> _ret = KStandardGuiItem::backAndForward();
    // Convert QPair<> from C++ memory to manually-managed C memory
    KGuiItem** _first = static_cast<KGuiItem**>(malloc(sizeof(KGuiItem*)));
    KGuiItem** _second = static_cast<KGuiItem**>(malloc(sizeof(KGuiItem*)));
    *_first = new KGuiItem(_ret.first);
    *_second = new KGuiItem(_ret.second);
    libqt_pair _out;
    _out.first = static_cast<void*>(_first);
    _out.second = static_cast<void*>(_second);
    return _out;
}

KGuiItem* KStandardGuiItem_Quit() {
    return new KGuiItem(KStandardGuiItem::quit());
}

KGuiItem* KStandardGuiItem_Find() {
    return new KGuiItem(KStandardGuiItem::find());
}

KGuiItem* KStandardGuiItem_Stop() {
    return new KGuiItem(KStandardGuiItem::stop());
}

KGuiItem* KStandardGuiItem_Add() {
    return new KGuiItem(KStandardGuiItem::add());
}

KGuiItem* KStandardGuiItem_Remove() {
    return new KGuiItem(KStandardGuiItem::remove());
}

KGuiItem* KStandardGuiItem_Test() {
    return new KGuiItem(KStandardGuiItem::test());
}

void KStandardGuiItem_Assign(QPushButton* param1, int param2) {
    KStandardGuiItem::assign(param1, static_cast<KStandardGuiItem::StandardItem>(param2));
}
