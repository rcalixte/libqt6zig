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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KUrlNavigator_Tr(const char* s) {
    auto _ret = KUrlNavigator::tr(s);
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
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
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
    KUrlNavigator::connect(self,
                           static_cast<void (KUrlNavigator::*)()>(&KUrlNavigator::activated),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void KUrlNavigator_UrlChanged(KUrlNavigator* self, const QUrl* url) {
    self->urlChanged(*url);
}

void KUrlNavigator_Connect_UrlChanged(KUrlNavigator* self, intptr_t slot) {
    void (*slotFunc)(KUrlNavigator*, QUrl*) = reinterpret_cast<void (*)(KUrlNavigator*, QUrl*)>(slot);
    KUrlNavigator::connect(self,
                           static_cast<void (KUrlNavigator::*)(const QUrl&)>(&KUrlNavigator::urlChanged),
                           [self, slotFunc](const QUrl& url) {
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
    KUrlNavigator::connect(self,
                           static_cast<void (KUrlNavigator::*)(const QUrl&)>(&KUrlNavigator::urlAboutToBeChanged),
                           [self, slotFunc](const QUrl& newUrl) {
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
    KUrlNavigator::connect(self,
                           static_cast<void (KUrlNavigator::*)(bool)>(&KUrlNavigator::editableStateChanged),
                           [self, slotFunc](bool editable) {
                               bool sigval1 = editable;
                               slotFunc(self, sigval1);
                           });
}

void KUrlNavigator_HistoryChanged(KUrlNavigator* self) {
    self->historyChanged();
}

void KUrlNavigator_Connect_HistoryChanged(KUrlNavigator* self, intptr_t slot) {
    void (*slotFunc)(KUrlNavigator*) = reinterpret_cast<void (*)(KUrlNavigator*)>(slot);
    KUrlNavigator::connect(self,
                           static_cast<void (KUrlNavigator::*)()>(&KUrlNavigator::historyChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void KUrlNavigator_UrlsDropped(KUrlNavigator* self, const QUrl* destination, QDropEvent* event) {
    self->urlsDropped(*destination, event);
}

void KUrlNavigator_Connect_UrlsDropped(KUrlNavigator* self, intptr_t slot) {
    void (*slotFunc)(KUrlNavigator*, QUrl*, QDropEvent*) = reinterpret_cast<void (*)(KUrlNavigator*, QUrl*, QDropEvent*)>(slot);
    KUrlNavigator::connect(self,
                           static_cast<void (KUrlNavigator::*)(const QUrl&, QDropEvent*)>(&KUrlNavigator::urlsDropped),
                           [self, slotFunc](const QUrl& destination, QDropEvent* event) {
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
    KUrlNavigator::connect(self,
                           static_cast<void (KUrlNavigator::*)()>(&KUrlNavigator::returnPressed),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void KUrlNavigator_TabRequested(KUrlNavigator* self, const QUrl* url) {
    self->tabRequested(*url);
}

void KUrlNavigator_Connect_TabRequested(KUrlNavigator* self, intptr_t slot) {
    void (*slotFunc)(KUrlNavigator*, QUrl*) = reinterpret_cast<void (*)(KUrlNavigator*, QUrl*)>(slot);
    KUrlNavigator::connect(self,
                           static_cast<void (KUrlNavigator::*)(const QUrl&)>(&KUrlNavigator::tabRequested),
                           [self, slotFunc](const QUrl& url) {
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
    KUrlNavigator::connect(self,
                           static_cast<void (KUrlNavigator::*)(const QUrl&)>(&KUrlNavigator::activeTabRequested),
                           [self, slotFunc](const QUrl& url) {
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
    KUrlNavigator::connect(self,
                           static_cast<void (KUrlNavigator::*)(const QUrl&)>(&KUrlNavigator::newWindowRequested),
                           [self, slotFunc](const QUrl& url) {
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
    KUrlNavigator::connect(self,
                           static_cast<void (KUrlNavigator::*)(const QUrl&)>(&KUrlNavigator::urlSelectionRequested),
                           [self, slotFunc](const QUrl& url) {
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
    KUrlNavigator::connect(self,
                           static_cast<void (KUrlNavigator::*)()>(&KUrlNavigator::layoutChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void KUrlNavigator_KeyPressEvent(KUrlNavigator* self, QKeyEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->keyPressEvent(event);
    }
}

void KUrlNavigator_KeyReleaseEvent(KUrlNavigator* self, QKeyEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->keyReleaseEvent(event);
    }
}

void KUrlNavigator_MouseReleaseEvent(KUrlNavigator* self, QMouseEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->mouseReleaseEvent(event);
    }
}

void KUrlNavigator_MousePressEvent(KUrlNavigator* self, QMouseEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->mousePressEvent(event);
    }
}

void KUrlNavigator_ResizeEvent(KUrlNavigator* self, QResizeEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->resizeEvent(event);
    }
}

void KUrlNavigator_WheelEvent(KUrlNavigator* self, QWheelEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->wheelEvent(event);
    }
}

void KUrlNavigator_ShowEvent(KUrlNavigator* self, QShowEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->showEvent(event);
    }
}

bool KUrlNavigator_EventFilter(KUrlNavigator* self, QObject* watched, QEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        return vkurlnavigator->eventFilter(watched, event);
    }
    qFatal("Error: Protected method KUrlNavigator::eventFilter called without a directly constructed type");
}

void KUrlNavigator_PaintEvent(KUrlNavigator* self, QPaintEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->paintEvent(event);
    }
}

libqt_string KUrlNavigator_Tr2(const char* s, const char* c) {
    auto _ret = KUrlNavigator::tr(s, c);
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
    auto _ret = KUrlNavigator::tr(s, c, static_cast<int>(n));
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
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

// Base class handler implementation
QMetaObject* KUrlNavigator_SuperMetaObject(const KUrlNavigator* self) {
    return (QMetaObject*)self->KUrlNavigator::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnMetaObject(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self)))
        vkurlnavigator->kurlnavigator_metaobject_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KUrlNavigator_SuperMetacast(KUrlNavigator* self, const char* param1) {
    return self->KUrlNavigator::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnMetacast(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_metacast_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_Metacast_Callback>(slot);
}

// Base class handler implementation
int KUrlNavigator_SuperMetacall(KUrlNavigator* self, int param1, int param2, void** param3) {
    return self->KUrlNavigator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnMetacall(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_metacall_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_Metacall_Callback>(slot);
}

// Base class handler implementation
void KUrlNavigator_SuperKeyPressEvent(KUrlNavigator* self, QKeyEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnKeyPressEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_keypressevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void KUrlNavigator_SuperKeyReleaseEvent(KUrlNavigator* self, QKeyEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnKeyReleaseEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_keyreleaseevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_KeyReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void KUrlNavigator_SuperMouseReleaseEvent(KUrlNavigator* self, QMouseEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnMouseReleaseEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_mousereleaseevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void KUrlNavigator_SuperMousePressEvent(KUrlNavigator* self, QMouseEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnMousePressEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_mousepressevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void KUrlNavigator_SuperResizeEvent(KUrlNavigator* self, QResizeEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnResizeEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_resizeevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void KUrlNavigator_SuperWheelEvent(KUrlNavigator* self, QWheelEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnWheelEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_wheelevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_WheelEvent_Callback>(slot);
}

// Base class handler implementation
void KUrlNavigator_SuperShowEvent(KUrlNavigator* self, QShowEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnShowEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_showevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_ShowEvent_Callback>(slot);
}

// Base class handler implementation
bool KUrlNavigator_SuperEventFilter(KUrlNavigator* self, QObject* watched, QEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        return vkurlnavigator->KUrlNavigator::eventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnEventFilter(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_eventfilter_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_EventFilter_Callback>(slot);
}

// Base class handler implementation
void KUrlNavigator_SuperPaintEvent(KUrlNavigator* self, QPaintEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnPaintEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_paintevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
int KUrlNavigator_DevType(const KUrlNavigator* self) {
    return self->devType();
}

// Base class handler implementation
int KUrlNavigator_SuperDevType(const KUrlNavigator* self) {
    return self->KUrlNavigator::devType();
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnDevType(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self)))
        vkurlnavigator->kurlnavigator_devtype_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_DevType_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_SetVisible(KUrlNavigator* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KUrlNavigator_SuperSetVisible(KUrlNavigator* self, bool visible) {
    self->KUrlNavigator::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnSetVisible(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_setvisible_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KUrlNavigator_SizeHint(const KUrlNavigator* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KUrlNavigator_SuperSizeHint(const KUrlNavigator* self) {
    return new QSize(self->KUrlNavigator::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnSizeHint(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self)))
        vkurlnavigator->kurlnavigator_sizehint_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KUrlNavigator_MinimumSizeHint(const KUrlNavigator* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KUrlNavigator_SuperMinimumSizeHint(const KUrlNavigator* self) {
    return new QSize(self->KUrlNavigator::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnMinimumSizeHint(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self)))
        vkurlnavigator->kurlnavigator_minimumsizehint_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KUrlNavigator_HeightForWidth(const KUrlNavigator* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KUrlNavigator_SuperHeightForWidth(const KUrlNavigator* self, int param1) {
    return self->KUrlNavigator::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnHeightForWidth(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self)))
        vkurlnavigator->kurlnavigator_heightforwidth_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KUrlNavigator_HasHeightForWidth(const KUrlNavigator* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KUrlNavigator_SuperHasHeightForWidth(const KUrlNavigator* self) {
    return self->KUrlNavigator::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnHasHeightForWidth(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self)))
        vkurlnavigator->kurlnavigator_hasheightforwidth_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KUrlNavigator_PaintEngine(const KUrlNavigator* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KUrlNavigator_SuperPaintEngine(const KUrlNavigator* self) {
    return self->KUrlNavigator::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnPaintEngine(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self)))
        vkurlnavigator->kurlnavigator_paintengine_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KUrlNavigator_Event(KUrlNavigator* self, QEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        return vkurlnavigator->event(event);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KUrlNavigator_SuperEvent(KUrlNavigator* self, QEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        return vkurlnavigator->KUrlNavigator::event(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_event_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_Event_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_MouseDoubleClickEvent(KUrlNavigator* self, QMouseEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperMouseDoubleClickEvent(KUrlNavigator* self, QMouseEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnMouseDoubleClickEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_mousedoubleclickevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_MouseMoveEvent(KUrlNavigator* self, QMouseEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperMouseMoveEvent(KUrlNavigator* self, QMouseEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnMouseMoveEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_mousemoveevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_FocusInEvent(KUrlNavigator* self, QFocusEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperFocusInEvent(KUrlNavigator* self, QFocusEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnFocusInEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_focusinevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_FocusOutEvent(KUrlNavigator* self, QFocusEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperFocusOutEvent(KUrlNavigator* self, QFocusEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnFocusOutEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_focusoutevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_EnterEvent(KUrlNavigator* self, QEnterEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperEnterEvent(KUrlNavigator* self, QEnterEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnEnterEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_enterevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_LeaveEvent(KUrlNavigator* self, QEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperLeaveEvent(KUrlNavigator* self, QEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnLeaveEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_leaveevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_MoveEvent(KUrlNavigator* self, QMoveEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperMoveEvent(KUrlNavigator* self, QMoveEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnMoveEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_moveevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_CloseEvent(KUrlNavigator* self, QCloseEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperCloseEvent(KUrlNavigator* self, QCloseEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnCloseEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_closeevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_ContextMenuEvent(KUrlNavigator* self, QContextMenuEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperContextMenuEvent(KUrlNavigator* self, QContextMenuEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnContextMenuEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_contextmenuevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_TabletEvent(KUrlNavigator* self, QTabletEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperTabletEvent(KUrlNavigator* self, QTabletEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnTabletEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_tabletevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_ActionEvent(KUrlNavigator* self, QActionEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperActionEvent(KUrlNavigator* self, QActionEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnActionEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_actionevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_DragEnterEvent(KUrlNavigator* self, QDragEnterEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperDragEnterEvent(KUrlNavigator* self, QDragEnterEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnDragEnterEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_dragenterevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_DragMoveEvent(KUrlNavigator* self, QDragMoveEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperDragMoveEvent(KUrlNavigator* self, QDragMoveEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnDragMoveEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_dragmoveevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_DragLeaveEvent(KUrlNavigator* self, QDragLeaveEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperDragLeaveEvent(KUrlNavigator* self, QDragLeaveEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnDragLeaveEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_dragleaveevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_DropEvent(KUrlNavigator* self, QDropEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperDropEvent(KUrlNavigator* self, QDropEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnDropEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_dropevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_HideEvent(KUrlNavigator* self, QHideEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperHideEvent(KUrlNavigator* self, QHideEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnHideEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_hideevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KUrlNavigator_NativeEvent(KUrlNavigator* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        return vkurlnavigator->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KUrlNavigator_SuperNativeEvent(KUrlNavigator* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        return vkurlnavigator->KUrlNavigator::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnNativeEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_nativeevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_ChangeEvent(KUrlNavigator* self, QEvent* param1) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperChangeEvent(KUrlNavigator* self, QEvent* param1) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnChangeEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_changeevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KUrlNavigator_Metric(const KUrlNavigator* self, int param1) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator) {
        return vkurlnavigator->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KUrlNavigator_SuperMetric(const KUrlNavigator* self, int param1) {
    if (auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self))) {
        return vkurlnavigator->KUrlNavigator::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnMetric(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self)))
        vkurlnavigator->kurlnavigator_metric_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_Metric_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_InitPainter(const KUrlNavigator* self, QPainter* painter) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator) {
        vkurlnavigator->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperInitPainter(const KUrlNavigator* self, QPainter* painter) {
    if (auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self))) {
        vkurlnavigator->KUrlNavigator::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnInitPainter(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self)))
        vkurlnavigator->kurlnavigator_initpainter_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KUrlNavigator_Redirected(const KUrlNavigator* self, QPoint* offset) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator) {
        return vkurlnavigator->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KUrlNavigator_SuperRedirected(const KUrlNavigator* self, QPoint* offset) {
    if (auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self))) {
        return vkurlnavigator->KUrlNavigator::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnRedirected(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self)))
        vkurlnavigator->kurlnavigator_redirected_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KUrlNavigator_SharedPainter(const KUrlNavigator* self) {
    auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self));
    if (vkurlnavigator) {
        return vkurlnavigator->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KUrlNavigator_SuperSharedPainter(const KUrlNavigator* self) {
    if (auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self))) {
        return vkurlnavigator->KUrlNavigator::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnSharedPainter(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self)))
        vkurlnavigator->kurlnavigator_sharedpainter_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_InputMethodEvent(KUrlNavigator* self, QInputMethodEvent* param1) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperInputMethodEvent(KUrlNavigator* self, QInputMethodEvent* param1) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnInputMethodEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_inputmethodevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KUrlNavigator_InputMethodQuery(const KUrlNavigator* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KUrlNavigator_SuperInputMethodQuery(const KUrlNavigator* self, int param1) {
    return new QVariant(self->KUrlNavigator::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnInputMethodQuery(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self)))
        vkurlnavigator->kurlnavigator_inputmethodquery_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KUrlNavigator_FocusNextPrevChild(KUrlNavigator* self, bool next) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        return vkurlnavigator->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KUrlNavigator_SuperFocusNextPrevChild(KUrlNavigator* self, bool next) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        return vkurlnavigator->KUrlNavigator::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnFocusNextPrevChild(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_focusnextprevchild_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_TimerEvent(KUrlNavigator* self, QTimerEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperTimerEvent(KUrlNavigator* self, QTimerEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnTimerEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_timerevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_ChildEvent(KUrlNavigator* self, QChildEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperChildEvent(KUrlNavigator* self, QChildEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnChildEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_childevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_CustomEvent(KUrlNavigator* self, QEvent* event) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperCustomEvent(KUrlNavigator* self, QEvent* event) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnCustomEvent(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_customevent_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_ConnectNotify(KUrlNavigator* self, const QMetaMethod* signal) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperConnectNotify(KUrlNavigator* self, const QMetaMethod* signal) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnConnectNotify(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_connectnotify_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KUrlNavigator_DisconnectNotify(KUrlNavigator* self, const QMetaMethod* signal) {
    auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self);
    if (vkurlnavigator) {
        vkurlnavigator->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KUrlNavigator::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlNavigator_SuperDisconnectNotify(KUrlNavigator* self, const QMetaMethod* signal) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->KUrlNavigator::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KUrlNavigator::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlNavigator_OnDisconnectNotify(KUrlNavigator* self, intptr_t slot) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self))
        vkurlnavigator->kurlnavigator_disconnectnotify_callback = reinterpret_cast<VirtualKUrlNavigator::KUrlNavigator_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KUrlNavigator_UpdateMicroFocus(KUrlNavigator* self) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->VirtualKUrlNavigator::updateMicroFocus();
    } else
        qFatal("Error: Protected method KUrlNavigator::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KUrlNavigator_Create(KUrlNavigator* self) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->VirtualKUrlNavigator::create();
    } else
        qFatal("Error: Protected method KUrlNavigator::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KUrlNavigator_Destroy(KUrlNavigator* self) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        vkurlnavigator->VirtualKUrlNavigator::destroy();
    } else
        qFatal("Error: Protected method KUrlNavigator::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KUrlNavigator_FocusNextChild(KUrlNavigator* self) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        return vkurlnavigator->VirtualKUrlNavigator::focusNextChild();
    } else
        qFatal("Error: Protected method KUrlNavigator::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KUrlNavigator_FocusPreviousChild(KUrlNavigator* self) {
    if (auto* vkurlnavigator = dynamic_cast<VirtualKUrlNavigator*>(self)) {
        return vkurlnavigator->VirtualKUrlNavigator::focusPreviousChild();
    } else
        qFatal("Error: Protected method KUrlNavigator::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KUrlNavigator_Sender(const KUrlNavigator* self) {
    if (auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self))) {
        return vkurlnavigator->VirtualKUrlNavigator::sender();
    } else
        qFatal("Error: Protected method KUrlNavigator::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KUrlNavigator_SenderSignalIndex(const KUrlNavigator* self) {
    if (auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self))) {
        return vkurlnavigator->VirtualKUrlNavigator::senderSignalIndex();
    } else
        qFatal("Error: Protected method KUrlNavigator::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KUrlNavigator_Receivers(const KUrlNavigator* self, const char* signal) {
    if (auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self))) {
        return vkurlnavigator->VirtualKUrlNavigator::receivers(signal);
    } else
        qFatal("Error: Protected method KUrlNavigator::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KUrlNavigator_IsSignalConnected(const KUrlNavigator* self, const QMetaMethod* signal) {
    if (auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self))) {
        return vkurlnavigator->VirtualKUrlNavigator::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KUrlNavigator::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KUrlNavigator_GetDecodedMetricF(const KUrlNavigator* self, int metricA, int metricB) {
    if (auto* vkurlnavigator = const_cast<VirtualKUrlNavigator*>(dynamic_cast<const VirtualKUrlNavigator*>(self))) {
        return vkurlnavigator->VirtualKUrlNavigator::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KUrlNavigator::getDecodedMetricF called without a directly constructed type");
}

void KUrlNavigator_Delete(KUrlNavigator* self) {
    delete self;
}
