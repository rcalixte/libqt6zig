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
#include <QByteArray>
#include <cstring>
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
    auto* vkimageannotator__kimageannotator = dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotator__kimageannotator && vkimageannotator__kimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualkImageAnnotatorKImageAnnotator*)self)->metaObject();
    }
}

void* kImageAnnotator__KImageAnnotator_Metacast(kImageAnnotator__KImageAnnotator* self, const char* param1) {
    auto* vkimageannotator__kimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotator__kimageannotator && vkimageannotator__kimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->qt_metacast(param1);
    }
}

int kImageAnnotator__KImageAnnotator_Metacall(kImageAnnotator__KImageAnnotator* self, int param1, int param2, void** param3) {
    auto* vkimageannotator__kimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotator__kimageannotator && vkimageannotator__kimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
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
    auto* vkimageannotator__kimageannotator = dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotator__kimageannotator && vkimageannotator__kimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualkImageAnnotatorKImageAnnotator*)self)->sizeHint());
    }
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

void kImageAnnotator__KImageAnnotator_Connect_ImageChanged(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    void (*slotFunc)(kImageAnnotator__KImageAnnotator*) = reinterpret_cast<void (*)(kImageAnnotator__KImageAnnotator*)>(slot);
    kImageAnnotator::KImageAnnotator::connect(self, &kImageAnnotator::KImageAnnotator::imageChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void kImageAnnotator__KImageAnnotator_CurrentTabChanged(const kImageAnnotator__KImageAnnotator* self, int index) {
    self->currentTabChanged(static_cast<int>(index));
}

void kImageAnnotator__KImageAnnotator_Connect_CurrentTabChanged(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    void (*slotFunc)(kImageAnnotator__KImageAnnotator*, int) = reinterpret_cast<void (*)(kImageAnnotator__KImageAnnotator*, int)>(slot);
    kImageAnnotator::KImageAnnotator::connect(self, &kImageAnnotator::KImageAnnotator::currentTabChanged, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void kImageAnnotator__KImageAnnotator_TabCloseRequested(const kImageAnnotator__KImageAnnotator* self, int index) {
    self->tabCloseRequested(static_cast<int>(index));
}

void kImageAnnotator__KImageAnnotator_Connect_TabCloseRequested(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    void (*slotFunc)(kImageAnnotator__KImageAnnotator*, int) = reinterpret_cast<void (*)(kImageAnnotator__KImageAnnotator*, int)>(slot);
    kImageAnnotator::KImageAnnotator::connect(self, &kImageAnnotator::KImageAnnotator::tabCloseRequested, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void kImageAnnotator__KImageAnnotator_TabMoved(kImageAnnotator__KImageAnnotator* self, int fromIndex, int toIndex) {
    self->tabMoved(static_cast<int>(fromIndex), static_cast<int>(toIndex));
}

void kImageAnnotator__KImageAnnotator_Connect_TabMoved(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    void (*slotFunc)(kImageAnnotator__KImageAnnotator*, int, int) = reinterpret_cast<void (*)(kImageAnnotator__KImageAnnotator*, int, int)>(slot);
    kImageAnnotator::KImageAnnotator::connect(self, &kImageAnnotator::KImageAnnotator::tabMoved, [self, slotFunc](int fromIndex, int toIndex) {
        int sigval1 = fromIndex;
        int sigval2 = toIndex;
        slotFunc(self, sigval1, sigval2);
    });
}

void kImageAnnotator__KImageAnnotator_TabContextMenuOpened(const kImageAnnotator__KImageAnnotator* self, int index) {
    self->tabContextMenuOpened(static_cast<int>(index));
}

void kImageAnnotator__KImageAnnotator_Connect_TabContextMenuOpened(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    void (*slotFunc)(kImageAnnotator__KImageAnnotator*, int) = reinterpret_cast<void (*)(kImageAnnotator__KImageAnnotator*, int)>(slot);
    kImageAnnotator::KImageAnnotator::connect(self, &kImageAnnotator::KImageAnnotator::tabContextMenuOpened, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

// Base class handler implementation
QMetaObject* kImageAnnotator__KImageAnnotator_QBaseMetaObject(const kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_MetaObject_IsBase(true);
        return (QMetaObject*)vkimageannotatorkimageannotator->metaObject();
    } else {
        return (QMetaObject*)self->kImageAnnotator::KImageAnnotator::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnMetaObject(const kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_MetaObject_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* kImageAnnotator__KImageAnnotator_QBaseMetacast(kImageAnnotator__KImageAnnotator* self, const char* param1) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_Metacast_IsBase(true);
        return vkimageannotatorkimageannotator->qt_metacast(param1);
    } else {
        return self->kImageAnnotator::KImageAnnotator::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnMetacast(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_Metacast_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int kImageAnnotator__KImageAnnotator_QBaseMetacall(kImageAnnotator__KImageAnnotator* self, int param1, int param2, void** param3) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_Metacall_IsBase(true);
        return vkimageannotatorkimageannotator->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->kImageAnnotator::KImageAnnotator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnMetacall(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_Metacall_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QSize* kImageAnnotator__KImageAnnotator_QBaseSizeHint(const kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_SizeHint_IsBase(true);
        return new QSize(vkimageannotatorkimageannotator->sizeHint());
    } else {
        return new QSize(((VirtualkImageAnnotatorKImageAnnotator*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnSizeHint(const kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_SizeHint_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int kImageAnnotator__KImageAnnotator_DevType(const kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return vkimageannotatorkimageannotator->devType();
    } else {
        return self->kImageAnnotator::KImageAnnotator::devType();
    }
}

// Base class handler implementation
int kImageAnnotator__KImageAnnotator_QBaseDevType(const kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_DevType_IsBase(true);
        return vkimageannotatorkimageannotator->devType();
    } else {
        return self->kImageAnnotator::KImageAnnotator::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnDevType(const kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_DevType_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_SetVisible(kImageAnnotator__KImageAnnotator* self, bool visible) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setVisible(visible);
    } else {
        self->kImageAnnotator::KImageAnnotator::setVisible(visible);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseSetVisible(kImageAnnotator__KImageAnnotator* self, bool visible) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_SetVisible_IsBase(true);
        vkimageannotatorkimageannotator->setVisible(visible);
    } else {
        self->kImageAnnotator::KImageAnnotator::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnSetVisible(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_SetVisible_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* kImageAnnotator__KImageAnnotator_MinimumSizeHint(const kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return new QSize(vkimageannotatorkimageannotator->minimumSizeHint());
    } else {
        return new QSize(((VirtualkImageAnnotatorKImageAnnotator*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* kImageAnnotator__KImageAnnotator_QBaseMinimumSizeHint(const kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_MinimumSizeHint_IsBase(true);
        return new QSize(vkimageannotatorkimageannotator->minimumSizeHint());
    } else {
        return new QSize(((VirtualkImageAnnotatorKImageAnnotator*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnMinimumSizeHint(const kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_MinimumSizeHint_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int kImageAnnotator__KImageAnnotator_HeightForWidth(const kImageAnnotator__KImageAnnotator* self, int param1) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return vkimageannotatorkimageannotator->heightForWidth(static_cast<int>(param1));
    } else {
        return self->kImageAnnotator::KImageAnnotator::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int kImageAnnotator__KImageAnnotator_QBaseHeightForWidth(const kImageAnnotator__KImageAnnotator* self, int param1) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_HeightForWidth_IsBase(true);
        return vkimageannotatorkimageannotator->heightForWidth(static_cast<int>(param1));
    } else {
        return self->kImageAnnotator::KImageAnnotator::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnHeightForWidth(const kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_HeightForWidth_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool kImageAnnotator__KImageAnnotator_HasHeightForWidth(const kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return vkimageannotatorkimageannotator->hasHeightForWidth();
    } else {
        return self->kImageAnnotator::KImageAnnotator::hasHeightForWidth();
    }
}

// Base class handler implementation
bool kImageAnnotator__KImageAnnotator_QBaseHasHeightForWidth(const kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_HasHeightForWidth_IsBase(true);
        return vkimageannotatorkimageannotator->hasHeightForWidth();
    } else {
        return self->kImageAnnotator::KImageAnnotator::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnHasHeightForWidth(const kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_HasHeightForWidth_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* kImageAnnotator__KImageAnnotator_PaintEngine(const kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return vkimageannotatorkimageannotator->paintEngine();
    } else {
        return self->kImageAnnotator::KImageAnnotator::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* kImageAnnotator__KImageAnnotator_QBasePaintEngine(const kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_PaintEngine_IsBase(true);
        return vkimageannotatorkimageannotator->paintEngine();
    } else {
        return self->kImageAnnotator::KImageAnnotator::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnPaintEngine(const kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_PaintEngine_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool kImageAnnotator__KImageAnnotator_Event(kImageAnnotator__KImageAnnotator* self, QEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return vkimageannotatorkimageannotator->event(event);
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->event(event);
    }
}

// Base class handler implementation
bool kImageAnnotator__KImageAnnotator_QBaseEvent(kImageAnnotator__KImageAnnotator* self, QEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_Event_IsBase(true);
        return vkimageannotatorkimageannotator->event(event);
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_Event_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_MousePressEvent(kImageAnnotator__KImageAnnotator* self, QMouseEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->mousePressEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseMousePressEvent(kImageAnnotator__KImageAnnotator* self, QMouseEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_MousePressEvent_IsBase(true);
        vkimageannotatorkimageannotator->mousePressEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnMousePressEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_MousePressEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_MouseReleaseEvent(kImageAnnotator__KImageAnnotator* self, QMouseEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->mouseReleaseEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseMouseReleaseEvent(kImageAnnotator__KImageAnnotator* self, QMouseEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_MouseReleaseEvent_IsBase(true);
        vkimageannotatorkimageannotator->mouseReleaseEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnMouseReleaseEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_MouseReleaseEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_MouseDoubleClickEvent(kImageAnnotator__KImageAnnotator* self, QMouseEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->mouseDoubleClickEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseMouseDoubleClickEvent(kImageAnnotator__KImageAnnotator* self, QMouseEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_MouseDoubleClickEvent_IsBase(true);
        vkimageannotatorkimageannotator->mouseDoubleClickEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnMouseDoubleClickEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_MouseMoveEvent(kImageAnnotator__KImageAnnotator* self, QMouseEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->mouseMoveEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseMouseMoveEvent(kImageAnnotator__KImageAnnotator* self, QMouseEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_MouseMoveEvent_IsBase(true);
        vkimageannotatorkimageannotator->mouseMoveEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnMouseMoveEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_MouseMoveEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_WheelEvent(kImageAnnotator__KImageAnnotator* self, QWheelEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->wheelEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseWheelEvent(kImageAnnotator__KImageAnnotator* self, QWheelEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_WheelEvent_IsBase(true);
        vkimageannotatorkimageannotator->wheelEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnWheelEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_WheelEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_KeyPressEvent(kImageAnnotator__KImageAnnotator* self, QKeyEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->keyPressEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseKeyPressEvent(kImageAnnotator__KImageAnnotator* self, QKeyEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_KeyPressEvent_IsBase(true);
        vkimageannotatorkimageannotator->keyPressEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnKeyPressEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_KeyPressEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_KeyReleaseEvent(kImageAnnotator__KImageAnnotator* self, QKeyEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->keyReleaseEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseKeyReleaseEvent(kImageAnnotator__KImageAnnotator* self, QKeyEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_KeyReleaseEvent_IsBase(true);
        vkimageannotatorkimageannotator->keyReleaseEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnKeyReleaseEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_KeyReleaseEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_FocusInEvent(kImageAnnotator__KImageAnnotator* self, QFocusEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->focusInEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseFocusInEvent(kImageAnnotator__KImageAnnotator* self, QFocusEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_FocusInEvent_IsBase(true);
        vkimageannotatorkimageannotator->focusInEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnFocusInEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_FocusInEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_FocusOutEvent(kImageAnnotator__KImageAnnotator* self, QFocusEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->focusOutEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseFocusOutEvent(kImageAnnotator__KImageAnnotator* self, QFocusEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_FocusOutEvent_IsBase(true);
        vkimageannotatorkimageannotator->focusOutEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnFocusOutEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_FocusOutEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_EnterEvent(kImageAnnotator__KImageAnnotator* self, QEnterEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->enterEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseEnterEvent(kImageAnnotator__KImageAnnotator* self, QEnterEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_EnterEvent_IsBase(true);
        vkimageannotatorkimageannotator->enterEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnEnterEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_EnterEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_LeaveEvent(kImageAnnotator__KImageAnnotator* self, QEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->leaveEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseLeaveEvent(kImageAnnotator__KImageAnnotator* self, QEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_LeaveEvent_IsBase(true);
        vkimageannotatorkimageannotator->leaveEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnLeaveEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_LeaveEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_PaintEvent(kImageAnnotator__KImageAnnotator* self, QPaintEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->paintEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBasePaintEvent(kImageAnnotator__KImageAnnotator* self, QPaintEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_PaintEvent_IsBase(true);
        vkimageannotatorkimageannotator->paintEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnPaintEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_PaintEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_MoveEvent(kImageAnnotator__KImageAnnotator* self, QMoveEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->moveEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseMoveEvent(kImageAnnotator__KImageAnnotator* self, QMoveEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_MoveEvent_IsBase(true);
        vkimageannotatorkimageannotator->moveEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnMoveEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_MoveEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_ResizeEvent(kImageAnnotator__KImageAnnotator* self, QResizeEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->resizeEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseResizeEvent(kImageAnnotator__KImageAnnotator* self, QResizeEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_ResizeEvent_IsBase(true);
        vkimageannotatorkimageannotator->resizeEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnResizeEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_ResizeEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_CloseEvent(kImageAnnotator__KImageAnnotator* self, QCloseEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->closeEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseCloseEvent(kImageAnnotator__KImageAnnotator* self, QCloseEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_CloseEvent_IsBase(true);
        vkimageannotatorkimageannotator->closeEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnCloseEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_CloseEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_ContextMenuEvent(kImageAnnotator__KImageAnnotator* self, QContextMenuEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->contextMenuEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseContextMenuEvent(kImageAnnotator__KImageAnnotator* self, QContextMenuEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_ContextMenuEvent_IsBase(true);
        vkimageannotatorkimageannotator->contextMenuEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnContextMenuEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_ContextMenuEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_TabletEvent(kImageAnnotator__KImageAnnotator* self, QTabletEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->tabletEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseTabletEvent(kImageAnnotator__KImageAnnotator* self, QTabletEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_TabletEvent_IsBase(true);
        vkimageannotatorkimageannotator->tabletEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnTabletEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_TabletEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_ActionEvent(kImageAnnotator__KImageAnnotator* self, QActionEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->actionEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseActionEvent(kImageAnnotator__KImageAnnotator* self, QActionEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_ActionEvent_IsBase(true);
        vkimageannotatorkimageannotator->actionEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnActionEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_ActionEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_DragEnterEvent(kImageAnnotator__KImageAnnotator* self, QDragEnterEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->dragEnterEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseDragEnterEvent(kImageAnnotator__KImageAnnotator* self, QDragEnterEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_DragEnterEvent_IsBase(true);
        vkimageannotatorkimageannotator->dragEnterEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnDragEnterEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_DragEnterEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_DragMoveEvent(kImageAnnotator__KImageAnnotator* self, QDragMoveEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->dragMoveEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseDragMoveEvent(kImageAnnotator__KImageAnnotator* self, QDragMoveEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_DragMoveEvent_IsBase(true);
        vkimageannotatorkimageannotator->dragMoveEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnDragMoveEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_DragMoveEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_DragLeaveEvent(kImageAnnotator__KImageAnnotator* self, QDragLeaveEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->dragLeaveEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseDragLeaveEvent(kImageAnnotator__KImageAnnotator* self, QDragLeaveEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_DragLeaveEvent_IsBase(true);
        vkimageannotatorkimageannotator->dragLeaveEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnDragLeaveEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_DragLeaveEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_DropEvent(kImageAnnotator__KImageAnnotator* self, QDropEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->dropEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseDropEvent(kImageAnnotator__KImageAnnotator* self, QDropEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_DropEvent_IsBase(true);
        vkimageannotatorkimageannotator->dropEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnDropEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_DropEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_ShowEvent(kImageAnnotator__KImageAnnotator* self, QShowEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->showEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->showEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseShowEvent(kImageAnnotator__KImageAnnotator* self, QShowEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_ShowEvent_IsBase(true);
        vkimageannotatorkimageannotator->showEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnShowEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_ShowEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_HideEvent(kImageAnnotator__KImageAnnotator* self, QHideEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->hideEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseHideEvent(kImageAnnotator__KImageAnnotator* self, QHideEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_HideEvent_IsBase(true);
        vkimageannotatorkimageannotator->hideEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnHideEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_HideEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool kImageAnnotator__KImageAnnotator_NativeEvent(kImageAnnotator__KImageAnnotator* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return vkimageannotatorkimageannotator->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool kImageAnnotator__KImageAnnotator_QBaseNativeEvent(kImageAnnotator__KImageAnnotator* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_NativeEvent_IsBase(true);
        return vkimageannotatorkimageannotator->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnNativeEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_NativeEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_ChangeEvent(kImageAnnotator__KImageAnnotator* self, QEvent* param1) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->changeEvent(param1);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseChangeEvent(kImageAnnotator__KImageAnnotator* self, QEvent* param1) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_ChangeEvent_IsBase(true);
        vkimageannotatorkimageannotator->changeEvent(param1);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnChangeEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_ChangeEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int kImageAnnotator__KImageAnnotator_Metric(const kImageAnnotator__KImageAnnotator* self, int param1) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return vkimageannotatorkimageannotator->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int kImageAnnotator__KImageAnnotator_QBaseMetric(const kImageAnnotator__KImageAnnotator* self, int param1) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_Metric_IsBase(true);
        return vkimageannotatorkimageannotator->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnMetric(const kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_Metric_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_InitPainter(const kImageAnnotator__KImageAnnotator* self, QPainter* painter) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->initPainter(painter);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseInitPainter(const kImageAnnotator__KImageAnnotator* self, QPainter* painter) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_InitPainter_IsBase(true);
        vkimageannotatorkimageannotator->initPainter(painter);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnInitPainter(const kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_InitPainter_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* kImageAnnotator__KImageAnnotator_Redirected(const kImageAnnotator__KImageAnnotator* self, QPoint* offset) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return vkimageannotatorkimageannotator->redirected(offset);
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* kImageAnnotator__KImageAnnotator_QBaseRedirected(const kImageAnnotator__KImageAnnotator* self, QPoint* offset) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_Redirected_IsBase(true);
        return vkimageannotatorkimageannotator->redirected(offset);
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnRedirected(const kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_Redirected_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* kImageAnnotator__KImageAnnotator_SharedPainter(const kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return vkimageannotatorkimageannotator->sharedPainter();
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* kImageAnnotator__KImageAnnotator_QBaseSharedPainter(const kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_SharedPainter_IsBase(true);
        return vkimageannotatorkimageannotator->sharedPainter();
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnSharedPainter(const kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_SharedPainter_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_InputMethodEvent(kImageAnnotator__KImageAnnotator* self, QInputMethodEvent* param1) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->inputMethodEvent(param1);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseInputMethodEvent(kImageAnnotator__KImageAnnotator* self, QInputMethodEvent* param1) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_InputMethodEvent_IsBase(true);
        vkimageannotatorkimageannotator->inputMethodEvent(param1);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnInputMethodEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_InputMethodEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* kImageAnnotator__KImageAnnotator_InputMethodQuery(const kImageAnnotator__KImageAnnotator* self, int param1) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return new QVariant(vkimageannotatorkimageannotator->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualkImageAnnotatorKImageAnnotator*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* kImageAnnotator__KImageAnnotator_QBaseInputMethodQuery(const kImageAnnotator__KImageAnnotator* self, int param1) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_InputMethodQuery_IsBase(true);
        return new QVariant(vkimageannotatorkimageannotator->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualkImageAnnotatorKImageAnnotator*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnInputMethodQuery(const kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_InputMethodQuery_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool kImageAnnotator__KImageAnnotator_FocusNextPrevChild(kImageAnnotator__KImageAnnotator* self, bool next) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return vkimageannotatorkimageannotator->focusNextPrevChild(next);
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool kImageAnnotator__KImageAnnotator_QBaseFocusNextPrevChild(kImageAnnotator__KImageAnnotator* self, bool next) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_FocusNextPrevChild_IsBase(true);
        return vkimageannotatorkimageannotator->focusNextPrevChild(next);
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnFocusNextPrevChild(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_FocusNextPrevChild_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool kImageAnnotator__KImageAnnotator_EventFilter(kImageAnnotator__KImageAnnotator* self, QObject* watched, QEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return vkimageannotatorkimageannotator->eventFilter(watched, event);
    } else {
        return self->kImageAnnotator::KImageAnnotator::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool kImageAnnotator__KImageAnnotator_QBaseEventFilter(kImageAnnotator__KImageAnnotator* self, QObject* watched, QEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_EventFilter_IsBase(true);
        return vkimageannotatorkimageannotator->eventFilter(watched, event);
    } else {
        return self->kImageAnnotator::KImageAnnotator::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnEventFilter(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_EventFilter_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_TimerEvent(kImageAnnotator__KImageAnnotator* self, QTimerEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->timerEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseTimerEvent(kImageAnnotator__KImageAnnotator* self, QTimerEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_TimerEvent_IsBase(true);
        vkimageannotatorkimageannotator->timerEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnTimerEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_TimerEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_ChildEvent(kImageAnnotator__KImageAnnotator* self, QChildEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->childEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->childEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseChildEvent(kImageAnnotator__KImageAnnotator* self, QChildEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_ChildEvent_IsBase(true);
        vkimageannotatorkimageannotator->childEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnChildEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_ChildEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_CustomEvent(kImageAnnotator__KImageAnnotator* self, QEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->customEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->customEvent(event);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseCustomEvent(kImageAnnotator__KImageAnnotator* self, QEvent* event) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_CustomEvent_IsBase(true);
        vkimageannotatorkimageannotator->customEvent(event);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnCustomEvent(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_CustomEvent_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_ConnectNotify(kImageAnnotator__KImageAnnotator* self, const QMetaMethod* signal) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->connectNotify(*signal);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseConnectNotify(kImageAnnotator__KImageAnnotator* self, const QMetaMethod* signal) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_ConnectNotify_IsBase(true);
        vkimageannotatorkimageannotator->connectNotify(*signal);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnConnectNotify(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_ConnectNotify_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_DisconnectNotify(kImageAnnotator__KImageAnnotator* self, const QMetaMethod* signal) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->disconnectNotify(*signal);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseDisconnectNotify(kImageAnnotator__KImageAnnotator* self, const QMetaMethod* signal) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_DisconnectNotify_IsBase(true);
        vkimageannotatorkimageannotator->disconnectNotify(*signal);
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnDisconnectNotify(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_DisconnectNotify_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_UpdateMicroFocus(kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->updateMicroFocus();
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseUpdateMicroFocus(kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_UpdateMicroFocus_IsBase(true);
        vkimageannotatorkimageannotator->updateMicroFocus();
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnUpdateMicroFocus(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_UpdateMicroFocus_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_Create(kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->create();
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->create();
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseCreate(kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_Create_IsBase(true);
        vkimageannotatorkimageannotator->create();
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnCreate(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_Create_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void kImageAnnotator__KImageAnnotator_Destroy(kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->destroy();
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->destroy();
    }
}

// Base class handler implementation
void kImageAnnotator__KImageAnnotator_QBaseDestroy(kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_Destroy_IsBase(true);
        vkimageannotatorkimageannotator->destroy();
    } else {
        ((VirtualkImageAnnotatorKImageAnnotator*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnDestroy(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_Destroy_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool kImageAnnotator__KImageAnnotator_FocusNextChild(kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return vkimageannotatorkimageannotator->focusNextChild();
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool kImageAnnotator__KImageAnnotator_QBaseFocusNextChild(kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_FocusNextChild_IsBase(true);
        return vkimageannotatorkimageannotator->focusNextChild();
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnFocusNextChild(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_FocusNextChild_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool kImageAnnotator__KImageAnnotator_FocusPreviousChild(kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return vkimageannotatorkimageannotator->focusPreviousChild();
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool kImageAnnotator__KImageAnnotator_QBaseFocusPreviousChild(kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_FocusPreviousChild_IsBase(true);
        return vkimageannotatorkimageannotator->focusPreviousChild();
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnFocusPreviousChild(kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = dynamic_cast<VirtualkImageAnnotatorKImageAnnotator*>(self);
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_FocusPreviousChild_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* kImageAnnotator__KImageAnnotator_Sender(const kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return vkimageannotatorkimageannotator->sender();
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->sender();
    }
}

// Base class handler implementation
QObject* kImageAnnotator__KImageAnnotator_QBaseSender(const kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_Sender_IsBase(true);
        return vkimageannotatorkimageannotator->sender();
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnSender(const kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_Sender_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int kImageAnnotator__KImageAnnotator_SenderSignalIndex(const kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return vkimageannotatorkimageannotator->senderSignalIndex();
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int kImageAnnotator__KImageAnnotator_QBaseSenderSignalIndex(const kImageAnnotator__KImageAnnotator* self) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_SenderSignalIndex_IsBase(true);
        return vkimageannotatorkimageannotator->senderSignalIndex();
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnSenderSignalIndex(const kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_SenderSignalIndex_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int kImageAnnotator__KImageAnnotator_Receivers(const kImageAnnotator__KImageAnnotator* self, const char* signal) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return vkimageannotatorkimageannotator->receivers(signal);
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->receivers(signal);
    }
}

// Base class handler implementation
int kImageAnnotator__KImageAnnotator_QBaseReceivers(const kImageAnnotator__KImageAnnotator* self, const char* signal) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_Receivers_IsBase(true);
        return vkimageannotatorkimageannotator->receivers(signal);
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnReceivers(const kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_Receivers_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool kImageAnnotator__KImageAnnotator_IsSignalConnected(const kImageAnnotator__KImageAnnotator* self, const QMetaMethod* signal) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return vkimageannotatorkimageannotator->isSignalConnected(*signal);
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool kImageAnnotator__KImageAnnotator_QBaseIsSignalConnected(const kImageAnnotator__KImageAnnotator* self, const QMetaMethod* signal) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_IsSignalConnected_IsBase(true);
        return vkimageannotatorkimageannotator->isSignalConnected(*signal);
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnIsSignalConnected(const kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_IsSignalConnected_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double kImageAnnotator__KImageAnnotator_GetDecodedMetricF(const kImageAnnotator__KImageAnnotator* self, int metricA, int metricB) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        return vkimageannotatorkimageannotator->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double kImageAnnotator__KImageAnnotator_QBaseGetDecodedMetricF(const kImageAnnotator__KImageAnnotator* self, int metricA, int metricB) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_GetDecodedMetricF_IsBase(true);
        return vkimageannotatorkimageannotator->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualkImageAnnotatorKImageAnnotator*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void kImageAnnotator__KImageAnnotator_OnGetDecodedMetricF(const kImageAnnotator__KImageAnnotator* self, intptr_t slot) {
    auto* vkimageannotatorkimageannotator = const_cast<VirtualkImageAnnotatorKImageAnnotator*>(dynamic_cast<const VirtualkImageAnnotatorKImageAnnotator*>(self));
    if (vkimageannotatorkimageannotator && vkimageannotatorkimageannotator->isVirtualkImageAnnotatorKImageAnnotator) {
        vkimageannotatorkimageannotator->setkImageAnnotator__KImageAnnotator_GetDecodedMetricF_Callback(reinterpret_cast<VirtualkImageAnnotatorKImageAnnotator::kImageAnnotator__KImageAnnotator_GetDecodedMetricF_Callback>(slot));
    }
}

void kImageAnnotator__KImageAnnotator_Delete(kImageAnnotator__KImageAnnotator* self) {
    delete self;
}
