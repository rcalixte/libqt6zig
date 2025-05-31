#define WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State
#include <QAccessibleActionInterface>
#include <QAccessibleInterface>
#include <QAccessibleObject>
#include <QAccessibleWidget>
#include <QColor>
#include <QList>
#include <QObject>
#include <QPair>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <QWindow>
#include <qaccessiblewidget.h>
#include "libqaccessiblewidget.h"
#include "libqaccessiblewidget.hxx"

QAccessibleWidget* QAccessibleWidget_new(QWidget* o) {
    return new QAccessibleWidget(o);
}

QAccessibleWidget* QAccessibleWidget_new2(QWidget* o, int r) {
    return new QAccessibleWidget(o, static_cast<QAccessible::Role>(r));
}

QAccessibleWidget* QAccessibleWidget_new3(QWidget* o, int r, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QAccessibleWidget(o, static_cast<QAccessible::Role>(r), name_QString);
}

bool QAccessibleWidget_IsValid(const QAccessibleWidget* self) {
    return self->isValid();
}

QWindow* QAccessibleWidget_Window(const QAccessibleWidget* self) {
    return self->window();
}

int QAccessibleWidget_ChildCount(const QAccessibleWidget* self) {
    return self->childCount();
}

int QAccessibleWidget_IndexOfChild(const QAccessibleWidget* self, const QAccessibleInterface* child) {
    return self->indexOfChild(child);
}

libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int  */ QAccessibleWidget_Relations(const QAccessibleWidget* self, int match) {
    QList<QPair<QAccessibleInterface*, QAccessible::Relation>> _ret = self->relations(static_cast<QAccessible::Relation>(match));
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_pair /* tuple of QAccessibleInterface* and int */* _arr = static_cast<libqt_pair /* tuple of QAccessibleInterface* and int */*>(malloc(sizeof(libqt_pair /* tuple of QAccessibleInterface* and int */) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        QAccessibleInterface** _lv_first = static_cast<QAccessibleInterface**>(malloc(sizeof(QAccessibleInterface*)));
        int* _lv_second = static_cast<int*>(malloc(sizeof(int)));
        *_lv_first = _lv_ret.first;
        *_lv_second = static_cast<int>(_lv_ret.second);
        libqt_pair _lv_out;
        _lv_out.first = static_cast<void*>(_lv_first);
        _lv_out.second = static_cast<void*>(_lv_second);
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QAccessibleInterface* QAccessibleWidget_FocusChild(const QAccessibleWidget* self) {
    return self->focusChild();
}

QRect* QAccessibleWidget_Rect(const QAccessibleWidget* self) {
    return new QRect(self->rect());
}

QAccessibleInterface* QAccessibleWidget_Parent(const QAccessibleWidget* self) {
    return self->parent();
}

QAccessibleInterface* QAccessibleWidget_Child(const QAccessibleWidget* self, int index) {
    return self->child(static_cast<int>(index));
}

libqt_string QAccessibleWidget_Text(const QAccessibleWidget* self, int t) {
    QString _ret = self->text(static_cast<QAccessible::Text>(t));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QAccessibleWidget_Role(const QAccessibleWidget* self) {
    return static_cast<int>(self->role());
}

QAccessible__State* QAccessibleWidget_State(const QAccessibleWidget* self) {
    return new QAccessible::State(self->state());
}

QColor* QAccessibleWidget_ForegroundColor(const QAccessibleWidget* self) {
    return new QColor(self->foregroundColor());
}

QColor* QAccessibleWidget_BackgroundColor(const QAccessibleWidget* self) {
    return new QColor(self->backgroundColor());
}

void* QAccessibleWidget_InterfaceCast(QAccessibleWidget* self, int t) {
    return self->interface_cast(static_cast<QAccessible::InterfaceType>(t));
}

libqt_list /* of libqt_string */ QAccessibleWidget_ActionNames(const QAccessibleWidget* self) {
    QStringList _ret = self->actionNames();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QAccessibleWidget_DoAction(QAccessibleWidget* self, const libqt_string actionName) {
    QString actionName_QString = QString::fromUtf8(actionName.data, actionName.len);
    self->doAction(actionName_QString);
}

libqt_list /* of libqt_string */ QAccessibleWidget_KeyBindingsForAction(const QAccessibleWidget* self, const libqt_string actionName) {
    QString actionName_QString = QString::fromUtf8(actionName.data, actionName.len);
    QStringList _ret = self->keyBindingsForAction(actionName_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}
