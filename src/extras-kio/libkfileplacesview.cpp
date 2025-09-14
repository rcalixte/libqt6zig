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
#include <QByteArray>
#include <cstring>
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
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKFilePlacesView*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KFilePlacesView_Tr(const char* s) {
    QString _ret = KFilePlacesView::tr(s);
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

QSize* KFilePlacesView_SizeHint(const KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<const VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualKFilePlacesView*)self)->sizeHint());
    }
}

void KFilePlacesView_SetUrl(KFilePlacesView* self, const QUrl* url) {
    self->setUrl(*url);
}

void KFilePlacesView_SetShowAll(KFilePlacesView* self, bool showAll) {
    self->setShowAll(showAll);
}

void KFilePlacesView_SetModel(KFilePlacesView* self, QAbstractItemModel* model) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        self->setModel(model);
    } else {
        ((VirtualKFilePlacesView*)self)->setModel(model);
    }
}

void KFilePlacesView_KeyPressEvent(KFilePlacesView* self, QKeyEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->keyPressEvent(event);
    }
}

void KFilePlacesView_ContextMenuEvent(KFilePlacesView* self, QContextMenuEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->contextMenuEvent(event);
    }
}

void KFilePlacesView_ResizeEvent(KFilePlacesView* self, QResizeEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->resizeEvent(event);
    }
}

void KFilePlacesView_ShowEvent(KFilePlacesView* self, QShowEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->showEvent(event);
    }
}

void KFilePlacesView_HideEvent(KFilePlacesView* self, QHideEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->hideEvent(event);
    }
}

void KFilePlacesView_DragEnterEvent(KFilePlacesView* self, QDragEnterEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->dragEnterEvent(event);
    }
}

void KFilePlacesView_DragLeaveEvent(KFilePlacesView* self, QDragLeaveEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->dragLeaveEvent(event);
    }
}

void KFilePlacesView_DragMoveEvent(KFilePlacesView* self, QDragMoveEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->dragMoveEvent(event);
    }
}

void KFilePlacesView_DropEvent(KFilePlacesView* self, QDropEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->dropEvent(event);
    }
}

void KFilePlacesView_PaintEvent(KFilePlacesView* self, QPaintEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->paintEvent(event);
    }
}

void KFilePlacesView_StartDrag(KFilePlacesView* self, int supportedActions) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

void KFilePlacesView_MousePressEvent(KFilePlacesView* self, QMouseEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->mousePressEvent(event);
    }
}

void KFilePlacesView_RowsInserted(KFilePlacesView* self, const QModelIndex* parent, int start, int end) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
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
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

void KFilePlacesView_PlaceActivated(KFilePlacesView* self, const QUrl* url) {
    self->placeActivated(*url);
}

void KFilePlacesView_Connect_PlaceActivated(KFilePlacesView* self, intptr_t slot) {
    void (*slotFunc)(KFilePlacesView*, QUrl*) = reinterpret_cast<void (*)(KFilePlacesView*, QUrl*)>(slot);
    KFilePlacesView::connect(self, &KFilePlacesView::placeActivated, [self, slotFunc](const QUrl& url) {
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
    KFilePlacesView::connect(self, &KFilePlacesView::tabRequested, [self, slotFunc](const QUrl& url) {
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
    KFilePlacesView::connect(self, &KFilePlacesView::activeTabRequested, [self, slotFunc](const QUrl& url) {
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
    KFilePlacesView::connect(self, &KFilePlacesView::newWindowRequested, [self, slotFunc](const QUrl& url) {
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
    KFilePlacesView::connect(self, &KFilePlacesView::contextMenuAboutToShow, [self, slotFunc](const QModelIndex& index, QMenu* menu) {
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
    KFilePlacesView::connect(self, &KFilePlacesView::allPlacesShownChanged, [self, slotFunc](bool allPlacesShown) {
        bool sigval1 = allPlacesShown;
        slotFunc(self, sigval1);
    });
}

void KFilePlacesView_UrlChanged(KFilePlacesView* self, const QUrl* url) {
    self->urlChanged(*url);
}

void KFilePlacesView_Connect_UrlChanged(KFilePlacesView* self, intptr_t slot) {
    void (*slotFunc)(KFilePlacesView*, QUrl*) = reinterpret_cast<void (*)(KFilePlacesView*, QUrl*)>(slot);
    KFilePlacesView::connect(self, &KFilePlacesView::urlChanged, [self, slotFunc](const QUrl& url) {
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
    KFilePlacesView::connect(self, &KFilePlacesView::urlsDropped, [self, slotFunc](const QUrl& dest, QDropEvent* event, QWidget* parent) {
        const QUrl& dest_ret = dest;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&dest_ret);
        QDropEvent* sigval2 = event;
        QWidget* sigval3 = parent;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

libqt_string KFilePlacesView_Tr2(const char* s, const char* c) {
    QString _ret = KFilePlacesView::tr(s, c);
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
    QString _ret = KFilePlacesView::tr(s, c, static_cast<int>(n));
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
int KFilePlacesView_QBaseMetacall(KFilePlacesView* self, int param1, int param2, void** param3) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_Metacall_IsBase(true);
        return vkfileplacesview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KFilePlacesView::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnMetacall(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_Metacall_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QSize* KFilePlacesView_QBaseSizeHint(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SizeHint_IsBase(true);
        return new QSize(vkfileplacesview->sizeHint());
    } else {
        return new QSize(((VirtualKFilePlacesView*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSizeHint(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SizeHint_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SizeHint_Callback>(slot));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseSetModel(KFilePlacesView* self, QAbstractItemModel* model) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SetModel_IsBase(true);
        vkfileplacesview->setModel(model);
    } else {
        self->KFilePlacesView::setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSetModel(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SetModel_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SetModel_Callback>(slot));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseKeyPressEvent(KFilePlacesView* self, QKeyEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_KeyPressEvent_IsBase(true);
        vkfileplacesview->keyPressEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnKeyPressEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_KeyPressEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_KeyPressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseContextMenuEvent(KFilePlacesView* self, QContextMenuEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ContextMenuEvent_IsBase(true);
        vkfileplacesview->contextMenuEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnContextMenuEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ContextMenuEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ContextMenuEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseResizeEvent(KFilePlacesView* self, QResizeEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ResizeEvent_IsBase(true);
        vkfileplacesview->resizeEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnResizeEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ResizeEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ResizeEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseShowEvent(KFilePlacesView* self, QShowEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ShowEvent_IsBase(true);
        vkfileplacesview->showEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnShowEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ShowEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ShowEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseHideEvent(KFilePlacesView* self, QHideEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_HideEvent_IsBase(true);
        vkfileplacesview->hideEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnHideEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_HideEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_HideEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseDragEnterEvent(KFilePlacesView* self, QDragEnterEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DragEnterEvent_IsBase(true);
        vkfileplacesview->dragEnterEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnDragEnterEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DragEnterEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_DragEnterEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseDragLeaveEvent(KFilePlacesView* self, QDragLeaveEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DragLeaveEvent_IsBase(true);
        vkfileplacesview->dragLeaveEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnDragLeaveEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DragLeaveEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_DragLeaveEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseDragMoveEvent(KFilePlacesView* self, QDragMoveEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DragMoveEvent_IsBase(true);
        vkfileplacesview->dragMoveEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnDragMoveEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DragMoveEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_DragMoveEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseDropEvent(KFilePlacesView* self, QDropEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DropEvent_IsBase(true);
        vkfileplacesview->dropEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnDropEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DropEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_DropEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KFilePlacesView_QBasePaintEvent(KFilePlacesView* self, QPaintEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_PaintEvent_IsBase(true);
        vkfileplacesview->paintEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnPaintEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_PaintEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_PaintEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseStartDrag(KFilePlacesView* self, int supportedActions) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_StartDrag_IsBase(true);
        vkfileplacesview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        ((VirtualKFilePlacesView*)self)->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnStartDrag(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_StartDrag_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_StartDrag_Callback>(slot));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseMousePressEvent(KFilePlacesView* self, QMouseEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_MousePressEvent_IsBase(true);
        vkfileplacesview->mousePressEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnMousePressEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_MousePressEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_MousePressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseRowsInserted(KFilePlacesView* self, const QModelIndex* parent, int start, int end) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_RowsInserted_IsBase(true);
        vkfileplacesview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualKFilePlacesView*)self)->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnRowsInserted(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_RowsInserted_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_RowsInserted_Callback>(slot));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseDataChanged(KFilePlacesView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DataChanged_IsBase(true);
        vkfileplacesview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        ((VirtualKFilePlacesView*)self)->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnDataChanged(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DataChanged_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_DataChanged_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* KFilePlacesView_VisualRect(const KFilePlacesView* self, const QModelIndex* index) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return new QRect(vkfileplacesview->visualRect(*index));
    } else {
        return new QRect(((VirtualKFilePlacesView*)self)->visualRect(*index));
    }
}

// Base class handler implementation
QRect* KFilePlacesView_QBaseVisualRect(const KFilePlacesView* self, const QModelIndex* index) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_VisualRect_IsBase(true);
        return new QRect(vkfileplacesview->visualRect(*index));
    } else {
        return new QRect(((VirtualKFilePlacesView*)self)->visualRect(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnVisualRect(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_VisualRect_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_VisualRect_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_ScrollTo(KFilePlacesView* self, const QModelIndex* index, int hint) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        self->KFilePlacesView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseScrollTo(KFilePlacesView* self, const QModelIndex* index, int hint) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ScrollTo_IsBase(true);
        vkfileplacesview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        self->KFilePlacesView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnScrollTo(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ScrollTo_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ScrollTo_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KFilePlacesView_IndexAt(const KFilePlacesView* self, const QPoint* p) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return new QModelIndex(vkfileplacesview->indexAt(*p));
    } else {
        return new QModelIndex(((VirtualKFilePlacesView*)self)->indexAt(*p));
    }
}

// Base class handler implementation
QModelIndex* KFilePlacesView_QBaseIndexAt(const KFilePlacesView* self, const QPoint* p) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_IndexAt_IsBase(true);
        return new QModelIndex(vkfileplacesview->indexAt(*p));
    } else {
        return new QModelIndex(((VirtualKFilePlacesView*)self)->indexAt(*p));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnIndexAt(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_IndexAt_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_IndexAt_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_DoItemsLayout(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->doItemsLayout();
    } else {
        self->KFilePlacesView::doItemsLayout();
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseDoItemsLayout(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DoItemsLayout_IsBase(true);
        vkfileplacesview->doItemsLayout();
    } else {
        self->KFilePlacesView::doItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnDoItemsLayout(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DoItemsLayout_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_DoItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_Reset(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->reset();
    } else {
        self->KFilePlacesView::reset();
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseReset(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_Reset_IsBase(true);
        vkfileplacesview->reset();
    } else {
        self->KFilePlacesView::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnReset(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_Reset_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_SetRootIndex(KFilePlacesView* self, const QModelIndex* index) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setRootIndex(*index);
    } else {
        self->KFilePlacesView::setRootIndex(*index);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseSetRootIndex(KFilePlacesView* self, const QModelIndex* index) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SetRootIndex_IsBase(true);
        vkfileplacesview->setRootIndex(*index);
    } else {
        self->KFilePlacesView::setRootIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSetRootIndex(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SetRootIndex_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SetRootIndex_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesView_Event(KFilePlacesView* self, QEvent* e) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->event(e);
    } else {
        return ((VirtualKFilePlacesView*)self)->event(e);
    }
}

// Base class handler implementation
bool KFilePlacesView_QBaseEvent(KFilePlacesView* self, QEvent* e) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_Event_IsBase(true);
        return vkfileplacesview->event(e);
    } else {
        return ((VirtualKFilePlacesView*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_Event_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_ScrollContentsBy(KFilePlacesView* self, int dx, int dy) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualKFilePlacesView*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseScrollContentsBy(KFilePlacesView* self, int dx, int dy) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ScrollContentsBy_IsBase(true);
        vkfileplacesview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualKFilePlacesView*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnScrollContentsBy(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ScrollContentsBy_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_RowsAboutToBeRemoved(KFilePlacesView* self, const QModelIndex* parent, int start, int end) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualKFilePlacesView*)self)->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseRowsAboutToBeRemoved(KFilePlacesView* self, const QModelIndex* parent, int start, int end) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_RowsAboutToBeRemoved_IsBase(true);
        vkfileplacesview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualKFilePlacesView*)self)->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnRowsAboutToBeRemoved(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_RowsAboutToBeRemoved_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_RowsAboutToBeRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_MouseMoveEvent(KFilePlacesView* self, QMouseEvent* e) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->mouseMoveEvent(e);
    } else {
        ((VirtualKFilePlacesView*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseMouseMoveEvent(KFilePlacesView* self, QMouseEvent* e) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_MouseMoveEvent_IsBase(true);
        vkfileplacesview->mouseMoveEvent(e);
    } else {
        ((VirtualKFilePlacesView*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnMouseMoveEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_MouseMoveEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_MouseReleaseEvent(KFilePlacesView* self, QMouseEvent* e) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->mouseReleaseEvent(e);
    } else {
        ((VirtualKFilePlacesView*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseMouseReleaseEvent(KFilePlacesView* self, QMouseEvent* e) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_MouseReleaseEvent_IsBase(true);
        vkfileplacesview->mouseReleaseEvent(e);
    } else {
        ((VirtualKFilePlacesView*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnMouseReleaseEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_WheelEvent(KFilePlacesView* self, QWheelEvent* e) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->wheelEvent(e);
    } else {
        ((VirtualKFilePlacesView*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseWheelEvent(KFilePlacesView* self, QWheelEvent* e) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_WheelEvent_IsBase(true);
        vkfileplacesview->wheelEvent(e);
    } else {
        ((VirtualKFilePlacesView*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnWheelEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_WheelEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_TimerEvent(KFilePlacesView* self, QTimerEvent* e) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->timerEvent(e);
    } else {
        ((VirtualKFilePlacesView*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseTimerEvent(KFilePlacesView* self, QTimerEvent* e) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_TimerEvent_IsBase(true);
        vkfileplacesview->timerEvent(e);
    } else {
        ((VirtualKFilePlacesView*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnTimerEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_TimerEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_InitViewItemOption(const KFilePlacesView* self, QStyleOptionViewItem* option) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->initViewItemOption(option);
    } else {
        ((VirtualKFilePlacesView*)self)->initViewItemOption(option);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseInitViewItemOption(const KFilePlacesView* self, QStyleOptionViewItem* option) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_InitViewItemOption_IsBase(true);
        vkfileplacesview->initViewItemOption(option);
    } else {
        ((VirtualKFilePlacesView*)self)->initViewItemOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnInitViewItemOption(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_InitViewItemOption_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_InitViewItemOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KFilePlacesView_HorizontalOffset(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->horizontalOffset();
    } else {
        return ((VirtualKFilePlacesView*)self)->horizontalOffset();
    }
}

// Base class handler implementation
int KFilePlacesView_QBaseHorizontalOffset(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_HorizontalOffset_IsBase(true);
        return vkfileplacesview->horizontalOffset();
    } else {
        return ((VirtualKFilePlacesView*)self)->horizontalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnHorizontalOffset(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_HorizontalOffset_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_HorizontalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
int KFilePlacesView_VerticalOffset(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->verticalOffset();
    } else {
        return ((VirtualKFilePlacesView*)self)->verticalOffset();
    }
}

// Base class handler implementation
int KFilePlacesView_QBaseVerticalOffset(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_VerticalOffset_IsBase(true);
        return vkfileplacesview->verticalOffset();
    } else {
        return ((VirtualKFilePlacesView*)self)->verticalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnVerticalOffset(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_VerticalOffset_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_VerticalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KFilePlacesView_MoveCursor(KFilePlacesView* self, int cursorAction, int modifiers) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return new QModelIndex(vkfileplacesview->moveCursor(static_cast<VirtualKFilePlacesView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KFilePlacesView_QBaseMoveCursor(KFilePlacesView* self, int cursorAction, int modifiers) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_MoveCursor_IsBase(true);
        return new QModelIndex(vkfileplacesview->moveCursor(static_cast<VirtualKFilePlacesView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnMoveCursor(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_MoveCursor_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_MoveCursor_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_SetSelection(KFilePlacesView* self, const QRect* rect, int command) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        ((VirtualKFilePlacesView*)self)->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseSetSelection(KFilePlacesView* self, const QRect* rect, int command) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SetSelection_IsBase(true);
        vkfileplacesview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        ((VirtualKFilePlacesView*)self)->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSetSelection(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SetSelection_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SetSelection_Callback>(slot));
    }
}

// Derived class handler implementation
QRegion* KFilePlacesView_VisualRegionForSelection(const KFilePlacesView* self, const QItemSelection* selection) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return new QRegion(vkfileplacesview->visualRegionForSelection(*selection));
    }
    return {};
}

// Base class handler implementation
QRegion* KFilePlacesView_QBaseVisualRegionForSelection(const KFilePlacesView* self, const QItemSelection* selection) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_VisualRegionForSelection_IsBase(true);
        return new QRegion(vkfileplacesview->visualRegionForSelection(*selection));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnVisualRegionForSelection(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_VisualRegionForSelection_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_VisualRegionForSelection_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KFilePlacesView_SelectedIndexes(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        QList<QModelIndex> _ret = vkfileplacesview->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualKFilePlacesView*)self)->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ KFilePlacesView_QBaseSelectedIndexes(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SelectedIndexes_IsBase(true);
        QList<QModelIndex> _ret = vkfileplacesview->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualKFilePlacesView*)self)->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSelectedIndexes(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SelectedIndexes_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SelectedIndexes_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_UpdateGeometries(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->updateGeometries();
    } else {
        ((VirtualKFilePlacesView*)self)->updateGeometries();
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseUpdateGeometries(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_UpdateGeometries_IsBase(true);
        vkfileplacesview->updateGeometries();
    } else {
        ((VirtualKFilePlacesView*)self)->updateGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnUpdateGeometries(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_UpdateGeometries_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_UpdateGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesView_IsIndexHidden(const KFilePlacesView* self, const QModelIndex* index) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->isIndexHidden(*index);
    } else {
        return ((VirtualKFilePlacesView*)self)->isIndexHidden(*index);
    }
}

// Base class handler implementation
bool KFilePlacesView_QBaseIsIndexHidden(const KFilePlacesView* self, const QModelIndex* index) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_IsIndexHidden_IsBase(true);
        return vkfileplacesview->isIndexHidden(*index);
    } else {
        return ((VirtualKFilePlacesView*)self)->isIndexHidden(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnIsIndexHidden(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_IsIndexHidden_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_IsIndexHidden_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_SelectionChanged(KFilePlacesView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->selectionChanged(*selected, *deselected);
    } else {
        ((VirtualKFilePlacesView*)self)->selectionChanged(*selected, *deselected);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseSelectionChanged(KFilePlacesView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SelectionChanged_IsBase(true);
        vkfileplacesview->selectionChanged(*selected, *deselected);
    } else {
        ((VirtualKFilePlacesView*)self)->selectionChanged(*selected, *deselected);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSelectionChanged(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SelectionChanged_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SelectionChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_CurrentChanged(KFilePlacesView* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->currentChanged(*current, *previous);
    } else {
        ((VirtualKFilePlacesView*)self)->currentChanged(*current, *previous);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseCurrentChanged(KFilePlacesView* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_CurrentChanged_IsBase(true);
        vkfileplacesview->currentChanged(*current, *previous);
    } else {
        ((VirtualKFilePlacesView*)self)->currentChanged(*current, *previous);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnCurrentChanged(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_CurrentChanged_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_CurrentChanged_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KFilePlacesView_ViewportSizeHint(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return new QSize(vkfileplacesview->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* KFilePlacesView_QBaseViewportSizeHint(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ViewportSizeHint_IsBase(true);
        return new QSize(vkfileplacesview->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnViewportSizeHint(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ViewportSizeHint_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_SetSelectionModel(KFilePlacesView* self, QItemSelectionModel* selectionModel) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setSelectionModel(selectionModel);
    } else {
        self->KFilePlacesView::setSelectionModel(selectionModel);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseSetSelectionModel(KFilePlacesView* self, QItemSelectionModel* selectionModel) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SetSelectionModel_IsBase(true);
        vkfileplacesview->setSelectionModel(selectionModel);
    } else {
        self->KFilePlacesView::setSelectionModel(selectionModel);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSetSelectionModel(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SetSelectionModel_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SetSelectionModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_KeyboardSearch(KFilePlacesView* self, const libqt_string search) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->keyboardSearch(search_QString);
    } else {
        self->KFilePlacesView::keyboardSearch(search_QString);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseKeyboardSearch(KFilePlacesView* self, const libqt_string search) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_KeyboardSearch_IsBase(true);
        vkfileplacesview->keyboardSearch(search_QString);
    } else {
        self->KFilePlacesView::keyboardSearch(search_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnKeyboardSearch(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_KeyboardSearch_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_KeyboardSearch_Callback>(slot));
    }
}

// Derived class handler implementation
int KFilePlacesView_SizeHintForRow(const KFilePlacesView* self, int row) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->sizeHintForRow(static_cast<int>(row));
    } else {
        return self->KFilePlacesView::sizeHintForRow(static_cast<int>(row));
    }
}

// Base class handler implementation
int KFilePlacesView_QBaseSizeHintForRow(const KFilePlacesView* self, int row) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SizeHintForRow_IsBase(true);
        return vkfileplacesview->sizeHintForRow(static_cast<int>(row));
    } else {
        return self->KFilePlacesView::sizeHintForRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSizeHintForRow(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SizeHintForRow_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SizeHintForRow_Callback>(slot));
    }
}

// Derived class handler implementation
int KFilePlacesView_SizeHintForColumn(const KFilePlacesView* self, int column) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return self->KFilePlacesView::sizeHintForColumn(static_cast<int>(column));
    }
}

// Base class handler implementation
int KFilePlacesView_QBaseSizeHintForColumn(const KFilePlacesView* self, int column) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SizeHintForColumn_IsBase(true);
        return vkfileplacesview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return self->KFilePlacesView::sizeHintForColumn(static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSizeHintForColumn(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SizeHintForColumn_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SizeHintForColumn_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractItemDelegate* KFilePlacesView_ItemDelegateForIndex(const KFilePlacesView* self, const QModelIndex* index) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->itemDelegateForIndex(*index);
    } else {
        return self->KFilePlacesView::itemDelegateForIndex(*index);
    }
}

// Base class handler implementation
QAbstractItemDelegate* KFilePlacesView_QBaseItemDelegateForIndex(const KFilePlacesView* self, const QModelIndex* index) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ItemDelegateForIndex_IsBase(true);
        return vkfileplacesview->itemDelegateForIndex(*index);
    } else {
        return self->KFilePlacesView::itemDelegateForIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnItemDelegateForIndex(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ItemDelegateForIndex_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ItemDelegateForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KFilePlacesView_InputMethodQuery(const KFilePlacesView* self, int query) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return new QVariant(vkfileplacesview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualKFilePlacesView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* KFilePlacesView_QBaseInputMethodQuery(const KFilePlacesView* self, int query) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_InputMethodQuery_IsBase(true);
        return new QVariant(vkfileplacesview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualKFilePlacesView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnInputMethodQuery(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_InputMethodQuery_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_SelectAll(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->selectAll();
    } else {
        self->KFilePlacesView::selectAll();
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseSelectAll(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SelectAll_IsBase(true);
        vkfileplacesview->selectAll();
    } else {
        self->KFilePlacesView::selectAll();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSelectAll(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SelectAll_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SelectAll_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_UpdateEditorData(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->updateEditorData();
    } else {
        ((VirtualKFilePlacesView*)self)->updateEditorData();
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseUpdateEditorData(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_UpdateEditorData_IsBase(true);
        vkfileplacesview->updateEditorData();
    } else {
        ((VirtualKFilePlacesView*)self)->updateEditorData();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnUpdateEditorData(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_UpdateEditorData_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_UpdateEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_UpdateEditorGeometries(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->updateEditorGeometries();
    } else {
        ((VirtualKFilePlacesView*)self)->updateEditorGeometries();
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseUpdateEditorGeometries(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_UpdateEditorGeometries_IsBase(true);
        vkfileplacesview->updateEditorGeometries();
    } else {
        ((VirtualKFilePlacesView*)self)->updateEditorGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnUpdateEditorGeometries(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_UpdateEditorGeometries_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_UpdateEditorGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_VerticalScrollbarAction(KFilePlacesView* self, int action) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualKFilePlacesView*)self)->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseVerticalScrollbarAction(KFilePlacesView* self, int action) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_VerticalScrollbarAction_IsBase(true);
        vkfileplacesview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualKFilePlacesView*)self)->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnVerticalScrollbarAction(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_VerticalScrollbarAction_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_VerticalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_HorizontalScrollbarAction(KFilePlacesView* self, int action) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualKFilePlacesView*)self)->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseHorizontalScrollbarAction(KFilePlacesView* self, int action) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_HorizontalScrollbarAction_IsBase(true);
        vkfileplacesview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualKFilePlacesView*)self)->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnHorizontalScrollbarAction(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_HorizontalScrollbarAction_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_HorizontalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_VerticalScrollbarValueChanged(KFilePlacesView* self, int value) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualKFilePlacesView*)self)->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseVerticalScrollbarValueChanged(KFilePlacesView* self, int value) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_VerticalScrollbarValueChanged_IsBase(true);
        vkfileplacesview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualKFilePlacesView*)self)->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnVerticalScrollbarValueChanged(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_VerticalScrollbarValueChanged_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_VerticalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_HorizontalScrollbarValueChanged(KFilePlacesView* self, int value) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualKFilePlacesView*)self)->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseHorizontalScrollbarValueChanged(KFilePlacesView* self, int value) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_HorizontalScrollbarValueChanged_IsBase(true);
        vkfileplacesview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualKFilePlacesView*)self)->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnHorizontalScrollbarValueChanged(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_HorizontalScrollbarValueChanged_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_HorizontalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_CloseEditor(KFilePlacesView* self, QWidget* editor, int hint) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        ((VirtualKFilePlacesView*)self)->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseCloseEditor(KFilePlacesView* self, QWidget* editor, int hint) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_CloseEditor_IsBase(true);
        vkfileplacesview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        ((VirtualKFilePlacesView*)self)->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnCloseEditor(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_CloseEditor_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_CloseEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_CommitData(KFilePlacesView* self, QWidget* editor) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->commitData(editor);
    } else {
        ((VirtualKFilePlacesView*)self)->commitData(editor);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseCommitData(KFilePlacesView* self, QWidget* editor) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_CommitData_IsBase(true);
        vkfileplacesview->commitData(editor);
    } else {
        ((VirtualKFilePlacesView*)self)->commitData(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnCommitData(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_CommitData_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_CommitData_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_EditorDestroyed(KFilePlacesView* self, QObject* editor) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->editorDestroyed(editor);
    } else {
        ((VirtualKFilePlacesView*)self)->editorDestroyed(editor);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseEditorDestroyed(KFilePlacesView* self, QObject* editor) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_EditorDestroyed_IsBase(true);
        vkfileplacesview->editorDestroyed(editor);
    } else {
        ((VirtualKFilePlacesView*)self)->editorDestroyed(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnEditorDestroyed(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_EditorDestroyed_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_EditorDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesView_Edit2(KFilePlacesView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return ((VirtualKFilePlacesView*)self)->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Base class handler implementation
bool KFilePlacesView_QBaseEdit2(KFilePlacesView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_Edit2_IsBase(true);
        return vkfileplacesview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return ((VirtualKFilePlacesView*)self)->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnEdit2(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_Edit2_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_Edit2_Callback>(slot));
    }
}

// Derived class handler implementation
int KFilePlacesView_SelectionCommand(const KFilePlacesView* self, const QModelIndex* index, const QEvent* event) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return static_cast<int>(vkfileplacesview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(((VirtualKFilePlacesView*)self)->selectionCommand(*index, event));
    }
}

// Base class handler implementation
int KFilePlacesView_QBaseSelectionCommand(const KFilePlacesView* self, const QModelIndex* index, const QEvent* event) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SelectionCommand_IsBase(true);
        return static_cast<int>(vkfileplacesview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(((VirtualKFilePlacesView*)self)->selectionCommand(*index, event));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSelectionCommand(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SelectionCommand_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SelectionCommand_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesView_FocusNextPrevChild(KFilePlacesView* self, bool next) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->focusNextPrevChild(next);
    } else {
        return ((VirtualKFilePlacesView*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KFilePlacesView_QBaseFocusNextPrevChild(KFilePlacesView* self, bool next) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_FocusNextPrevChild_IsBase(true);
        return vkfileplacesview->focusNextPrevChild(next);
    } else {
        return ((VirtualKFilePlacesView*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnFocusNextPrevChild(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesView_ViewportEvent(KFilePlacesView* self, QEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->viewportEvent(event);
    } else {
        return ((VirtualKFilePlacesView*)self)->viewportEvent(event);
    }
}

// Base class handler implementation
bool KFilePlacesView_QBaseViewportEvent(KFilePlacesView* self, QEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ViewportEvent_IsBase(true);
        return vkfileplacesview->viewportEvent(event);
    } else {
        return ((VirtualKFilePlacesView*)self)->viewportEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnViewportEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ViewportEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_MouseDoubleClickEvent(KFilePlacesView* self, QMouseEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseMouseDoubleClickEvent(KFilePlacesView* self, QMouseEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_MouseDoubleClickEvent_IsBase(true);
        vkfileplacesview->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnMouseDoubleClickEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_FocusInEvent(KFilePlacesView* self, QFocusEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->focusInEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseFocusInEvent(KFilePlacesView* self, QFocusEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_FocusInEvent_IsBase(true);
        vkfileplacesview->focusInEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnFocusInEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_FocusInEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_FocusOutEvent(KFilePlacesView* self, QFocusEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->focusOutEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseFocusOutEvent(KFilePlacesView* self, QFocusEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_FocusOutEvent_IsBase(true);
        vkfileplacesview->focusOutEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnFocusOutEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_FocusOutEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_InputMethodEvent(KFilePlacesView* self, QInputMethodEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->inputMethodEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->inputMethodEvent(event);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseInputMethodEvent(KFilePlacesView* self, QInputMethodEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_InputMethodEvent_IsBase(true);
        vkfileplacesview->inputMethodEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnInputMethodEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_InputMethodEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesView_EventFilter(KFilePlacesView* self, QObject* object, QEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->eventFilter(object, event);
    } else {
        return ((VirtualKFilePlacesView*)self)->eventFilter(object, event);
    }
}

// Base class handler implementation
bool KFilePlacesView_QBaseEventFilter(KFilePlacesView* self, QObject* object, QEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_EventFilter_IsBase(true);
        return vkfileplacesview->eventFilter(object, event);
    } else {
        return ((VirtualKFilePlacesView*)self)->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnEventFilter(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_EventFilter_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KFilePlacesView_MinimumSizeHint(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return new QSize(vkfileplacesview->minimumSizeHint());
    } else {
        return new QSize(((VirtualKFilePlacesView*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KFilePlacesView_QBaseMinimumSizeHint(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_MinimumSizeHint_IsBase(true);
        return new QSize(vkfileplacesview->minimumSizeHint());
    } else {
        return new QSize(((VirtualKFilePlacesView*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnMinimumSizeHint(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_MinimumSizeHint_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_SetupViewport(KFilePlacesView* self, QWidget* viewport) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setupViewport(viewport);
    } else {
        self->KFilePlacesView::setupViewport(viewport);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseSetupViewport(KFilePlacesView* self, QWidget* viewport) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SetupViewport_IsBase(true);
        vkfileplacesview->setupViewport(viewport);
    } else {
        self->KFilePlacesView::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSetupViewport(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SetupViewport_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_ChangeEvent(KFilePlacesView* self, QEvent* param1) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->changeEvent(param1);
    } else {
        ((VirtualKFilePlacesView*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseChangeEvent(KFilePlacesView* self, QEvent* param1) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ChangeEvent_IsBase(true);
        vkfileplacesview->changeEvent(param1);
    } else {
        ((VirtualKFilePlacesView*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnChangeEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ChangeEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_InitStyleOption(const KFilePlacesView* self, QStyleOptionFrame* option) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->initStyleOption(option);
    } else {
        ((VirtualKFilePlacesView*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseInitStyleOption(const KFilePlacesView* self, QStyleOptionFrame* option) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_InitStyleOption_IsBase(true);
        vkfileplacesview->initStyleOption(option);
    } else {
        ((VirtualKFilePlacesView*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnInitStyleOption(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_InitStyleOption_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KFilePlacesView_DevType(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->devType();
    } else {
        return self->KFilePlacesView::devType();
    }
}

// Base class handler implementation
int KFilePlacesView_QBaseDevType(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DevType_IsBase(true);
        return vkfileplacesview->devType();
    } else {
        return self->KFilePlacesView::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnDevType(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DevType_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_SetVisible(KFilePlacesView* self, bool visible) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setVisible(visible);
    } else {
        self->KFilePlacesView::setVisible(visible);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseSetVisible(KFilePlacesView* self, bool visible) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SetVisible_IsBase(true);
        vkfileplacesview->setVisible(visible);
    } else {
        self->KFilePlacesView::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSetVisible(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SetVisible_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KFilePlacesView_HeightForWidth(const KFilePlacesView* self, int param1) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KFilePlacesView::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KFilePlacesView_QBaseHeightForWidth(const KFilePlacesView* self, int param1) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_HeightForWidth_IsBase(true);
        return vkfileplacesview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KFilePlacesView::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnHeightForWidth(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_HeightForWidth_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesView_HasHeightForWidth(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->hasHeightForWidth();
    } else {
        return self->KFilePlacesView::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KFilePlacesView_QBaseHasHeightForWidth(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_HasHeightForWidth_IsBase(true);
        return vkfileplacesview->hasHeightForWidth();
    } else {
        return self->KFilePlacesView::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnHasHeightForWidth(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_HasHeightForWidth_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KFilePlacesView_PaintEngine(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->paintEngine();
    } else {
        return self->KFilePlacesView::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KFilePlacesView_QBasePaintEngine(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_PaintEngine_IsBase(true);
        return vkfileplacesview->paintEngine();
    } else {
        return self->KFilePlacesView::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnPaintEngine(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_PaintEngine_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_KeyReleaseEvent(KFilePlacesView* self, QKeyEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->keyReleaseEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseKeyReleaseEvent(KFilePlacesView* self, QKeyEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_KeyReleaseEvent_IsBase(true);
        vkfileplacesview->keyReleaseEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnKeyReleaseEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_EnterEvent(KFilePlacesView* self, QEnterEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->enterEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseEnterEvent(KFilePlacesView* self, QEnterEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_EnterEvent_IsBase(true);
        vkfileplacesview->enterEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnEnterEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_EnterEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_LeaveEvent(KFilePlacesView* self, QEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->leaveEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseLeaveEvent(KFilePlacesView* self, QEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_LeaveEvent_IsBase(true);
        vkfileplacesview->leaveEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnLeaveEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_LeaveEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_MoveEvent(KFilePlacesView* self, QMoveEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->moveEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseMoveEvent(KFilePlacesView* self, QMoveEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_MoveEvent_IsBase(true);
        vkfileplacesview->moveEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnMoveEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_MoveEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_CloseEvent(KFilePlacesView* self, QCloseEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->closeEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseCloseEvent(KFilePlacesView* self, QCloseEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_CloseEvent_IsBase(true);
        vkfileplacesview->closeEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnCloseEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_CloseEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_TabletEvent(KFilePlacesView* self, QTabletEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->tabletEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseTabletEvent(KFilePlacesView* self, QTabletEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_TabletEvent_IsBase(true);
        vkfileplacesview->tabletEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnTabletEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_TabletEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_ActionEvent(KFilePlacesView* self, QActionEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->actionEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseActionEvent(KFilePlacesView* self, QActionEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ActionEvent_IsBase(true);
        vkfileplacesview->actionEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnActionEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ActionEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesView_NativeEvent(KFilePlacesView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKFilePlacesView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KFilePlacesView_QBaseNativeEvent(KFilePlacesView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_NativeEvent_IsBase(true);
        return vkfileplacesview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKFilePlacesView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnNativeEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_NativeEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KFilePlacesView_Metric(const KFilePlacesView* self, int param1) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKFilePlacesView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KFilePlacesView_QBaseMetric(const KFilePlacesView* self, int param1) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_Metric_IsBase(true);
        return vkfileplacesview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKFilePlacesView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnMetric(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_Metric_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_InitPainter(const KFilePlacesView* self, QPainter* painter) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->initPainter(painter);
    } else {
        ((VirtualKFilePlacesView*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseInitPainter(const KFilePlacesView* self, QPainter* painter) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_InitPainter_IsBase(true);
        vkfileplacesview->initPainter(painter);
    } else {
        ((VirtualKFilePlacesView*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnInitPainter(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_InitPainter_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KFilePlacesView_Redirected(const KFilePlacesView* self, QPoint* offset) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->redirected(offset);
    } else {
        return ((VirtualKFilePlacesView*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KFilePlacesView_QBaseRedirected(const KFilePlacesView* self, QPoint* offset) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_Redirected_IsBase(true);
        return vkfileplacesview->redirected(offset);
    } else {
        return ((VirtualKFilePlacesView*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnRedirected(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_Redirected_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KFilePlacesView_SharedPainter(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->sharedPainter();
    } else {
        return ((VirtualKFilePlacesView*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KFilePlacesView_QBaseSharedPainter(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SharedPainter_IsBase(true);
        return vkfileplacesview->sharedPainter();
    } else {
        return ((VirtualKFilePlacesView*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSharedPainter(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SharedPainter_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_ChildEvent(KFilePlacesView* self, QChildEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->childEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseChildEvent(KFilePlacesView* self, QChildEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ChildEvent_IsBase(true);
        vkfileplacesview->childEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnChildEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ChildEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_CustomEvent(KFilePlacesView* self, QEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->customEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseCustomEvent(KFilePlacesView* self, QEvent* event) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_CustomEvent_IsBase(true);
        vkfileplacesview->customEvent(event);
    } else {
        ((VirtualKFilePlacesView*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnCustomEvent(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_CustomEvent_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_ConnectNotify(KFilePlacesView* self, const QMetaMethod* signal) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->connectNotify(*signal);
    } else {
        ((VirtualKFilePlacesView*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseConnectNotify(KFilePlacesView* self, const QMetaMethod* signal) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ConnectNotify_IsBase(true);
        vkfileplacesview->connectNotify(*signal);
    } else {
        ((VirtualKFilePlacesView*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnConnectNotify(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ConnectNotify_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_DisconnectNotify(KFilePlacesView* self, const QMetaMethod* signal) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->disconnectNotify(*signal);
    } else {
        ((VirtualKFilePlacesView*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseDisconnectNotify(KFilePlacesView* self, const QMetaMethod* signal) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DisconnectNotify_IsBase(true);
        vkfileplacesview->disconnectNotify(*signal);
    } else {
        ((VirtualKFilePlacesView*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnDisconnectNotify(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DisconnectNotify_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_ResizeContents(KFilePlacesView* self, int width, int height) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->resizeContents(static_cast<int>(width), static_cast<int>(height));
    } else {
        ((VirtualKFilePlacesView*)self)->resizeContents(static_cast<int>(width), static_cast<int>(height));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseResizeContents(KFilePlacesView* self, int width, int height) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ResizeContents_IsBase(true);
        vkfileplacesview->resizeContents(static_cast<int>(width), static_cast<int>(height));
    } else {
        ((VirtualKFilePlacesView*)self)->resizeContents(static_cast<int>(width), static_cast<int>(height));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnResizeContents(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ResizeContents_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ResizeContents_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KFilePlacesView_ContentsSize(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return new QSize(vkfileplacesview->contentsSize());
    }
    return {};
}

// Base class handler implementation
QSize* KFilePlacesView_QBaseContentsSize(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ContentsSize_IsBase(true);
        return new QSize(vkfileplacesview->contentsSize());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnContentsSize(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ContentsSize_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ContentsSize_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* KFilePlacesView_RectForIndex(const KFilePlacesView* self, const QModelIndex* index) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return new QRect(vkfileplacesview->rectForIndex(*index));
    }
    return {};
}

// Base class handler implementation
QRect* KFilePlacesView_QBaseRectForIndex(const KFilePlacesView* self, const QModelIndex* index) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_RectForIndex_IsBase(true);
        return new QRect(vkfileplacesview->rectForIndex(*index));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnRectForIndex(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_RectForIndex_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_RectForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_SetPositionForIndex(KFilePlacesView* self, const QPoint* position, const QModelIndex* index) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setPositionForIndex(*position, *index);
    } else {
        ((VirtualKFilePlacesView*)self)->setPositionForIndex(*position, *index);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseSetPositionForIndex(KFilePlacesView* self, const QPoint* position, const QModelIndex* index) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SetPositionForIndex_IsBase(true);
        vkfileplacesview->setPositionForIndex(*position, *index);
    } else {
        ((VirtualKFilePlacesView*)self)->setPositionForIndex(*position, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSetPositionForIndex(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SetPositionForIndex_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SetPositionForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KFilePlacesView_State(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return static_cast<int>(vkfileplacesview->state());
    } else {
        return static_cast<int>(((VirtualKFilePlacesView*)self)->state());
    }
}

// Base class handler implementation
int KFilePlacesView_QBaseState(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_State_IsBase(true);
        return static_cast<int>(vkfileplacesview->state());
    } else {
        return static_cast<int>(((VirtualKFilePlacesView*)self)->state());
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnState(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_State_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_State_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_SetState(KFilePlacesView* self, int state) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setState(static_cast<VirtualKFilePlacesView::State>(state));
    } else {
        ((VirtualKFilePlacesView*)self)->setState(static_cast<VirtualKFilePlacesView::State>(state));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseSetState(KFilePlacesView* self, int state) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SetState_IsBase(true);
        vkfileplacesview->setState(static_cast<VirtualKFilePlacesView::State>(state));
    } else {
        ((VirtualKFilePlacesView*)self)->setState(static_cast<VirtualKFilePlacesView::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSetState(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SetState_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SetState_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_ScheduleDelayedItemsLayout(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->scheduleDelayedItemsLayout();
    } else {
        ((VirtualKFilePlacesView*)self)->scheduleDelayedItemsLayout();
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseScheduleDelayedItemsLayout(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ScheduleDelayedItemsLayout_IsBase(true);
        vkfileplacesview->scheduleDelayedItemsLayout();
    } else {
        ((VirtualKFilePlacesView*)self)->scheduleDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnScheduleDelayedItemsLayout(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ScheduleDelayedItemsLayout_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ScheduleDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_ExecuteDelayedItemsLayout(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->executeDelayedItemsLayout();
    } else {
        ((VirtualKFilePlacesView*)self)->executeDelayedItemsLayout();
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseExecuteDelayedItemsLayout(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ExecuteDelayedItemsLayout_IsBase(true);
        vkfileplacesview->executeDelayedItemsLayout();
    } else {
        ((VirtualKFilePlacesView*)self)->executeDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnExecuteDelayedItemsLayout(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ExecuteDelayedItemsLayout_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ExecuteDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_SetDirtyRegion(KFilePlacesView* self, const QRegion* region) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setDirtyRegion(*region);
    } else {
        ((VirtualKFilePlacesView*)self)->setDirtyRegion(*region);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseSetDirtyRegion(KFilePlacesView* self, const QRegion* region) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SetDirtyRegion_IsBase(true);
        vkfileplacesview->setDirtyRegion(*region);
    } else {
        ((VirtualKFilePlacesView*)self)->setDirtyRegion(*region);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSetDirtyRegion(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SetDirtyRegion_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SetDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_ScrollDirtyRegion(KFilePlacesView* self, int dx, int dy) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualKFilePlacesView*)self)->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseScrollDirtyRegion(KFilePlacesView* self, int dx, int dy) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ScrollDirtyRegion_IsBase(true);
        vkfileplacesview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualKFilePlacesView*)self)->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnScrollDirtyRegion(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ScrollDirtyRegion_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ScrollDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
QPoint* KFilePlacesView_DirtyRegionOffset(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return new QPoint(vkfileplacesview->dirtyRegionOffset());
    }
    return {};
}

// Base class handler implementation
QPoint* KFilePlacesView_QBaseDirtyRegionOffset(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DirtyRegionOffset_IsBase(true);
        return new QPoint(vkfileplacesview->dirtyRegionOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnDirtyRegionOffset(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DirtyRegionOffset_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_DirtyRegionOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_StartAutoScroll(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->startAutoScroll();
    } else {
        ((VirtualKFilePlacesView*)self)->startAutoScroll();
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseStartAutoScroll(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_StartAutoScroll_IsBase(true);
        vkfileplacesview->startAutoScroll();
    } else {
        ((VirtualKFilePlacesView*)self)->startAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnStartAutoScroll(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_StartAutoScroll_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_StartAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_StopAutoScroll(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->stopAutoScroll();
    } else {
        ((VirtualKFilePlacesView*)self)->stopAutoScroll();
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseStopAutoScroll(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_StopAutoScroll_IsBase(true);
        vkfileplacesview->stopAutoScroll();
    } else {
        ((VirtualKFilePlacesView*)self)->stopAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnStopAutoScroll(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_StopAutoScroll_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_StopAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_DoAutoScroll(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->doAutoScroll();
    } else {
        ((VirtualKFilePlacesView*)self)->doAutoScroll();
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseDoAutoScroll(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DoAutoScroll_IsBase(true);
        vkfileplacesview->doAutoScroll();
    } else {
        ((VirtualKFilePlacesView*)self)->doAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnDoAutoScroll(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DoAutoScroll_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_DoAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
int KFilePlacesView_DropIndicatorPosition(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return static_cast<int>(vkfileplacesview->dropIndicatorPosition());
    } else {
        return static_cast<int>(((VirtualKFilePlacesView*)self)->dropIndicatorPosition());
    }
}

// Base class handler implementation
int KFilePlacesView_QBaseDropIndicatorPosition(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DropIndicatorPosition_IsBase(true);
        return static_cast<int>(vkfileplacesview->dropIndicatorPosition());
    } else {
        return static_cast<int>(((VirtualKFilePlacesView*)self)->dropIndicatorPosition());
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnDropIndicatorPosition(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DropIndicatorPosition_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_DropIndicatorPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_SetViewportMargins(KFilePlacesView* self, int left, int top, int right, int bottom) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualKFilePlacesView*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseSetViewportMargins(KFilePlacesView* self, int left, int top, int right, int bottom) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SetViewportMargins_IsBase(true);
        vkfileplacesview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualKFilePlacesView*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSetViewportMargins(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SetViewportMargins_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* KFilePlacesView_ViewportMargins(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return new QMargins(vkfileplacesview->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* KFilePlacesView_QBaseViewportMargins(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ViewportMargins_IsBase(true);
        return new QMargins(vkfileplacesview->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnViewportMargins(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_ViewportMargins_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_DrawFrame(KFilePlacesView* self, QPainter* param1) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->drawFrame(param1);
    } else {
        ((VirtualKFilePlacesView*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseDrawFrame(KFilePlacesView* self, QPainter* param1) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DrawFrame_IsBase(true);
        vkfileplacesview->drawFrame(param1);
    } else {
        ((VirtualKFilePlacesView*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnDrawFrame(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_DrawFrame_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_UpdateMicroFocus(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->updateMicroFocus();
    } else {
        ((VirtualKFilePlacesView*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseUpdateMicroFocus(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_UpdateMicroFocus_IsBase(true);
        vkfileplacesview->updateMicroFocus();
    } else {
        ((VirtualKFilePlacesView*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnUpdateMicroFocus(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_Create(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->create();
    } else {
        ((VirtualKFilePlacesView*)self)->create();
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseCreate(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_Create_IsBase(true);
        vkfileplacesview->create();
    } else {
        ((VirtualKFilePlacesView*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnCreate(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_Create_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesView_Destroy(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->destroy();
    } else {
        ((VirtualKFilePlacesView*)self)->destroy();
    }
}

// Base class handler implementation
void KFilePlacesView_QBaseDestroy(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_Destroy_IsBase(true);
        vkfileplacesview->destroy();
    } else {
        ((VirtualKFilePlacesView*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnDestroy(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_Destroy_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesView_FocusNextChild(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->focusNextChild();
    } else {
        return ((VirtualKFilePlacesView*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KFilePlacesView_QBaseFocusNextChild(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_FocusNextChild_IsBase(true);
        return vkfileplacesview->focusNextChild();
    } else {
        return ((VirtualKFilePlacesView*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnFocusNextChild(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_FocusNextChild_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesView_FocusPreviousChild(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->focusPreviousChild();
    } else {
        return ((VirtualKFilePlacesView*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KFilePlacesView_QBaseFocusPreviousChild(KFilePlacesView* self) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_FocusPreviousChild_IsBase(true);
        return vkfileplacesview->focusPreviousChild();
    } else {
        return ((VirtualKFilePlacesView*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnFocusPreviousChild(KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = dynamic_cast<VirtualKFilePlacesView*>(self);
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_FocusPreviousChild_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KFilePlacesView_Sender(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->sender();
    } else {
        return ((VirtualKFilePlacesView*)self)->sender();
    }
}

// Base class handler implementation
QObject* KFilePlacesView_QBaseSender(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_Sender_IsBase(true);
        return vkfileplacesview->sender();
    } else {
        return ((VirtualKFilePlacesView*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSender(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_Sender_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KFilePlacesView_SenderSignalIndex(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->senderSignalIndex();
    } else {
        return ((VirtualKFilePlacesView*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KFilePlacesView_QBaseSenderSignalIndex(const KFilePlacesView* self) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SenderSignalIndex_IsBase(true);
        return vkfileplacesview->senderSignalIndex();
    } else {
        return ((VirtualKFilePlacesView*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnSenderSignalIndex(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_SenderSignalIndex_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KFilePlacesView_Receivers(const KFilePlacesView* self, const char* signal) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->receivers(signal);
    } else {
        return ((VirtualKFilePlacesView*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KFilePlacesView_QBaseReceivers(const KFilePlacesView* self, const char* signal) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_Receivers_IsBase(true);
        return vkfileplacesview->receivers(signal);
    } else {
        return ((VirtualKFilePlacesView*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnReceivers(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_Receivers_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesView_IsSignalConnected(const KFilePlacesView* self, const QMetaMethod* signal) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->isSignalConnected(*signal);
    } else {
        return ((VirtualKFilePlacesView*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KFilePlacesView_QBaseIsSignalConnected(const KFilePlacesView* self, const QMetaMethod* signal) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_IsSignalConnected_IsBase(true);
        return vkfileplacesview->isSignalConnected(*signal);
    } else {
        return ((VirtualKFilePlacesView*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnIsSignalConnected(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_IsSignalConnected_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KFilePlacesView_GetDecodedMetricF(const KFilePlacesView* self, int metricA, int metricB) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        return vkfileplacesview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKFilePlacesView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KFilePlacesView_QBaseGetDecodedMetricF(const KFilePlacesView* self, int metricA, int metricB) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_GetDecodedMetricF_IsBase(true);
        return vkfileplacesview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKFilePlacesView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesView_OnGetDecodedMetricF(const KFilePlacesView* self, intptr_t slot) {
    auto* vkfileplacesview = const_cast<VirtualKFilePlacesView*>(dynamic_cast<const VirtualKFilePlacesView*>(self));
    if (vkfileplacesview && vkfileplacesview->isVirtualKFilePlacesView) {
        vkfileplacesview->setKFilePlacesView_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKFilePlacesView::KFilePlacesView_GetDecodedMetricF_Callback>(slot));
    }
}

void KFilePlacesView_Delete(KFilePlacesView* self) {
    delete self;
}
