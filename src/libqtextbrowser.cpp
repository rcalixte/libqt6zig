#include <QAbstractScrollArea>
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
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTextBrowser>
#include <QTextCursor>
#include <QTextEdit>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtextbrowser.h>
#include "libqtextbrowser.h"
#include "libqtextbrowser.hxx"

QTextBrowser* QTextBrowser_new(QWidget* parent) {
    return new VirtualQTextBrowser(parent);
}

QTextBrowser* QTextBrowser_new2() {
    return new VirtualQTextBrowser();
}

QMetaObject* QTextBrowser_MetaObject(const QTextBrowser* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTextBrowser_Metacast(QTextBrowser* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTextBrowser_Metacall(QTextBrowser* self, int param1, int param2, void** param3) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTextBrowser*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTextBrowser_OnMetacall(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Metacall_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTextBrowser_QBaseMetacall(QTextBrowser* self, int param1, int param2, void** param3) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Metacall_IsBase(true);
        return vqtextbrowser->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTextBrowser*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTextBrowser_Tr(const char* s) {
    QString _ret = QTextBrowser::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QUrl* QTextBrowser_Source(const QTextBrowser* self) {
    return new QUrl(self->source());
}

int QTextBrowser_SourceType(const QTextBrowser* self) {
    return static_cast<int>(self->sourceType());
}

libqt_list /* of libqt_string */ QTextBrowser_SearchPaths(const QTextBrowser* self) {
    QStringList _ret = self->searchPaths();
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

void QTextBrowser_SetSearchPaths(QTextBrowser* self, const libqt_list /* of libqt_string */ paths) {
    QStringList paths_QList;
    paths_QList.reserve(paths.len);
    libqt_string* paths_arr = static_cast<libqt_string*>(paths.data);
    for (size_t i = 0; i < paths.len; ++i) {
        QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
        paths_QList.push_back(paths_arr_i_QString);
    }
    self->setSearchPaths(paths_QList);
}

bool QTextBrowser_IsBackwardAvailable(const QTextBrowser* self) {
    return self->isBackwardAvailable();
}

bool QTextBrowser_IsForwardAvailable(const QTextBrowser* self) {
    return self->isForwardAvailable();
}

void QTextBrowser_ClearHistory(QTextBrowser* self) {
    self->clearHistory();
}

libqt_string QTextBrowser_HistoryTitle(const QTextBrowser* self, int param1) {
    QString _ret = self->historyTitle(static_cast<int>(param1));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QUrl* QTextBrowser_HistoryUrl(const QTextBrowser* self, int param1) {
    return new QUrl(self->historyUrl(static_cast<int>(param1)));
}

int QTextBrowser_BackwardHistoryCount(const QTextBrowser* self) {
    return self->backwardHistoryCount();
}

int QTextBrowser_ForwardHistoryCount(const QTextBrowser* self) {
    return self->forwardHistoryCount();
}

bool QTextBrowser_OpenExternalLinks(const QTextBrowser* self) {
    return self->openExternalLinks();
}

void QTextBrowser_SetOpenExternalLinks(QTextBrowser* self, bool open) {
    self->setOpenExternalLinks(open);
}

bool QTextBrowser_OpenLinks(const QTextBrowser* self) {
    return self->openLinks();
}

void QTextBrowser_SetOpenLinks(QTextBrowser* self, bool open) {
    self->setOpenLinks(open);
}

void QTextBrowser_SetSource(QTextBrowser* self, const QUrl* name) {
    self->setSource(*name);
}

void QTextBrowser_BackwardAvailable(QTextBrowser* self, bool param1) {
    self->backwardAvailable(param1);
}

void QTextBrowser_Connect_BackwardAvailable(QTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(QTextBrowser*, bool) = reinterpret_cast<void (*)(QTextBrowser*, bool)>(slot);
    QTextBrowser::connect(self, &QTextBrowser::backwardAvailable, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QTextBrowser_ForwardAvailable(QTextBrowser* self, bool param1) {
    self->forwardAvailable(param1);
}

void QTextBrowser_Connect_ForwardAvailable(QTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(QTextBrowser*, bool) = reinterpret_cast<void (*)(QTextBrowser*, bool)>(slot);
    QTextBrowser::connect(self, &QTextBrowser::forwardAvailable, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QTextBrowser_HistoryChanged(QTextBrowser* self) {
    self->historyChanged();
}

void QTextBrowser_Connect_HistoryChanged(QTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(QTextBrowser*) = reinterpret_cast<void (*)(QTextBrowser*)>(slot);
    QTextBrowser::connect(self, &QTextBrowser::historyChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QTextBrowser_SourceChanged(QTextBrowser* self, const QUrl* param1) {
    self->sourceChanged(*param1);
}

void QTextBrowser_Connect_SourceChanged(QTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(QTextBrowser*, QUrl*) = reinterpret_cast<void (*)(QTextBrowser*, QUrl*)>(slot);
    QTextBrowser::connect(self, &QTextBrowser::sourceChanged, [self, slotFunc](const QUrl& param1) {
        const QUrl& param1_ret = param1;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
        slotFunc(self, sigval1);
    });
}

void QTextBrowser_Highlighted(QTextBrowser* self, const QUrl* param1) {
    self->highlighted(*param1);
}

void QTextBrowser_Connect_Highlighted(QTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(QTextBrowser*, QUrl*) = reinterpret_cast<void (*)(QTextBrowser*, QUrl*)>(slot);
    QTextBrowser::connect(self, &QTextBrowser::highlighted, [self, slotFunc](const QUrl& param1) {
        const QUrl& param1_ret = param1;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
        slotFunc(self, sigval1);
    });
}

void QTextBrowser_AnchorClicked(QTextBrowser* self, const QUrl* param1) {
    self->anchorClicked(*param1);
}

void QTextBrowser_Connect_AnchorClicked(QTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(QTextBrowser*, QUrl*) = reinterpret_cast<void (*)(QTextBrowser*, QUrl*)>(slot);
    QTextBrowser::connect(self, &QTextBrowser::anchorClicked, [self, slotFunc](const QUrl& param1) {
        const QUrl& param1_ret = param1;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QTextBrowser_Tr2(const char* s, const char* c) {
    QString _ret = QTextBrowser::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QTextBrowser_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTextBrowser::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTextBrowser_SetSource2(QTextBrowser* self, const QUrl* name, int typeVal) {
    self->setSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
}

// Derived class handler implementation
QVariant* QTextBrowser_LoadResource(QTextBrowser* self, int typeVal, const QUrl* name) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return new QVariant(vqtextbrowser->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualQTextBrowser*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Base class handler implementation
QVariant* QTextBrowser_QBaseLoadResource(QTextBrowser* self, int typeVal, const QUrl* name) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_LoadResource_IsBase(true);
        return new QVariant(vqtextbrowser->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualQTextBrowser*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnLoadResource(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_LoadResource_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_LoadResource_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_Backward(QTextBrowser* self) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->backward();
    } else {
        self->QTextBrowser::backward();
    }
}

// Base class handler implementation
void QTextBrowser_QBaseBackward(QTextBrowser* self) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Backward_IsBase(true);
        vqtextbrowser->backward();
    } else {
        self->QTextBrowser::backward();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnBackward(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Backward_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Backward_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_Forward(QTextBrowser* self) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->forward();
    } else {
        self->QTextBrowser::forward();
    }
}

// Base class handler implementation
void QTextBrowser_QBaseForward(QTextBrowser* self) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Forward_IsBase(true);
        vqtextbrowser->forward();
    } else {
        self->QTextBrowser::forward();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnForward(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Forward_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Forward_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_Home(QTextBrowser* self) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->home();
    } else {
        self->QTextBrowser::home();
    }
}

// Base class handler implementation
void QTextBrowser_QBaseHome(QTextBrowser* self) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Home_IsBase(true);
        vqtextbrowser->home();
    } else {
        self->QTextBrowser::home();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnHome(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Home_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Home_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_Reload(QTextBrowser* self) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->reload();
    } else {
        self->QTextBrowser::reload();
    }
}

// Base class handler implementation
void QTextBrowser_QBaseReload(QTextBrowser* self) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Reload_IsBase(true);
        vqtextbrowser->reload();
    } else {
        self->QTextBrowser::reload();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnReload(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Reload_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Reload_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextBrowser_Event(QTextBrowser* self, QEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return vqtextbrowser->event(e);
    } else {
        return ((VirtualQTextBrowser*)self)->event(e);
    }
}

// Base class handler implementation
bool QTextBrowser_QBaseEvent(QTextBrowser* self, QEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Event_IsBase(true);
        return vqtextbrowser->event(e);
    } else {
        return ((VirtualQTextBrowser*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Event_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_KeyPressEvent(QTextBrowser* self, QKeyEvent* ev) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->keyPressEvent(ev);
    } else {
        ((VirtualQTextBrowser*)self)->keyPressEvent(ev);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseKeyPressEvent(QTextBrowser* self, QKeyEvent* ev) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_KeyPressEvent_IsBase(true);
        vqtextbrowser->keyPressEvent(ev);
    } else {
        ((VirtualQTextBrowser*)self)->keyPressEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnKeyPressEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_KeyPressEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_MouseMoveEvent(QTextBrowser* self, QMouseEvent* ev) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->mouseMoveEvent(ev);
    } else {
        ((VirtualQTextBrowser*)self)->mouseMoveEvent(ev);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseMouseMoveEvent(QTextBrowser* self, QMouseEvent* ev) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_MouseMoveEvent_IsBase(true);
        vqtextbrowser->mouseMoveEvent(ev);
    } else {
        ((VirtualQTextBrowser*)self)->mouseMoveEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMouseMoveEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_MouseMoveEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_MousePressEvent(QTextBrowser* self, QMouseEvent* ev) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->mousePressEvent(ev);
    } else {
        ((VirtualQTextBrowser*)self)->mousePressEvent(ev);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseMousePressEvent(QTextBrowser* self, QMouseEvent* ev) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_MousePressEvent_IsBase(true);
        vqtextbrowser->mousePressEvent(ev);
    } else {
        ((VirtualQTextBrowser*)self)->mousePressEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMousePressEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_MousePressEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_MouseReleaseEvent(QTextBrowser* self, QMouseEvent* ev) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->mouseReleaseEvent(ev);
    } else {
        ((VirtualQTextBrowser*)self)->mouseReleaseEvent(ev);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseMouseReleaseEvent(QTextBrowser* self, QMouseEvent* ev) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_MouseReleaseEvent_IsBase(true);
        vqtextbrowser->mouseReleaseEvent(ev);
    } else {
        ((VirtualQTextBrowser*)self)->mouseReleaseEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMouseReleaseEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_FocusOutEvent(QTextBrowser* self, QFocusEvent* ev) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->focusOutEvent(ev);
    } else {
        ((VirtualQTextBrowser*)self)->focusOutEvent(ev);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseFocusOutEvent(QTextBrowser* self, QFocusEvent* ev) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_FocusOutEvent_IsBase(true);
        vqtextbrowser->focusOutEvent(ev);
    } else {
        ((VirtualQTextBrowser*)self)->focusOutEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnFocusOutEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_FocusOutEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextBrowser_FocusNextPrevChild(QTextBrowser* self, bool next) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return vqtextbrowser->focusNextPrevChild(next);
    } else {
        return ((VirtualQTextBrowser*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QTextBrowser_QBaseFocusNextPrevChild(QTextBrowser* self, bool next) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_FocusNextPrevChild_IsBase(true);
        return vqtextbrowser->focusNextPrevChild(next);
    } else {
        return ((VirtualQTextBrowser*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnFocusNextPrevChild(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_PaintEvent(QTextBrowser* self, QPaintEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->paintEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBasePaintEvent(QTextBrowser* self, QPaintEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_PaintEvent_IsBase(true);
        vqtextbrowser->paintEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnPaintEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_PaintEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_DoSetSource(QTextBrowser* self, const QUrl* name, int typeVal) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->doSetSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
    } else {
        ((VirtualQTextBrowser*)self)->doSetSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
    }
}

// Base class handler implementation
void QTextBrowser_QBaseDoSetSource(QTextBrowser* self, const QUrl* name, int typeVal) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_DoSetSource_IsBase(true);
        vqtextbrowser->doSetSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
    } else {
        ((VirtualQTextBrowser*)self)->doSetSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDoSetSource(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_DoSetSource_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DoSetSource_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QTextBrowser_InputMethodQuery(const QTextBrowser* self, int property) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return new QVariant(vqtextbrowser->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualQTextBrowser*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Base class handler implementation
QVariant* QTextBrowser_QBaseInputMethodQuery(const QTextBrowser* self, int property) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_InputMethodQuery_IsBase(true);
        return new QVariant(vqtextbrowser->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualQTextBrowser*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnInputMethodQuery(const QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_InputMethodQuery_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_TimerEvent(QTextBrowser* self, QTimerEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->timerEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseTimerEvent(QTextBrowser* self, QTimerEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_TimerEvent_IsBase(true);
        vqtextbrowser->timerEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnTimerEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_TimerEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_KeyReleaseEvent(QTextBrowser* self, QKeyEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->keyReleaseEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseKeyReleaseEvent(QTextBrowser* self, QKeyEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_KeyReleaseEvent_IsBase(true);
        vqtextbrowser->keyReleaseEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnKeyReleaseEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_ResizeEvent(QTextBrowser* self, QResizeEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->resizeEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseResizeEvent(QTextBrowser* self, QResizeEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ResizeEvent_IsBase(true);
        vqtextbrowser->resizeEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnResizeEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ResizeEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_MouseDoubleClickEvent(QTextBrowser* self, QMouseEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->mouseDoubleClickEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->mouseDoubleClickEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseMouseDoubleClickEvent(QTextBrowser* self, QMouseEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_MouseDoubleClickEvent_IsBase(true);
        vqtextbrowser->mouseDoubleClickEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->mouseDoubleClickEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMouseDoubleClickEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_ContextMenuEvent(QTextBrowser* self, QContextMenuEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->contextMenuEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->contextMenuEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseContextMenuEvent(QTextBrowser* self, QContextMenuEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ContextMenuEvent_IsBase(true);
        vqtextbrowser->contextMenuEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->contextMenuEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnContextMenuEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ContextMenuEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_DragEnterEvent(QTextBrowser* self, QDragEnterEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->dragEnterEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->dragEnterEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseDragEnterEvent(QTextBrowser* self, QDragEnterEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_DragEnterEvent_IsBase(true);
        vqtextbrowser->dragEnterEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->dragEnterEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDragEnterEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_DragEnterEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_DragLeaveEvent(QTextBrowser* self, QDragLeaveEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->dragLeaveEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseDragLeaveEvent(QTextBrowser* self, QDragLeaveEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_DragLeaveEvent_IsBase(true);
        vqtextbrowser->dragLeaveEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDragLeaveEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_DragLeaveEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_DragMoveEvent(QTextBrowser* self, QDragMoveEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->dragMoveEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->dragMoveEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseDragMoveEvent(QTextBrowser* self, QDragMoveEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_DragMoveEvent_IsBase(true);
        vqtextbrowser->dragMoveEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDragMoveEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_DragMoveEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_DropEvent(QTextBrowser* self, QDropEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->dropEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->dropEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseDropEvent(QTextBrowser* self, QDropEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_DropEvent_IsBase(true);
        vqtextbrowser->dropEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->dropEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDropEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_DropEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_FocusInEvent(QTextBrowser* self, QFocusEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->focusInEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseFocusInEvent(QTextBrowser* self, QFocusEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_FocusInEvent_IsBase(true);
        vqtextbrowser->focusInEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnFocusInEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_FocusInEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_ShowEvent(QTextBrowser* self, QShowEvent* param1) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->showEvent(param1);
    } else {
        ((VirtualQTextBrowser*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseShowEvent(QTextBrowser* self, QShowEvent* param1) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ShowEvent_IsBase(true);
        vqtextbrowser->showEvent(param1);
    } else {
        ((VirtualQTextBrowser*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnShowEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ShowEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_ChangeEvent(QTextBrowser* self, QEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->changeEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseChangeEvent(QTextBrowser* self, QEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ChangeEvent_IsBase(true);
        vqtextbrowser->changeEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnChangeEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ChangeEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_WheelEvent(QTextBrowser* self, QWheelEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->wheelEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseWheelEvent(QTextBrowser* self, QWheelEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_WheelEvent_IsBase(true);
        vqtextbrowser->wheelEvent(e);
    } else {
        ((VirtualQTextBrowser*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnWheelEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_WheelEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QTextBrowser_CreateMimeDataFromSelection(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return vqtextbrowser->createMimeDataFromSelection();
    } else {
        return ((VirtualQTextBrowser*)self)->createMimeDataFromSelection();
    }
}

// Base class handler implementation
QMimeData* QTextBrowser_QBaseCreateMimeDataFromSelection(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_CreateMimeDataFromSelection_IsBase(true);
        return vqtextbrowser->createMimeDataFromSelection();
    } else {
        return ((VirtualQTextBrowser*)self)->createMimeDataFromSelection();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnCreateMimeDataFromSelection(const QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_CreateMimeDataFromSelection_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_CreateMimeDataFromSelection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextBrowser_CanInsertFromMimeData(const QTextBrowser* self, const QMimeData* source) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return vqtextbrowser->canInsertFromMimeData(source);
    } else {
        return ((VirtualQTextBrowser*)self)->canInsertFromMimeData(source);
    }
}

// Base class handler implementation
bool QTextBrowser_QBaseCanInsertFromMimeData(const QTextBrowser* self, const QMimeData* source) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_CanInsertFromMimeData_IsBase(true);
        return vqtextbrowser->canInsertFromMimeData(source);
    } else {
        return ((VirtualQTextBrowser*)self)->canInsertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnCanInsertFromMimeData(const QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_CanInsertFromMimeData_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_CanInsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_InsertFromMimeData(QTextBrowser* self, const QMimeData* source) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->insertFromMimeData(source);
    } else {
        ((VirtualQTextBrowser*)self)->insertFromMimeData(source);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseInsertFromMimeData(QTextBrowser* self, const QMimeData* source) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_InsertFromMimeData_IsBase(true);
        vqtextbrowser->insertFromMimeData(source);
    } else {
        ((VirtualQTextBrowser*)self)->insertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnInsertFromMimeData(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_InsertFromMimeData_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_InsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_InputMethodEvent(QTextBrowser* self, QInputMethodEvent* param1) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->inputMethodEvent(param1);
    } else {
        ((VirtualQTextBrowser*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseInputMethodEvent(QTextBrowser* self, QInputMethodEvent* param1) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_InputMethodEvent_IsBase(true);
        vqtextbrowser->inputMethodEvent(param1);
    } else {
        ((VirtualQTextBrowser*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnInputMethodEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_InputMethodEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_ScrollContentsBy(QTextBrowser* self, int dx, int dy) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQTextBrowser*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QTextBrowser_QBaseScrollContentsBy(QTextBrowser* self, int dx, int dy) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ScrollContentsBy_IsBase(true);
        vqtextbrowser->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQTextBrowser*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnScrollContentsBy(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ScrollContentsBy_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_DoSetTextCursor(QTextBrowser* self, const QTextCursor* cursor) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->doSetTextCursor(*cursor);
    } else {
        ((VirtualQTextBrowser*)self)->doSetTextCursor(*cursor);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseDoSetTextCursor(QTextBrowser* self, const QTextCursor* cursor) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_DoSetTextCursor_IsBase(true);
        vqtextbrowser->doSetTextCursor(*cursor);
    } else {
        ((VirtualQTextBrowser*)self)->doSetTextCursor(*cursor);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDoSetTextCursor(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_DoSetTextCursor_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DoSetTextCursor_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTextBrowser_MinimumSizeHint(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return new QSize(vqtextbrowser->minimumSizeHint());
    } else {
        return new QSize(((VirtualQTextBrowser*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QTextBrowser_QBaseMinimumSizeHint(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_MinimumSizeHint_IsBase(true);
        return new QSize(vqtextbrowser->minimumSizeHint());
    } else {
        return new QSize(((VirtualQTextBrowser*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMinimumSizeHint(const QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_MinimumSizeHint_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTextBrowser_SizeHint(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return new QSize(vqtextbrowser->sizeHint());
    } else {
        return new QSize(((VirtualQTextBrowser*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QTextBrowser_QBaseSizeHint(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_SizeHint_IsBase(true);
        return new QSize(vqtextbrowser->sizeHint());
    } else {
        return new QSize(((VirtualQTextBrowser*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnSizeHint(const QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_SizeHint_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_SetupViewport(QTextBrowser* self, QWidget* viewport) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setupViewport(viewport);
    } else {
        self->QTextBrowser::setupViewport(viewport);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseSetupViewport(QTextBrowser* self, QWidget* viewport) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_SetupViewport_IsBase(true);
        vqtextbrowser->setupViewport(viewport);
    } else {
        self->QTextBrowser::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnSetupViewport(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_SetupViewport_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextBrowser_EventFilter(QTextBrowser* self, QObject* param1, QEvent* param2) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return vqtextbrowser->eventFilter(param1, param2);
    } else {
        return ((VirtualQTextBrowser*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QTextBrowser_QBaseEventFilter(QTextBrowser* self, QObject* param1, QEvent* param2) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_EventFilter_IsBase(true);
        return vqtextbrowser->eventFilter(param1, param2);
    } else {
        return ((VirtualQTextBrowser*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnEventFilter(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_EventFilter_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextBrowser_ViewportEvent(QTextBrowser* self, QEvent* param1) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return vqtextbrowser->viewportEvent(param1);
    } else {
        return ((VirtualQTextBrowser*)self)->viewportEvent(param1);
    }
}

// Base class handler implementation
bool QTextBrowser_QBaseViewportEvent(QTextBrowser* self, QEvent* param1) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ViewportEvent_IsBase(true);
        return vqtextbrowser->viewportEvent(param1);
    } else {
        return ((VirtualQTextBrowser*)self)->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnViewportEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ViewportEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTextBrowser_ViewportSizeHint(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return new QSize(vqtextbrowser->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QTextBrowser_QBaseViewportSizeHint(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ViewportSizeHint_IsBase(true);
        return new QSize(vqtextbrowser->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnViewportSizeHint(const QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ViewportSizeHint_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_InitStyleOption(const QTextBrowser* self, QStyleOptionFrame* option) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->initStyleOption(option);
    } else {
        ((VirtualQTextBrowser*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseInitStyleOption(const QTextBrowser* self, QStyleOptionFrame* option) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_InitStyleOption_IsBase(true);
        vqtextbrowser->initStyleOption(option);
    } else {
        ((VirtualQTextBrowser*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnInitStyleOption(const QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_InitStyleOption_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextBrowser_DevType(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return vqtextbrowser->devType();
    } else {
        return self->QTextBrowser::devType();
    }
}

// Base class handler implementation
int QTextBrowser_QBaseDevType(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_DevType_IsBase(true);
        return vqtextbrowser->devType();
    } else {
        return self->QTextBrowser::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDevType(const QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_DevType_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_SetVisible(QTextBrowser* self, bool visible) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setVisible(visible);
    } else {
        self->QTextBrowser::setVisible(visible);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseSetVisible(QTextBrowser* self, bool visible) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_SetVisible_IsBase(true);
        vqtextbrowser->setVisible(visible);
    } else {
        self->QTextBrowser::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnSetVisible(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_SetVisible_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextBrowser_HeightForWidth(const QTextBrowser* self, int param1) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return vqtextbrowser->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QTextBrowser::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QTextBrowser_QBaseHeightForWidth(const QTextBrowser* self, int param1) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_HeightForWidth_IsBase(true);
        return vqtextbrowser->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QTextBrowser::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnHeightForWidth(const QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_HeightForWidth_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextBrowser_HasHeightForWidth(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return vqtextbrowser->hasHeightForWidth();
    } else {
        return self->QTextBrowser::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QTextBrowser_QBaseHasHeightForWidth(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_HasHeightForWidth_IsBase(true);
        return vqtextbrowser->hasHeightForWidth();
    } else {
        return self->QTextBrowser::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnHasHeightForWidth(const QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_HasHeightForWidth_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QTextBrowser_PaintEngine(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return vqtextbrowser->paintEngine();
    } else {
        return self->QTextBrowser::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QTextBrowser_QBasePaintEngine(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_PaintEngine_IsBase(true);
        return vqtextbrowser->paintEngine();
    } else {
        return self->QTextBrowser::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnPaintEngine(const QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_PaintEngine_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_EnterEvent(QTextBrowser* self, QEnterEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->enterEvent(event);
    } else {
        ((VirtualQTextBrowser*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseEnterEvent(QTextBrowser* self, QEnterEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_EnterEvent_IsBase(true);
        vqtextbrowser->enterEvent(event);
    } else {
        ((VirtualQTextBrowser*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnEnterEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_EnterEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_LeaveEvent(QTextBrowser* self, QEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->leaveEvent(event);
    } else {
        ((VirtualQTextBrowser*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseLeaveEvent(QTextBrowser* self, QEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_LeaveEvent_IsBase(true);
        vqtextbrowser->leaveEvent(event);
    } else {
        ((VirtualQTextBrowser*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnLeaveEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_LeaveEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_MoveEvent(QTextBrowser* self, QMoveEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->moveEvent(event);
    } else {
        ((VirtualQTextBrowser*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseMoveEvent(QTextBrowser* self, QMoveEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_MoveEvent_IsBase(true);
        vqtextbrowser->moveEvent(event);
    } else {
        ((VirtualQTextBrowser*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMoveEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_MoveEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_CloseEvent(QTextBrowser* self, QCloseEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->closeEvent(event);
    } else {
        ((VirtualQTextBrowser*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseCloseEvent(QTextBrowser* self, QCloseEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_CloseEvent_IsBase(true);
        vqtextbrowser->closeEvent(event);
    } else {
        ((VirtualQTextBrowser*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnCloseEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_CloseEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_TabletEvent(QTextBrowser* self, QTabletEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->tabletEvent(event);
    } else {
        ((VirtualQTextBrowser*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseTabletEvent(QTextBrowser* self, QTabletEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_TabletEvent_IsBase(true);
        vqtextbrowser->tabletEvent(event);
    } else {
        ((VirtualQTextBrowser*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnTabletEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_TabletEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_ActionEvent(QTextBrowser* self, QActionEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->actionEvent(event);
    } else {
        ((VirtualQTextBrowser*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseActionEvent(QTextBrowser* self, QActionEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ActionEvent_IsBase(true);
        vqtextbrowser->actionEvent(event);
    } else {
        ((VirtualQTextBrowser*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnActionEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ActionEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_HideEvent(QTextBrowser* self, QHideEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->hideEvent(event);
    } else {
        ((VirtualQTextBrowser*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseHideEvent(QTextBrowser* self, QHideEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_HideEvent_IsBase(true);
        vqtextbrowser->hideEvent(event);
    } else {
        ((VirtualQTextBrowser*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnHideEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_HideEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextBrowser_NativeEvent(QTextBrowser* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return vqtextbrowser->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQTextBrowser*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QTextBrowser_QBaseNativeEvent(QTextBrowser* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_NativeEvent_IsBase(true);
        return vqtextbrowser->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQTextBrowser*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnNativeEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_NativeEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextBrowser_Metric(const QTextBrowser* self, int param1) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return vqtextbrowser->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQTextBrowser*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QTextBrowser_QBaseMetric(const QTextBrowser* self, int param1) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Metric_IsBase(true);
        return vqtextbrowser->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQTextBrowser*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMetric(const QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Metric_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_InitPainter(const QTextBrowser* self, QPainter* painter) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->initPainter(painter);
    } else {
        ((VirtualQTextBrowser*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseInitPainter(const QTextBrowser* self, QPainter* painter) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_InitPainter_IsBase(true);
        vqtextbrowser->initPainter(painter);
    } else {
        ((VirtualQTextBrowser*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnInitPainter(const QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_InitPainter_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QTextBrowser_Redirected(const QTextBrowser* self, QPoint* offset) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return vqtextbrowser->redirected(offset);
    } else {
        return ((VirtualQTextBrowser*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QTextBrowser_QBaseRedirected(const QTextBrowser* self, QPoint* offset) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Redirected_IsBase(true);
        return vqtextbrowser->redirected(offset);
    } else {
        return ((VirtualQTextBrowser*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnRedirected(const QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Redirected_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QTextBrowser_SharedPainter(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return vqtextbrowser->sharedPainter();
    } else {
        return ((VirtualQTextBrowser*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QTextBrowser_QBaseSharedPainter(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_SharedPainter_IsBase(true);
        return vqtextbrowser->sharedPainter();
    } else {
        return ((VirtualQTextBrowser*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnSharedPainter(const QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_SharedPainter_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_ChildEvent(QTextBrowser* self, QChildEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->childEvent(event);
    } else {
        ((VirtualQTextBrowser*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseChildEvent(QTextBrowser* self, QChildEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ChildEvent_IsBase(true);
        vqtextbrowser->childEvent(event);
    } else {
        ((VirtualQTextBrowser*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnChildEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ChildEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_CustomEvent(QTextBrowser* self, QEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->customEvent(event);
    } else {
        ((VirtualQTextBrowser*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseCustomEvent(QTextBrowser* self, QEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_CustomEvent_IsBase(true);
        vqtextbrowser->customEvent(event);
    } else {
        ((VirtualQTextBrowser*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnCustomEvent(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_CustomEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_ConnectNotify(QTextBrowser* self, const QMetaMethod* signal) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->connectNotify(*signal);
    } else {
        ((VirtualQTextBrowser*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseConnectNotify(QTextBrowser* self, const QMetaMethod* signal) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ConnectNotify_IsBase(true);
        vqtextbrowser->connectNotify(*signal);
    } else {
        ((VirtualQTextBrowser*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnConnectNotify(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ConnectNotify_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_DisconnectNotify(QTextBrowser* self, const QMetaMethod* signal) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->disconnectNotify(*signal);
    } else {
        ((VirtualQTextBrowser*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseDisconnectNotify(QTextBrowser* self, const QMetaMethod* signal) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_DisconnectNotify_IsBase(true);
        vqtextbrowser->disconnectNotify(*signal);
    } else {
        ((VirtualQTextBrowser*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDisconnectNotify(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_DisconnectNotify_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_ZoomInF(QTextBrowser* self, float range) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualQTextBrowser*)self)->zoomInF(static_cast<float>(range));
    }
}

// Base class handler implementation
void QTextBrowser_QBaseZoomInF(QTextBrowser* self, float range) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ZoomInF_IsBase(true);
        vqtextbrowser->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualQTextBrowser*)self)->zoomInF(static_cast<float>(range));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnZoomInF(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ZoomInF_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ZoomInF_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_SetViewportMargins(QTextBrowser* self, int left, int top, int right, int bottom) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQTextBrowser*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QTextBrowser_QBaseSetViewportMargins(QTextBrowser* self, int left, int top, int right, int bottom) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_SetViewportMargins_IsBase(true);
        vqtextbrowser->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQTextBrowser*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnSetViewportMargins(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_SetViewportMargins_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QTextBrowser_ViewportMargins(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return new QMargins(vqtextbrowser->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QTextBrowser_QBaseViewportMargins(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ViewportMargins_IsBase(true);
        return new QMargins(vqtextbrowser->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnViewportMargins(const QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_ViewportMargins_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_DrawFrame(QTextBrowser* self, QPainter* param1) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->drawFrame(param1);
    } else {
        ((VirtualQTextBrowser*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseDrawFrame(QTextBrowser* self, QPainter* param1) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_DrawFrame_IsBase(true);
        vqtextbrowser->drawFrame(param1);
    } else {
        ((VirtualQTextBrowser*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDrawFrame(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_DrawFrame_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_UpdateMicroFocus(QTextBrowser* self) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->updateMicroFocus();
    } else {
        ((VirtualQTextBrowser*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QTextBrowser_QBaseUpdateMicroFocus(QTextBrowser* self) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_UpdateMicroFocus_IsBase(true);
        vqtextbrowser->updateMicroFocus();
    } else {
        ((VirtualQTextBrowser*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnUpdateMicroFocus(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_Create(QTextBrowser* self) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->create();
    } else {
        ((VirtualQTextBrowser*)self)->create();
    }
}

// Base class handler implementation
void QTextBrowser_QBaseCreate(QTextBrowser* self) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Create_IsBase(true);
        vqtextbrowser->create();
    } else {
        ((VirtualQTextBrowser*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnCreate(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Create_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_Destroy(QTextBrowser* self) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->destroy();
    } else {
        ((VirtualQTextBrowser*)self)->destroy();
    }
}

// Base class handler implementation
void QTextBrowser_QBaseDestroy(QTextBrowser* self) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Destroy_IsBase(true);
        vqtextbrowser->destroy();
    } else {
        ((VirtualQTextBrowser*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDestroy(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Destroy_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextBrowser_FocusNextChild(QTextBrowser* self) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return vqtextbrowser->focusNextChild();
    } else {
        return ((VirtualQTextBrowser*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QTextBrowser_QBaseFocusNextChild(QTextBrowser* self) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_FocusNextChild_IsBase(true);
        return vqtextbrowser->focusNextChild();
    } else {
        return ((VirtualQTextBrowser*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnFocusNextChild(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_FocusNextChild_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextBrowser_FocusPreviousChild(QTextBrowser* self) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return vqtextbrowser->focusPreviousChild();
    } else {
        return ((VirtualQTextBrowser*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QTextBrowser_QBaseFocusPreviousChild(QTextBrowser* self) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_FocusPreviousChild_IsBase(true);
        return vqtextbrowser->focusPreviousChild();
    } else {
        return ((VirtualQTextBrowser*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnFocusPreviousChild(QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_FocusPreviousChild_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTextBrowser_Sender(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return vqtextbrowser->sender();
    } else {
        return ((VirtualQTextBrowser*)self)->sender();
    }
}

// Base class handler implementation
QObject* QTextBrowser_QBaseSender(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Sender_IsBase(true);
        return vqtextbrowser->sender();
    } else {
        return ((VirtualQTextBrowser*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnSender(const QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Sender_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextBrowser_SenderSignalIndex(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return vqtextbrowser->senderSignalIndex();
    } else {
        return ((VirtualQTextBrowser*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QTextBrowser_QBaseSenderSignalIndex(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_SenderSignalIndex_IsBase(true);
        return vqtextbrowser->senderSignalIndex();
    } else {
        return ((VirtualQTextBrowser*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnSenderSignalIndex(const QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextBrowser_Receivers(const QTextBrowser* self, const char* signal) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return vqtextbrowser->receivers(signal);
    } else {
        return ((VirtualQTextBrowser*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QTextBrowser_QBaseReceivers(const QTextBrowser* self, const char* signal) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Receivers_IsBase(true);
        return vqtextbrowser->receivers(signal);
    } else {
        return ((VirtualQTextBrowser*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnReceivers(const QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_Receivers_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextBrowser_IsSignalConnected(const QTextBrowser* self, const QMetaMethod* signal) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        return vqtextbrowser->isSignalConnected(*signal);
    } else {
        return ((VirtualQTextBrowser*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTextBrowser_QBaseIsSignalConnected(const QTextBrowser* self, const QMetaMethod* signal) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_IsSignalConnected_IsBase(true);
        return vqtextbrowser->isSignalConnected(*signal);
    } else {
        return ((VirtualQTextBrowser*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnIsSignalConnected(const QTextBrowser* self, intptr_t slot) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
        vqtextbrowser->setQTextBrowser_IsSignalConnected_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_IsSignalConnected_Callback>(slot));
    }
}

void QTextBrowser_Delete(QTextBrowser* self) {
    delete self;
}
