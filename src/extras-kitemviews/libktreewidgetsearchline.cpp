#include <KTreeWidgetSearchLine>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QLineEdit>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <ktreewidgetsearchline.h>
#include "libktreewidgetsearchline.h"
#include "libktreewidgetsearchline.hxx"

KTreeWidgetSearchLine* KTreeWidgetSearchLine_new(QWidget* parent) {
    return new VirtualKTreeWidgetSearchLine(parent);
}

KTreeWidgetSearchLine* KTreeWidgetSearchLine_new2() {
    return new VirtualKTreeWidgetSearchLine();
}

KTreeWidgetSearchLine* KTreeWidgetSearchLine_new3(QWidget* parent, const libqt_list /* of QTreeWidget* */ treeWidgets) {
    QList<QTreeWidget*> treeWidgets_QList;
    treeWidgets_QList.reserve(treeWidgets.len);
    QTreeWidget** treeWidgets_arr = static_cast<QTreeWidget**>(treeWidgets.data);
    for (size_t i = 0; i < treeWidgets.len; ++i) {
        treeWidgets_QList.push_back(treeWidgets_arr[i]);
    }
    return new VirtualKTreeWidgetSearchLine(parent, treeWidgets_QList);
}

KTreeWidgetSearchLine* KTreeWidgetSearchLine_new4(QWidget* parent, QTreeWidget* treeWidget) {
    return new VirtualKTreeWidgetSearchLine(parent, treeWidget);
}

QMetaObject* KTreeWidgetSearchLine_MetaObject(const KTreeWidgetSearchLine* self) {
    return (QMetaObject*)self->metaObject();
}

void* KTreeWidgetSearchLine_Metacast(KTreeWidgetSearchLine* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KTreeWidgetSearchLine_Metacall(KTreeWidgetSearchLine* self, int param1, int param2, void** param3) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KTreeWidgetSearchLine_OnMetacall(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_Metacall_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KTreeWidgetSearchLine_QBaseMetacall(KTreeWidgetSearchLine* self, int param1, int param2, void** param3) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_Metacall_IsBase(true);
        return vktreewidgetsearchline->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KTreeWidgetSearchLine_Tr(const char* s) {
    QString _ret = KTreeWidgetSearchLine::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KTreeWidgetSearchLine_CaseSensitivity(const KTreeWidgetSearchLine* self) {
    return static_cast<int>(self->caseSensitivity());
}

libqt_list /* of int */ KTreeWidgetSearchLine_SearchColumns(const KTreeWidgetSearchLine* self) {
    QList<int> _ret = self->searchColumns();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool KTreeWidgetSearchLine_KeepParentsVisible(const KTreeWidgetSearchLine* self) {
    return self->keepParentsVisible();
}

QTreeWidget* KTreeWidgetSearchLine_TreeWidget(const KTreeWidgetSearchLine* self) {
    return self->treeWidget();
}

libqt_list /* of QTreeWidget* */ KTreeWidgetSearchLine_TreeWidgets(const KTreeWidgetSearchLine* self) {
    QList<QTreeWidget*> _ret = self->treeWidgets();
    // Convert QList<> from C++ memory to manually-managed C memory
    QTreeWidget** _arr = static_cast<QTreeWidget**>(malloc(sizeof(QTreeWidget*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KTreeWidgetSearchLine_HiddenChanged(KTreeWidgetSearchLine* self, QTreeWidgetItem* param1, bool param2) {
    self->hiddenChanged(param1, param2);
}

void KTreeWidgetSearchLine_Connect_HiddenChanged(KTreeWidgetSearchLine* self, intptr_t slot) {
    void (*slotFunc)(KTreeWidgetSearchLine*, QTreeWidgetItem*, bool) = reinterpret_cast<void (*)(KTreeWidgetSearchLine*, QTreeWidgetItem*, bool)>(slot);
    KTreeWidgetSearchLine::connect(self, &KTreeWidgetSearchLine::hiddenChanged, [self, slotFunc](QTreeWidgetItem* param1, bool param2) {
        QTreeWidgetItem* sigval1 = param1;
        bool sigval2 = param2;
        slotFunc(self, sigval1, sigval2);
    });
}

void KTreeWidgetSearchLine_SearchUpdated(KTreeWidgetSearchLine* self, const libqt_string searchString) {
    QString searchString_QString = QString::fromUtf8(searchString.data, searchString.len);
    self->searchUpdated(searchString_QString);
}

void KTreeWidgetSearchLine_Connect_SearchUpdated(KTreeWidgetSearchLine* self, intptr_t slot) {
    void (*slotFunc)(KTreeWidgetSearchLine*, const char*) = reinterpret_cast<void (*)(KTreeWidgetSearchLine*, const char*)>(slot);
    KTreeWidgetSearchLine::connect(self, &KTreeWidgetSearchLine::searchUpdated, [self, slotFunc](const QString& searchString) {
        const QString searchString_ret = searchString;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray searchString_b = searchString_ret.toUtf8();
        const char* searchString_str = static_cast<const char*>(malloc(searchString_b.length() + 1));
        memcpy((void*)searchString_str, searchString_b.data(), searchString_b.length());
        ((char*)searchString_str)[searchString_b.length()] = '\0';
        const char* sigval1 = searchString_str;
        slotFunc(self, sigval1);
        libqt_free(searchString_str);
    });
}

void KTreeWidgetSearchLine_CaseSensitivityChanged(KTreeWidgetSearchLine* self, int caseSensitivity) {
    self->caseSensitivityChanged(static_cast<Qt::CaseSensitivity>(caseSensitivity));
}

void KTreeWidgetSearchLine_Connect_CaseSensitivityChanged(KTreeWidgetSearchLine* self, intptr_t slot) {
    void (*slotFunc)(KTreeWidgetSearchLine*, int) = reinterpret_cast<void (*)(KTreeWidgetSearchLine*, int)>(slot);
    KTreeWidgetSearchLine::connect(self, &KTreeWidgetSearchLine::caseSensitivityChanged, [self, slotFunc](Qt::CaseSensitivity caseSensitivity) {
        int sigval1 = static_cast<int>(caseSensitivity);
        slotFunc(self, sigval1);
    });
}

void KTreeWidgetSearchLine_KeepParentsVisibleChanged(KTreeWidgetSearchLine* self, bool keepParentsVisible) {
    self->keepParentsVisibleChanged(keepParentsVisible);
}

void KTreeWidgetSearchLine_Connect_KeepParentsVisibleChanged(KTreeWidgetSearchLine* self, intptr_t slot) {
    void (*slotFunc)(KTreeWidgetSearchLine*, bool) = reinterpret_cast<void (*)(KTreeWidgetSearchLine*, bool)>(slot);
    KTreeWidgetSearchLine::connect(self, &KTreeWidgetSearchLine::keepParentsVisibleChanged, [self, slotFunc](bool keepParentsVisible) {
        bool sigval1 = keepParentsVisible;
        slotFunc(self, sigval1);
    });
}

void KTreeWidgetSearchLine_AddTreeWidget(KTreeWidgetSearchLine* self, QTreeWidget* treeWidget) {
    self->addTreeWidget(treeWidget);
}

void KTreeWidgetSearchLine_RemoveTreeWidget(KTreeWidgetSearchLine* self, QTreeWidget* treeWidget) {
    self->removeTreeWidget(treeWidget);
}

void KTreeWidgetSearchLine_SetCaseSensitivity(KTreeWidgetSearchLine* self, int caseSensitivity) {
    self->setCaseSensitivity(static_cast<Qt::CaseSensitivity>(caseSensitivity));
}

void KTreeWidgetSearchLine_SetKeepParentsVisible(KTreeWidgetSearchLine* self, bool value) {
    self->setKeepParentsVisible(value);
}

void KTreeWidgetSearchLine_SetSearchColumns(KTreeWidgetSearchLine* self, const libqt_list /* of int */ columns) {
    QList<int> columns_QList;
    columns_QList.reserve(columns.len);
    int* columns_arr = static_cast<int*>(columns.data);
    for (size_t i = 0; i < columns.len; ++i) {
        columns_QList.push_back(static_cast<int>(columns_arr[i]));
    }
    self->setSearchColumns(columns_QList);
}

void KTreeWidgetSearchLine_SetTreeWidget(KTreeWidgetSearchLine* self, QTreeWidget* treeWidget) {
    self->setTreeWidget(treeWidget);
}

void KTreeWidgetSearchLine_SetTreeWidgets(KTreeWidgetSearchLine* self, const libqt_list /* of QTreeWidget* */ treeWidgets) {
    QList<QTreeWidget*> treeWidgets_QList;
    treeWidgets_QList.reserve(treeWidgets.len);
    QTreeWidget** treeWidgets_arr = static_cast<QTreeWidget**>(treeWidgets.data);
    for (size_t i = 0; i < treeWidgets.len; ++i) {
        treeWidgets_QList.push_back(treeWidgets_arr[i]);
    }
    self->setTreeWidgets(treeWidgets_QList);
}

libqt_string KTreeWidgetSearchLine_Tr2(const char* s, const char* c) {
    QString _ret = KTreeWidgetSearchLine::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTreeWidgetSearchLine_Tr3(const char* s, const char* c, int n) {
    QString _ret = KTreeWidgetSearchLine::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void KTreeWidgetSearchLine_UpdateSearch(KTreeWidgetSearchLine* self, const libqt_string pattern) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->updateSearch(pattern_QString);
    } else {
        self->KTreeWidgetSearchLine::updateSearch(pattern_QString);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseUpdateSearch(KTreeWidgetSearchLine* self, const libqt_string pattern) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_UpdateSearch_IsBase(true);
        vktreewidgetsearchline->updateSearch(pattern_QString);
    } else {
        self->KTreeWidgetSearchLine::updateSearch(pattern_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnUpdateSearch(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_UpdateSearch_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_UpdateSearch_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTreeWidgetSearchLine_ItemMatches(const KTreeWidgetSearchLine* self, const QTreeWidgetItem* item, const libqt_string pattern) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return vktreewidgetsearchline->itemMatches(item, pattern_QString);
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->itemMatches(item, pattern_QString);
    }
}

// Base class handler implementation
bool KTreeWidgetSearchLine_QBaseItemMatches(const KTreeWidgetSearchLine* self, const QTreeWidgetItem* item, const libqt_string pattern) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_ItemMatches_IsBase(true);
        return vktreewidgetsearchline->itemMatches(item, pattern_QString);
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->itemMatches(item, pattern_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnItemMatches(const KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_ItemMatches_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_ItemMatches_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_ContextMenuEvent(KTreeWidgetSearchLine* self, QContextMenuEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->contextMenuEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseContextMenuEvent(KTreeWidgetSearchLine* self, QContextMenuEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_ContextMenuEvent_IsBase(true);
        vktreewidgetsearchline->contextMenuEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnContextMenuEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_ContextMenuEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_UpdateSearch2(KTreeWidgetSearchLine* self, QTreeWidget* treeWidget) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->updateSearch(treeWidget);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->updateSearch(treeWidget);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseUpdateSearch2(KTreeWidgetSearchLine* self, QTreeWidget* treeWidget) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_UpdateSearch2_IsBase(true);
        vktreewidgetsearchline->updateSearch(treeWidget);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->updateSearch(treeWidget);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnUpdateSearch2(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_UpdateSearch2_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_UpdateSearch2_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_ConnectTreeWidget(KTreeWidgetSearchLine* self, QTreeWidget* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->connectTreeWidget(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->connectTreeWidget(param1);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseConnectTreeWidget(KTreeWidgetSearchLine* self, QTreeWidget* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_ConnectTreeWidget_IsBase(true);
        vktreewidgetsearchline->connectTreeWidget(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->connectTreeWidget(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnConnectTreeWidget(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_ConnectTreeWidget_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_ConnectTreeWidget_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_DisconnectTreeWidget(KTreeWidgetSearchLine* self, QTreeWidget* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->disconnectTreeWidget(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->disconnectTreeWidget(param1);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseDisconnectTreeWidget(KTreeWidgetSearchLine* self, QTreeWidget* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_DisconnectTreeWidget_IsBase(true);
        vktreewidgetsearchline->disconnectTreeWidget(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->disconnectTreeWidget(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnDisconnectTreeWidget(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_DisconnectTreeWidget_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_DisconnectTreeWidget_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTreeWidgetSearchLine_CanChooseColumnsCheck(KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return vktreewidgetsearchline->canChooseColumnsCheck();
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->canChooseColumnsCheck();
    }
}

// Base class handler implementation
bool KTreeWidgetSearchLine_QBaseCanChooseColumnsCheck(KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_CanChooseColumnsCheck_IsBase(true);
        return vktreewidgetsearchline->canChooseColumnsCheck();
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->canChooseColumnsCheck();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnCanChooseColumnsCheck(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_CanChooseColumnsCheck_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_CanChooseColumnsCheck_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTreeWidgetSearchLine_Event(KTreeWidgetSearchLine* self, QEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return vktreewidgetsearchline->event(event);
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->event(event);
    }
}

// Base class handler implementation
bool KTreeWidgetSearchLine_QBaseEvent(KTreeWidgetSearchLine* self, QEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_Event_IsBase(true);
        return vktreewidgetsearchline->event(event);
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_Event_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_Event_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KTreeWidgetSearchLine_SizeHint(const KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return new QSize(vktreewidgetsearchline->sizeHint());
    } else {
        return new QSize(((VirtualKTreeWidgetSearchLine*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KTreeWidgetSearchLine_QBaseSizeHint(const KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_SizeHint_IsBase(true);
        return new QSize(vktreewidgetsearchline->sizeHint());
    } else {
        return new QSize(((VirtualKTreeWidgetSearchLine*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnSizeHint(const KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_SizeHint_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KTreeWidgetSearchLine_MinimumSizeHint(const KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return new QSize(vktreewidgetsearchline->minimumSizeHint());
    } else {
        return new QSize(((VirtualKTreeWidgetSearchLine*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KTreeWidgetSearchLine_QBaseMinimumSizeHint(const KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_MinimumSizeHint_IsBase(true);
        return new QSize(vktreewidgetsearchline->minimumSizeHint());
    } else {
        return new QSize(((VirtualKTreeWidgetSearchLine*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnMinimumSizeHint(const KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_MinimumSizeHint_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_MousePressEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->mousePressEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->mousePressEvent(param1);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseMousePressEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_MousePressEvent_IsBase(true);
        vktreewidgetsearchline->mousePressEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnMousePressEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_MousePressEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_MouseMoveEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->mouseMoveEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseMouseMoveEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_MouseMoveEvent_IsBase(true);
        vktreewidgetsearchline->mouseMoveEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnMouseMoveEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_MouseMoveEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_MouseReleaseEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->mouseReleaseEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseMouseReleaseEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_MouseReleaseEvent_IsBase(true);
        vktreewidgetsearchline->mouseReleaseEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnMouseReleaseEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_MouseDoubleClickEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->mouseDoubleClickEvent(param1);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseMouseDoubleClickEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_MouseDoubleClickEvent_IsBase(true);
        vktreewidgetsearchline->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->mouseDoubleClickEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnMouseDoubleClickEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_KeyPressEvent(KTreeWidgetSearchLine* self, QKeyEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->keyPressEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseKeyPressEvent(KTreeWidgetSearchLine* self, QKeyEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_KeyPressEvent_IsBase(true);
        vktreewidgetsearchline->keyPressEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnKeyPressEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_KeyPressEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_KeyReleaseEvent(KTreeWidgetSearchLine* self, QKeyEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->keyReleaseEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->keyReleaseEvent(param1);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseKeyReleaseEvent(KTreeWidgetSearchLine* self, QKeyEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_KeyReleaseEvent_IsBase(true);
        vktreewidgetsearchline->keyReleaseEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->keyReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnKeyReleaseEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_FocusInEvent(KTreeWidgetSearchLine* self, QFocusEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->focusInEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->focusInEvent(param1);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseFocusInEvent(KTreeWidgetSearchLine* self, QFocusEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_FocusInEvent_IsBase(true);
        vktreewidgetsearchline->focusInEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnFocusInEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_FocusInEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_FocusOutEvent(KTreeWidgetSearchLine* self, QFocusEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->focusOutEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->focusOutEvent(param1);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseFocusOutEvent(KTreeWidgetSearchLine* self, QFocusEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_FocusOutEvent_IsBase(true);
        vktreewidgetsearchline->focusOutEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->focusOutEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnFocusOutEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_FocusOutEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_PaintEvent(KTreeWidgetSearchLine* self, QPaintEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->paintEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBasePaintEvent(KTreeWidgetSearchLine* self, QPaintEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_PaintEvent_IsBase(true);
        vktreewidgetsearchline->paintEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnPaintEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_PaintEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_DragEnterEvent(KTreeWidgetSearchLine* self, QDragEnterEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->dragEnterEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->dragEnterEvent(param1);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseDragEnterEvent(KTreeWidgetSearchLine* self, QDragEnterEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_DragEnterEvent_IsBase(true);
        vktreewidgetsearchline->dragEnterEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->dragEnterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnDragEnterEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_DragEnterEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_DragMoveEvent(KTreeWidgetSearchLine* self, QDragMoveEvent* e) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->dragMoveEvent(e);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->dragMoveEvent(e);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseDragMoveEvent(KTreeWidgetSearchLine* self, QDragMoveEvent* e) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_DragMoveEvent_IsBase(true);
        vktreewidgetsearchline->dragMoveEvent(e);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnDragMoveEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_DragMoveEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_DragLeaveEvent(KTreeWidgetSearchLine* self, QDragLeaveEvent* e) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->dragLeaveEvent(e);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseDragLeaveEvent(KTreeWidgetSearchLine* self, QDragLeaveEvent* e) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_DragLeaveEvent_IsBase(true);
        vktreewidgetsearchline->dragLeaveEvent(e);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnDragLeaveEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_DragLeaveEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_DropEvent(KTreeWidgetSearchLine* self, QDropEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->dropEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->dropEvent(param1);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseDropEvent(KTreeWidgetSearchLine* self, QDropEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_DropEvent_IsBase(true);
        vktreewidgetsearchline->dropEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->dropEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnDropEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_DropEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_ChangeEvent(KTreeWidgetSearchLine* self, QEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->changeEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseChangeEvent(KTreeWidgetSearchLine* self, QEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_ChangeEvent_IsBase(true);
        vktreewidgetsearchline->changeEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnChangeEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_ChangeEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_InputMethodEvent(KTreeWidgetSearchLine* self, QInputMethodEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->inputMethodEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseInputMethodEvent(KTreeWidgetSearchLine* self, QInputMethodEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_InputMethodEvent_IsBase(true);
        vktreewidgetsearchline->inputMethodEvent(param1);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnInputMethodEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_InputMethodEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_InitStyleOption(const KTreeWidgetSearchLine* self, QStyleOptionFrame* option) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->initStyleOption(option);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseInitStyleOption(const KTreeWidgetSearchLine* self, QStyleOptionFrame* option) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_InitStyleOption_IsBase(true);
        vktreewidgetsearchline->initStyleOption(option);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnInitStyleOption(const KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_InitStyleOption_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KTreeWidgetSearchLine_InputMethodQuery(const KTreeWidgetSearchLine* self, int param1) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return new QVariant(vktreewidgetsearchline->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKTreeWidgetSearchLine*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KTreeWidgetSearchLine_QBaseInputMethodQuery(const KTreeWidgetSearchLine* self, int param1) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_InputMethodQuery_IsBase(true);
        return new QVariant(vktreewidgetsearchline->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKTreeWidgetSearchLine*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnInputMethodQuery(const KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_InputMethodQuery_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_TimerEvent(KTreeWidgetSearchLine* self, QTimerEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->timerEvent(param1);
    } else {
        self->KTreeWidgetSearchLine::timerEvent(param1);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseTimerEvent(KTreeWidgetSearchLine* self, QTimerEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_TimerEvent_IsBase(true);
        vktreewidgetsearchline->timerEvent(param1);
    } else {
        self->KTreeWidgetSearchLine::timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnTimerEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_TimerEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KTreeWidgetSearchLine_DevType(const KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return vktreewidgetsearchline->devType();
    } else {
        return self->KTreeWidgetSearchLine::devType();
    }
}

// Base class handler implementation
int KTreeWidgetSearchLine_QBaseDevType(const KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_DevType_IsBase(true);
        return vktreewidgetsearchline->devType();
    } else {
        return self->KTreeWidgetSearchLine::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnDevType(const KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_DevType_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_SetVisible(KTreeWidgetSearchLine* self, bool visible) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setVisible(visible);
    } else {
        self->KTreeWidgetSearchLine::setVisible(visible);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseSetVisible(KTreeWidgetSearchLine* self, bool visible) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_SetVisible_IsBase(true);
        vktreewidgetsearchline->setVisible(visible);
    } else {
        self->KTreeWidgetSearchLine::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnSetVisible(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_SetVisible_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KTreeWidgetSearchLine_HeightForWidth(const KTreeWidgetSearchLine* self, int param1) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return vktreewidgetsearchline->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KTreeWidgetSearchLine::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KTreeWidgetSearchLine_QBaseHeightForWidth(const KTreeWidgetSearchLine* self, int param1) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_HeightForWidth_IsBase(true);
        return vktreewidgetsearchline->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KTreeWidgetSearchLine::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnHeightForWidth(const KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_HeightForWidth_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTreeWidgetSearchLine_HasHeightForWidth(const KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return vktreewidgetsearchline->hasHeightForWidth();
    } else {
        return self->KTreeWidgetSearchLine::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KTreeWidgetSearchLine_QBaseHasHeightForWidth(const KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_HasHeightForWidth_IsBase(true);
        return vktreewidgetsearchline->hasHeightForWidth();
    } else {
        return self->KTreeWidgetSearchLine::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnHasHeightForWidth(const KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_HasHeightForWidth_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KTreeWidgetSearchLine_PaintEngine(const KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return vktreewidgetsearchline->paintEngine();
    } else {
        return self->KTreeWidgetSearchLine::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KTreeWidgetSearchLine_QBasePaintEngine(const KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_PaintEngine_IsBase(true);
        return vktreewidgetsearchline->paintEngine();
    } else {
        return self->KTreeWidgetSearchLine::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnPaintEngine(const KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_PaintEngine_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_WheelEvent(KTreeWidgetSearchLine* self, QWheelEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->wheelEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseWheelEvent(KTreeWidgetSearchLine* self, QWheelEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_WheelEvent_IsBase(true);
        vktreewidgetsearchline->wheelEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnWheelEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_WheelEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_EnterEvent(KTreeWidgetSearchLine* self, QEnterEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->enterEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseEnterEvent(KTreeWidgetSearchLine* self, QEnterEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_EnterEvent_IsBase(true);
        vktreewidgetsearchline->enterEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnEnterEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_EnterEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_LeaveEvent(KTreeWidgetSearchLine* self, QEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->leaveEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseLeaveEvent(KTreeWidgetSearchLine* self, QEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_LeaveEvent_IsBase(true);
        vktreewidgetsearchline->leaveEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnLeaveEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_LeaveEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_MoveEvent(KTreeWidgetSearchLine* self, QMoveEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->moveEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseMoveEvent(KTreeWidgetSearchLine* self, QMoveEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_MoveEvent_IsBase(true);
        vktreewidgetsearchline->moveEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnMoveEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_MoveEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_ResizeEvent(KTreeWidgetSearchLine* self, QResizeEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->resizeEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseResizeEvent(KTreeWidgetSearchLine* self, QResizeEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_ResizeEvent_IsBase(true);
        vktreewidgetsearchline->resizeEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnResizeEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_ResizeEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_CloseEvent(KTreeWidgetSearchLine* self, QCloseEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->closeEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseCloseEvent(KTreeWidgetSearchLine* self, QCloseEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_CloseEvent_IsBase(true);
        vktreewidgetsearchline->closeEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnCloseEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_CloseEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_TabletEvent(KTreeWidgetSearchLine* self, QTabletEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->tabletEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseTabletEvent(KTreeWidgetSearchLine* self, QTabletEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_TabletEvent_IsBase(true);
        vktreewidgetsearchline->tabletEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnTabletEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_TabletEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_ActionEvent(KTreeWidgetSearchLine* self, QActionEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->actionEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseActionEvent(KTreeWidgetSearchLine* self, QActionEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_ActionEvent_IsBase(true);
        vktreewidgetsearchline->actionEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnActionEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_ActionEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_ShowEvent(KTreeWidgetSearchLine* self, QShowEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->showEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseShowEvent(KTreeWidgetSearchLine* self, QShowEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_ShowEvent_IsBase(true);
        vktreewidgetsearchline->showEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnShowEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_ShowEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_HideEvent(KTreeWidgetSearchLine* self, QHideEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->hideEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseHideEvent(KTreeWidgetSearchLine* self, QHideEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_HideEvent_IsBase(true);
        vktreewidgetsearchline->hideEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnHideEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_HideEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTreeWidgetSearchLine_NativeEvent(KTreeWidgetSearchLine* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return vktreewidgetsearchline->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KTreeWidgetSearchLine_QBaseNativeEvent(KTreeWidgetSearchLine* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_NativeEvent_IsBase(true);
        return vktreewidgetsearchline->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnNativeEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_NativeEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KTreeWidgetSearchLine_Metric(const KTreeWidgetSearchLine* self, int param1) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return vktreewidgetsearchline->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KTreeWidgetSearchLine_QBaseMetric(const KTreeWidgetSearchLine* self, int param1) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_Metric_IsBase(true);
        return vktreewidgetsearchline->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnMetric(const KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_Metric_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_InitPainter(const KTreeWidgetSearchLine* self, QPainter* painter) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->initPainter(painter);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseInitPainter(const KTreeWidgetSearchLine* self, QPainter* painter) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_InitPainter_IsBase(true);
        vktreewidgetsearchline->initPainter(painter);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnInitPainter(const KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_InitPainter_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KTreeWidgetSearchLine_Redirected(const KTreeWidgetSearchLine* self, QPoint* offset) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return vktreewidgetsearchline->redirected(offset);
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KTreeWidgetSearchLine_QBaseRedirected(const KTreeWidgetSearchLine* self, QPoint* offset) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_Redirected_IsBase(true);
        return vktreewidgetsearchline->redirected(offset);
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnRedirected(const KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_Redirected_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KTreeWidgetSearchLine_SharedPainter(const KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return vktreewidgetsearchline->sharedPainter();
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KTreeWidgetSearchLine_QBaseSharedPainter(const KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_SharedPainter_IsBase(true);
        return vktreewidgetsearchline->sharedPainter();
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnSharedPainter(const KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_SharedPainter_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTreeWidgetSearchLine_FocusNextPrevChild(KTreeWidgetSearchLine* self, bool next) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return vktreewidgetsearchline->focusNextPrevChild(next);
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KTreeWidgetSearchLine_QBaseFocusNextPrevChild(KTreeWidgetSearchLine* self, bool next) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_FocusNextPrevChild_IsBase(true);
        return vktreewidgetsearchline->focusNextPrevChild(next);
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnFocusNextPrevChild(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTreeWidgetSearchLine_EventFilter(KTreeWidgetSearchLine* self, QObject* watched, QEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return vktreewidgetsearchline->eventFilter(watched, event);
    } else {
        return self->KTreeWidgetSearchLine::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KTreeWidgetSearchLine_QBaseEventFilter(KTreeWidgetSearchLine* self, QObject* watched, QEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_EventFilter_IsBase(true);
        return vktreewidgetsearchline->eventFilter(watched, event);
    } else {
        return self->KTreeWidgetSearchLine::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnEventFilter(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_EventFilter_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_ChildEvent(KTreeWidgetSearchLine* self, QChildEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->childEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseChildEvent(KTreeWidgetSearchLine* self, QChildEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_ChildEvent_IsBase(true);
        vktreewidgetsearchline->childEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnChildEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_ChildEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_CustomEvent(KTreeWidgetSearchLine* self, QEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->customEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseCustomEvent(KTreeWidgetSearchLine* self, QEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_CustomEvent_IsBase(true);
        vktreewidgetsearchline->customEvent(event);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnCustomEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_CustomEvent_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_ConnectNotify(KTreeWidgetSearchLine* self, const QMetaMethod* signal) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->connectNotify(*signal);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseConnectNotify(KTreeWidgetSearchLine* self, const QMetaMethod* signal) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_ConnectNotify_IsBase(true);
        vktreewidgetsearchline->connectNotify(*signal);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnConnectNotify(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_ConnectNotify_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_DisconnectNotify(KTreeWidgetSearchLine* self, const QMetaMethod* signal) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->disconnectNotify(*signal);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseDisconnectNotify(KTreeWidgetSearchLine* self, const QMetaMethod* signal) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_DisconnectNotify_IsBase(true);
        vktreewidgetsearchline->disconnectNotify(*signal);
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnDisconnectNotify(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_DisconnectNotify_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* KTreeWidgetSearchLine_CursorRect(const KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return new QRect(vktreewidgetsearchline->cursorRect());
    }
    return {};
}

// Base class handler implementation
QRect* KTreeWidgetSearchLine_QBaseCursorRect(const KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_CursorRect_IsBase(true);
        return new QRect(vktreewidgetsearchline->cursorRect());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnCursorRect(const KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_CursorRect_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_CursorRect_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_UpdateMicroFocus(KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->updateMicroFocus();
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseUpdateMicroFocus(KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_UpdateMicroFocus_IsBase(true);
        vktreewidgetsearchline->updateMicroFocus();
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnUpdateMicroFocus(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_Create(KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->create();
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->create();
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseCreate(KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_Create_IsBase(true);
        vktreewidgetsearchline->create();
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnCreate(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_Create_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KTreeWidgetSearchLine_Destroy(KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->destroy();
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->destroy();
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_QBaseDestroy(KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_Destroy_IsBase(true);
        vktreewidgetsearchline->destroy();
    } else {
        ((VirtualKTreeWidgetSearchLine*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnDestroy(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_Destroy_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTreeWidgetSearchLine_FocusNextChild(KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return vktreewidgetsearchline->focusNextChild();
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KTreeWidgetSearchLine_QBaseFocusNextChild(KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_FocusNextChild_IsBase(true);
        return vktreewidgetsearchline->focusNextChild();
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnFocusNextChild(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_FocusNextChild_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTreeWidgetSearchLine_FocusPreviousChild(KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return vktreewidgetsearchline->focusPreviousChild();
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KTreeWidgetSearchLine_QBaseFocusPreviousChild(KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_FocusPreviousChild_IsBase(true);
        return vktreewidgetsearchline->focusPreviousChild();
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnFocusPreviousChild(KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_FocusPreviousChild_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KTreeWidgetSearchLine_Sender(const KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return vktreewidgetsearchline->sender();
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->sender();
    }
}

// Base class handler implementation
QObject* KTreeWidgetSearchLine_QBaseSender(const KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_Sender_IsBase(true);
        return vktreewidgetsearchline->sender();
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnSender(const KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_Sender_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KTreeWidgetSearchLine_SenderSignalIndex(const KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return vktreewidgetsearchline->senderSignalIndex();
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KTreeWidgetSearchLine_QBaseSenderSignalIndex(const KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_SenderSignalIndex_IsBase(true);
        return vktreewidgetsearchline->senderSignalIndex();
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnSenderSignalIndex(const KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_SenderSignalIndex_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KTreeWidgetSearchLine_Receivers(const KTreeWidgetSearchLine* self, const char* signal) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return vktreewidgetsearchline->receivers(signal);
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KTreeWidgetSearchLine_QBaseReceivers(const KTreeWidgetSearchLine* self, const char* signal) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_Receivers_IsBase(true);
        return vktreewidgetsearchline->receivers(signal);
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnReceivers(const KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_Receivers_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTreeWidgetSearchLine_IsSignalConnected(const KTreeWidgetSearchLine* self, const QMetaMethod* signal) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return vktreewidgetsearchline->isSignalConnected(*signal);
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KTreeWidgetSearchLine_QBaseIsSignalConnected(const KTreeWidgetSearchLine* self, const QMetaMethod* signal) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_IsSignalConnected_IsBase(true);
        return vktreewidgetsearchline->isSignalConnected(*signal);
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnIsSignalConnected(const KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_IsSignalConnected_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KTreeWidgetSearchLine_GetDecodedMetricF(const KTreeWidgetSearchLine* self, int metricA, int metricB) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        return vktreewidgetsearchline->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KTreeWidgetSearchLine_QBaseGetDecodedMetricF(const KTreeWidgetSearchLine* self, int metricA, int metricB) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_GetDecodedMetricF_IsBase(true);
        return vktreewidgetsearchline->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKTreeWidgetSearchLine*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnGetDecodedMetricF(const KTreeWidgetSearchLine* self, intptr_t slot) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline && vktreewidgetsearchline->isVirtualKTreeWidgetSearchLine) {
        vktreewidgetsearchline->setKTreeWidgetSearchLine_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_GetDecodedMetricF_Callback>(slot));
    }
}

void KTreeWidgetSearchLine_Delete(KTreeWidgetSearchLine* self) {
    delete self;
}
