#include <QAction>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QHideEvent>
#include <QImage>
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
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_kImageAnnotator__KImageAnnotator
#include <KImageAnnotator.h>
#include "libKImageAnnotator.h"
#include "libKImageAnnotator.hxx"

void kImageAnnotator_LoadTranslations() {
    kImageAnnotator::loadTranslations();
}

kImageAnnotator__KImageAnnotator* kImageAnnotator__KImageAnnotator_new() {
    return new VirtualkImageAnnotatorKImageAnnotator();
}

QMetaObject* kImageAnnotator__KImageAnnotator_MetaObject(const kImageAnnotator__KImageAnnotator* self) {
    return (QMetaObject*)self->metaObject();
}

void* kImageAnnotator__KImageAnnotator_Metacast(kImageAnnotator__KImageAnnotator* self, const char* param1) {
    return self->qt_metacast(param1);
}

int kImageAnnotator__KImageAnnotator_Metacall(kImageAnnotator__KImageAnnotator* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string kImageAnnotator__KImageAnnotator_Tr(const char* s) {
    auto _ret = kImageAnnotator::KImageAnnotator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QImage* kImageAnnotator__KImageAnnotator_Image(const kImageAnnotator__KImageAnnotator* self) {
    return new QImage(self->image());
}

QImage* kImageAnnotator__KImageAnnotator_ImageAt(const kImageAnnotator__KImageAnnotator* self, int index) {
    return new QImage(self->imageAt(static_cast<int>(index)));
}

QAction* kImageAnnotator__KImageAnnotator_UndoAction(kImageAnnotator__KImageAnnotator* self) {
    return self->undoAction();
}

QAction* kImageAnnotator__KImageAnnotator_RedoAction(kImageAnnotator__KImageAnnotator* self) {
    return self->redoAction();
}

QSize* kImageAnnotator__KImageAnnotator_SizeHint(const kImageAnnotator__KImageAnnotator* self) {
    return new QSize(self->sizeHint());
}

void kImageAnnotator__KImageAnnotator_ShowAnnotator(kImageAnnotator__KImageAnnotator* self) {
    self->showAnnotator();
}

void kImageAnnotator__KImageAnnotator_ShowCropper(kImageAnnotator__KImageAnnotator* self) {
    self->showCropper();
}

void kImageAnnotator__KImageAnnotator_ShowScaler(kImageAnnotator__KImageAnnotator* self) {
    self->showScaler();
}

void kImageAnnotator__KImageAnnotator_ShowRotator(kImageAnnotator__KImageAnnotator* self) {
    self->showRotator();
}

void kImageAnnotator__KImageAnnotator_ShowCanvasModifier(kImageAnnotator__KImageAnnotator* self) {
    self->showCanvasModifier();
}

void kImageAnnotator__KImageAnnotator_ShowCutter(kImageAnnotator__KImageAnnotator* self) {
    self->showCutter();
}

void kImageAnnotator__KImageAnnotator_LoadImage(kImageAnnotator__KImageAnnotator* self, const QPixmap* pixmap) {
    self->loadImage(*pixmap);
}

int kImageAnnotator__KImageAnnotator_AddTab(kImageAnnotator__KImageAnnotator* self, const QPixmap* pixmap, const libqt_string title, const libqt_string toolTip) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
    return self->addTab(*pixmap, title_QString, toolTip_QString);
}

void kImageAnnotator__KImageAnnotator_UpdateTabInfo(kImageAnnotator__KImageAnnotator* self, int index, const libqt_string title, const libqt_string toolTip) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
    self->updateTabInfo(static_cast<int>(index), title_QString, toolTip_QString);
}

void kImageAnnotator__KImageAnnotator_InsertImageItem(kImageAnnotator__KImageAnnotator* self, const QPointF* position, const QPixmap* pixmap) {
    self->insertImageItem(*position, *pixmap);
}

void kImageAnnotator__KImageAnnotator_SetTextFont(kImageAnnotator__KImageAnnotator* self, const QFont* font) {
    self->setTextFont(*font);
}

void kImageAnnotator__KImageAnnotator_SetNumberFont(kImageAnnotator__KImageAnnotator* self, const QFont* font) {
    self->setNumberFont(*font);
}

void kImageAnnotator__KImageAnnotator_SetItemShadowEnabled(kImageAnnotator__KImageAnnotator* self, bool enabled) {
    self->setItemShadowEnabled(enabled);
}

void kImageAnnotator__KImageAnnotator_SetSmoothPathEnabled(kImageAnnotator__KImageAnnotator* self, bool enabled) {
    self->setSmoothPathEnabled(enabled);
}

void kImageAnnotator__KImageAnnotator_SetSaveToolSelection(kImageAnnotator__KImageAnnotator* self, bool enabled) {
    self->setSaveToolSelection(enabled);
}

void kImageAnnotator__KImageAnnotator_SetSmoothFactor(kImageAnnotator__KImageAnnotator* self, int factor) {
    self->setSmoothFactor(static_cast<int>(factor));
}

void kImageAnnotator__KImageAnnotator_SetSwitchToSelectToolAfterDrawingItem(kImageAnnotator__KImageAnnotator* self, bool enabled) {
    self->setSwitchToSelectToolAfterDrawingItem(enabled);
}

void kImageAnnotator__KImageAnnotator_SetNumberToolSeedChangeUpdatesAllItems(kImageAnnotator__KImageAnnotator* self, bool enabled) {
    self->setNumberToolSeedChangeUpdatesAllItems(enabled);
}

void kImageAnnotator__KImageAnnotator_SetTabBarAutoHide(kImageAnnotator__KImageAnnotator* self, bool enabled) {
    self->setTabBarAutoHide(enabled);
}

void kImageAnnotator__KImageAnnotator_RemoveTab(kImageAnnotator__KImageAnnotator* self, int index) {
    self->removeTab(static_cast<int>(index));
}

void kImageAnnotator__KImageAnnotator_SetStickers(kImageAnnotator__KImageAnnotator* self, const libqt_list /* of libqt_string */ stickerPaths, bool keepDefault) {
    QList<QString> stickerPaths_QList;
    stickerPaths_QList.reserve(stickerPaths.len);
    libqt_string* stickerPaths_arr = static_cast<libqt_string*>(stickerPaths.data);
    for (size_t i = 0; i < stickerPaths.len; ++i) {
        QString stickerPaths_arr_i_QString = QString::fromUtf8(stickerPaths_arr[i].data, stickerPaths_arr[i].len);
        stickerPaths_QList.push_back(stickerPaths_arr_i_QString);
    }
    self->setStickers(stickerPaths_QList, keepDefault);
}

void kImageAnnotator__KImageAnnotator_AddTabContextMenuActions(kImageAnnotator__KImageAnnotator* self, const libqt_list /* of QAction* */ actions) {
    QList<QAction*> actions_QList;
    actions_QList.reserve(actions.len);
    QAction** actions_arr = static_cast<QAction**>(actions.data);
    for (size_t i = 0; i < actions.len; ++i) {
        actions_QList.push_back(actions_arr[i]);
    }
    self->addTabContextMenuActions(actions_QList);
}

void kImageAnnotator__KImageAnnotator_SetSettingsCollapsed(kImageAnnotator__KImageAnnotator* self, bool isCollapsed) {
    self->setSettingsCollapsed(isCollapsed);
}

void kImageAnnotator__KImageAnnotator_SetCanvasColor(kImageAnnotator__KImageAnnotator* self, const QColor* color) {
    self->setCanvasColor(*color);
}

void kImageAnnotator__KImageAnnotator_SetSelectItemAfterDrawing(kImageAnnotator__KImageAnnotator* self, bool enabled) {
    self->setSelectItemAfterDrawing(enabled);
}

void kImageAnnotator__KImageAnnotator_SetControlsWidgetVisible(kImageAnnotator__KImageAnnotator* self, bool enabled) {
    self->setControlsWidgetVisible(enabled);
}

void kImageAnnotator__KImageAnnotator_ImageChanged(const kImageAnnotator__KImageAnnotator* self) {
    self->imageChanged();
}

void kImageAnnotator__KImageAnnotator_Connect_ImageChanged(const kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    void (*slotFunc)(const kImageAnnotator__KImageAnnotator*) = reinterpret_cast<void (*)(const kImageAnnotator__KImageAnnotator*)>(slot);
    kImageAnnotator::KImageAnnotator::connect(self,
                                              static_cast<void (kImageAnnotator::KImageAnnotator::*)() const>(&kImageAnnotator::KImageAnnotator::imageChanged),
                                              [self, slotFunc]() {
                                                  slotFunc(self);
                                              });
}

void kImageAnnotator__KImageAnnotator_CurrentTabChanged(const kImageAnnotator__KImageAnnotator* self, int index) {
    self->currentTabChanged(static_cast<int>(index));
}

void kImageAnnotator__KImageAnnotator_Connect_CurrentTabChanged(const kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    void (*slotFunc)(const kImageAnnotator__KImageAnnotator*, int) = reinterpret_cast<void (*)(const kImageAnnotator__KImageAnnotator*, int)>(slot);
    kImageAnnotator::KImageAnnotator::connect(self,
                                              static_cast<void (kImageAnnotator::KImageAnnotator::*)(int) const>(&kImageAnnotator::KImageAnnotator::currentTabChanged),
                                              [self, slotFunc](int index) {
                                                  int sigval1 = index;
                                                  slotFunc(self, sigval1);
                                              });
}

void kImageAnnotator__KImageAnnotator_TabCloseRequested(const kImageAnnotator__KImageAnnotator* self, int index) {
    self->tabCloseRequested(static_cast<int>(index));
}

void kImageAnnotator__KImageAnnotator_Connect_TabCloseRequested(const kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    void (*slotFunc)(const kImageAnnotator__KImageAnnotator*, int) = reinterpret_cast<void (*)(const kImageAnnotator__KImageAnnotator*, int)>(slot);
    kImageAnnotator::KImageAnnotator::connect(self,
                                              static_cast<void (kImageAnnotator::KImageAnnotator::*)(int) const>(&kImageAnnotator::KImageAnnotator::tabCloseRequested),
                                              [self, slotFunc](int index) {
                                                  int sigval1 = index;
                                                  slotFunc(self, sigval1);
                                              });
}

void kImageAnnotator__KImageAnnotator_TabMoved(kImageAnnotator__KImageAnnotator* self, int fromIndex, int toIndex) {
    self->tabMoved(static_cast<int>(fromIndex), static_cast<int>(toIndex));
}

void kImageAnnotator__KImageAnnotator_Connect_TabMoved(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    void (*slotFunc)(kImageAnnotator__KImageAnnotator*, int, int) = reinterpret_cast<void (*)(kImageAnnotator__KImageAnnotator*, int, int)>(slot);
    kImageAnnotator::KImageAnnotator::connect(self,
                                              static_cast<void (kImageAnnotator::KImageAnnotator::*)(int, int)>(&kImageAnnotator::KImageAnnotator::tabMoved),
                                              [self, slotFunc](int fromIndex, int toIndex) {
                                                  int sigval1 = fromIndex;
                                                  int sigval2 = toIndex;
                                                  slotFunc(self, sigval1, sigval2);
                                              });
}

void kImageAnnotator__KImageAnnotator_TabContextMenuOpened(const kImageAnnotator__KImageAnnotator* self, int index) {
    self->tabContextMenuOpened(static_cast<int>(index));
}

void kImageAnnotator__KImageAnnotator_Connect_TabContextMenuOpened(const kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    void (*slotFunc)(const kImageAnnotator__KImageAnnotator*, int) = reinterpret_cast<void (*)(const kImageAnnotator__KImageAnnotator*, int)>(slot);
    kImageAnnotator::KImageAnnotator::connect(self,
                                              static_cast<void (kImageAnnotator::KImageAnnotator::*)(int) const>(&kImageAnnotator::KImageAnnotator::tabContextMenuOpened),
                                              [self, slotFunc](int index) {
                                                  int sigval1 = index;
                                                  slotFunc(self, sigval1);
                                              });
}

libqt_string kImageAnnotator__KImageAnnotator_Tr2(const char* s, const char* c) {
    auto _ret = kImageAnnotator::KImageAnnotator::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string kImageAnnotator__KImageAnnotator_Tr3(const char* s, const char* c, int n) {
    auto _ret = kImageAnnotator::KImageAnnotator::tr(s, c, static_cast<int>(n));
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
QMetaObject* kImageAnnotator__KImageAnnotator_SuperMetaObject(const kImageAnnotator__KImageAnnotator* self) {
    return (QMetaObject*)self->kImageAnnotator::KImageAnnotator::metaObject();
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnMetaObject(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self)))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_metaobject_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* kImageAnnotator__KImageAnnotator_SuperMetacast(kImageAnnotator__KImageAnnotator* self, const char* param1) {
    return self->kImageAnnotator::KImageAnnotator::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnMetacast(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_metacast_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_Metacast_Callback>(slot);
}

// Base class handler implementation
int kImageAnnotator__KImageAnnotator_SuperMetacall(kImageAnnotator__KImageAnnotator* self, int param1, int param2, void** param3) {
    return self->kImageAnnotator::KImageAnnotator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnMetacall(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_metacall_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* kImageAnnotator__KImageAnnotator_SuperSizeHint(const kImageAnnotator__KImageAnnotator* self) {
    return new QSize(self->kImageAnnotator::KImageAnnotator::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnSizeHint(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self)))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_sizehint_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_SizeHint_Callback>(slot);
}

// Derived class handler implementation
int kImageAnnotator__KImageAnnotator_DevType(const kImageAnnotator__KImageAnnotator* self) {
    return self->devType();
}

// Base class handler implementation
int kImageAnnotator__KImageAnnotator_SuperDevType(const kImageAnnotator__KImageAnnotator* self) {
    return self->kImageAnnotator::KImageAnnotator::devType();
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnDevType(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self)))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_devtype_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_DevType_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_SetVisible(kImageAnnotator__KImageAnnotator* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperSetVisible(kImageAnnotator__KImageAnnotator* self, bool visible) {
    self->kImageAnnotator::KImageAnnotator::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnSetVisible(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_setvisible_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* kImageAnnotator__KImageAnnotator_MinimumSizeHint(const kImageAnnotator__KImageAnnotator* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* kImageAnnotator__KImageAnnotator_SuperMinimumSizeHint(const kImageAnnotator__KImageAnnotator* self) {
    return new QSize(self->kImageAnnotator::KImageAnnotator::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnMinimumSizeHint(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self)))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_minimumsizehint_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int kImageAnnotator__KImageAnnotator_HeightForWidth(const kImageAnnotator__KImageAnnotator* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int kImageAnnotator__KImageAnnotator_SuperHeightForWidth(const kImageAnnotator__KImageAnnotator* self, int param1) {
    return self->kImageAnnotator::KImageAnnotator::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnHeightForWidth(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self)))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_heightforwidth_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool kImageAnnotator__KImageAnnotator_HasHeightForWidth(const kImageAnnotator__KImageAnnotator* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool kImageAnnotator__KImageAnnotator_SuperHasHeightForWidth(const kImageAnnotator__KImageAnnotator* self) {
    return self->kImageAnnotator::KImageAnnotator::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnHasHeightForWidth(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self)))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_hasheightforwidth_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* kImageAnnotator__KImageAnnotator_PaintEngine(const kImageAnnotator__KImageAnnotator* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* kImageAnnotator__KImageAnnotator_SuperPaintEngine(const kImageAnnotator__KImageAnnotator* self) {
    return self->kImageAnnotator::KImageAnnotator::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnPaintEngine(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self)))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_paintengine_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool kImageAnnotator__KImageAnnotator_Event(kImageAnnotator__KImageAnnotator* self, QEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        return vkimageannotatorkimageannotator->event(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool kImageAnnotator__KImageAnnotator_SuperEvent(kImageAnnotator__KImageAnnotator* self, QEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        return vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::event(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_event_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_Event_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_MousePressEvent(kImageAnnotator__KImageAnnotator* self, QMouseEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperMousePressEvent(kImageAnnotator__KImageAnnotator* self, QMouseEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnMousePressEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_mousepressevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_MouseReleaseEvent(kImageAnnotator__KImageAnnotator* self, QMouseEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperMouseReleaseEvent(kImageAnnotator__KImageAnnotator* self, QMouseEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnMouseReleaseEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_mousereleaseevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_MouseDoubleClickEvent(kImageAnnotator__KImageAnnotator* self, QMouseEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperMouseDoubleClickEvent(kImageAnnotator__KImageAnnotator* self, QMouseEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnMouseDoubleClickEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_mousedoubleclickevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_MouseMoveEvent(kImageAnnotator__KImageAnnotator* self, QMouseEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperMouseMoveEvent(kImageAnnotator__KImageAnnotator* self, QMouseEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnMouseMoveEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_mousemoveevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_WheelEvent(kImageAnnotator__KImageAnnotator* self, QWheelEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperWheelEvent(kImageAnnotator__KImageAnnotator* self, QWheelEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnWheelEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_wheelevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_KeyPressEvent(kImageAnnotator__KImageAnnotator* self, QKeyEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperKeyPressEvent(kImageAnnotator__KImageAnnotator* self, QKeyEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnKeyPressEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_keypressevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_KeyReleaseEvent(kImageAnnotator__KImageAnnotator* self, QKeyEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperKeyReleaseEvent(kImageAnnotator__KImageAnnotator* self, QKeyEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnKeyReleaseEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_keyreleaseevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_FocusInEvent(kImageAnnotator__KImageAnnotator* self, QFocusEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperFocusInEvent(kImageAnnotator__KImageAnnotator* self, QFocusEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnFocusInEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_focusinevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_FocusOutEvent(kImageAnnotator__KImageAnnotator* self, QFocusEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperFocusOutEvent(kImageAnnotator__KImageAnnotator* self, QFocusEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnFocusOutEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_focusoutevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_EnterEvent(kImageAnnotator__KImageAnnotator* self, QEnterEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperEnterEvent(kImageAnnotator__KImageAnnotator* self, QEnterEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnEnterEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_enterevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_LeaveEvent(kImageAnnotator__KImageAnnotator* self, QEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperLeaveEvent(kImageAnnotator__KImageAnnotator* self, QEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnLeaveEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_leaveevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_PaintEvent(kImageAnnotator__KImageAnnotator* self, QPaintEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperPaintEvent(kImageAnnotator__KImageAnnotator* self, QPaintEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnPaintEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_paintevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_MoveEvent(kImageAnnotator__KImageAnnotator* self, QMoveEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperMoveEvent(kImageAnnotator__KImageAnnotator* self, QMoveEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnMoveEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_moveevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_ResizeEvent(kImageAnnotator__KImageAnnotator* self, QResizeEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperResizeEvent(kImageAnnotator__KImageAnnotator* self, QResizeEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnResizeEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_resizeevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_CloseEvent(kImageAnnotator__KImageAnnotator* self, QCloseEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperCloseEvent(kImageAnnotator__KImageAnnotator* self, QCloseEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnCloseEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_closeevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_ContextMenuEvent(kImageAnnotator__KImageAnnotator* self, QContextMenuEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperContextMenuEvent(kImageAnnotator__KImageAnnotator* self, QContextMenuEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnContextMenuEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_contextmenuevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_TabletEvent(kImageAnnotator__KImageAnnotator* self, QTabletEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperTabletEvent(kImageAnnotator__KImageAnnotator* self, QTabletEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnTabletEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_tabletevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_ActionEvent(kImageAnnotator__KImageAnnotator* self, QActionEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperActionEvent(kImageAnnotator__KImageAnnotator* self, QActionEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnActionEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_actionevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_DragEnterEvent(kImageAnnotator__KImageAnnotator* self, QDragEnterEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperDragEnterEvent(kImageAnnotator__KImageAnnotator* self, QDragEnterEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnDragEnterEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_dragenterevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_DragMoveEvent(kImageAnnotator__KImageAnnotator* self, QDragMoveEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperDragMoveEvent(kImageAnnotator__KImageAnnotator* self, QDragMoveEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnDragMoveEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_dragmoveevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_DragLeaveEvent(kImageAnnotator__KImageAnnotator* self, QDragLeaveEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperDragLeaveEvent(kImageAnnotator__KImageAnnotator* self, QDragLeaveEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnDragLeaveEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_dragleaveevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_DropEvent(kImageAnnotator__KImageAnnotator* self, QDropEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperDropEvent(kImageAnnotator__KImageAnnotator* self, QDropEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnDropEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_dropevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_ShowEvent(kImageAnnotator__KImageAnnotator* self, QShowEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperShowEvent(kImageAnnotator__KImageAnnotator* self, QShowEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::showEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnShowEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_showevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_HideEvent(kImageAnnotator__KImageAnnotator* self, QHideEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperHideEvent(kImageAnnotator__KImageAnnotator* self, QHideEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnHideEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_hideevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool kImageAnnotator__KImageAnnotator_NativeEvent(kImageAnnotator__KImageAnnotator* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        return vkimageannotatorkimageannotator->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool kImageAnnotator__KImageAnnotator_SuperNativeEvent(kImageAnnotator__KImageAnnotator* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        return vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnNativeEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_nativeevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_ChangeEvent(kImageAnnotator__KImageAnnotator* self, QEvent* param1) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperChangeEvent(kImageAnnotator__KImageAnnotator* self, QEvent* param1) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnChangeEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_changeevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int kImageAnnotator__KImageAnnotator_Metric(const kImageAnnotator__KImageAnnotator* self, int param1) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator) {
        return vkimageannotatorkimageannotator->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int kImageAnnotator__KImageAnnotator_SuperMetric(const kImageAnnotator__KImageAnnotator* self, int param1) {
    if (auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self))) {
        return vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnMetric(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self)))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_metric_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_Metric_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_InitPainter(const kImageAnnotator__KImageAnnotator* self, QPainter* painter) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperInitPainter(const kImageAnnotator__KImageAnnotator* self, QPainter* painter) {
    if (auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self))) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnInitPainter(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self)))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_initpainter_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* kImageAnnotator__KImageAnnotator_Redirected(const kImageAnnotator__KImageAnnotator* self, QPoint* offset) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator) {
        return vkimageannotatorkimageannotator->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* kImageAnnotator__KImageAnnotator_SuperRedirected(const kImageAnnotator__KImageAnnotator* self, QPoint* offset) {
    if (auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self))) {
        return vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::redirected(offset);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnRedirected(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self)))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_redirected_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* kImageAnnotator__KImageAnnotator_SharedPainter(const kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator) {
        return vkimageannotatorkimageannotator->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* kImageAnnotator__KImageAnnotator_SuperSharedPainter(const kImageAnnotator__KImageAnnotator* self) {
    if (auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self))) {
        return vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::sharedPainter();
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnSharedPainter(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self)))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_sharedpainter_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_InputMethodEvent(kImageAnnotator__KImageAnnotator* self, QInputMethodEvent* param1) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperInputMethodEvent(kImageAnnotator__KImageAnnotator* self, QInputMethodEvent* param1) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnInputMethodEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_inputmethodevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* kImageAnnotator__KImageAnnotator_InputMethodQuery(const kImageAnnotator__KImageAnnotator* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* kImageAnnotator__KImageAnnotator_SuperInputMethodQuery(const kImageAnnotator__KImageAnnotator* self, int param1) {
    return new QVariant(self->kImageAnnotator::KImageAnnotator::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnInputMethodQuery(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self)))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_inputmethodquery_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool kImageAnnotator__KImageAnnotator_FocusNextPrevChild(kImageAnnotator__KImageAnnotator* self, bool next) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        return vkimageannotatorkimageannotator->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool kImageAnnotator__KImageAnnotator_SuperFocusNextPrevChild(kImageAnnotator__KImageAnnotator* self, bool next) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        return vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnFocusNextPrevChild(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_focusnextprevchild_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool kImageAnnotator__KImageAnnotator_EventFilter(kImageAnnotator__KImageAnnotator* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool kImageAnnotator__KImageAnnotator_SuperEventFilter(kImageAnnotator__KImageAnnotator* self, QObject* watched, QEvent* event) {
    return self->kImageAnnotator::KImageAnnotator::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnEventFilter(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_eventfilter_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_TimerEvent(kImageAnnotator__KImageAnnotator* self, QTimerEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperTimerEvent(kImageAnnotator__KImageAnnotator* self, QTimerEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnTimerEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_timerevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_ChildEvent(kImageAnnotator__KImageAnnotator* self, QChildEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperChildEvent(kImageAnnotator__KImageAnnotator* self, QChildEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::childEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnChildEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_childevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_CustomEvent(kImageAnnotator__KImageAnnotator* self, QEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperCustomEvent(kImageAnnotator__KImageAnnotator* self, QEvent* event) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::customEvent(event);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnCustomEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_customevent_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_ConnectNotify(kImageAnnotator__KImageAnnotator* self, const QMetaMethod* signal) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperConnectNotify(kImageAnnotator__KImageAnnotator* self, const QMetaMethod* signal) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnConnectNotify(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_connectnotify_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_DisconnectNotify(kImageAnnotator__KImageAnnotator* self, const QMetaMethod* signal) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator) {
        vkimageannotatorkimageannotator->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_SuperDisconnectNotify(kImageAnnotator__KImageAnnotator* self, const QMetaMethod* signal) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->kImageAnnotator::KImageAnnotator::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method kImageAnnotator::KImageAnnotator::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnDisconnectNotify(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self))
        vkimageannotatorkimageannotator->kimageannotator__kimageannotator_disconnectnotify_callback = reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void kImageAnnotator__KImageAnnotator_UpdateMicroFocus(kImageAnnotator__KImageAnnotator* self) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->VirtualkImageAnnotatorKImageAnnotator::updateMicroFocus();
    } else
        qFatal("Error: Protected method kImageAnnotator::KImageAnnotator::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void kImageAnnotator__KImageAnnotator_Create(kImageAnnotator__KImageAnnotator* self) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->VirtualkImageAnnotatorKImageAnnotator::create();
    } else
        qFatal("Error: Protected method kImageAnnotator::KImageAnnotator::create called without a directly constructed type");
}

// Derived class protected handler implementation
void kImageAnnotator__KImageAnnotator_Destroy(kImageAnnotator__KImageAnnotator* self) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        vkimageannotatorkimageannotator->VirtualkImageAnnotatorKImageAnnotator::destroy();
    } else
        qFatal("Error: Protected method kImageAnnotator::KImageAnnotator::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool kImageAnnotator__KImageAnnotator_FocusNextChild(kImageAnnotator__KImageAnnotator* self) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        return vkimageannotatorkimageannotator->VirtualkImageAnnotatorKImageAnnotator::focusNextChild();
    } else
        qFatal("Error: Protected method kImageAnnotator::KImageAnnotator::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool kImageAnnotator__KImageAnnotator_FocusPreviousChild(kImageAnnotator__KImageAnnotator* self) {
    if (auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self)) {
        return vkimageannotatorkimageannotator->VirtualkImageAnnotatorKImageAnnotator::focusPreviousChild();
    } else
        qFatal("Error: Protected method kImageAnnotator::KImageAnnotator::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* kImageAnnotator__KImageAnnotator_Sender(const kImageAnnotator__KImageAnnotator* self) {
    if (auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self))) {
        return vkimageannotatorkimageannotator->VirtualkImageAnnotatorKImageAnnotator::sender();
    } else
        qFatal("Error: Protected method kImageAnnotator::KImageAnnotator::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int kImageAnnotator__KImageAnnotator_SenderSignalIndex(const kImageAnnotator__KImageAnnotator* self) {
    if (auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self))) {
        return vkimageannotatorkimageannotator->VirtualkImageAnnotatorKImageAnnotator::senderSignalIndex();
    } else
        qFatal("Error: Protected method kImageAnnotator::KImageAnnotator::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int kImageAnnotator__KImageAnnotator_Receivers(const kImageAnnotator__KImageAnnotator* self, const char* signal) {
    if (auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self))) {
        return vkimageannotatorkimageannotator->VirtualkImageAnnotatorKImageAnnotator::receivers(signal);
    } else
        qFatal("Error: Protected method kImageAnnotator::KImageAnnotator::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool kImageAnnotator__KImageAnnotator_IsSignalConnected(const kImageAnnotator__KImageAnnotator* self, const QMetaMethod* signal) {
    if (auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self))) {
        return vkimageannotatorkimageannotator->VirtualkImageAnnotatorKImageAnnotator::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method kImageAnnotator::KImageAnnotator::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double kImageAnnotator__KImageAnnotator_GetDecodedMetricF(const kImageAnnotator__KImageAnnotator* self, int metricA, int metricB) {
    if (auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self))) {
        return vkimageannotatorkimageannotator->VirtualkImageAnnotatorKImageAnnotator::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method kImageAnnotator::KImageAnnotator::getDecodedMetricF called without a directly constructed type");
}

void kImageAnnotator__KImageAnnotator_Delete(kImageAnnotator__KImageAnnotator* self) {
    delete self;
}
