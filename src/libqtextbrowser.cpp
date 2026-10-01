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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTextBrowser_Tr(const char* s) {
    auto _ret = QTextBrowser::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* QTextBrowser_Source(const QTextBrowser* self) {
    return new QUrl(self->source());
}

int QTextBrowser_SourceType(const QTextBrowser* self) {
    return static_cast<int>(self->sourceType());
}

libqt_list /* of libqt_string */ QTextBrowser_SearchPaths(const QTextBrowser* self) {
    QList<QString> _ret = self->searchPaths();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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

void QTextBrowser_SetSearchPaths(QTextBrowser* self, const libqt_list /* of libqt_string */ paths) {
    QList<QString> paths_QList;
    paths_QList.reserve(paths.len);
    libqt_string* paths_arr = static_cast<libqt_string*>(paths.data);
    for (size_t i = 0; i < paths.len; ++i) {
        QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
        paths_QList.push_back(paths_arr_i_QString);
    }
    self->setSearchPaths(paths_QList);
}

QVariant* QTextBrowser_LoadResource(QTextBrowser* self, int typeVal, const QUrl* name) {
    return new QVariant(self->loadResource(static_cast<int>(typeVal), *name));
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
    auto _ret = self->historyTitle(static_cast<int>(param1));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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

void QTextBrowser_Backward(QTextBrowser* self) {
    self->backward();
}

void QTextBrowser_Forward(QTextBrowser* self) {
    self->forward();
}

void QTextBrowser_Home(QTextBrowser* self) {
    self->home();
}

void QTextBrowser_Reload(QTextBrowser* self) {
    self->reload();
}

void QTextBrowser_BackwardAvailable(QTextBrowser* self, bool param1) {
    self->backwardAvailable(param1);
}

void QTextBrowser_Connect_BackwardAvailable(QTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(QTextBrowser*, bool) = reinterpret_cast<void (*)(QTextBrowser*, bool)>(slot);
    QTextBrowser::connect(self,
                          static_cast<void (QTextBrowser::*)(bool)>(&QTextBrowser::backwardAvailable),
                          [self, slotFunc](bool param1) {
                              bool sigval1 = param1;
                              slotFunc(self, sigval1);
                          });
}

void QTextBrowser_ForwardAvailable(QTextBrowser* self, bool param1) {
    self->forwardAvailable(param1);
}

void QTextBrowser_Connect_ForwardAvailable(QTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(QTextBrowser*, bool) = reinterpret_cast<void (*)(QTextBrowser*, bool)>(slot);
    QTextBrowser::connect(self,
                          static_cast<void (QTextBrowser::*)(bool)>(&QTextBrowser::forwardAvailable),
                          [self, slotFunc](bool param1) {
                              bool sigval1 = param1;
                              slotFunc(self, sigval1);
                          });
}

void QTextBrowser_HistoryChanged(QTextBrowser* self) {
    self->historyChanged();
}

void QTextBrowser_Connect_HistoryChanged(QTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(QTextBrowser*) = reinterpret_cast<void (*)(QTextBrowser*)>(slot);
    QTextBrowser::connect(self,
                          static_cast<void (QTextBrowser::*)()>(&QTextBrowser::historyChanged),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void QTextBrowser_SourceChanged(QTextBrowser* self, const QUrl* param1) {
    self->sourceChanged(*param1);
}

void QTextBrowser_Connect_SourceChanged(QTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(QTextBrowser*, QUrl*) = reinterpret_cast<void (*)(QTextBrowser*, QUrl*)>(slot);
    QTextBrowser::connect(self,
                          static_cast<void (QTextBrowser::*)(const QUrl&)>(&QTextBrowser::sourceChanged),
                          [self, slotFunc](const QUrl& param1) {
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
    QTextBrowser::connect(self,
                          static_cast<void (QTextBrowser::*)(const QUrl&)>(&QTextBrowser::highlighted),
                          [self, slotFunc](const QUrl& param1) {
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
    QTextBrowser::connect(self,
                          static_cast<void (QTextBrowser::*)(const QUrl&)>(&QTextBrowser::anchorClicked),
                          [self, slotFunc](const QUrl& param1) {
                              const QUrl& param1_ret = param1;
                              // Cast returned reference into pointer
                              QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
                              slotFunc(self, sigval1);
                          });
}

bool QTextBrowser_Event(QTextBrowser* self, QEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        return vqtextbrowser->event(e);
    }
    qFatal("Error: Protected method QTextBrowser::event called without a directly constructed type");
}

void QTextBrowser_KeyPressEvent(QTextBrowser* self, QKeyEvent* ev) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->keyPressEvent(ev);
    }
}

void QTextBrowser_MouseMoveEvent(QTextBrowser* self, QMouseEvent* ev) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->mouseMoveEvent(ev);
    }
}

void QTextBrowser_MousePressEvent(QTextBrowser* self, QMouseEvent* ev) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->mousePressEvent(ev);
    }
}

void QTextBrowser_MouseReleaseEvent(QTextBrowser* self, QMouseEvent* ev) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->mouseReleaseEvent(ev);
    }
}

void QTextBrowser_FocusOutEvent(QTextBrowser* self, QFocusEvent* ev) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->focusOutEvent(ev);
    }
}

bool QTextBrowser_FocusNextPrevChild(QTextBrowser* self, bool next) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        return vqtextbrowser->focusNextPrevChild(next);
    }
    qFatal("Error: Protected method QTextBrowser::focusNextPrevChild called without a directly constructed type");
}

void QTextBrowser_PaintEvent(QTextBrowser* self, QPaintEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->paintEvent(e);
    }
}

void QTextBrowser_DoSetSource(QTextBrowser* self, const QUrl* name, int typeVal) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->doSetSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
    }
}

libqt_string QTextBrowser_Tr2(const char* s, const char* c) {
    auto _ret = QTextBrowser::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTextBrowser_Tr3(const char* s, const char* c, int n) {
    auto _ret = QTextBrowser::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTextBrowser_SetSource2(QTextBrowser* self, const QUrl* name, int typeVal) {
    self->setSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
}

// Base class handler implementation
QMetaObject* QTextBrowser_SuperMetaObject(const QTextBrowser* self) {
    return (QMetaObject*)self->QTextBrowser::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMetaObject(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self)))
        vqtextbrowser->qtextbrowser_metaobject_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QTextBrowser_SuperMetacast(QTextBrowser* self, const char* param1) {
    return self->QTextBrowser::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMetacast(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_metacast_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Metacast_Callback>(slot);
}

// Base class handler implementation
int QTextBrowser_SuperMetacall(QTextBrowser* self, int param1, int param2, void** param3) {
    return self->QTextBrowser::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMetacall(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_metacall_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Metacall_Callback>(slot);
}

// Base class handler implementation
QVariant* QTextBrowser_SuperLoadResource(QTextBrowser* self, int typeVal, const QUrl* name) {
    return new QVariant(self->QTextBrowser::loadResource(static_cast<int>(typeVal), *name));
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnLoadResource(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_loadresource_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_LoadResource_Callback>(slot);
}

// Base class handler implementation
void QTextBrowser_SuperBackward(QTextBrowser* self) {
    self->QTextBrowser::backward();
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnBackward(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_backward_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Backward_Callback>(slot);
}

// Base class handler implementation
void QTextBrowser_SuperForward(QTextBrowser* self) {
    self->QTextBrowser::forward();
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnForward(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_forward_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Forward_Callback>(slot);
}

// Base class handler implementation
void QTextBrowser_SuperHome(QTextBrowser* self) {
    self->QTextBrowser::home();
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnHome(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_home_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Home_Callback>(slot);
}

// Base class handler implementation
void QTextBrowser_SuperReload(QTextBrowser* self) {
    self->QTextBrowser::reload();
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnReload(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_reload_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Reload_Callback>(slot);
}

// Base class handler implementation
bool QTextBrowser_SuperEvent(QTextBrowser* self, QEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        return vqtextbrowser->QTextBrowser::event(e);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_event_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Event_Callback>(slot);
}

// Base class handler implementation
void QTextBrowser_SuperKeyPressEvent(QTextBrowser* self, QKeyEvent* ev) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::keyPressEvent(ev);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnKeyPressEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_keypressevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QTextBrowser_SuperMouseMoveEvent(QTextBrowser* self, QMouseEvent* ev) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::mouseMoveEvent(ev);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMouseMoveEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_mousemoveevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QTextBrowser_SuperMousePressEvent(QTextBrowser* self, QMouseEvent* ev) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::mousePressEvent(ev);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMousePressEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_mousepressevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QTextBrowser_SuperMouseReleaseEvent(QTextBrowser* self, QMouseEvent* ev) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::mouseReleaseEvent(ev);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMouseReleaseEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_mousereleaseevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QTextBrowser_SuperFocusOutEvent(QTextBrowser* self, QFocusEvent* ev) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::focusOutEvent(ev);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnFocusOutEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_focusoutevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
bool QTextBrowser_SuperFocusNextPrevChild(QTextBrowser* self, bool next) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        return vqtextbrowser->QTextBrowser::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnFocusNextPrevChild(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_focusnextprevchild_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_FocusNextPrevChild_Callback>(slot);
}

// Base class handler implementation
void QTextBrowser_SuperPaintEvent(QTextBrowser* self, QPaintEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnPaintEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_paintevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QTextBrowser_SuperDoSetSource(QTextBrowser* self, const QUrl* name, int typeVal) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::doSetSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
    } else
        qFatal("Error: Protected virtual method QTextBrowser::doSetSource called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDoSetSource(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_dosetsource_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DoSetSource_Callback>(slot);
}

// Derived class handler implementation
QVariant* QTextBrowser_InputMethodQuery(const QTextBrowser* self, int property) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

// Base class handler implementation
QVariant* QTextBrowser_SuperInputMethodQuery(const QTextBrowser* self, int property) {
    return new QVariant(self->QTextBrowser::inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnInputMethodQuery(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self)))
        vqtextbrowser->qtextbrowser_inputmethodquery_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_TimerEvent(QTextBrowser* self, QTimerEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->timerEvent(e);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperTimerEvent(QTextBrowser* self, QTimerEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnTimerEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_timerevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_KeyReleaseEvent(QTextBrowser* self, QKeyEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperKeyReleaseEvent(QTextBrowser* self, QKeyEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnKeyReleaseEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_keyreleaseevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_ResizeEvent(QTextBrowser* self, QResizeEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->resizeEvent(e);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperResizeEvent(QTextBrowser* self, QResizeEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnResizeEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_resizeevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_MouseDoubleClickEvent(QTextBrowser* self, QMouseEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->mouseDoubleClickEvent(e);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperMouseDoubleClickEvent(QTextBrowser* self, QMouseEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::mouseDoubleClickEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMouseDoubleClickEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_mousedoubleclickevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_ContextMenuEvent(QTextBrowser* self, QContextMenuEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->contextMenuEvent(e);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperContextMenuEvent(QTextBrowser* self, QContextMenuEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::contextMenuEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnContextMenuEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_contextmenuevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_DragEnterEvent(QTextBrowser* self, QDragEnterEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->dragEnterEvent(e);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperDragEnterEvent(QTextBrowser* self, QDragEnterEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::dragEnterEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDragEnterEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_dragenterevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_DragLeaveEvent(QTextBrowser* self, QDragLeaveEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->dragLeaveEvent(e);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperDragLeaveEvent(QTextBrowser* self, QDragLeaveEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::dragLeaveEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDragLeaveEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_dragleaveevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_DragMoveEvent(QTextBrowser* self, QDragMoveEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->dragMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperDragMoveEvent(QTextBrowser* self, QDragMoveEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::dragMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDragMoveEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_dragmoveevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_DropEvent(QTextBrowser* self, QDropEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->dropEvent(e);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperDropEvent(QTextBrowser* self, QDropEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::dropEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDropEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_dropevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_FocusInEvent(QTextBrowser* self, QFocusEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->focusInEvent(e);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperFocusInEvent(QTextBrowser* self, QFocusEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnFocusInEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_focusinevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_ShowEvent(QTextBrowser* self, QShowEvent* param1) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperShowEvent(QTextBrowser* self, QShowEvent* param1) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnShowEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_showevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_ChangeEvent(QTextBrowser* self, QEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperChangeEvent(QTextBrowser* self, QEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnChangeEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_changeevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_WheelEvent(QTextBrowser* self, QWheelEvent* e) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->wheelEvent(e);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperWheelEvent(QTextBrowser* self, QWheelEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnWheelEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_wheelevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
QMimeData* QTextBrowser_CreateMimeDataFromSelection(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser) {
        return vqtextbrowser->createMimeDataFromSelection();
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::createMimeDataFromSelection called without a directly constructed type");
    }
}

// Base class handler implementation
QMimeData* QTextBrowser_SuperCreateMimeDataFromSelection(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return vqtextbrowser->QTextBrowser::createMimeDataFromSelection();
    } else
        qFatal("Error: Protected virtual method QTextBrowser::createMimeDataFromSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnCreateMimeDataFromSelection(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self)))
        vqtextbrowser->qtextbrowser_createmimedatafromselection_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_CreateMimeDataFromSelection_Callback>(slot);
}

// Derived class handler implementation
bool QTextBrowser_CanInsertFromMimeData(const QTextBrowser* self, const QMimeData* source) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser) {
        return vqtextbrowser->canInsertFromMimeData(source);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::canInsertFromMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTextBrowser_SuperCanInsertFromMimeData(const QTextBrowser* self, const QMimeData* source) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return vqtextbrowser->QTextBrowser::canInsertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::canInsertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnCanInsertFromMimeData(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self)))
        vqtextbrowser->qtextbrowser_caninsertfrommimedata_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_CanInsertFromMimeData_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_InsertFromMimeData(QTextBrowser* self, const QMimeData* source) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->insertFromMimeData(source);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::insertFromMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperInsertFromMimeData(QTextBrowser* self, const QMimeData* source) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::insertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::insertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnInsertFromMimeData(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_insertfrommimedata_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_InsertFromMimeData_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_InputMethodEvent(QTextBrowser* self, QInputMethodEvent* param1) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperInputMethodEvent(QTextBrowser* self, QInputMethodEvent* param1) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnInputMethodEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_inputmethodevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_ScrollContentsBy(QTextBrowser* self, int dx, int dy) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::scrollContentsBy called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperScrollContentsBy(QTextBrowser* self, int dx, int dy) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method QTextBrowser::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnScrollContentsBy(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_scrollcontentsby_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ScrollContentsBy_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_DoSetTextCursor(QTextBrowser* self, const QTextCursor* cursor) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->doSetTextCursor(*cursor);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::doSetTextCursor called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperDoSetTextCursor(QTextBrowser* self, const QTextCursor* cursor) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::doSetTextCursor(*cursor);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::doSetTextCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDoSetTextCursor(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_dosettextcursor_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DoSetTextCursor_Callback>(slot);
}

// Derived class handler implementation
QSize* QTextBrowser_MinimumSizeHint(const QTextBrowser* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QTextBrowser_SuperMinimumSizeHint(const QTextBrowser* self) {
    return new QSize(self->QTextBrowser::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMinimumSizeHint(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self)))
        vqtextbrowser->qtextbrowser_minimumsizehint_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QTextBrowser_SizeHint(const QTextBrowser* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QTextBrowser_SuperSizeHint(const QTextBrowser* self) {
    return new QSize(self->QTextBrowser::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnSizeHint(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self)))
        vqtextbrowser->qtextbrowser_sizehint_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_SetupViewport(QTextBrowser* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void QTextBrowser_SuperSetupViewport(QTextBrowser* self, QWidget* viewport) {
    self->QTextBrowser::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnSetupViewport(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_setupviewport_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
bool QTextBrowser_EventFilter(QTextBrowser* self, QObject* param1, QEvent* param2) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        return vqtextbrowser->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTextBrowser_SuperEventFilter(QTextBrowser* self, QObject* param1, QEvent* param2) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        return vqtextbrowser->QTextBrowser::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnEventFilter(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_eventfilter_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool QTextBrowser_ViewportEvent(QTextBrowser* self, QEvent* param1) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        return vqtextbrowser->viewportEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTextBrowser_SuperViewportEvent(QTextBrowser* self, QEvent* param1) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        return vqtextbrowser->QTextBrowser::viewportEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnViewportEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_viewportevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* QTextBrowser_ViewportSizeHint(const QTextBrowser* self) {
    return new QSize((self->*&VirtualQTextBrowser::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* QTextBrowser_SuperViewportSizeHint(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self)))
        return new QSize(vqtextbrowser->viewportSizeHint());
    qFatal("Error: Protected virtual method QTextBrowser::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnViewportSizeHint(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self)))
        vqtextbrowser->qtextbrowser_viewportsizehint_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_InitStyleOption(const QTextBrowser* self, QStyleOptionFrame* option) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser) {
        vqtextbrowser->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperInitStyleOption(const QTextBrowser* self, QStyleOptionFrame* option) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->QTextBrowser::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnInitStyleOption(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self)))
        vqtextbrowser->qtextbrowser_initstyleoption_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QTextBrowser_DevType(const QTextBrowser* self) {
    return self->devType();
}

// Base class handler implementation
int QTextBrowser_SuperDevType(const QTextBrowser* self) {
    return self->QTextBrowser::devType();
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDevType(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self)))
        vqtextbrowser->qtextbrowser_devtype_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DevType_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_SetVisible(QTextBrowser* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QTextBrowser_SuperSetVisible(QTextBrowser* self, bool visible) {
    self->QTextBrowser::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnSetVisible(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_setvisible_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QTextBrowser_HeightForWidth(const QTextBrowser* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QTextBrowser_SuperHeightForWidth(const QTextBrowser* self, int param1) {
    return self->QTextBrowser::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnHeightForWidth(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self)))
        vqtextbrowser->qtextbrowser_heightforwidth_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QTextBrowser_HasHeightForWidth(const QTextBrowser* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QTextBrowser_SuperHasHeightForWidth(const QTextBrowser* self) {
    return self->QTextBrowser::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnHasHeightForWidth(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self)))
        vqtextbrowser->qtextbrowser_hasheightforwidth_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QTextBrowser_PaintEngine(const QTextBrowser* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QTextBrowser_SuperPaintEngine(const QTextBrowser* self) {
    return self->QTextBrowser::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnPaintEngine(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self)))
        vqtextbrowser->qtextbrowser_paintengine_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_EnterEvent(QTextBrowser* self, QEnterEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperEnterEvent(QTextBrowser* self, QEnterEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnEnterEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_enterevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_LeaveEvent(QTextBrowser* self, QEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperLeaveEvent(QTextBrowser* self, QEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnLeaveEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_leaveevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_MoveEvent(QTextBrowser* self, QMoveEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperMoveEvent(QTextBrowser* self, QMoveEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMoveEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_moveevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_CloseEvent(QTextBrowser* self, QCloseEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperCloseEvent(QTextBrowser* self, QCloseEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnCloseEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_closeevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_TabletEvent(QTextBrowser* self, QTabletEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperTabletEvent(QTextBrowser* self, QTabletEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnTabletEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_tabletevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_ActionEvent(QTextBrowser* self, QActionEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperActionEvent(QTextBrowser* self, QActionEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnActionEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_actionevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_HideEvent(QTextBrowser* self, QHideEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperHideEvent(QTextBrowser* self, QHideEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnHideEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_hideevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QTextBrowser_NativeEvent(QTextBrowser* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        return vqtextbrowser->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTextBrowser_SuperNativeEvent(QTextBrowser* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        return vqtextbrowser->QTextBrowser::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QTextBrowser::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnNativeEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_nativeevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QTextBrowser_Metric(const QTextBrowser* self, int param1) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser) {
        return vqtextbrowser->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QTextBrowser_SuperMetric(const QTextBrowser* self, int param1) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return vqtextbrowser->QTextBrowser::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QTextBrowser::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMetric(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self)))
        vqtextbrowser->qtextbrowser_metric_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Metric_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_InitPainter(const QTextBrowser* self, QPainter* painter) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser) {
        vqtextbrowser->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperInitPainter(const QTextBrowser* self, QPainter* painter) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->QTextBrowser::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnInitPainter(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self)))
        vqtextbrowser->qtextbrowser_initpainter_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QTextBrowser_Redirected(const QTextBrowser* self, QPoint* offset) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser) {
        return vqtextbrowser->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QTextBrowser_SuperRedirected(const QTextBrowser* self, QPoint* offset) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return vqtextbrowser->QTextBrowser::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnRedirected(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self)))
        vqtextbrowser->qtextbrowser_redirected_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QTextBrowser_SharedPainter(const QTextBrowser* self) {
    auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self));
    if (vqtextbrowser) {
        return vqtextbrowser->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QTextBrowser_SuperSharedPainter(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return vqtextbrowser->QTextBrowser::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QTextBrowser::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnSharedPainter(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self)))
        vqtextbrowser->qtextbrowser_sharedpainter_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_ChildEvent(QTextBrowser* self, QChildEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperChildEvent(QTextBrowser* self, QChildEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnChildEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_childevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_CustomEvent(QTextBrowser* self, QEvent* event) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperCustomEvent(QTextBrowser* self, QEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnCustomEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_customevent_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_ConnectNotify(QTextBrowser* self, const QMetaMethod* signal) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperConnectNotify(QTextBrowser* self, const QMetaMethod* signal) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnConnectNotify(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_connectnotify_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QTextBrowser_DisconnectNotify(QTextBrowser* self, const QMetaMethod* signal) {
    auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
    if (vqtextbrowser) {
        vqtextbrowser->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTextBrowser::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextBrowser_SuperDisconnectNotify(QTextBrowser* self, const QMetaMethod* signal) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->QTextBrowser::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTextBrowser::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDisconnectNotify(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self))
        vqtextbrowser->qtextbrowser_disconnectnotify_callback = reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QTextBrowser_ZoomInF(QTextBrowser* self, float range) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->VirtualQTextBrowser::zoomInF(static_cast<float>(range));
    } else
        qFatal("Error: Protected method QTextBrowser::zoomInF called without a directly constructed type");
}

// Derived class protected handler implementation
void QTextBrowser_SetViewportMargins(QTextBrowser* self, int left, int top, int right, int bottom) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->VirtualQTextBrowser::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method QTextBrowser::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* QTextBrowser_ViewportMargins(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self)))
        return new QMargins(vqtextbrowser->viewportMargins());
    qFatal("Error: Protected method QTextBrowser::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void QTextBrowser_DrawFrame(QTextBrowser* self, QPainter* param1) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->VirtualQTextBrowser::drawFrame(param1);
    } else
        qFatal("Error: Protected method QTextBrowser::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QTextBrowser_UpdateMicroFocus(QTextBrowser* self) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->VirtualQTextBrowser::updateMicroFocus();
    } else
        qFatal("Error: Protected method QTextBrowser::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QTextBrowser_Create(QTextBrowser* self) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->VirtualQTextBrowser::create();
    } else
        qFatal("Error: Protected method QTextBrowser::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QTextBrowser_Destroy(QTextBrowser* self) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->VirtualQTextBrowser::destroy();
    } else
        qFatal("Error: Protected method QTextBrowser::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTextBrowser_FocusNextChild(QTextBrowser* self) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        return vqtextbrowser->VirtualQTextBrowser::focusNextChild();
    } else
        qFatal("Error: Protected method QTextBrowser::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTextBrowser_FocusPreviousChild(QTextBrowser* self) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        return vqtextbrowser->VirtualQTextBrowser::focusPreviousChild();
    } else
        qFatal("Error: Protected method QTextBrowser::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QTextBrowser_Sender(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return vqtextbrowser->VirtualQTextBrowser::sender();
    } else
        qFatal("Error: Protected method QTextBrowser::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QTextBrowser_SenderSignalIndex(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return vqtextbrowser->VirtualQTextBrowser::senderSignalIndex();
    } else
        qFatal("Error: Protected method QTextBrowser::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QTextBrowser_Receivers(const QTextBrowser* self, const char* signal) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return vqtextbrowser->VirtualQTextBrowser::receivers(signal);
    } else
        qFatal("Error: Protected method QTextBrowser::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTextBrowser_IsSignalConnected(const QTextBrowser* self, const QMetaMethod* signal) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return vqtextbrowser->VirtualQTextBrowser::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QTextBrowser::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QTextBrowser_GetDecodedMetricF(const QTextBrowser* self, int metricA, int metricB) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return vqtextbrowser->VirtualQTextBrowser::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QTextBrowser::getDecodedMetricF called without a directly constructed type");
}

void QTextBrowser_Delete(QTextBrowser* self) {
    delete self;
}
