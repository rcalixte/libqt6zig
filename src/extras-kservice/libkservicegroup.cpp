#include <KServiceGroup>
#include <KSycocaEntry>
#include <QList>
#include <QSharedData>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kservicegroup.h>
#include "libkservicegroup.h"
#include "libkservicegroup.hxx"

KServiceGroup* KServiceGroup_new(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new KServiceGroup(name_QString);
}

KServiceGroup* KServiceGroup_new2(const libqt_string _fullpath, const libqt_string _relpath) {
    QString _fullpath_QString = QString::fromUtf8(_fullpath.data, _fullpath.len);
    QString _relpath_QString = QString::fromUtf8(_relpath.data, _relpath.len);
    return new KServiceGroup(_fullpath_QString, _relpath_QString);
}

libqt_string KServiceGroup_RelPath(const KServiceGroup* self) {
    QString _ret = self->relPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KServiceGroup_Caption(const KServiceGroup* self) {
    QString _ret = self->caption();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KServiceGroup_Icon(const KServiceGroup* self) {
    QString _ret = self->icon();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KServiceGroup_Comment(const KServiceGroup* self) {
    QString _ret = self->comment();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KServiceGroup_ChildCount(const KServiceGroup* self) {
    return self->childCount();
}

bool KServiceGroup_NoDisplay(const KServiceGroup* self) {
    return self->noDisplay();
}

bool KServiceGroup_ShowEmptyMenu(const KServiceGroup* self) {
    return self->showEmptyMenu();
}

void KServiceGroup_SetShowEmptyMenu(KServiceGroup* self, bool b) {
    self->setShowEmptyMenu(b);
}

bool KServiceGroup_ShowInlineHeader(const KServiceGroup* self) {
    return self->showInlineHeader();
}

void KServiceGroup_SetShowInlineHeader(KServiceGroup* self, bool _b) {
    self->setShowInlineHeader(_b);
}

bool KServiceGroup_InlineAlias(const KServiceGroup* self) {
    return self->inlineAlias();
}

void KServiceGroup_SetInlineAlias(KServiceGroup* self, bool _b) {
    self->setInlineAlias(_b);
}

bool KServiceGroup_AllowInline(const KServiceGroup* self) {
    return self->allowInline();
}

void KServiceGroup_SetAllowInline(KServiceGroup* self, bool _b) {
    self->setAllowInline(_b);
}

int KServiceGroup_InlineValue(const KServiceGroup* self) {
    return self->inlineValue();
}

void KServiceGroup_SetInlineValue(KServiceGroup* self, int _val) {
    self->setInlineValue(static_cast<int>(_val));
}

libqt_list /* of libqt_string */ KServiceGroup_SuppressGenericNames(const KServiceGroup* self) {
    QList<QString> _ret = self->suppressGenericNames();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KServiceGroup_SetLayoutInfo(KServiceGroup* self, const libqt_list /* of libqt_string */ layout) {
    QList<QString> layout_QList;
    layout_QList.reserve(layout.len);
    libqt_string* layout_arr = static_cast<libqt_string*>(layout.data);
    for (size_t i = 0; i < layout.len; ++i) {
        QString layout_arr_i_QString = QString::fromUtf8(layout_arr[i].data, layout_arr[i].len);
        layout_QList.push_back(layout_arr_i_QString);
    }
    self->setLayoutInfo(layout_QList);
}

libqt_list /* of libqt_string */ KServiceGroup_LayoutInfo(const KServiceGroup* self) {
    QList<QString> _ret = self->layoutInfo();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string KServiceGroup_BaseGroupName(const KServiceGroup* self) {
    QString _ret = self->baseGroupName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KServiceGroup_DirectoryEntryPath(const KServiceGroup* self) {
    QString _ret = self->directoryEntryPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KServiceGroup_Delete(KServiceGroup* self) {
    delete self;
}
