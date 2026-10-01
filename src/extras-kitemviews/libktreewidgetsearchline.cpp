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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KTreeWidgetSearchLine_Tr(const char* s) {
    auto _ret = KTreeWidgetSearchLine::tr(s);
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
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
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
    QTreeWidget** _arr = static_cast<QTreeWidget**>(malloc(sizeof(QTreeWidget*) * (_ret.size())));
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
    KTreeWidgetSearchLine::connect(self,
                                   static_cast<void (KTreeWidgetSearchLine::*)(QTreeWidgetItem*, bool)>(&KTreeWidgetSearchLine::hiddenChanged),
                                   [self, slotFunc](QTreeWidgetItem* param1, bool param2) {
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
    KTreeWidgetSearchLine::connect(self,
                                   static_cast<void (KTreeWidgetSearchLine::*)(const QString&)>(&KTreeWidgetSearchLine::searchUpdated),
                                   [self, slotFunc](const QString& searchString) {
                                       const auto searchString_ret = searchString;
                                       // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                       QByteArray searchString_b = searchString_ret.toUtf8();
                                       auto searchString_str_len = searchString_b.length();
                                       const char* searchString_str = static_cast<const char*>(malloc(searchString_str_len + 1));
                                       memcpy((void*)searchString_str, searchString_b.data(), searchString_str_len);
                                       ((char*)searchString_str)[searchString_str_len] = '\0';
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
    KTreeWidgetSearchLine::connect(self,
                                   static_cast<void (KTreeWidgetSearchLine::*)(Qt::CaseSensitivity)>(&KTreeWidgetSearchLine::caseSensitivityChanged),
                                   [self, slotFunc](Qt::CaseSensitivity caseSensitivity) {
                                       int sigval1 = static_cast<int>(caseSensitivity);
                                       slotFunc(self, sigval1);
                                   });
}

void KTreeWidgetSearchLine_KeepParentsVisibleChanged(KTreeWidgetSearchLine* self, bool keepParentsVisible) {
    self->keepParentsVisibleChanged(keepParentsVisible);
}

void KTreeWidgetSearchLine_Connect_KeepParentsVisibleChanged(KTreeWidgetSearchLine* self, intptr_t slot) {
    void (*slotFunc)(KTreeWidgetSearchLine*, bool) = reinterpret_cast<void (*)(KTreeWidgetSearchLine*, bool)>(slot);
    KTreeWidgetSearchLine::connect(self,
                                   static_cast<void (KTreeWidgetSearchLine::*)(bool)>(&KTreeWidgetSearchLine::keepParentsVisibleChanged),
                                   [self, slotFunc](bool keepParentsVisible) {
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

void KTreeWidgetSearchLine_UpdateSearch(KTreeWidgetSearchLine* self, const libqt_string pattern) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    self->updateSearch(pattern_QString);
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

bool KTreeWidgetSearchLine_ItemMatches(const KTreeWidgetSearchLine* self, const QTreeWidgetItem* item, const libqt_string pattern) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    auto* vktreewidgetsearchline = dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        return vktreewidgetsearchline->itemMatches(item, pattern_QString);
    }
    qFatal("Error: Protected method KTreeWidgetSearchLine::itemMatches called without a directly constructed type");
}

void KTreeWidgetSearchLine_ContextMenuEvent(KTreeWidgetSearchLine* self, QContextMenuEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->contextMenuEvent(param1);
    }
}

void KTreeWidgetSearchLine_UpdateSearch2(KTreeWidgetSearchLine* self, QTreeWidget* treeWidget) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->updateSearch(treeWidget);
    }
}

void KTreeWidgetSearchLine_ConnectTreeWidget(KTreeWidgetSearchLine* self, QTreeWidget* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->connectTreeWidget(param1);
    }
}

void KTreeWidgetSearchLine_DisconnectTreeWidget(KTreeWidgetSearchLine* self, QTreeWidget* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->disconnectTreeWidget(param1);
    }
}

bool KTreeWidgetSearchLine_CanChooseColumnsCheck(KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        return vktreewidgetsearchline->canChooseColumnsCheck();
    }
    qFatal("Error: Protected method KTreeWidgetSearchLine::canChooseColumnsCheck called without a directly constructed type");
}

bool KTreeWidgetSearchLine_Event(KTreeWidgetSearchLine* self, QEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        return vktreewidgetsearchline->event(event);
    }
    qFatal("Error: Protected method KTreeWidgetSearchLine::event called without a directly constructed type");
}

libqt_string KTreeWidgetSearchLine_Tr2(const char* s, const char* c) {
    auto _ret = KTreeWidgetSearchLine::tr(s, c);
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
    auto _ret = KTreeWidgetSearchLine::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* KTreeWidgetSearchLine_SuperMetaObject(const KTreeWidgetSearchLine* self) {
    return (QMetaObject*)self->KTreeWidgetSearchLine::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnMetaObject(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self)))
        vktreewidgetsearchline->ktreewidgetsearchline_metaobject_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KTreeWidgetSearchLine_SuperMetacast(KTreeWidgetSearchLine* self, const char* param1) {
    return self->KTreeWidgetSearchLine::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnMetacast(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_metacast_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_Metacast_Callback>(slot);
}

// Base class handler implementation
int KTreeWidgetSearchLine_SuperMetacall(KTreeWidgetSearchLine* self, int param1, int param2, void** param3) {
    return self->KTreeWidgetSearchLine::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnMetacall(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_metacall_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_Metacall_Callback>(slot);
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperUpdateSearch(KTreeWidgetSearchLine* self, const libqt_string pattern) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    self->KTreeWidgetSearchLine::updateSearch(pattern_QString);
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnUpdateSearch(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_updatesearch_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_UpdateSearch_Callback>(slot);
}

// Base class handler implementation
bool KTreeWidgetSearchLine_SuperItemMatches(const KTreeWidgetSearchLine* self, const QTreeWidgetItem* item, const libqt_string pattern) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self))) {
        return vktreewidgetsearchline->KTreeWidgetSearchLine::itemMatches(item, pattern_QString);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::itemMatches called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnItemMatches(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self)))
        vktreewidgetsearchline->ktreewidgetsearchline_itemmatches_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_ItemMatches_Callback>(slot);
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperContextMenuEvent(KTreeWidgetSearchLine* self, QContextMenuEvent* param1) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnContextMenuEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_contextmenuevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperUpdateSearch2(KTreeWidgetSearchLine* self, QTreeWidget* treeWidget) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::updateSearch(treeWidget);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::updateSearch2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnUpdateSearch2(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_updatesearch2_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_UpdateSearch2_Callback>(slot);
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperConnectTreeWidget(KTreeWidgetSearchLine* self, QTreeWidget* param1) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::connectTreeWidget(param1);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::connectTreeWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnConnectTreeWidget(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_connecttreewidget_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_ConnectTreeWidget_Callback>(slot);
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperDisconnectTreeWidget(KTreeWidgetSearchLine* self, QTreeWidget* param1) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::disconnectTreeWidget(param1);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::disconnectTreeWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnDisconnectTreeWidget(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_disconnecttreewidget_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_DisconnectTreeWidget_Callback>(slot);
}

// Base class handler implementation
bool KTreeWidgetSearchLine_SuperCanChooseColumnsCheck(KTreeWidgetSearchLine* self) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        return vktreewidgetsearchline->KTreeWidgetSearchLine::canChooseColumnsCheck();
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::canChooseColumnsCheck called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnCanChooseColumnsCheck(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_canchoosecolumnscheck_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_CanChooseColumnsCheck_Callback>(slot);
}

// Base class handler implementation
bool KTreeWidgetSearchLine_SuperEvent(KTreeWidgetSearchLine* self, QEvent* event) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        return vktreewidgetsearchline->KTreeWidgetSearchLine::event(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_event_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_Event_Callback>(slot);
}

// Derived class handler implementation
QSize* KTreeWidgetSearchLine_SizeHint(const KTreeWidgetSearchLine* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KTreeWidgetSearchLine_SuperSizeHint(const KTreeWidgetSearchLine* self) {
    return new QSize(self->KTreeWidgetSearchLine::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnSizeHint(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self)))
        vktreewidgetsearchline->ktreewidgetsearchline_sizehint_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KTreeWidgetSearchLine_MinimumSizeHint(const KTreeWidgetSearchLine* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KTreeWidgetSearchLine_SuperMinimumSizeHint(const KTreeWidgetSearchLine* self) {
    return new QSize(self->KTreeWidgetSearchLine::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnMinimumSizeHint(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self)))
        vktreewidgetsearchline->ktreewidgetsearchline_minimumsizehint_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_MousePressEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->mousePressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperMousePressEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnMousePressEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_mousepressevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_MouseMoveEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->mouseMoveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperMouseMoveEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnMouseMoveEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_mousemoveevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_MouseReleaseEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->mouseReleaseEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperMouseReleaseEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnMouseReleaseEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_mousereleaseevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_MouseDoubleClickEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->mouseDoubleClickEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperMouseDoubleClickEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::mouseDoubleClickEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnMouseDoubleClickEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_mousedoubleclickevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_KeyPressEvent(KTreeWidgetSearchLine* self, QKeyEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperKeyPressEvent(KTreeWidgetSearchLine* self, QKeyEvent* param1) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnKeyPressEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_keypressevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_KeyReleaseEvent(KTreeWidgetSearchLine* self, QKeyEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->keyReleaseEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperKeyReleaseEvent(KTreeWidgetSearchLine* self, QKeyEvent* param1) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::keyReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnKeyReleaseEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_keyreleaseevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_FocusInEvent(KTreeWidgetSearchLine* self, QFocusEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->focusInEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperFocusInEvent(KTreeWidgetSearchLine* self, QFocusEvent* param1) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::focusInEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnFocusInEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_focusinevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_FocusOutEvent(KTreeWidgetSearchLine* self, QFocusEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->focusOutEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperFocusOutEvent(KTreeWidgetSearchLine* self, QFocusEvent* param1) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::focusOutEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnFocusOutEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_focusoutevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_PaintEvent(KTreeWidgetSearchLine* self, QPaintEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperPaintEvent(KTreeWidgetSearchLine* self, QPaintEvent* param1) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnPaintEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_paintevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_DragEnterEvent(KTreeWidgetSearchLine* self, QDragEnterEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->dragEnterEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperDragEnterEvent(KTreeWidgetSearchLine* self, QDragEnterEvent* param1) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::dragEnterEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnDragEnterEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_dragenterevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_DragMoveEvent(KTreeWidgetSearchLine* self, QDragMoveEvent* e) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->dragMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperDragMoveEvent(KTreeWidgetSearchLine* self, QDragMoveEvent* e) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::dragMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnDragMoveEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_dragmoveevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_DragLeaveEvent(KTreeWidgetSearchLine* self, QDragLeaveEvent* e) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->dragLeaveEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperDragLeaveEvent(KTreeWidgetSearchLine* self, QDragLeaveEvent* e) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::dragLeaveEvent(e);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnDragLeaveEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_dragleaveevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_DropEvent(KTreeWidgetSearchLine* self, QDropEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->dropEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperDropEvent(KTreeWidgetSearchLine* self, QDropEvent* param1) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::dropEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnDropEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_dropevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_ChangeEvent(KTreeWidgetSearchLine* self, QEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperChangeEvent(KTreeWidgetSearchLine* self, QEvent* param1) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnChangeEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_changeevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_InputMethodEvent(KTreeWidgetSearchLine* self, QInputMethodEvent* param1) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperInputMethodEvent(KTreeWidgetSearchLine* self, QInputMethodEvent* param1) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnInputMethodEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_inputmethodevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_InitStyleOption(const KTreeWidgetSearchLine* self, QStyleOptionFrame* option) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperInitStyleOption(const KTreeWidgetSearchLine* self, QStyleOptionFrame* option) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self))) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnInitStyleOption(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self)))
        vktreewidgetsearchline->ktreewidgetsearchline_initstyleoption_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
QVariant* KTreeWidgetSearchLine_InputMethodQuery(const KTreeWidgetSearchLine* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KTreeWidgetSearchLine_SuperInputMethodQuery(const KTreeWidgetSearchLine* self, int param1) {
    return new QVariant(self->KTreeWidgetSearchLine::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnInputMethodQuery(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self)))
        vktreewidgetsearchline->ktreewidgetsearchline_inputmethodquery_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_TimerEvent(KTreeWidgetSearchLine* self, QTimerEvent* param1) {
    self->timerEvent(param1);
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperTimerEvent(KTreeWidgetSearchLine* self, QTimerEvent* param1) {
    self->KTreeWidgetSearchLine::timerEvent(param1);
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnTimerEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_timerevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
int KTreeWidgetSearchLine_DevType(const KTreeWidgetSearchLine* self) {
    return self->devType();
}

// Base class handler implementation
int KTreeWidgetSearchLine_SuperDevType(const KTreeWidgetSearchLine* self) {
    return self->KTreeWidgetSearchLine::devType();
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnDevType(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self)))
        vktreewidgetsearchline->ktreewidgetsearchline_devtype_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_DevType_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_SetVisible(KTreeWidgetSearchLine* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperSetVisible(KTreeWidgetSearchLine* self, bool visible) {
    self->KTreeWidgetSearchLine::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnSetVisible(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_setvisible_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KTreeWidgetSearchLine_HeightForWidth(const KTreeWidgetSearchLine* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KTreeWidgetSearchLine_SuperHeightForWidth(const KTreeWidgetSearchLine* self, int param1) {
    return self->KTreeWidgetSearchLine::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnHeightForWidth(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self)))
        vktreewidgetsearchline->ktreewidgetsearchline_heightforwidth_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KTreeWidgetSearchLine_HasHeightForWidth(const KTreeWidgetSearchLine* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KTreeWidgetSearchLine_SuperHasHeightForWidth(const KTreeWidgetSearchLine* self) {
    return self->KTreeWidgetSearchLine::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnHasHeightForWidth(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self)))
        vktreewidgetsearchline->ktreewidgetsearchline_hasheightforwidth_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KTreeWidgetSearchLine_PaintEngine(const KTreeWidgetSearchLine* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KTreeWidgetSearchLine_SuperPaintEngine(const KTreeWidgetSearchLine* self) {
    return self->KTreeWidgetSearchLine::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnPaintEngine(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self)))
        vktreewidgetsearchline->ktreewidgetsearchline_paintengine_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_WheelEvent(KTreeWidgetSearchLine* self, QWheelEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperWheelEvent(KTreeWidgetSearchLine* self, QWheelEvent* event) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnWheelEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_wheelevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_EnterEvent(KTreeWidgetSearchLine* self, QEnterEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperEnterEvent(KTreeWidgetSearchLine* self, QEnterEvent* event) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnEnterEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_enterevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_LeaveEvent(KTreeWidgetSearchLine* self, QEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperLeaveEvent(KTreeWidgetSearchLine* self, QEvent* event) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnLeaveEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_leaveevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_MoveEvent(KTreeWidgetSearchLine* self, QMoveEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperMoveEvent(KTreeWidgetSearchLine* self, QMoveEvent* event) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnMoveEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_moveevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_ResizeEvent(KTreeWidgetSearchLine* self, QResizeEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperResizeEvent(KTreeWidgetSearchLine* self, QResizeEvent* event) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnResizeEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_resizeevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_CloseEvent(KTreeWidgetSearchLine* self, QCloseEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperCloseEvent(KTreeWidgetSearchLine* self, QCloseEvent* event) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnCloseEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_closeevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_TabletEvent(KTreeWidgetSearchLine* self, QTabletEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperTabletEvent(KTreeWidgetSearchLine* self, QTabletEvent* event) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnTabletEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_tabletevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_ActionEvent(KTreeWidgetSearchLine* self, QActionEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperActionEvent(KTreeWidgetSearchLine* self, QActionEvent* event) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnActionEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_actionevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_ShowEvent(KTreeWidgetSearchLine* self, QShowEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperShowEvent(KTreeWidgetSearchLine* self, QShowEvent* event) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnShowEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_showevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_HideEvent(KTreeWidgetSearchLine* self, QHideEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperHideEvent(KTreeWidgetSearchLine* self, QHideEvent* event) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnHideEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_hideevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KTreeWidgetSearchLine_NativeEvent(KTreeWidgetSearchLine* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        return vktreewidgetsearchline->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KTreeWidgetSearchLine_SuperNativeEvent(KTreeWidgetSearchLine* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        return vktreewidgetsearchline->KTreeWidgetSearchLine::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnNativeEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_nativeevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KTreeWidgetSearchLine_Metric(const KTreeWidgetSearchLine* self, int param1) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline) {
        return vktreewidgetsearchline->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KTreeWidgetSearchLine_SuperMetric(const KTreeWidgetSearchLine* self, int param1) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self))) {
        return vktreewidgetsearchline->KTreeWidgetSearchLine::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnMetric(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self)))
        vktreewidgetsearchline->ktreewidgetsearchline_metric_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_Metric_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_InitPainter(const KTreeWidgetSearchLine* self, QPainter* painter) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperInitPainter(const KTreeWidgetSearchLine* self, QPainter* painter) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self))) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnInitPainter(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self)))
        vktreewidgetsearchline->ktreewidgetsearchline_initpainter_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KTreeWidgetSearchLine_Redirected(const KTreeWidgetSearchLine* self, QPoint* offset) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline) {
        return vktreewidgetsearchline->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KTreeWidgetSearchLine_SuperRedirected(const KTreeWidgetSearchLine* self, QPoint* offset) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self))) {
        return vktreewidgetsearchline->KTreeWidgetSearchLine::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnRedirected(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self)))
        vktreewidgetsearchline->ktreewidgetsearchline_redirected_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KTreeWidgetSearchLine_SharedPainter(const KTreeWidgetSearchLine* self) {
    auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self));
    if (vktreewidgetsearchline) {
        return vktreewidgetsearchline->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KTreeWidgetSearchLine_SuperSharedPainter(const KTreeWidgetSearchLine* self) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self))) {
        return vktreewidgetsearchline->KTreeWidgetSearchLine::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnSharedPainter(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self)))
        vktreewidgetsearchline->ktreewidgetsearchline_sharedpainter_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
bool KTreeWidgetSearchLine_FocusNextPrevChild(KTreeWidgetSearchLine* self, bool next) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        return vktreewidgetsearchline->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KTreeWidgetSearchLine_SuperFocusNextPrevChild(KTreeWidgetSearchLine* self, bool next) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        return vktreewidgetsearchline->KTreeWidgetSearchLine::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnFocusNextPrevChild(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_focusnextprevchild_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KTreeWidgetSearchLine_EventFilter(KTreeWidgetSearchLine* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KTreeWidgetSearchLine_SuperEventFilter(KTreeWidgetSearchLine* self, QObject* watched, QEvent* event) {
    return self->KTreeWidgetSearchLine::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnEventFilter(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_eventfilter_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_ChildEvent(KTreeWidgetSearchLine* self, QChildEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperChildEvent(KTreeWidgetSearchLine* self, QChildEvent* event) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnChildEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_childevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_CustomEvent(KTreeWidgetSearchLine* self, QEvent* event) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperCustomEvent(KTreeWidgetSearchLine* self, QEvent* event) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnCustomEvent(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_customevent_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_ConnectNotify(KTreeWidgetSearchLine* self, const QMetaMethod* signal) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperConnectNotify(KTreeWidgetSearchLine* self, const QMetaMethod* signal) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnConnectNotify(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_connectnotify_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KTreeWidgetSearchLine_DisconnectNotify(KTreeWidgetSearchLine* self, const QMetaMethod* signal) {
    auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self);
    if (vktreewidgetsearchline) {
        vktreewidgetsearchline->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTreeWidgetSearchLine_SuperDisconnectNotify(KTreeWidgetSearchLine* self, const QMetaMethod* signal) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->KTreeWidgetSearchLine::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTreeWidgetSearchLine::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTreeWidgetSearchLine_OnDisconnectNotify(KTreeWidgetSearchLine* self, intptr_t slot) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self))
        vktreewidgetsearchline->ktreewidgetsearchline_disconnectnotify_callback = reinterpret_cast<VirtualKTreeWidgetSearchLine::KTreeWidgetSearchLine_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QRect* KTreeWidgetSearchLine_CursorRect(const KTreeWidgetSearchLine* self) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self)))
        return new QRect(vktreewidgetsearchline->cursorRect());
    qFatal("Error: Protected method KTreeWidgetSearchLine::cursorRect called without a directly constructed type");
}

// Derived class protected handler implementation
void KTreeWidgetSearchLine_UpdateMicroFocus(KTreeWidgetSearchLine* self) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->VirtualKTreeWidgetSearchLine::updateMicroFocus();
    } else
        qFatal("Error: Protected method KTreeWidgetSearchLine::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KTreeWidgetSearchLine_Create(KTreeWidgetSearchLine* self) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->VirtualKTreeWidgetSearchLine::create();
    } else
        qFatal("Error: Protected method KTreeWidgetSearchLine::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KTreeWidgetSearchLine_Destroy(KTreeWidgetSearchLine* self) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        vktreewidgetsearchline->VirtualKTreeWidgetSearchLine::destroy();
    } else
        qFatal("Error: Protected method KTreeWidgetSearchLine::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTreeWidgetSearchLine_FocusNextChild(KTreeWidgetSearchLine* self) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        return vktreewidgetsearchline->VirtualKTreeWidgetSearchLine::focusNextChild();
    } else
        qFatal("Error: Protected method KTreeWidgetSearchLine::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTreeWidgetSearchLine_FocusPreviousChild(KTreeWidgetSearchLine* self) {
    if (auto* vktreewidgetsearchline = dynamic_cast<VirtualKTreeWidgetSearchLine*>(self)) {
        return vktreewidgetsearchline->VirtualKTreeWidgetSearchLine::focusPreviousChild();
    } else
        qFatal("Error: Protected method KTreeWidgetSearchLine::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KTreeWidgetSearchLine_Sender(const KTreeWidgetSearchLine* self) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self))) {
        return vktreewidgetsearchline->VirtualKTreeWidgetSearchLine::sender();
    } else
        qFatal("Error: Protected method KTreeWidgetSearchLine::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KTreeWidgetSearchLine_SenderSignalIndex(const KTreeWidgetSearchLine* self) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self))) {
        return vktreewidgetsearchline->VirtualKTreeWidgetSearchLine::senderSignalIndex();
    } else
        qFatal("Error: Protected method KTreeWidgetSearchLine::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KTreeWidgetSearchLine_Receivers(const KTreeWidgetSearchLine* self, const char* signal) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self))) {
        return vktreewidgetsearchline->VirtualKTreeWidgetSearchLine::receivers(signal);
    } else
        qFatal("Error: Protected method KTreeWidgetSearchLine::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTreeWidgetSearchLine_IsSignalConnected(const KTreeWidgetSearchLine* self, const QMetaMethod* signal) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self))) {
        return vktreewidgetsearchline->VirtualKTreeWidgetSearchLine::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KTreeWidgetSearchLine::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KTreeWidgetSearchLine_GetDecodedMetricF(const KTreeWidgetSearchLine* self, int metricA, int metricB) {
    if (auto* vktreewidgetsearchline = const_cast<VirtualKTreeWidgetSearchLine*>(dynamic_cast<const VirtualKTreeWidgetSearchLine*>(self))) {
        return vktreewidgetsearchline->VirtualKTreeWidgetSearchLine::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KTreeWidgetSearchLine::getDecodedMetricF called without a directly constructed type");
}

void KTreeWidgetSearchLine_Delete(KTreeWidgetSearchLine* self) {
    delete self;
}
