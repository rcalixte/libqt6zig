#include <KFilePlacesModel>
#include <KUrlComboBox>
#include <KUrlNavigator>
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
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kurlnavigator.h>
#include "libkurlnavigator.h"
#include "libkurlnavigator.hxx"

KUrlNavigator* KUrlNavigator_new(QWidget* parent) {
    return new VirtualKUrlNavigator(parent);
}

KUrlNavigator* KUrlNavigator_new2() {
    return new VirtualKUrlNavigator();
}

KUrlNavigator* KUrlNavigator_new3(KFilePlacesModel* placesModel, const QUrl* url, QWidget* parent) {
    return new VirtualKUrlNavigator(placesModel, *url, parent);
}

QMetaObject* KUrlNavigator_MetaObject(const KUrlNavigator* self) {
    return (QMetaObject*)self->metaObject();
}

void* KUrlNavigator_Metacast(KUrlNavigator* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KUrlNavigator_Metacall(KUrlNavigator* self, int param1, int param2, void** param3) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKUrlNavigator*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KUrlNavigator_Tr(const char* s) {
    QString _ret = KUrlNavigator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KUrlNavigator_LocationUrl(const KUrlNavigator* self) {
    return new QUrl(self->locationUrl());
}

void KUrlNavigator_SaveLocationState(KUrlNavigator* self, const libqt_string state) {
    QByteArray state_QByteArray(state.data, state.len);
    self->saveLocationState(state_QByteArray);
}

libqt_string KUrlNavigator_LocationState(const KUrlNavigator* self) {
    QByteArray _qb = self->locationState();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KUrlNavigator_GoBack(KUrlNavigator* self) {
    return self->goBack();
}

bool KUrlNavigator_GoForward(KUrlNavigator* self) {
    return self->goForward();
}

bool KUrlNavigator_GoUp(KUrlNavigator* self) {
    return self->goUp();
}

void KUrlNavigator_GoHome(KUrlNavigator* self) {
    self->goHome();
}

void KUrlNavigator_SetHomeUrl(KUrlNavigator* self, const QUrl* url) {
    self->setHomeUrl(*url);
}

QUrl* KUrlNavigator_HomeUrl(const KUrlNavigator* self) {
    return new QUrl(self->homeUrl());
}

void KUrlNavigator_SetUrlEditable(KUrlNavigator* self, bool editable) {
    self->setUrlEditable(editable);
}

bool KUrlNavigator_IsUrlEditable(const KUrlNavigator* self) {
    return self->isUrlEditable();
}

void KUrlNavigator_SetShowFullPath(KUrlNavigator* self, bool show) {
    self->setShowFullPath(show);
}

bool KUrlNavigator_ShowFullPath(const KUrlNavigator* self) {
    return self->showFullPath();
}

void KUrlNavigator_SetActive(KUrlNavigator* self, bool active) {
    self->setActive(active);
}

bool KUrlNavigator_IsActive(const KUrlNavigator* self) {
    return self->isActive();
}

void KUrlNavigator_SetPlacesSelectorVisible(KUrlNavigator* self, bool visible) {
    self->setPlacesSelectorVisible(visible);
}

bool KUrlNavigator_IsPlacesSelectorVisible(const KUrlNavigator* self) {
    return self->isPlacesSelectorVisible();
}

QUrl* KUrlNavigator_UncommittedUrl(const KUrlNavigator* self) {
    return new QUrl(self->uncommittedUrl());
}

int KUrlNavigator_HistorySize(const KUrlNavigator* self) {
    return self->historySize();
}

int KUrlNavigator_HistoryIndex(const KUrlNavigator* self) {
    return self->historyIndex();
}

KUrlComboBox* KUrlNavigator_Editor(const KUrlNavigator* self) {
    return self->editor();
}

void KUrlNavigator_SetSupportedSchemes(KUrlNavigator* self, const libqt_list /* of libqt_string */ schemes) {
    QList<QString> schemes_QList;
    schemes_QList.reserve(schemes.len);
    libqt_string* schemes_arr = static_cast<libqt_string*>(schemes.data);
    for (size_t i = 0; i < schemes.len; ++i) {
        QString schemes_arr_i_QString = QString::fromUtf8(schemes_arr[i].data, schemes_arr[i].len);
        schemes_QList.push_back(schemes_arr_i_QString);
    }
    self->setSupportedSchemes(schemes_QList);
}

libqt_list /* of libqt_string */ KUrlNavigator_SupportedSchemes(const KUrlNavigator* self) {
    QList<QString> _ret = self->supportedSchemes();
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

QWidget* KUrlNavigator_DropWidget(const KUrlNavigator* self) {
    return self->dropWidget();
}

void KUrlNavigator_SetShowHiddenFolders(KUrlNavigator* self, bool showHiddenFolders) {
    self->setShowHiddenFolders(showHiddenFolders);
}

bool KUrlNavigator_ShowHiddenFolders(const KUrlNavigator* self) {
    return self->showHiddenFolders();
}

void KUrlNavigator_SetSortHiddenFoldersLast(KUrlNavigator* self, bool sortHiddenFoldersLast) {
    self->setSortHiddenFoldersLast(sortHiddenFoldersLast);
}

bool KUrlNavigator_SortHiddenFoldersLast(const KUrlNavigator* self) {
    return self->sortHiddenFoldersLast();
}

void KUrlNavigator_SetBadgeWidget(KUrlNavigator* self, QWidget* widget) {
    self->setBadgeWidget(widget);
}

QWidget* KUrlNavigator_BadgeWidget(const KUrlNavigator* self) {
    return self->badgeWidget();
}

void KUrlNavigator_SetBackgroundEnabled(KUrlNavigator* self, bool enabled) {
    self->setBackgroundEnabled(enabled);
}

bool KUrlNavigator_IsBackgroundEnabled(const KUrlNavigator* self) {
    return self->isBackgroundEnabled();
}

void KUrlNavigator_SetLocationUrl(KUrlNavigator* self, const QUrl* url) {
    self->setLocationUrl(*url);
}

void KUrlNavigator_RequestActivation(KUrlNavigator* self) {
    self->requestActivation();
}

void KUrlNavigator_SetFocus(KUrlNavigator* self) {
    self->setFocus();
}

void KUrlNavigator_Activated(KUrlNavigator* self) {
    self->activated();
}

void KUrlNavigator_Connect_Activated(KUrlNavigator* self, intptr_t slot) {
    void (*slotFunc)(KUrlNavigator*) = reinterpret_cast<void (*)(KUrlNavigator*)>(slot);
    KUrlNavigator::connect(self, &KUrlNavigator::activated, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KUrlNavigator_UrlChanged(KUrlNavigator* self, const QUrl* url) {
    self->urlChanged(*url);
}

void KUrlNavigator_Connect_UrlChanged(KUrlNavigator* self, intptr_t slot) {
    void (*slotFunc)(KUrlNavigator*, QUrl*) = reinterpret_cast<void (*)(KUrlNavigator*, QUrl*)>(slot);
    KUrlNavigator::connect(self, &KUrlNavigator::urlChanged, [self, slotFunc](const QUrl& url) {
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1);
    });
}

void KUrlNavigator_UrlAboutToBeChanged(KUrlNavigator* self, const QUrl* newUrl) {
    self->urlAboutToBeChanged(*newUrl);
}

void KUrlNavigator_Connect_UrlAboutToBeChanged(KUrlNavigator* self, intptr_t slot) {
    void (*slotFunc)(KUrlNavigator*, QUrl*) = reinterpret_cast<void (*)(KUrlNavigator*, QUrl*)>(slot);
    KUrlNavigator::connect(self, &KUrlNavigator::urlAboutToBeChanged, [self, slotFunc](const QUrl& newUrl) {
        const QUrl& newUrl_ret = newUrl;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&newUrl_ret);
        slotFunc(self, sigval1);
    });
}

void KUrlNavigator_EditableStateChanged(KUrlNavigator* self, bool editable) {
    self->editableStateChanged(editable);
}

void KUrlNavigator_Connect_EditableStateChanged(KUrlNavigator* self, intptr_t slot) {
    void (*slotFunc)(KUrlNavigator*, bool) = reinterpret_cast<void (*)(KUrlNavigator*, bool)>(slot);
    KUrlNavigator::connect(self, &KUrlNavigator::editableStateChanged, [self, slotFunc](bool editable) {
        bool sigval1 = editable;
        slotFunc(self, sigval1);
    });
}

void KUrlNavigator_HistoryChanged(KUrlNavigator* self) {
    self->historyChanged();
}

void KUrlNavigator_Connect_HistoryChanged(KUrlNavigator* self, intptr_t slot) {
    void (*slotFunc)(KUrlNavigator*) = reinterpret_cast<void (*)(KUrlNavigator*)>(slot);
    KUrlNavigator::connect(self, &KUrlNavigator::historyChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KUrlNavigator_UrlsDropped(KUrlNavigator* self, const QUrl* destination, QDropEvent* event) {
    self->urlsDropped(*destination, event);
}

void KUrlNavigator_Connect_UrlsDropped(KUrlNavigator* self, intptr_t slot) {
    void (*slotFunc)(KUrlNavigator*, QUrl*, QDropEvent*) = reinterpret_cast<void (*)(KUrlNavigator*, QUrl*, QDropEvent*)>(slot);
    KUrlNavigator::connect(self, &KUrlNavigator::urlsDropped, [self, slotFunc](const QUrl& destination, QDropEvent* event) {
        const QUrl& destination_ret = destination;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&destination_ret);
        QDropEvent* sigval2 = event;
        slotFunc(self, sigval1, sigval2);
    });
}

void KUrlNavigator_ReturnPressed(KUrlNavigator* self) {
    self->returnPressed();
}

void KUrlNavigator_Connect_ReturnPressed(KUrlNavigator* self, intptr_t slot) {
    void (*slotFunc)(KUrlNavigator*) = reinterpret_cast<void (*)(KUrlNavigator*)>(slot);
    KUrlNavigator::connect(self, &KUrlNavigator::returnPressed, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KUrlNavigator_TabRequested(KUrlNavigator* self, const QUrl* url) {
    self->tabRequested(*url);
}

void KUrlNavigator_Connect_TabRequested(KUrlNavigator* self, intptr_t slot) {
    void (*slotFunc)(KUrlNavigator*, QUrl*) = reinterpret_cast<void (*)(KUrlNavigator*, QUrl*)>(slot);
    KUrlNavigator::connect(self, &KUrlNavigator::tabRequested, [self, slotFunc](const QUrl& url) {
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1);
    });
}

void KUrlNavigator_ActiveTabRequested(KUrlNavigator* self, const QUrl* url) {
    self->activeTabRequested(*url);
}

void KUrlNavigator_Connect_ActiveTabRequested(KUrlNavigator* self, intptr_t slot) {
    void (*slotFunc)(KUrlNavigator*, QUrl*) = reinterpret_cast<void (*)(KUrlNavigator*, QUrl*)>(slot);
    KUrlNavigator::connect(self, &KUrlNavigator::activeTabRequested, [self, slotFunc](const QUrl& url) {
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1);
    });
}

void KUrlNavigator_NewWindowRequested(KUrlNavigator* self, const QUrl* url) {
    self->newWindowRequested(*url);
}

void KUrlNavigator_Connect_NewWindowRequested(KUrlNavigator* self, intptr_t slot) {
    void (*slotFunc)(KUrlNavigator*, QUrl*) = reinterpret_cast<void (*)(KUrlNavigator*, QUrl*)>(slot);
    KUrlNavigator::connect(self, &KUrlNavigator::newWindowRequested, [self, slotFunc](const QUrl& url) {
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1);
    });
}

void KUrlNavigator_UrlSelectionRequested(KUrlNavigator* self, const QUrl* url) {
    self->urlSelectionRequested(*url);
}

void KUrlNavigator_Connect_UrlSelectionRequested(KUrlNavigator* self, intptr_t slot) {
    void (*slotFunc)(KUrlNavigator*, QUrl*) = reinterpret_cast<void (*)(KUrlNavigator*, QUrl*)>(slot);
    KUrlNavigator::connect(self, &KUrlNavigator::urlSelectionRequested, [self, slotFunc](const QUrl& url) {
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1);
    });
}

void KUrlNavigator_LayoutChanged(KUrlNavigator* self) {
    self->layoutChanged();
}

void KUrlNavigator_Connect_LayoutChanged(KUrlNavigator* self, intptr_t slot) {
    void (*slotFunc)(KUrlNavigator*) = reinterpret_cast<void (*)(KUrlNavigator*)>(slot);
    KUrlNavigator::connect(self, &KUrlNavigator::layoutChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KUrlNavigator_KeyPressEvent(KUrlNavigator* self, QKeyEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->keyPressEvent(event);
    }
}

void KUrlNavigator_KeyReleaseEvent(KUrlNavigator* self, QKeyEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->keyReleaseEvent(event);
    }
}

void KUrlNavigator_MouseReleaseEvent(KUrlNavigator* self, QMouseEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->mouseReleaseEvent(event);
    }
}

void KUrlNavigator_MousePressEvent(KUrlNavigator* self, QMouseEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->mousePressEvent(event);
    }
}

void KUrlNavigator_ResizeEvent(KUrlNavigator* self, QResizeEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->resizeEvent(event);
    }
}

void KUrlNavigator_WheelEvent(KUrlNavigator* self, QWheelEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->wheelEvent(event);
    }
}

void KUrlNavigator_ShowEvent(KUrlNavigator* self, QShowEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->showEvent(event);
    }
}

bool KUrlNavigator_EventFilter(KUrlNavigator* self, QObject* watched, QEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        return vkurlnavigator->eventFilter(watched, event);
    }
    return {};
}

void KUrlNavigator_PaintEvent(KUrlNavigator* self, QPaintEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->paintEvent(event);
    }
}

libqt_string KUrlNavigator_Tr2(const char* s, const char* c) {
    QString _ret = KUrlNavigator::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUrlNavigator_Tr3(const char* s, const char* c, int n) {
    QString _ret = KUrlNavigator::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KUrlNavigator_LocationUrl1(const KUrlNavigator* self, int historyIndex) {
    return new QUrl(self->locationUrl(static_cast<int>(historyIndex)));
}

libqt_string KUrlNavigator_LocationState1(const KUrlNavigator* self, int historyIndex) {
    QByteArray _qb = self->locationState(static_cast<int>(historyIndex));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
int KUrlNavigator_QBaseMetacall(KUrlNavigator* self, int param1, int param2, void** param3) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_Metacall_IsBase(true);
        return vkurlnavigator->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KUrlNavigator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnMetacall(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_Metacall_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseKeyPressEvent(KUrlNavigator* self, QKeyEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_KeyPressEvent_IsBase(true);
        vkurlnavigator->keyPressEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnKeyPressEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_KeyPressEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_KeyPressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseKeyReleaseEvent(KUrlNavigator* self, QKeyEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_KeyReleaseEvent_IsBase(true);
        vkurlnavigator->keyReleaseEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnKeyReleaseEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_KeyReleaseEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseMouseReleaseEvent(KUrlNavigator* self, QMouseEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_MouseReleaseEvent_IsBase(true);
        vkurlnavigator->mouseReleaseEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnMouseReleaseEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_MouseReleaseEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseMousePressEvent(KUrlNavigator* self, QMouseEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_MousePressEvent_IsBase(true);
        vkurlnavigator->mousePressEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnMousePressEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_MousePressEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_MousePressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseResizeEvent(KUrlNavigator* self, QResizeEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_ResizeEvent_IsBase(true);
        vkurlnavigator->resizeEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnResizeEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_ResizeEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_ResizeEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseWheelEvent(KUrlNavigator* self, QWheelEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_WheelEvent_IsBase(true);
        vkurlnavigator->wheelEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnWheelEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_WheelEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_WheelEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseShowEvent(KUrlNavigator* self, QShowEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_ShowEvent_IsBase(true);
        vkurlnavigator->showEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnShowEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_ShowEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_ShowEvent_Callback>(slot));
    }
}

// Base class handler implementation
bool KUrlNavigator_QBaseEventFilter(KUrlNavigator* self, QObject* watched, QEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_EventFilter_IsBase(true);
        return vkurlnavigator->eventFilter(watched, event);
    } else {
        return ((VirtualKUrlNavigator*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnEventFilter(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_EventFilter_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_EventFilter_Callback>(slot));
    }
}

// Base class handler implementation
void KUrlNavigator_QBasePaintEvent(KUrlNavigator* self, QPaintEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_PaintEvent_IsBase(true);
        vkurlnavigator->paintEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnPaintEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_PaintEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlNavigator_DevType(const KUrlNavigator* self) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        return vkurlnavigator->devType();
    } else {
        return self->KUrlNavigator::devType();
    }
}

// Base class handler implementation
int KUrlNavigator_QBaseDevType(const KUrlNavigator* self) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_DevType_IsBase(true);
        return vkurlnavigator->devType();
    } else {
        return self->KUrlNavigator::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnDevType(const KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_DevType_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_SetVisible(KUrlNavigator* self, bool visible) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setVisible(visible);
    } else {
        self->KUrlNavigator::setVisible(visible);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseSetVisible(KUrlNavigator* self, bool visible) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_SetVisible_IsBase(true);
        vkurlnavigator->setVisible(visible);
    } else {
        self->KUrlNavigator::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnSetVisible(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_SetVisible_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KUrlNavigator_SizeHint(const KUrlNavigator* self) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        return new QSize(vkurlnavigator->sizeHint());
    } else {
        return new QSize(((VirtualKUrlNavigator*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KUrlNavigator_QBaseSizeHint(const KUrlNavigator* self) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_SizeHint_IsBase(true);
        return new QSize(vkurlnavigator->sizeHint());
    } else {
        return new QSize(((VirtualKUrlNavigator*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnSizeHint(const KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_SizeHint_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KUrlNavigator_MinimumSizeHint(const KUrlNavigator* self) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        return new QSize(vkurlnavigator->minimumSizeHint());
    } else {
        return new QSize(((VirtualKUrlNavigator*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KUrlNavigator_QBaseMinimumSizeHint(const KUrlNavigator* self) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_MinimumSizeHint_IsBase(true);
        return new QSize(vkurlnavigator->minimumSizeHint());
    } else {
        return new QSize(((VirtualKUrlNavigator*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnMinimumSizeHint(const KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_MinimumSizeHint_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlNavigator_HeightForWidth(const KUrlNavigator* self, int param1) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        return vkurlnavigator->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KUrlNavigator::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KUrlNavigator_QBaseHeightForWidth(const KUrlNavigator* self, int param1) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_HeightForWidth_IsBase(true);
        return vkurlnavigator->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KUrlNavigator::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnHeightForWidth(const KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_HeightForWidth_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlNavigator_HasHeightForWidth(const KUrlNavigator* self) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        return vkurlnavigator->hasHeightForWidth();
    } else {
        return self->KUrlNavigator::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KUrlNavigator_QBaseHasHeightForWidth(const KUrlNavigator* self) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_HasHeightForWidth_IsBase(true);
        return vkurlnavigator->hasHeightForWidth();
    } else {
        return self->KUrlNavigator::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnHasHeightForWidth(const KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_HasHeightForWidth_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KUrlNavigator_PaintEngine(const KUrlNavigator* self) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        return vkurlnavigator->paintEngine();
    } else {
        return self->KUrlNavigator::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KUrlNavigator_QBasePaintEngine(const KUrlNavigator* self) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_PaintEngine_IsBase(true);
        return vkurlnavigator->paintEngine();
    } else {
        return self->KUrlNavigator::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnPaintEngine(const KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_PaintEngine_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlNavigator_Event(KUrlNavigator* self, QEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        return vkurlnavigator->event(event);
    } else {
        return ((VirtualKUrlNavigator*)self)->event(event);
    }
}

// Base class handler implementation
bool KUrlNavigator_QBaseEvent(KUrlNavigator* self, QEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_Event_IsBase(true);
        return vkurlnavigator->event(event);
    } else {
        return ((VirtualKUrlNavigator*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_Event_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_MouseDoubleClickEvent(KUrlNavigator* self, QMouseEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseMouseDoubleClickEvent(KUrlNavigator* self, QMouseEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_MouseDoubleClickEvent_IsBase(true);
        vkurlnavigator->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnMouseDoubleClickEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_MouseMoveEvent(KUrlNavigator* self, QMouseEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->mouseMoveEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseMouseMoveEvent(KUrlNavigator* self, QMouseEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_MouseMoveEvent_IsBase(true);
        vkurlnavigator->mouseMoveEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnMouseMoveEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_MouseMoveEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_FocusInEvent(KUrlNavigator* self, QFocusEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->focusInEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseFocusInEvent(KUrlNavigator* self, QFocusEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_FocusInEvent_IsBase(true);
        vkurlnavigator->focusInEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnFocusInEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_FocusInEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_FocusOutEvent(KUrlNavigator* self, QFocusEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->focusOutEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseFocusOutEvent(KUrlNavigator* self, QFocusEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_FocusOutEvent_IsBase(true);
        vkurlnavigator->focusOutEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnFocusOutEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_FocusOutEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_EnterEvent(KUrlNavigator* self, QEnterEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->enterEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseEnterEvent(KUrlNavigator* self, QEnterEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_EnterEvent_IsBase(true);
        vkurlnavigator->enterEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnEnterEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_EnterEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_LeaveEvent(KUrlNavigator* self, QEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->leaveEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseLeaveEvent(KUrlNavigator* self, QEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_LeaveEvent_IsBase(true);
        vkurlnavigator->leaveEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnLeaveEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_LeaveEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_MoveEvent(KUrlNavigator* self, QMoveEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->moveEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseMoveEvent(KUrlNavigator* self, QMoveEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_MoveEvent_IsBase(true);
        vkurlnavigator->moveEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnMoveEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_MoveEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_CloseEvent(KUrlNavigator* self, QCloseEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->closeEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseCloseEvent(KUrlNavigator* self, QCloseEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_CloseEvent_IsBase(true);
        vkurlnavigator->closeEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnCloseEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_CloseEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_ContextMenuEvent(KUrlNavigator* self, QContextMenuEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->contextMenuEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseContextMenuEvent(KUrlNavigator* self, QContextMenuEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_ContextMenuEvent_IsBase(true);
        vkurlnavigator->contextMenuEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnContextMenuEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_ContextMenuEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_TabletEvent(KUrlNavigator* self, QTabletEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->tabletEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseTabletEvent(KUrlNavigator* self, QTabletEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_TabletEvent_IsBase(true);
        vkurlnavigator->tabletEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnTabletEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_TabletEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_ActionEvent(KUrlNavigator* self, QActionEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->actionEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseActionEvent(KUrlNavigator* self, QActionEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_ActionEvent_IsBase(true);
        vkurlnavigator->actionEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnActionEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_ActionEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_DragEnterEvent(KUrlNavigator* self, QDragEnterEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->dragEnterEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseDragEnterEvent(KUrlNavigator* self, QDragEnterEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_DragEnterEvent_IsBase(true);
        vkurlnavigator->dragEnterEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnDragEnterEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_DragEnterEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_DragMoveEvent(KUrlNavigator* self, QDragMoveEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->dragMoveEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseDragMoveEvent(KUrlNavigator* self, QDragMoveEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_DragMoveEvent_IsBase(true);
        vkurlnavigator->dragMoveEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnDragMoveEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_DragMoveEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_DragLeaveEvent(KUrlNavigator* self, QDragLeaveEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->dragLeaveEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseDragLeaveEvent(KUrlNavigator* self, QDragLeaveEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_DragLeaveEvent_IsBase(true);
        vkurlnavigator->dragLeaveEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnDragLeaveEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_DragLeaveEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_DropEvent(KUrlNavigator* self, QDropEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->dropEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseDropEvent(KUrlNavigator* self, QDropEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_DropEvent_IsBase(true);
        vkurlnavigator->dropEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnDropEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_DropEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_HideEvent(KUrlNavigator* self, QHideEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->hideEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseHideEvent(KUrlNavigator* self, QHideEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_HideEvent_IsBase(true);
        vkurlnavigator->hideEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnHideEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_HideEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlNavigator_NativeEvent(KUrlNavigator* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        return vkurlnavigator->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKUrlNavigator*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KUrlNavigator_QBaseNativeEvent(KUrlNavigator* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_NativeEvent_IsBase(true);
        return vkurlnavigator->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKUrlNavigator*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnNativeEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_NativeEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_ChangeEvent(KUrlNavigator* self, QEvent* param1) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->changeEvent(param1);
    } else {
        ((VirtualKUrlNavigator*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseChangeEvent(KUrlNavigator* self, QEvent* param1) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_ChangeEvent_IsBase(true);
        vkurlnavigator->changeEvent(param1);
    } else {
        ((VirtualKUrlNavigator*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnChangeEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_ChangeEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlNavigator_Metric(const KUrlNavigator* self, int param1) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        return vkurlnavigator->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKUrlNavigator*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KUrlNavigator_QBaseMetric(const KUrlNavigator* self, int param1) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_Metric_IsBase(true);
        return vkurlnavigator->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKUrlNavigator*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnMetric(const KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_Metric_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_InitPainter(const KUrlNavigator* self, QPainter* painter) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->initPainter(painter);
    } else {
        ((VirtualKUrlNavigator*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseInitPainter(const KUrlNavigator* self, QPainter* painter) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_InitPainter_IsBase(true);
        vkurlnavigator->initPainter(painter);
    } else {
        ((VirtualKUrlNavigator*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnInitPainter(const KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_InitPainter_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KUrlNavigator_Redirected(const KUrlNavigator* self, QPoint* offset) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        return vkurlnavigator->redirected(offset);
    } else {
        return ((VirtualKUrlNavigator*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KUrlNavigator_QBaseRedirected(const KUrlNavigator* self, QPoint* offset) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_Redirected_IsBase(true);
        return vkurlnavigator->redirected(offset);
    } else {
        return ((VirtualKUrlNavigator*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnRedirected(const KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_Redirected_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KUrlNavigator_SharedPainter(const KUrlNavigator* self) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        return vkurlnavigator->sharedPainter();
    } else {
        return ((VirtualKUrlNavigator*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KUrlNavigator_QBaseSharedPainter(const KUrlNavigator* self) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_SharedPainter_IsBase(true);
        return vkurlnavigator->sharedPainter();
    } else {
        return ((VirtualKUrlNavigator*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnSharedPainter(const KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_SharedPainter_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_InputMethodEvent(KUrlNavigator* self, QInputMethodEvent* param1) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->inputMethodEvent(param1);
    } else {
        ((VirtualKUrlNavigator*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseInputMethodEvent(KUrlNavigator* self, QInputMethodEvent* param1) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_InputMethodEvent_IsBase(true);
        vkurlnavigator->inputMethodEvent(param1);
    } else {
        ((VirtualKUrlNavigator*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnInputMethodEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_InputMethodEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KUrlNavigator_InputMethodQuery(const KUrlNavigator* self, int param1) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        return new QVariant(vkurlnavigator->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKUrlNavigator*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KUrlNavigator_QBaseInputMethodQuery(const KUrlNavigator* self, int param1) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_InputMethodQuery_IsBase(true);
        return new QVariant(vkurlnavigator->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKUrlNavigator*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnInputMethodQuery(const KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_InputMethodQuery_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlNavigator_FocusNextPrevChild(KUrlNavigator* self, bool next) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        return vkurlnavigator->focusNextPrevChild(next);
    } else {
        return ((VirtualKUrlNavigator*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KUrlNavigator_QBaseFocusNextPrevChild(KUrlNavigator* self, bool next) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_FocusNextPrevChild_IsBase(true);
        return vkurlnavigator->focusNextPrevChild(next);
    } else {
        return ((VirtualKUrlNavigator*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnFocusNextPrevChild(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_TimerEvent(KUrlNavigator* self, QTimerEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->timerEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseTimerEvent(KUrlNavigator* self, QTimerEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_TimerEvent_IsBase(true);
        vkurlnavigator->timerEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnTimerEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_TimerEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_ChildEvent(KUrlNavigator* self, QChildEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->childEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseChildEvent(KUrlNavigator* self, QChildEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_ChildEvent_IsBase(true);
        vkurlnavigator->childEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnChildEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_ChildEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_CustomEvent(KUrlNavigator* self, QEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->customEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseCustomEvent(KUrlNavigator* self, QEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_CustomEvent_IsBase(true);
        vkurlnavigator->customEvent(event);
    } else {
        ((VirtualKUrlNavigator*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnCustomEvent(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_CustomEvent_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_ConnectNotify(KUrlNavigator* self, const QMetaMethod* signal) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->connectNotify(*signal);
    } else {
        ((VirtualKUrlNavigator*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseConnectNotify(KUrlNavigator* self, const QMetaMethod* signal) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_ConnectNotify_IsBase(true);
        vkurlnavigator->connectNotify(*signal);
    } else {
        ((VirtualKUrlNavigator*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnConnectNotify(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_ConnectNotify_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_DisconnectNotify(KUrlNavigator* self, const QMetaMethod* signal) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->disconnectNotify(*signal);
    } else {
        ((VirtualKUrlNavigator*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseDisconnectNotify(KUrlNavigator* self, const QMetaMethod* signal) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_DisconnectNotify_IsBase(true);
        vkurlnavigator->disconnectNotify(*signal);
    } else {
        ((VirtualKUrlNavigator*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnDisconnectNotify(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_DisconnectNotify_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_UpdateMicroFocus(KUrlNavigator* self) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->updateMicroFocus();
    } else {
        ((VirtualKUrlNavigator*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseUpdateMicroFocus(KUrlNavigator* self) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_UpdateMicroFocus_IsBase(true);
        vkurlnavigator->updateMicroFocus();
    } else {
        ((VirtualKUrlNavigator*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnUpdateMicroFocus(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_Create(KUrlNavigator* self) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->create();
    } else {
        ((VirtualKUrlNavigator*)self)->create();
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseCreate(KUrlNavigator* self) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_Create_IsBase(true);
        vkurlnavigator->create();
    } else {
        ((VirtualKUrlNavigator*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnCreate(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_Create_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlNavigator_Destroy(KUrlNavigator* self) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->destroy();
    } else {
        ((VirtualKUrlNavigator*)self)->destroy();
    }
}

// Base class handler implementation
void KUrlNavigator_QBaseDestroy(KUrlNavigator* self) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_Destroy_IsBase(true);
        vkurlnavigator->destroy();
    } else {
        ((VirtualKUrlNavigator*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnDestroy(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_Destroy_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlNavigator_FocusNextChild(KUrlNavigator* self) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        return vkurlnavigator->focusNextChild();
    } else {
        return ((VirtualKUrlNavigator*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KUrlNavigator_QBaseFocusNextChild(KUrlNavigator* self) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_FocusNextChild_IsBase(true);
        return vkurlnavigator->focusNextChild();
    } else {
        return ((VirtualKUrlNavigator*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnFocusNextChild(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_FocusNextChild_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlNavigator_FocusPreviousChild(KUrlNavigator* self) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        return vkurlnavigator->focusPreviousChild();
    } else {
        return ((VirtualKUrlNavigator*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KUrlNavigator_QBaseFocusPreviousChild(KUrlNavigator* self) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_FocusPreviousChild_IsBase(true);
        return vkurlnavigator->focusPreviousChild();
    } else {
        return ((VirtualKUrlNavigator*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnFocusPreviousChild(KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_FocusPreviousChild_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KUrlNavigator_Sender(const KUrlNavigator* self) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        return vkurlnavigator->sender();
    } else {
        return ((VirtualKUrlNavigator*)self)->sender();
    }
}

// Base class handler implementation
QObject* KUrlNavigator_QBaseSender(const KUrlNavigator* self) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_Sender_IsBase(true);
        return vkurlnavigator->sender();
    } else {
        return ((VirtualKUrlNavigator*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnSender(const KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_Sender_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlNavigator_SenderSignalIndex(const KUrlNavigator* self) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        return vkurlnavigator->senderSignalIndex();
    } else {
        return ((VirtualKUrlNavigator*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KUrlNavigator_QBaseSenderSignalIndex(const KUrlNavigator* self) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_SenderSignalIndex_IsBase(true);
        return vkurlnavigator->senderSignalIndex();
    } else {
        return ((VirtualKUrlNavigator*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnSenderSignalIndex(const KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_SenderSignalIndex_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlNavigator_Receivers(const KUrlNavigator* self, const char* signal) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        return vkurlnavigator->receivers(signal);
    } else {
        return ((VirtualKUrlNavigator*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KUrlNavigator_QBaseReceivers(const KUrlNavigator* self, const char* signal) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_Receivers_IsBase(true);
        return vkurlnavigator->receivers(signal);
    } else {
        return ((VirtualKUrlNavigator*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnReceivers(const KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_Receivers_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlNavigator_IsSignalConnected(const KUrlNavigator* self, const QMetaMethod* signal) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        return vkurlnavigator->isSignalConnected(*signal);
    } else {
        return ((VirtualKUrlNavigator*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KUrlNavigator_QBaseIsSignalConnected(const KUrlNavigator* self, const QMetaMethod* signal) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_IsSignalConnected_IsBase(true);
        return vkurlnavigator->isSignalConnected(*signal);
    } else {
        return ((VirtualKUrlNavigator*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnIsSignalConnected(const KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_IsSignalConnected_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KUrlNavigator_GetDecodedMetricF(const KUrlNavigator* self, int metricA, int metricB) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        return vkurlnavigator->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKUrlNavigator*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KUrlNavigator_QBaseGetDecodedMetricF(const KUrlNavigator* self, int metricA, int metricB) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_GetDecodedMetricF_IsBase(true);
        return vkurlnavigator->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKUrlNavigator*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnGetDecodedMetricF(const KUrlNavigator* self, intptr_t slot) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator && vkurlnavigator->isVirtualKUrlNavigator) {
        vkurlnavigator->setKUrlNavigator_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_GetDecodedMetricF_Callback>(slot));
    }
}

void KUrlNavigator_Delete(KUrlNavigator* self) {
    delete self;
}
