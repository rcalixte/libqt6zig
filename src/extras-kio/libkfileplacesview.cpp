#include <KFilePlacesView>
#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
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
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QKeyEvent>
#include <QList>
#include <QListView>
#include <QMargins>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionFrame>
#include <QStyleOptionViewItem>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kfileplacesview.h>
#include "libkfileplacesview.h"
#include "libkfileplacesview.hxx"

KFilePlacesView* KFilePlacesView_new(QWidget* parent) {
    return new VirtualKFilePlacesView(parent);
}

KFilePlacesView* KFilePlacesView_new2() {
    return new VirtualKFilePlacesView();
}

QMetaObject* KFilePlacesView_MetaObject(const KFilePlacesView* self) {
    return (QMetaObject*)self->metaObject();
}

void* KFilePlacesView_Metacast(KFilePlacesView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KFilePlacesView_Metacall(KFilePlacesView* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KFilePlacesView_Tr(const char* s) {
    auto _ret = KFilePlacesView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KFilePlacesView_AllPlacesShown(const KFilePlacesView* self) {
    return self->allPlacesShown();
}

void KFilePlacesView_SetDropOnPlaceEnabled(KFilePlacesView* self, bool enabled) {
    self->setDropOnPlaceEnabled(enabled);
}

bool KFilePlacesView_IsDropOnPlaceEnabled(const KFilePlacesView* self) {
    return self->isDropOnPlaceEnabled();
}

void KFilePlacesView_SetDragAutoActivationDelay(KFilePlacesView* self, int delay) {
    self->setDragAutoActivationDelay(static_cast<int>(delay));
}

int KFilePlacesView_DragAutoActivationDelay(const KFilePlacesView* self) {
    return self->dragAutoActivationDelay();
}

void KFilePlacesView_SetAutoResizeItemsEnabled(KFilePlacesView* self, bool enabled) {
    self->setAutoResizeItemsEnabled(enabled);
}

bool KFilePlacesView_IsAutoResizeItemsEnabled(const KFilePlacesView* self) {
    return self->isAutoResizeItemsEnabled();
}

void KFilePlacesView_SetTeardownFunction(KFilePlacesView* self, intptr_t teardownFunc) {
    auto teardownFunc_func = [teardownFunc](const QModelIndex& funcparam1_fp) -> void {
        const QModelIndex& funcparam1_ret = funcparam1_fp;
        // Cast returned reference into pointer
        QModelIndex* funcparam1_fv = const_cast<QModelIndex*>(&funcparam1_ret);
        reinterpret_cast<void (*)(QModelIndex*)>(teardownFunc)(funcparam1_fv);
    };
    self->setTeardownFunction(teardownFunc_func);
}

QSize* KFilePlacesView_SizeHint(const KFilePlacesView* self) {
    return new QSize(self->sizeHint());
}

void KFilePlacesView_SetUrl(KFilePlacesView* self, const QUrl* url) {
    self->setUrl(*url);
}

void KFilePlacesView_SetShowAll(KFilePlacesView* self, bool showAll) {
    self->setShowAll(showAll);
}

void KFilePlacesView_SetModel(KFilePlacesView* self, QAbstractItemModel* model) {
    self->setModel(model);
}

void KFilePlacesView_KeyPressEvent(KFilePlacesView* self, QKeyEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->keyPressEvent(event);
    }
}

void KFilePlacesView_ContextMenuEvent(KFilePlacesView* self, QContextMenuEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->contextMenuEvent(event);
    }
}

void KFilePlacesView_ResizeEvent(KFilePlacesView* self, QResizeEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->resizeEvent(event);
    }
}

void KFilePlacesView_ShowEvent(KFilePlacesView* self, QShowEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->showEvent(event);
    }
}

void KFilePlacesView_HideEvent(KFilePlacesView* self, QHideEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->hideEvent(event);
    }
}

void KFilePlacesView_DragEnterEvent(KFilePlacesView* self, QDragEnterEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->dragEnterEvent(event);
    }
}

void KFilePlacesView_DragLeaveEvent(KFilePlacesView* self, QDragLeaveEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->dragLeaveEvent(event);
    }
}

void KFilePlacesView_DragMoveEvent(KFilePlacesView* self, QDragMoveEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->dragMoveEvent(event);
    }
}

void KFilePlacesView_DropEvent(KFilePlacesView* self, QDropEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->dropEvent(event);
    }
}

void KFilePlacesView_PaintEvent(KFilePlacesView* self, QPaintEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->paintEvent(event);
    }
}

void KFilePlacesView_StartDrag(KFilePlacesView* self, int supportedActions) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

void KFilePlacesView_MousePressEvent(KFilePlacesView* self, QMouseEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->mousePressEvent(event);
    }
}

void KFilePlacesView_RowsInserted(KFilePlacesView* self, const QModelIndex* parent, int start, int end) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

void KFilePlacesView_DataChanged(KFilePlacesView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

void KFilePlacesView_PlaceActivated(KFilePlacesView* self, const QUrl* url) {
    self->placeActivated(*url);
}

void KFilePlacesView_Connect_PlaceActivated(KFilePlacesView* self, intptr_t slot) {
    void (*slotFunc)(KFilePlacesView*, QUrl*) = reinterpret_cast<void (*)(KFilePlacesView*, QUrl*)>(slot);
    KFilePlacesView::connect(self,
                             static_cast<void (KFilePlacesView::*)(const QUrl&)>(&KFilePlacesView::placeActivated),
                             [self, slotFunc](const QUrl& url) {
                                 const QUrl& url_ret = url;
                                 // Cast returned reference into pointer
                                 QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                                 slotFunc(self, sigval1);
                             });
}

void KFilePlacesView_TabRequested(KFilePlacesView* self, const QUrl* url) {
    self->tabRequested(*url);
}

void KFilePlacesView_Connect_TabRequested(KFilePlacesView* self, intptr_t slot) {
    void (*slotFunc)(KFilePlacesView*, QUrl*) = reinterpret_cast<void (*)(KFilePlacesView*, QUrl*)>(slot);
    KFilePlacesView::connect(self,
                             static_cast<void (KFilePlacesView::*)(const QUrl&)>(&KFilePlacesView::tabRequested),
                             [self, slotFunc](const QUrl& url) {
                                 const QUrl& url_ret = url;
                                 // Cast returned reference into pointer
                                 QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                                 slotFunc(self, sigval1);
                             });
}

void KFilePlacesView_ActiveTabRequested(KFilePlacesView* self, const QUrl* url) {
    self->activeTabRequested(*url);
}

void KFilePlacesView_Connect_ActiveTabRequested(KFilePlacesView* self, intptr_t slot) {
    void (*slotFunc)(KFilePlacesView*, QUrl*) = reinterpret_cast<void (*)(KFilePlacesView*, QUrl*)>(slot);
    KFilePlacesView::connect(self,
                             static_cast<void (KFilePlacesView::*)(const QUrl&)>(&KFilePlacesView::activeTabRequested),
                             [self, slotFunc](const QUrl& url) {
                                 const QUrl& url_ret = url;
                                 // Cast returned reference into pointer
                                 QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                                 slotFunc(self, sigval1);
                             });
}

void KFilePlacesView_NewWindowRequested(KFilePlacesView* self, const QUrl* url) {
    self->newWindowRequested(*url);
}

void KFilePlacesView_Connect_NewWindowRequested(KFilePlacesView* self, intptr_t slot) {
    void (*slotFunc)(KFilePlacesView*, QUrl*) = reinterpret_cast<void (*)(KFilePlacesView*, QUrl*)>(slot);
    KFilePlacesView::connect(self,
                             static_cast<void (KFilePlacesView::*)(const QUrl&)>(&KFilePlacesView::newWindowRequested),
                             [self, slotFunc](const QUrl& url) {
                                 const QUrl& url_ret = url;
                                 // Cast returned reference into pointer
                                 QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                                 slotFunc(self, sigval1);
                             });
}

void KFilePlacesView_ContextMenuAboutToShow(KFilePlacesView* self, const QModelIndex* index, QMenu* menu) {
    self->contextMenuAboutToShow(*index, menu);
}

void KFilePlacesView_Connect_ContextMenuAboutToShow(KFilePlacesView* self, intptr_t slot) {
    void (*slotFunc)(KFilePlacesView*, QModelIndex*, QMenu*) = reinterpret_cast<void (*)(KFilePlacesView*, QModelIndex*, QMenu*)>(slot);
    KFilePlacesView::connect(self,
                             static_cast<void (KFilePlacesView::*)(const QModelIndex&, QMenu*)>(&KFilePlacesView::contextMenuAboutToShow),
                             [self, slotFunc](const QModelIndex& index, QMenu* menu) {
                                 const QModelIndex& index_ret = index;
                                 // Cast returned reference into pointer
                                 QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
                                 QMenu* sigval2 = menu;
                                 slotFunc(self, sigval1, sigval2);
                             });
}

void KFilePlacesView_AllPlacesShownChanged(KFilePlacesView* self, bool allPlacesShown) {
    self->allPlacesShownChanged(allPlacesShown);
}

void KFilePlacesView_Connect_AllPlacesShownChanged(KFilePlacesView* self, intptr_t slot) {
    void (*slotFunc)(KFilePlacesView*, bool) = reinterpret_cast<void (*)(KFilePlacesView*, bool)>(slot);
    KFilePlacesView::connect(self,
                             static_cast<void (KFilePlacesView::*)(bool)>(&KFilePlacesView::allPlacesShownChanged),
                             [self, slotFunc](bool allPlacesShown) {
                                 bool sigval1 = allPlacesShown;
                                 slotFunc(self, sigval1);
                             });
}

void KFilePlacesView_UrlChanged(KFilePlacesView* self, const QUrl* url) {
    self->urlChanged(*url);
}

void KFilePlacesView_Connect_UrlChanged(KFilePlacesView* self, intptr_t slot) {
    void (*slotFunc)(KFilePlacesView*, QUrl*) = reinterpret_cast<void (*)(KFilePlacesView*, QUrl*)>(slot);
    KFilePlacesView::connect(self,
                             static_cast<void (KFilePlacesView::*)(const QUrl&)>(&KFilePlacesView::urlChanged),
                             [self, slotFunc](const QUrl& url) {
                                 const QUrl& url_ret = url;
                                 // Cast returned reference into pointer
                                 QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                                 slotFunc(self, sigval1);
                             });
}

void KFilePlacesView_UrlsDropped(KFilePlacesView* self, const QUrl* dest, QDropEvent* event, QWidget* parent) {
    self->urlsDropped(*dest, event, parent);
}

void KFilePlacesView_Connect_UrlsDropped(KFilePlacesView* self, intptr_t slot) {
    void (*slotFunc)(KFilePlacesView*, QUrl*, QDropEvent*, QWidget*) = reinterpret_cast<void (*)(KFilePlacesView*, QUrl*, QDropEvent*, QWidget*)>(slot);
    KFilePlacesView::connect(self,
                             static_cast<void (KFilePlacesView::*)(const QUrl&, QDropEvent*, QWidget*)>(&KFilePlacesView::urlsDropped),
                             [self, slotFunc](const QUrl& dest, QDropEvent* event, QWidget* parent) {
                                 const QUrl& dest_ret = dest;
                                 // Cast returned reference into pointer
                                 QUrl* sigval1 = const_cast<QUrl*>(&dest_ret);
                                 QDropEvent* sigval2 = event;
                                 QWidget* sigval3 = parent;
                                 slotFunc(self, sigval1, sigval2, sigval3);
                             });
}

libqt_string KFilePlacesView_Tr2(const char* s, const char* c) {
    auto _ret = KFilePlacesView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFilePlacesView_Tr3(const char* s, const char* c, int n) {
    auto _ret = KFilePlacesView::tr(s, c, static_cast<int>(n));
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
QMetaObject* KFilePlacesView_SuperMetaObject(const KFilePlacesView* self) {
    return (QMetaObject*)self->KFilePlacesView::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnMetaObject(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_metaobject_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KFilePlacesView_SuperMetacast(KFilePlacesView* self, const char* param1) {
    return self->KFilePlacesView::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnMetacast(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_metacast_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_Metacast_Callback>(slot);
}

// Base class handler implementation
int KFilePlacesView_SuperMetacall(KFilePlacesView* self, int param1, int param2, void** param3) {
    return self->KFilePlacesView::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnMetacall(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_metacall_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KFilePlacesView_SuperSizeHint(const KFilePlacesView* self) {
    return new QSize(self->KFilePlacesView::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSizeHint(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_sizehint_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SizeHint_Callback>(slot);
}

// Base class handler implementation
void KFilePlacesView_SuperSetModel(KFilePlacesView* self, QAbstractItemModel* model) {
    self->KFilePlacesView::setModel(model);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSetModel(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_setmodel_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SetModel_Callback>(slot);
}

// Base class handler implementation
void KFilePlacesView_SuperKeyPressEvent(KFilePlacesView* self, QKeyEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnKeyPressEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_keypressevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void KFilePlacesView_SuperContextMenuEvent(KFilePlacesView* self, QContextMenuEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnContextMenuEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_contextmenuevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
void KFilePlacesView_SuperResizeEvent(KFilePlacesView* self, QResizeEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnResizeEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_resizeevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void KFilePlacesView_SuperShowEvent(KFilePlacesView* self, QShowEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnShowEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_showevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ShowEvent_Callback>(slot);
}

// Base class handler implementation
void KFilePlacesView_SuperHideEvent(KFilePlacesView* self, QHideEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnHideEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_hideevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_HideEvent_Callback>(slot);
}

// Base class handler implementation
void KFilePlacesView_SuperDragEnterEvent(KFilePlacesView* self, QDragEnterEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnDragEnterEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_dragenterevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_DragEnterEvent_Callback>(slot);
}

// Base class handler implementation
void KFilePlacesView_SuperDragLeaveEvent(KFilePlacesView* self, QDragLeaveEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnDragLeaveEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_dragleaveevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_DragLeaveEvent_Callback>(slot);
}

// Base class handler implementation
void KFilePlacesView_SuperDragMoveEvent(KFilePlacesView* self, QDragMoveEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnDragMoveEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_dragmoveevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_DragMoveEvent_Callback>(slot);
}

// Base class handler implementation
void KFilePlacesView_SuperDropEvent(KFilePlacesView* self, QDropEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnDropEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_dropevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_DropEvent_Callback>(slot);
}

// Base class handler implementation
void KFilePlacesView_SuperPaintEvent(KFilePlacesView* self, QPaintEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnPaintEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_paintevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void KFilePlacesView_SuperStartDrag(KFilePlacesView* self, int supportedActions) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::startDrag called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnStartDrag(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_startdrag_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_StartDrag_Callback>(slot);
}

// Base class handler implementation
void KFilePlacesView_SuperMousePressEvent(KFilePlacesView* self, QMouseEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnMousePressEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_mousepressevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void KFilePlacesView_SuperRowsInserted(KFilePlacesView* self, const QModelIndex* parent, int start, int end) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::rowsInserted called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnRowsInserted(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_rowsinserted_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_RowsInserted_Callback>(slot);
}

// Base class handler implementation
void KFilePlacesView_SuperDataChanged(KFilePlacesView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::dataChanged(*topLeft, *bottomRight, roles_QList);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::dataChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnDataChanged(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_datachanged_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_DataChanged_Callback>(slot);
}

// Derived class handler implementation
QRect* KFilePlacesView_VisualRect(const KFilePlacesView* self, const QModelIndex* index) {
    return new QRect(self->visualRect(*index));
}

// Base class handler implementation
QRect* KFilePlacesView_SuperVisualRect(const KFilePlacesView* self, const QModelIndex* index) {
    return new QRect(self->KFilePlacesView::visualRect(*index));
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnVisualRect(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_visualrect_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_VisualRect_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_ScrollTo(KFilePlacesView* self, const QModelIndex* index, int hint) {
    self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Base class handler implementation
void KFilePlacesView_SuperScrollTo(KFilePlacesView* self, const QModelIndex* index, int hint) {
    self->KFilePlacesView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnScrollTo(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_scrollto_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ScrollTo_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KFilePlacesView_IndexAt(const KFilePlacesView* self, const QPoint* p) {
    return new QModelIndex(self->indexAt(*p));
}

// Base class handler implementation
QModelIndex* KFilePlacesView_SuperIndexAt(const KFilePlacesView* self, const QPoint* p) {
    return new QModelIndex(self->KFilePlacesView::indexAt(*p));
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnIndexAt(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_indexat_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_IndexAt_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_DoItemsLayout(KFilePlacesView* self) {
    self->doItemsLayout();
}

// Base class handler implementation
void KFilePlacesView_SuperDoItemsLayout(KFilePlacesView* self) {
    self->KFilePlacesView::doItemsLayout();
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnDoItemsLayout(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_doitemslayout_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_DoItemsLayout_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_Reset(KFilePlacesView* self) {
    self->reset();
}

// Base class handler implementation
void KFilePlacesView_SuperReset(KFilePlacesView* self) {
    self->KFilePlacesView::reset();
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnReset(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_reset_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_Reset_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_SetRootIndex(KFilePlacesView* self, const QModelIndex* index) {
    self->setRootIndex(*index);
}

// Base class handler implementation
void KFilePlacesView_SuperSetRootIndex(KFilePlacesView* self, const QModelIndex* index) {
    self->KFilePlacesView::setRootIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSetRootIndex(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_setrootindex_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SetRootIndex_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesView_Event(KFilePlacesView* self, QEvent* e) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        return vkfileplacesview->event(e);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFilePlacesView_SuperEvent(KFilePlacesView* self, QEvent* e) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        return vkfileplacesview->KFilePlacesView::event(e);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_event_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_Event_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_ScrollContentsBy(KFilePlacesView* self, int dx, int dy) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::scrollContentsBy called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperScrollContentsBy(KFilePlacesView* self, int dx, int dy) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnScrollContentsBy(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_scrollcontentsby_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ScrollContentsBy_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_RowsAboutToBeRemoved(KFilePlacesView* self, const QModelIndex* parent, int start, int end) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::rowsAboutToBeRemoved called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperRowsAboutToBeRemoved(KFilePlacesView* self, const QModelIndex* parent, int start, int end) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::rowsAboutToBeRemoved called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnRowsAboutToBeRemoved(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_rowsabouttoberemoved_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_RowsAboutToBeRemoved_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_MouseMoveEvent(KFilePlacesView* self, QMouseEvent* e) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->mouseMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperMouseMoveEvent(KFilePlacesView* self, QMouseEvent* e) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnMouseMoveEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_mousemoveevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_MouseReleaseEvent(KFilePlacesView* self, QMouseEvent* e) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperMouseReleaseEvent(KFilePlacesView* self, QMouseEvent* e) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnMouseReleaseEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_mousereleaseevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_WheelEvent(KFilePlacesView* self, QWheelEvent* e) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->wheelEvent(e);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperWheelEvent(KFilePlacesView* self, QWheelEvent* e) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnWheelEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_wheelevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_TimerEvent(KFilePlacesView* self, QTimerEvent* e) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->timerEvent(e);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperTimerEvent(KFilePlacesView* self, QTimerEvent* e) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnTimerEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_timerevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_InitViewItemOption(const KFilePlacesView* self, QStyleOptionViewItem* option) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview) {
        vkfileplacesview->initViewItemOption(option);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::initViewItemOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperInitViewItemOption(const KFilePlacesView* self, QStyleOptionViewItem* option) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self))) {
        vkfileplacesview->KFilePlacesView::initViewItemOption(option);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::initViewItemOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnInitViewItemOption(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_initviewitemoption_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_InitViewItemOption_Callback>(slot);
}

// Derived class handler implementation
int KFilePlacesView_HorizontalOffset(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview) {
        return vkfileplacesview->horizontalOffset();
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::horizontalOffset called without a directly constructed type");
    }
}

// Base class handler implementation
int KFilePlacesView_SuperHorizontalOffset(const KFilePlacesView* self) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self))) {
        return vkfileplacesview->KFilePlacesView::horizontalOffset();
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::horizontalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnHorizontalOffset(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_horizontaloffset_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_HorizontalOffset_Callback>(slot);
}

// Derived class handler implementation
int KFilePlacesView_VerticalOffset(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview) {
        return vkfileplacesview->verticalOffset();
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::verticalOffset called without a directly constructed type");
    }
}

// Base class handler implementation
int KFilePlacesView_SuperVerticalOffset(const KFilePlacesView* self) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self))) {
        return vkfileplacesview->KFilePlacesView::verticalOffset();
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::verticalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnVerticalOffset(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_verticaloffset_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_VerticalOffset_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KFilePlacesView_MoveCursor(KFilePlacesView* self, int cursorAction, int modifiers) {
    return new QModelIndex((self->*&VirtualKFilePlacesView::Base::moveCursor)(static_cast<VirtualKFilePlacesView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
}

// Base class handler implementation
QModelIndex* KFilePlacesView_SuperMoveCursor(KFilePlacesView* self, int cursorAction, int modifiers) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        return new QModelIndex(vkfileplacesview->moveCursor(static_cast<VirtualKFilePlacesView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    qFatal("Error: Protected virtual method KFilePlacesView::moveCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnMoveCursor(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_movecursor_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_MoveCursor_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_SetSelection(KFilePlacesView* self, const QRect* rect, int command) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::setSelection called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperSetSelection(KFilePlacesView* self, const QRect* rect, int command) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::setSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSetSelection(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_setselection_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SetSelection_Callback>(slot);
}

// Derived class handler implementation
QRegion* KFilePlacesView_VisualRegionForSelection(const KFilePlacesView* self, const QItemSelection* selection) {
    return new QRegion((self->*&VirtualKFilePlacesView::Base::visualRegionForSelection)(*selection));
}

// Base class handler implementation
QRegion* KFilePlacesView_SuperVisualRegionForSelection(const KFilePlacesView* self, const QItemSelection* selection) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        return new QRegion(vkfileplacesview->visualRegionForSelection(*selection));
    qFatal("Error: Protected virtual method KFilePlacesView::visualRegionForSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnVisualRegionForSelection(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_visualregionforselection_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_VisualRegionForSelection_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KFilePlacesView_SelectedIndexes(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview) {
        QList<QModelIndex> _ret = vkfileplacesview->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::selectedIndexes called without a directly constructed type");
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ KFilePlacesView_SuperSelectedIndexes(const KFilePlacesView* self) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self))) {
        QList<QModelIndex> _ret = vkfileplacesview->KFilePlacesView::selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::selectedIndexes called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSelectedIndexes(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_selectedindexes_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SelectedIndexes_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_UpdateGeometries(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->updateGeometries();
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::updateGeometries called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperUpdateGeometries(KFilePlacesView* self) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::updateGeometries();
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::updateGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnUpdateGeometries(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_updategeometries_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_UpdateGeometries_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesView_IsIndexHidden(const KFilePlacesView* self, const QModelIndex* index) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview) {
        return vkfileplacesview->isIndexHidden(*index);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::isIndexHidden called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFilePlacesView_SuperIsIndexHidden(const KFilePlacesView* self, const QModelIndex* index) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self))) {
        return vkfileplacesview->KFilePlacesView::isIndexHidden(*index);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::isIndexHidden called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnIsIndexHidden(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_isindexhidden_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_IsIndexHidden_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_SelectionChanged(KFilePlacesView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->selectionChanged(*selected, *deselected);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::selectionChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperSelectionChanged(KFilePlacesView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::selectionChanged(*selected, *deselected);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::selectionChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSelectionChanged(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_selectionchanged_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SelectionChanged_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_CurrentChanged(KFilePlacesView* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->currentChanged(*current, *previous);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::currentChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperCurrentChanged(KFilePlacesView* self, const QModelIndex* current, const QModelIndex* previous) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::currentChanged(*current, *previous);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::currentChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnCurrentChanged(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_currentchanged_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_CurrentChanged_Callback>(slot);
}

// Derived class handler implementation
QSize* KFilePlacesView_ViewportSizeHint(const KFilePlacesView* self) {
    return new QSize((self->*&VirtualKFilePlacesView::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* KFilePlacesView_SuperViewportSizeHint(const KFilePlacesView* self) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        return new QSize(vkfileplacesview->viewportSizeHint());
    qFatal("Error: Protected virtual method KFilePlacesView::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnViewportSizeHint(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_viewportsizehint_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_SetSelectionModel(KFilePlacesView* self, QItemSelectionModel* selectionModel) {
    self->setSelectionModel(selectionModel);
}

// Base class handler implementation
void KFilePlacesView_SuperSetSelectionModel(KFilePlacesView* self, QItemSelectionModel* selectionModel) {
    self->KFilePlacesView::setSelectionModel(selectionModel);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSetSelectionModel(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_setselectionmodel_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SetSelectionModel_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_KeyboardSearch(KFilePlacesView* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->keyboardSearch(search_QString);
}

// Base class handler implementation
void KFilePlacesView_SuperKeyboardSearch(KFilePlacesView* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->KFilePlacesView::keyboardSearch(search_QString);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnKeyboardSearch(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_keyboardsearch_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_KeyboardSearch_Callback>(slot);
}

// Derived class handler implementation
int KFilePlacesView_SizeHintForRow(const KFilePlacesView* self, int row) {
    return self->sizeHintForRow(static_cast<int>(row));
}

// Base class handler implementation
int KFilePlacesView_SuperSizeHintForRow(const KFilePlacesView* self, int row) {
    return self->KFilePlacesView::sizeHintForRow(static_cast<int>(row));
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSizeHintForRow(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_sizehintforrow_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SizeHintForRow_Callback>(slot);
}

// Derived class handler implementation
int KFilePlacesView_SizeHintForColumn(const KFilePlacesView* self, int column) {
    return self->sizeHintForColumn(static_cast<int>(column));
}

// Base class handler implementation
int KFilePlacesView_SuperSizeHintForColumn(const KFilePlacesView* self, int column) {
    return self->KFilePlacesView::sizeHintForColumn(static_cast<int>(column));
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSizeHintForColumn(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_sizehintforcolumn_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SizeHintForColumn_Callback>(slot);
}

// Derived class handler implementation
QAbstractItemDelegate* KFilePlacesView_ItemDelegateForIndex(const KFilePlacesView* self, const QModelIndex* index) {
    return self->itemDelegateForIndex(*index);
}

// Base class handler implementation
QAbstractItemDelegate* KFilePlacesView_SuperItemDelegateForIndex(const KFilePlacesView* self, const QModelIndex* index) {
    return self->KFilePlacesView::itemDelegateForIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnItemDelegateForIndex(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_itemdelegateforindex_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ItemDelegateForIndex_Callback>(slot);
}

// Derived class handler implementation
QVariant* KFilePlacesView_InputMethodQuery(const KFilePlacesView* self, int query) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* KFilePlacesView_SuperInputMethodQuery(const KFilePlacesView* self, int query) {
    return new QVariant(self->KFilePlacesView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnInputMethodQuery(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_inputmethodquery_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_SelectAll(KFilePlacesView* self) {
    self->selectAll();
}

// Base class handler implementation
void KFilePlacesView_SuperSelectAll(KFilePlacesView* self) {
    self->KFilePlacesView::selectAll();
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSelectAll(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_selectall_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SelectAll_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_UpdateEditorData(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->updateEditorData();
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::updateEditorData called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperUpdateEditorData(KFilePlacesView* self) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::updateEditorData();
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::updateEditorData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnUpdateEditorData(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_updateeditordata_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_UpdateEditorData_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_UpdateEditorGeometries(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->updateEditorGeometries();
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::updateEditorGeometries called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperUpdateEditorGeometries(KFilePlacesView* self) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::updateEditorGeometries();
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::updateEditorGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnUpdateEditorGeometries(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_updateeditorgeometries_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_UpdateEditorGeometries_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_VerticalScrollbarAction(KFilePlacesView* self, int action) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::verticalScrollbarAction called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperVerticalScrollbarAction(KFilePlacesView* self, int action) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::verticalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::verticalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnVerticalScrollbarAction(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_verticalscrollbaraction_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_VerticalScrollbarAction_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_HorizontalScrollbarAction(KFilePlacesView* self, int action) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::horizontalScrollbarAction called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperHorizontalScrollbarAction(KFilePlacesView* self, int action) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::horizontalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::horizontalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnHorizontalScrollbarAction(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_horizontalscrollbaraction_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_HorizontalScrollbarAction_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_VerticalScrollbarValueChanged(KFilePlacesView* self, int value) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::verticalScrollbarValueChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperVerticalScrollbarValueChanged(KFilePlacesView* self, int value) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::verticalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::verticalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnVerticalScrollbarValueChanged(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_verticalscrollbarvaluechanged_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_VerticalScrollbarValueChanged_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_HorizontalScrollbarValueChanged(KFilePlacesView* self, int value) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::horizontalScrollbarValueChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperHorizontalScrollbarValueChanged(KFilePlacesView* self, int value) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::horizontalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::horizontalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnHorizontalScrollbarValueChanged(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_horizontalscrollbarvaluechanged_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_HorizontalScrollbarValueChanged_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_CloseEditor(KFilePlacesView* self, QWidget* editor, int hint) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::closeEditor called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperCloseEditor(KFilePlacesView* self, QWidget* editor, int hint) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::closeEditor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnCloseEditor(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_closeeditor_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_CloseEditor_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_CommitData(KFilePlacesView* self, QWidget* editor) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->commitData(editor);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::commitData called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperCommitData(KFilePlacesView* self, QWidget* editor) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::commitData(editor);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::commitData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnCommitData(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_commitdata_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_CommitData_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_EditorDestroyed(KFilePlacesView* self, QObject* editor) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->editorDestroyed(editor);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::editorDestroyed called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperEditorDestroyed(KFilePlacesView* self, QObject* editor) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::editorDestroyed(editor);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::editorDestroyed called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnEditorDestroyed(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_editordestroyed_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_EditorDestroyed_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesView_Edit2(KFilePlacesView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        return vkfileplacesview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::edit2 called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFilePlacesView_SuperEdit2(KFilePlacesView* self, const QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        return vkfileplacesview->KFilePlacesView::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::edit2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnEdit2(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_edit2_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_Edit2_Callback>(slot);
}

// Derived class handler implementation
int KFilePlacesView_SelectionCommand(const KFilePlacesView* self, const QModelIndex* index, const QEvent* event) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview) {
        return static_cast<int>(vkfileplacesview->selectionCommand(*index, event));
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::selectionCommand called without a directly constructed type");
    }
}

// Base class handler implementation
int KFilePlacesView_SuperSelectionCommand(const KFilePlacesView* self, const QModelIndex* index, const QEvent* event) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self))) {
        return static_cast<int>(vkfileplacesview->KFilePlacesView::selectionCommand(*index, event));
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::selectionCommand called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSelectionCommand(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_selectioncommand_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SelectionCommand_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesView_FocusNextPrevChild(KFilePlacesView* self, bool next) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        return vkfileplacesview->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFilePlacesView_SuperFocusNextPrevChild(KFilePlacesView* self, bool next) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        return vkfileplacesview->KFilePlacesView::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnFocusNextPrevChild(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_focusnextprevchild_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesView_ViewportEvent(KFilePlacesView* self, QEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        return vkfileplacesview->viewportEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFilePlacesView_SuperViewportEvent(KFilePlacesView* self, QEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        return vkfileplacesview->KFilePlacesView::viewportEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnViewportEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_viewportevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_MouseDoubleClickEvent(KFilePlacesView* self, QMouseEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperMouseDoubleClickEvent(KFilePlacesView* self, QMouseEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnMouseDoubleClickEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_mousedoubleclickevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_FocusInEvent(KFilePlacesView* self, QFocusEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperFocusInEvent(KFilePlacesView* self, QFocusEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnFocusInEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_focusinevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_FocusOutEvent(KFilePlacesView* self, QFocusEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperFocusOutEvent(KFilePlacesView* self, QFocusEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnFocusOutEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_focusoutevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_InputMethodEvent(KFilePlacesView* self, QInputMethodEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperInputMethodEvent(KFilePlacesView* self, QInputMethodEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnInputMethodEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_inputmethodevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesView_EventFilter(KFilePlacesView* self, QObject* object, QEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        return vkfileplacesview->eventFilter(object, event);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFilePlacesView_SuperEventFilter(KFilePlacesView* self, QObject* object, QEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        return vkfileplacesview->KFilePlacesView::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnEventFilter(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_eventfilter_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_EventFilter_Callback>(slot);
}

// Derived class handler implementation
QSize* KFilePlacesView_MinimumSizeHint(const KFilePlacesView* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KFilePlacesView_SuperMinimumSizeHint(const KFilePlacesView* self) {
    return new QSize(self->KFilePlacesView::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnMinimumSizeHint(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_minimumsizehint_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_SetupViewport(KFilePlacesView* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void KFilePlacesView_SuperSetupViewport(KFilePlacesView* self, QWidget* viewport) {
    self->KFilePlacesView::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSetupViewport(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_setupviewport_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_ChangeEvent(KFilePlacesView* self, QEvent* param1) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperChangeEvent(KFilePlacesView* self, QEvent* param1) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnChangeEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_changeevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_InitStyleOption(const KFilePlacesView* self, QStyleOptionFrame* option) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview) {
        vkfileplacesview->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperInitStyleOption(const KFilePlacesView* self, QStyleOptionFrame* option) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self))) {
        vkfileplacesview->KFilePlacesView::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnInitStyleOption(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_initstyleoption_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KFilePlacesView_DevType(const KFilePlacesView* self) {
    return self->devType();
}

// Base class handler implementation
int KFilePlacesView_SuperDevType(const KFilePlacesView* self) {
    return self->KFilePlacesView::devType();
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnDevType(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_devtype_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_DevType_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_SetVisible(KFilePlacesView* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KFilePlacesView_SuperSetVisible(KFilePlacesView* self, bool visible) {
    self->KFilePlacesView::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSetVisible(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_setvisible_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KFilePlacesView_HeightForWidth(const KFilePlacesView* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KFilePlacesView_SuperHeightForWidth(const KFilePlacesView* self, int param1) {
    return self->KFilePlacesView::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnHeightForWidth(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_heightforwidth_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesView_HasHeightForWidth(const KFilePlacesView* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KFilePlacesView_SuperHasHeightForWidth(const KFilePlacesView* self) {
    return self->KFilePlacesView::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnHasHeightForWidth(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_hasheightforwidth_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KFilePlacesView_PaintEngine(const KFilePlacesView* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KFilePlacesView_SuperPaintEngine(const KFilePlacesView* self) {
    return self->KFilePlacesView::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnPaintEngine(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_paintengine_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_KeyReleaseEvent(KFilePlacesView* self, QKeyEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperKeyReleaseEvent(KFilePlacesView* self, QKeyEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnKeyReleaseEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_keyreleaseevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_EnterEvent(KFilePlacesView* self, QEnterEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperEnterEvent(KFilePlacesView* self, QEnterEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnEnterEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_enterevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_LeaveEvent(KFilePlacesView* self, QEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperLeaveEvent(KFilePlacesView* self, QEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnLeaveEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_leaveevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_MoveEvent(KFilePlacesView* self, QMoveEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperMoveEvent(KFilePlacesView* self, QMoveEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnMoveEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_moveevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_CloseEvent(KFilePlacesView* self, QCloseEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperCloseEvent(KFilePlacesView* self, QCloseEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnCloseEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_closeevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_TabletEvent(KFilePlacesView* self, QTabletEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperTabletEvent(KFilePlacesView* self, QTabletEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnTabletEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_tabletevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_ActionEvent(KFilePlacesView* self, QActionEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperActionEvent(KFilePlacesView* self, QActionEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnActionEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_actionevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesView_NativeEvent(KFilePlacesView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        return vkfileplacesview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFilePlacesView_SuperNativeEvent(KFilePlacesView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        return vkfileplacesview->KFilePlacesView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnNativeEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_nativeevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KFilePlacesView_Metric(const KFilePlacesView* self, int param1) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview) {
        return vkfileplacesview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KFilePlacesView_SuperMetric(const KFilePlacesView* self, int param1) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self))) {
        return vkfileplacesview->KFilePlacesView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnMetric(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_metric_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_Metric_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_InitPainter(const KFilePlacesView* self, QPainter* painter) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview) {
        vkfileplacesview->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperInitPainter(const KFilePlacesView* self, QPainter* painter) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self))) {
        vkfileplacesview->KFilePlacesView::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnInitPainter(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_initpainter_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KFilePlacesView_Redirected(const KFilePlacesView* self, QPoint* offset) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview) {
        return vkfileplacesview->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KFilePlacesView_SuperRedirected(const KFilePlacesView* self, QPoint* offset) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self))) {
        return vkfileplacesview->KFilePlacesView::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnRedirected(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_redirected_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KFilePlacesView_SharedPainter(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview) {
        return vkfileplacesview->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KFilePlacesView_SuperSharedPainter(const KFilePlacesView* self) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self))) {
        return vkfileplacesview->KFilePlacesView::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSharedPainter(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        vkfileplacesview->kfileplacesview_sharedpainter_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_ChildEvent(KFilePlacesView* self, QChildEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperChildEvent(KFilePlacesView* self, QChildEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnChildEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_childevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_CustomEvent(KFilePlacesView* self, QEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperCustomEvent(KFilePlacesView* self, QEvent* event) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnCustomEvent(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_customevent_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_ConnectNotify(KFilePlacesView* self, const QMetaMethod* signal) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperConnectNotify(KFilePlacesView* self, const QMetaMethod* signal) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnConnectNotify(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_connectnotify_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesView_DisconnectNotify(KFilePlacesView* self, const QMetaMethod* signal) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview) {
        vkfileplacesview->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesView::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesView_SuperDisconnectNotify(KFilePlacesView* self, const QMetaMethod* signal) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->KFilePlacesView::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFilePlacesView::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnDisconnectNotify(KFilePlacesView* self, intptr_t slot) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self))
        vkfileplacesview->kfileplacesview_disconnectnotify_callback = reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KFilePlacesView_ResizeContents(KFilePlacesView* self, int width, int height) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->VirtualKFilePlacesView::resizeContents(static_cast<int>(width), static_cast<int>(height));
    } else
        qFatal("Error: Protected method KFilePlacesView::resizeContents called without a directly constructed type");
}

// Derived class handler implementation
QSize* KFilePlacesView_ContentsSize(const KFilePlacesView* self) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        return new QSize(vkfileplacesview->contentsSize());
    qFatal("Error: Protected method KFilePlacesView::contentsSize called without a directly constructed type");
}

// Derived class handler implementation
QRect* KFilePlacesView_RectForIndex(const KFilePlacesView* self, const QModelIndex* index) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        return new QRect(vkfileplacesview->rectForIndex(*index));
    qFatal("Error: Protected method KFilePlacesView::rectForIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesView_SetPositionForIndex(KFilePlacesView* self, const QPoint* position, const QModelIndex* index) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->VirtualKFilePlacesView::setPositionForIndex(*position, *index);
    } else
        qFatal("Error: Protected method KFilePlacesView::setPositionForIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KFilePlacesView_State(const KFilePlacesView* self) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self))) {
        return static_cast<int>(vkfileplacesview->VirtualKFilePlacesView::state());
    } else
        qFatal("Error: Protected method KFilePlacesView::state called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesView_SetState(KFilePlacesView* self, int state) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->VirtualKFilePlacesView::setState(static_cast<VirtualKFilePlacesView::State>(state));
    } else
        qFatal("Error: Protected method KFilePlacesView::setState called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesView_ScheduleDelayedItemsLayout(KFilePlacesView* self) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->VirtualKFilePlacesView::scheduleDelayedItemsLayout();
    } else
        qFatal("Error: Protected method KFilePlacesView::scheduleDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesView_ExecuteDelayedItemsLayout(KFilePlacesView* self) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->VirtualKFilePlacesView::executeDelayedItemsLayout();
    } else
        qFatal("Error: Protected method KFilePlacesView::executeDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesView_SetDirtyRegion(KFilePlacesView* self, const QRegion* region) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->VirtualKFilePlacesView::setDirtyRegion(*region);
    } else
        qFatal("Error: Protected method KFilePlacesView::setDirtyRegion called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesView_ScrollDirtyRegion(KFilePlacesView* self, int dx, int dy) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->VirtualKFilePlacesView::scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected method KFilePlacesView::scrollDirtyRegion called without a directly constructed type");
}

// Derived class handler implementation
QPoint* KFilePlacesView_DirtyRegionOffset(const KFilePlacesView* self) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        return new QPoint(vkfileplacesview->dirtyRegionOffset());
    qFatal("Error: Protected method KFilePlacesView::dirtyRegionOffset called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesView_StartAutoScroll(KFilePlacesView* self) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->VirtualKFilePlacesView::startAutoScroll();
    } else
        qFatal("Error: Protected method KFilePlacesView::startAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesView_StopAutoScroll(KFilePlacesView* self) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->VirtualKFilePlacesView::stopAutoScroll();
    } else
        qFatal("Error: Protected method KFilePlacesView::stopAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesView_DoAutoScroll(KFilePlacesView* self) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->VirtualKFilePlacesView::doAutoScroll();
    } else
        qFatal("Error: Protected method KFilePlacesView::doAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
int KFilePlacesView_DropIndicatorPosition(const KFilePlacesView* self) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self))) {
        return static_cast<int>(vkfileplacesview->VirtualKFilePlacesView::dropIndicatorPosition());
    } else
        qFatal("Error: Protected method KFilePlacesView::dropIndicatorPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesView_SetViewportMargins(KFilePlacesView* self, int left, int top, int right, int bottom) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->VirtualKFilePlacesView::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method KFilePlacesView::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* KFilePlacesView_ViewportMargins(const KFilePlacesView* self) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self)))
        return new QMargins(vkfileplacesview->viewportMargins());
    qFatal("Error: Protected method KFilePlacesView::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesView_DrawFrame(KFilePlacesView* self, QPainter* param1) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->VirtualKFilePlacesView::drawFrame(param1);
    } else
        qFatal("Error: Protected method KFilePlacesView::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesView_UpdateMicroFocus(KFilePlacesView* self) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->VirtualKFilePlacesView::updateMicroFocus();
    } else
        qFatal("Error: Protected method KFilePlacesView::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesView_Create(KFilePlacesView* self) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->VirtualKFilePlacesView::create();
    } else
        qFatal("Error: Protected method KFilePlacesView::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesView_Destroy(KFilePlacesView* self) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        vkfileplacesview->VirtualKFilePlacesView::destroy();
    } else
        qFatal("Error: Protected method KFilePlacesView::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFilePlacesView_FocusNextChild(KFilePlacesView* self) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        return vkfileplacesview->VirtualKFilePlacesView::focusNextChild();
    } else
        qFatal("Error: Protected method KFilePlacesView::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFilePlacesView_FocusPreviousChild(KFilePlacesView* self) {
    if (auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self)) {
        return vkfileplacesview->VirtualKFilePlacesView::focusPreviousChild();
    } else
        qFatal("Error: Protected method KFilePlacesView::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KFilePlacesView_Sender(const KFilePlacesView* self) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self))) {
        return vkfileplacesview->VirtualKFilePlacesView::sender();
    } else
        qFatal("Error: Protected method KFilePlacesView::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KFilePlacesView_SenderSignalIndex(const KFilePlacesView* self) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self))) {
        return vkfileplacesview->VirtualKFilePlacesView::senderSignalIndex();
    } else
        qFatal("Error: Protected method KFilePlacesView::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KFilePlacesView_Receivers(const KFilePlacesView* self, const char* signal) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self))) {
        return vkfileplacesview->VirtualKFilePlacesView::receivers(signal);
    } else
        qFatal("Error: Protected method KFilePlacesView::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFilePlacesView_IsSignalConnected(const KFilePlacesView* self, const QMetaMethod* signal) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self))) {
        return vkfileplacesview->VirtualKFilePlacesView::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KFilePlacesView::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KFilePlacesView_GetDecodedMetricF(const KFilePlacesView* self, int metricA, int metricB) {
    if (auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self))) {
        return vkfileplacesview->VirtualKFilePlacesView::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KFilePlacesView::getDecodedMetricF called without a directly constructed type");
}

void KFilePlacesView_Delete(KFilePlacesView* self) {
    delete self;
}
