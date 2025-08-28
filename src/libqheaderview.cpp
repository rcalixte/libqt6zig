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
#include <QHeaderView>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QKeyEvent>
#include <QList>
#include <QMargins>
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
#include <QStyleOptionHeader>
#include <QStyleOptionViewItem>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qheaderview.h>
#include "libqheaderview.h"
#include "libqheaderview.hxx"

QHeaderView* QHeaderView_new(int orientation) {
    return new VirtualQHeaderView(static_cast<Qt::Orientation>(orientation));
}

QHeaderView* QHeaderView_new2(int orientation, QWidget* parent) {
    return new VirtualQHeaderView(static_cast<Qt::Orientation>(orientation), parent);
}

QMetaObject* QHeaderView_MetaObject(const QHeaderView* self) {
    return (QMetaObject*)self->metaObject();
}

void* QHeaderView_Metacast(QHeaderView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QHeaderView_Metacall(QHeaderView* self, int param1, int param2, void** param3) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQHeaderView*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnMetacall(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_Metacall_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QHeaderView_QBaseMetacall(QHeaderView* self, int param1, int param2, void** param3) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_Metacall_IsBase(true);
        return vqheaderview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQHeaderView*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QHeaderView_Tr(const char* s) {
    QString _ret = QHeaderView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QHeaderView_SetModel(QHeaderView* self, QAbstractItemModel* model) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        self->setModel(model);
    } else {
        ((VirtualQHeaderView*)self)->setModel(model);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnSetModel(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SetModel_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SetModel_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QHeaderView_QBaseSetModel(QHeaderView* self, QAbstractItemModel* model) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SetModel_IsBase(true);
        vqheaderview->setModel(model);
    } else {
        ((VirtualQHeaderView*)self)->setModel(model);
    }
}

int QHeaderView_Orientation(const QHeaderView* self) {
    return static_cast<int>(self->orientation());
}

int QHeaderView_Offset(const QHeaderView* self) {
    return self->offset();
}

int QHeaderView_Length(const QHeaderView* self) {
    return self->length();
}

QSize* QHeaderView_SizeHint(const QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualQHeaderView*)self)->sizeHint());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnSizeHint(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SizeHint_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SizeHint_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* QHeaderView_QBaseSizeHint(const QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SizeHint_IsBase(true);
        return new QSize(vqheaderview->sizeHint());
    } else {
        return new QSize(((VirtualQHeaderView*)self)->sizeHint());
    }
}

void QHeaderView_SetVisible(QHeaderView* self, bool v) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        self->setVisible(v);
    } else {
        ((VirtualQHeaderView*)self)->setVisible(v);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnSetVisible(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SetVisible_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SetVisible_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QHeaderView_QBaseSetVisible(QHeaderView* self, bool v) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SetVisible_IsBase(true);
        vqheaderview->setVisible(v);
    } else {
        ((VirtualQHeaderView*)self)->setVisible(v);
    }
}

int QHeaderView_SectionSizeHint(const QHeaderView* self, int logicalIndex) {
    return self->sectionSizeHint(static_cast<int>(logicalIndex));
}

int QHeaderView_VisualIndexAt(const QHeaderView* self, int position) {
    return self->visualIndexAt(static_cast<int>(position));
}

int QHeaderView_LogicalIndexAt(const QHeaderView* self, int position) {
    return self->logicalIndexAt(static_cast<int>(position));
}

int QHeaderView_LogicalIndexAt2(const QHeaderView* self, int x, int y) {
    return self->logicalIndexAt(static_cast<int>(x), static_cast<int>(y));
}

int QHeaderView_LogicalIndexAt3(const QHeaderView* self, const QPoint* pos) {
    return self->logicalIndexAt(*pos);
}

int QHeaderView_SectionSize(const QHeaderView* self, int logicalIndex) {
    return self->sectionSize(static_cast<int>(logicalIndex));
}

int QHeaderView_SectionPosition(const QHeaderView* self, int logicalIndex) {
    return self->sectionPosition(static_cast<int>(logicalIndex));
}

int QHeaderView_SectionViewportPosition(const QHeaderView* self, int logicalIndex) {
    return self->sectionViewportPosition(static_cast<int>(logicalIndex));
}

void QHeaderView_MoveSection(QHeaderView* self, int from, int to) {
    self->moveSection(static_cast<int>(from), static_cast<int>(to));
}

void QHeaderView_SwapSections(QHeaderView* self, int first, int second) {
    self->swapSections(static_cast<int>(first), static_cast<int>(second));
}

void QHeaderView_ResizeSection(QHeaderView* self, int logicalIndex, int size) {
    self->resizeSection(static_cast<int>(logicalIndex), static_cast<int>(size));
}

void QHeaderView_ResizeSections(QHeaderView* self, int mode) {
    self->resizeSections(static_cast<QHeaderView::ResizeMode>(mode));
}

bool QHeaderView_IsSectionHidden(const QHeaderView* self, int logicalIndex) {
    return self->isSectionHidden(static_cast<int>(logicalIndex));
}

void QHeaderView_SetSectionHidden(QHeaderView* self, int logicalIndex, bool hide) {
    self->setSectionHidden(static_cast<int>(logicalIndex), hide);
}

int QHeaderView_HiddenSectionCount(const QHeaderView* self) {
    return self->hiddenSectionCount();
}

void QHeaderView_HideSection(QHeaderView* self, int logicalIndex) {
    self->hideSection(static_cast<int>(logicalIndex));
}

void QHeaderView_ShowSection(QHeaderView* self, int logicalIndex) {
    self->showSection(static_cast<int>(logicalIndex));
}

int QHeaderView_Count(const QHeaderView* self) {
    return self->count();
}

int QHeaderView_VisualIndex(const QHeaderView* self, int logicalIndex) {
    return self->visualIndex(static_cast<int>(logicalIndex));
}

int QHeaderView_LogicalIndex(const QHeaderView* self, int visualIndex) {
    return self->logicalIndex(static_cast<int>(visualIndex));
}

void QHeaderView_SetSectionsMovable(QHeaderView* self, bool movable) {
    self->setSectionsMovable(movable);
}

bool QHeaderView_SectionsMovable(const QHeaderView* self) {
    return self->sectionsMovable();
}

void QHeaderView_SetFirstSectionMovable(QHeaderView* self, bool movable) {
    self->setFirstSectionMovable(movable);
}

bool QHeaderView_IsFirstSectionMovable(const QHeaderView* self) {
    return self->isFirstSectionMovable();
}

void QHeaderView_SetSectionsClickable(QHeaderView* self, bool clickable) {
    self->setSectionsClickable(clickable);
}

bool QHeaderView_SectionsClickable(const QHeaderView* self) {
    return self->sectionsClickable();
}

void QHeaderView_SetHighlightSections(QHeaderView* self, bool highlight) {
    self->setHighlightSections(highlight);
}

bool QHeaderView_HighlightSections(const QHeaderView* self) {
    return self->highlightSections();
}

int QHeaderView_SectionResizeMode(const QHeaderView* self, int logicalIndex) {
    return static_cast<int>(self->sectionResizeMode(static_cast<int>(logicalIndex)));
}

void QHeaderView_SetSectionResizeMode(QHeaderView* self, int mode) {
    self->setSectionResizeMode(static_cast<QHeaderView::ResizeMode>(mode));
}

void QHeaderView_SetSectionResizeMode2(QHeaderView* self, int logicalIndex, int mode) {
    self->setSectionResizeMode(static_cast<int>(logicalIndex), static_cast<QHeaderView::ResizeMode>(mode));
}

void QHeaderView_SetResizeContentsPrecision(QHeaderView* self, int precision) {
    self->setResizeContentsPrecision(static_cast<int>(precision));
}

int QHeaderView_ResizeContentsPrecision(const QHeaderView* self) {
    return self->resizeContentsPrecision();
}

int QHeaderView_StretchSectionCount(const QHeaderView* self) {
    return self->stretchSectionCount();
}

void QHeaderView_SetSortIndicatorShown(QHeaderView* self, bool show) {
    self->setSortIndicatorShown(show);
}

bool QHeaderView_IsSortIndicatorShown(const QHeaderView* self) {
    return self->isSortIndicatorShown();
}

void QHeaderView_SetSortIndicator(QHeaderView* self, int logicalIndex, int order) {
    self->setSortIndicator(static_cast<int>(logicalIndex), static_cast<Qt::SortOrder>(order));
}

int QHeaderView_SortIndicatorSection(const QHeaderView* self) {
    return self->sortIndicatorSection();
}

int QHeaderView_SortIndicatorOrder(const QHeaderView* self) {
    return static_cast<int>(self->sortIndicatorOrder());
}

void QHeaderView_SetSortIndicatorClearable(QHeaderView* self, bool clearable) {
    self->setSortIndicatorClearable(clearable);
}

bool QHeaderView_IsSortIndicatorClearable(const QHeaderView* self) {
    return self->isSortIndicatorClearable();
}

bool QHeaderView_StretchLastSection(const QHeaderView* self) {
    return self->stretchLastSection();
}

void QHeaderView_SetStretchLastSection(QHeaderView* self, bool stretch) {
    self->setStretchLastSection(stretch);
}

bool QHeaderView_CascadingSectionResizes(const QHeaderView* self) {
    return self->cascadingSectionResizes();
}

void QHeaderView_SetCascadingSectionResizes(QHeaderView* self, bool enable) {
    self->setCascadingSectionResizes(enable);
}

int QHeaderView_DefaultSectionSize(const QHeaderView* self) {
    return self->defaultSectionSize();
}

void QHeaderView_SetDefaultSectionSize(QHeaderView* self, int size) {
    self->setDefaultSectionSize(static_cast<int>(size));
}

void QHeaderView_ResetDefaultSectionSize(QHeaderView* self) {
    self->resetDefaultSectionSize();
}

int QHeaderView_MinimumSectionSize(const QHeaderView* self) {
    return self->minimumSectionSize();
}

void QHeaderView_SetMinimumSectionSize(QHeaderView* self, int size) {
    self->setMinimumSectionSize(static_cast<int>(size));
}

int QHeaderView_MaximumSectionSize(const QHeaderView* self) {
    return self->maximumSectionSize();
}

void QHeaderView_SetMaximumSectionSize(QHeaderView* self, int size) {
    self->setMaximumSectionSize(static_cast<int>(size));
}

int QHeaderView_DefaultAlignment(const QHeaderView* self) {
    return static_cast<int>(self->defaultAlignment());
}

void QHeaderView_SetDefaultAlignment(QHeaderView* self, int alignment) {
    self->setDefaultAlignment(static_cast<Qt::Alignment>(alignment));
}

void QHeaderView_DoItemsLayout(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        self->doItemsLayout();
    } else {
        ((VirtualQHeaderView*)self)->doItemsLayout();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnDoItemsLayout(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DoItemsLayout_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DoItemsLayout_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QHeaderView_QBaseDoItemsLayout(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DoItemsLayout_IsBase(true);
        vqheaderview->doItemsLayout();
    } else {
        ((VirtualQHeaderView*)self)->doItemsLayout();
    }
}

bool QHeaderView_SectionsMoved(const QHeaderView* self) {
    return self->sectionsMoved();
}

bool QHeaderView_SectionsHidden(const QHeaderView* self) {
    return self->sectionsHidden();
}

libqt_string QHeaderView_SaveState(const QHeaderView* self) {
    QByteArray _qb = self->saveState();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QHeaderView_RestoreState(QHeaderView* self, const libqt_string state) {
    QByteArray state_QByteArray(state.data, state.len);
    return self->restoreState(state_QByteArray);
}

void QHeaderView_Reset(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        self->reset();
    } else {
        ((VirtualQHeaderView*)self)->reset();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnReset(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_Reset_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Reset_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QHeaderView_QBaseReset(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_Reset_IsBase(true);
        vqheaderview->reset();
    } else {
        ((VirtualQHeaderView*)self)->reset();
    }
}

void QHeaderView_SetOffset(QHeaderView* self, int offset) {
    self->setOffset(static_cast<int>(offset));
}

void QHeaderView_SetOffsetToSectionPosition(QHeaderView* self, int visualIndex) {
    self->setOffsetToSectionPosition(static_cast<int>(visualIndex));
}

void QHeaderView_SetOffsetToLastSection(QHeaderView* self) {
    self->setOffsetToLastSection();
}

void QHeaderView_HeaderDataChanged(QHeaderView* self, int orientation, int logicalFirst, int logicalLast) {
    self->headerDataChanged(static_cast<Qt::Orientation>(orientation), static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
}

void QHeaderView_SectionMoved(QHeaderView* self, int logicalIndex, int oldVisualIndex, int newVisualIndex) {
    self->sectionMoved(static_cast<int>(logicalIndex), static_cast<int>(oldVisualIndex), static_cast<int>(newVisualIndex));
}

void QHeaderView_Connect_SectionMoved(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int, int, int) = reinterpret_cast<void (*)(QHeaderView*, int, int, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionMoved, [self, slotFunc](int logicalIndex, int oldVisualIndex, int newVisualIndex) {
        int sigval1 = logicalIndex;
        int sigval2 = oldVisualIndex;
        int sigval3 = newVisualIndex;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QHeaderView_SectionResized(QHeaderView* self, int logicalIndex, int oldSize, int newSize) {
    self->sectionResized(static_cast<int>(logicalIndex), static_cast<int>(oldSize), static_cast<int>(newSize));
}

void QHeaderView_Connect_SectionResized(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int, int, int) = reinterpret_cast<void (*)(QHeaderView*, int, int, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionResized, [self, slotFunc](int logicalIndex, int oldSize, int newSize) {
        int sigval1 = logicalIndex;
        int sigval2 = oldSize;
        int sigval3 = newSize;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QHeaderView_SectionPressed(QHeaderView* self, int logicalIndex) {
    self->sectionPressed(static_cast<int>(logicalIndex));
}

void QHeaderView_Connect_SectionPressed(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int) = reinterpret_cast<void (*)(QHeaderView*, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionPressed, [self, slotFunc](int logicalIndex) {
        int sigval1 = logicalIndex;
        slotFunc(self, sigval1);
    });
}

void QHeaderView_SectionClicked(QHeaderView* self, int logicalIndex) {
    self->sectionClicked(static_cast<int>(logicalIndex));
}

void QHeaderView_Connect_SectionClicked(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int) = reinterpret_cast<void (*)(QHeaderView*, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionClicked, [self, slotFunc](int logicalIndex) {
        int sigval1 = logicalIndex;
        slotFunc(self, sigval1);
    });
}

void QHeaderView_SectionEntered(QHeaderView* self, int logicalIndex) {
    self->sectionEntered(static_cast<int>(logicalIndex));
}

void QHeaderView_Connect_SectionEntered(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int) = reinterpret_cast<void (*)(QHeaderView*, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionEntered, [self, slotFunc](int logicalIndex) {
        int sigval1 = logicalIndex;
        slotFunc(self, sigval1);
    });
}

void QHeaderView_SectionDoubleClicked(QHeaderView* self, int logicalIndex) {
    self->sectionDoubleClicked(static_cast<int>(logicalIndex));
}

void QHeaderView_Connect_SectionDoubleClicked(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int) = reinterpret_cast<void (*)(QHeaderView*, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionDoubleClicked, [self, slotFunc](int logicalIndex) {
        int sigval1 = logicalIndex;
        slotFunc(self, sigval1);
    });
}

void QHeaderView_SectionCountChanged(QHeaderView* self, int oldCount, int newCount) {
    self->sectionCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
}

void QHeaderView_Connect_SectionCountChanged(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int, int) = reinterpret_cast<void (*)(QHeaderView*, int, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionCountChanged, [self, slotFunc](int oldCount, int newCount) {
        int sigval1 = oldCount;
        int sigval2 = newCount;
        slotFunc(self, sigval1, sigval2);
    });
}

void QHeaderView_SectionHandleDoubleClicked(QHeaderView* self, int logicalIndex) {
    self->sectionHandleDoubleClicked(static_cast<int>(logicalIndex));
}

void QHeaderView_Connect_SectionHandleDoubleClicked(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int) = reinterpret_cast<void (*)(QHeaderView*, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionHandleDoubleClicked, [self, slotFunc](int logicalIndex) {
        int sigval1 = logicalIndex;
        slotFunc(self, sigval1);
    });
}

void QHeaderView_GeometriesChanged(QHeaderView* self) {
    self->geometriesChanged();
}

void QHeaderView_Connect_GeometriesChanged(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*) = reinterpret_cast<void (*)(QHeaderView*)>(slot);
    QHeaderView::connect(self, &QHeaderView::geometriesChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHeaderView_SortIndicatorChanged(QHeaderView* self, int logicalIndex, int order) {
    self->sortIndicatorChanged(static_cast<int>(logicalIndex), static_cast<Qt::SortOrder>(order));
}

void QHeaderView_Connect_SortIndicatorChanged(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int, int) = reinterpret_cast<void (*)(QHeaderView*, int, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sortIndicatorChanged, [self, slotFunc](int logicalIndex, Qt::SortOrder order) {
        int sigval1 = logicalIndex;
        int sigval2 = static_cast<int>(order);
        slotFunc(self, sigval1, sigval2);
    });
}

void QHeaderView_SortIndicatorClearableChanged(QHeaderView* self, bool clearable) {
    self->sortIndicatorClearableChanged(clearable);
}

void QHeaderView_Connect_SortIndicatorClearableChanged(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, bool) = reinterpret_cast<void (*)(QHeaderView*, bool)>(slot);
    QHeaderView::connect(self, &QHeaderView::sortIndicatorClearableChanged, [self, slotFunc](bool clearable) {
        bool sigval1 = clearable;
        slotFunc(self, sigval1);
    });
}

void QHeaderView_CurrentChanged(QHeaderView* self, const QModelIndex* current, const QModelIndex* old) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->currentChanged(*current, *old);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnCurrentChanged(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_CurrentChanged_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_CurrentChanged_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QHeaderView_QBaseCurrentChanged(QHeaderView* self, const QModelIndex* current, const QModelIndex* old) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_CurrentChanged_IsBase(true);
        vqheaderview->currentChanged(*current, *old);
    }
}

bool QHeaderView_Event(QHeaderView* self, QEvent* e) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->event(e);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_Event_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Event_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QHeaderView_QBaseEvent(QHeaderView* self, QEvent* e) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_Event_IsBase(true);
        return vqheaderview->event(e);
    }
    return {};
}

void QHeaderView_PaintEvent(QHeaderView* self, QPaintEvent* e) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->paintEvent(e);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnPaintEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_PaintEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_PaintEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QHeaderView_QBasePaintEvent(QHeaderView* self, QPaintEvent* e) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_PaintEvent_IsBase(true);
        vqheaderview->paintEvent(e);
    }
}

void QHeaderView_MousePressEvent(QHeaderView* self, QMouseEvent* e) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->mousePressEvent(e);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnMousePressEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_MousePressEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_MousePressEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QHeaderView_QBaseMousePressEvent(QHeaderView* self, QMouseEvent* e) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_MousePressEvent_IsBase(true);
        vqheaderview->mousePressEvent(e);
    }
}

void QHeaderView_MouseMoveEvent(QHeaderView* self, QMouseEvent* e) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->mouseMoveEvent(e);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnMouseMoveEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_MouseMoveEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QHeaderView_QBaseMouseMoveEvent(QHeaderView* self, QMouseEvent* e) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_MouseMoveEvent_IsBase(true);
        vqheaderview->mouseMoveEvent(e);
    }
}

void QHeaderView_MouseReleaseEvent(QHeaderView* self, QMouseEvent* e) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->mouseReleaseEvent(e);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnMouseReleaseEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_MouseReleaseEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QHeaderView_QBaseMouseReleaseEvent(QHeaderView* self, QMouseEvent* e) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_MouseReleaseEvent_IsBase(true);
        vqheaderview->mouseReleaseEvent(e);
    }
}

void QHeaderView_MouseDoubleClickEvent(QHeaderView* self, QMouseEvent* e) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->mouseDoubleClickEvent(e);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnMouseDoubleClickEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QHeaderView_QBaseMouseDoubleClickEvent(QHeaderView* self, QMouseEvent* e) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_MouseDoubleClickEvent_IsBase(true);
        vqheaderview->mouseDoubleClickEvent(e);
    }
}

bool QHeaderView_ViewportEvent(QHeaderView* self, QEvent* e) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->viewportEvent(e);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnViewportEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ViewportEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ViewportEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QHeaderView_QBaseViewportEvent(QHeaderView* self, QEvent* e) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ViewportEvent_IsBase(true);
        return vqheaderview->viewportEvent(e);
    }
    return {};
}

void QHeaderView_PaintSection(const QHeaderView* self, QPainter* painter, const QRect* rect, int logicalIndex) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->paintSection(painter, *rect, static_cast<int>(logicalIndex));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnPaintSection(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_PaintSection_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_PaintSection_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QHeaderView_QBasePaintSection(const QHeaderView* self, QPainter* painter, const QRect* rect, int logicalIndex) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_PaintSection_IsBase(true);
        vqheaderview->paintSection(painter, *rect, static_cast<int>(logicalIndex));
    }
}

QSize* QHeaderView_SectionSizeFromContents(const QHeaderView* self, int logicalIndex) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return new QSize(vqheaderview->sectionSizeFromContents(static_cast<int>(logicalIndex)));
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnSectionSizeFromContents(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SectionSizeFromContents_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SectionSizeFromContents_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* QHeaderView_QBaseSectionSizeFromContents(const QHeaderView* self, int logicalIndex) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SectionSizeFromContents_IsBase(true);
        return new QSize(vqheaderview->sectionSizeFromContents(static_cast<int>(logicalIndex)));
    }
    return {};
}

int QHeaderView_HorizontalOffset(const QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->horizontalOffset();
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnHorizontalOffset(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_HorizontalOffset_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_HorizontalOffset_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QHeaderView_QBaseHorizontalOffset(const QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_HorizontalOffset_IsBase(true);
        return vqheaderview->horizontalOffset();
    }
    return {};
}

int QHeaderView_VerticalOffset(const QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->verticalOffset();
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnVerticalOffset(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_VerticalOffset_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_VerticalOffset_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QHeaderView_QBaseVerticalOffset(const QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_VerticalOffset_IsBase(true);
        return vqheaderview->verticalOffset();
    }
    return {};
}

void QHeaderView_UpdateGeometries(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->updateGeometries();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnUpdateGeometries(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_UpdateGeometries_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_UpdateGeometries_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QHeaderView_QBaseUpdateGeometries(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_UpdateGeometries_IsBase(true);
        vqheaderview->updateGeometries();
    }
}

void QHeaderView_ScrollContentsBy(QHeaderView* self, int dx, int dy) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnScrollContentsBy(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ScrollContentsBy_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ScrollContentsBy_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QHeaderView_QBaseScrollContentsBy(QHeaderView* self, int dx, int dy) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ScrollContentsBy_IsBase(true);
        vqheaderview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

void QHeaderView_DataChanged(QHeaderView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnDataChanged(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DataChanged_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DataChanged_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QHeaderView_QBaseDataChanged(QHeaderView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DataChanged_IsBase(true);
        vqheaderview->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

void QHeaderView_RowsInserted(QHeaderView* self, const QModelIndex* parent, int start, int end) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnRowsInserted(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_RowsInserted_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_RowsInserted_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QHeaderView_QBaseRowsInserted(QHeaderView* self, const QModelIndex* parent, int start, int end) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_RowsInserted_IsBase(true);
        vqheaderview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

QRect* QHeaderView_VisualRect(const QHeaderView* self, const QModelIndex* index) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return new QRect(vqheaderview->visualRect(*index));
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnVisualRect(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_VisualRect_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_VisualRect_Callback>(slot));
    }
}

// Virtual base class handler implementation
QRect* QHeaderView_QBaseVisualRect(const QHeaderView* self, const QModelIndex* index) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_VisualRect_IsBase(true);
        return new QRect(vqheaderview->visualRect(*index));
    }
    return {};
}

void QHeaderView_ScrollTo(QHeaderView* self, const QModelIndex* index, int hint) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnScrollTo(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ScrollTo_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ScrollTo_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QHeaderView_QBaseScrollTo(QHeaderView* self, const QModelIndex* index, int hint) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ScrollTo_IsBase(true);
        vqheaderview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

QModelIndex* QHeaderView_IndexAt(const QHeaderView* self, const QPoint* p) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return new QModelIndex(vqheaderview->indexAt(*p));
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnIndexAt(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_IndexAt_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_IndexAt_Callback>(slot));
    }
}

// Virtual base class handler implementation
QModelIndex* QHeaderView_QBaseIndexAt(const QHeaderView* self, const QPoint* p) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_IndexAt_IsBase(true);
        return new QModelIndex(vqheaderview->indexAt(*p));
    }
    return {};
}

bool QHeaderView_IsIndexHidden(const QHeaderView* self, const QModelIndex* index) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->isIndexHidden(*index);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnIsIndexHidden(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_IsIndexHidden_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_IsIndexHidden_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QHeaderView_QBaseIsIndexHidden(const QHeaderView* self, const QModelIndex* index) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_IsIndexHidden_IsBase(true);
        return vqheaderview->isIndexHidden(*index);
    }
    return {};
}

QModelIndex* QHeaderView_MoveCursor(QHeaderView* self, int param1, int param2) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return new QModelIndex(vqheaderview->moveCursor(static_cast<VirtualQHeaderView::CursorAction>(param1), static_cast<QFlags<Qt::KeyboardModifier>>(param2)));
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnMoveCursor(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_MoveCursor_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_MoveCursor_Callback>(slot));
    }
}

// Virtual base class handler implementation
QModelIndex* QHeaderView_QBaseMoveCursor(QHeaderView* self, int param1, int param2) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_MoveCursor_IsBase(true);
        return new QModelIndex(vqheaderview->moveCursor(static_cast<VirtualQHeaderView::CursorAction>(param1), static_cast<QFlags<Qt::KeyboardModifier>>(param2)));
    }
    return {};
}

void QHeaderView_SetSelection(QHeaderView* self, const QRect* rect, int flags) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(flags));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnSetSelection(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SetSelection_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SetSelection_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QHeaderView_QBaseSetSelection(QHeaderView* self, const QRect* rect, int flags) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SetSelection_IsBase(true);
        vqheaderview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(flags));
    }
}

QRegion* QHeaderView_VisualRegionForSelection(const QHeaderView* self, const QItemSelection* selection) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return new QRegion(vqheaderview->visualRegionForSelection(*selection));
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnVisualRegionForSelection(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_VisualRegionForSelection_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_VisualRegionForSelection_Callback>(slot));
    }
}

// Virtual base class handler implementation
QRegion* QHeaderView_QBaseVisualRegionForSelection(const QHeaderView* self, const QItemSelection* selection) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_VisualRegionForSelection_IsBase(true);
        return new QRegion(vqheaderview->visualRegionForSelection(*selection));
    }
    return {};
}

void QHeaderView_InitStyleOptionForIndex(const QHeaderView* self, QStyleOptionHeader* option, int logicalIndex) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->initStyleOptionForIndex(option, static_cast<int>(logicalIndex));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnInitStyleOptionForIndex(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_InitStyleOptionForIndex_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_InitStyleOptionForIndex_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QHeaderView_QBaseInitStyleOptionForIndex(const QHeaderView* self, QStyleOptionHeader* option, int logicalIndex) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_InitStyleOptionForIndex_IsBase(true);
        vqheaderview->initStyleOptionForIndex(option, static_cast<int>(logicalIndex));
    }
}

void QHeaderView_InitStyleOption(const QHeaderView* self, QStyleOptionHeader* option) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->initStyleOption(option);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnInitStyleOption(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_InitStyleOption_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_InitStyleOption_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QHeaderView_QBaseInitStyleOption(const QHeaderView* self, QStyleOptionHeader* option) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_InitStyleOption_IsBase(true);
        vqheaderview->initStyleOption(option);
    }
}

libqt_string QHeaderView_Tr2(const char* s, const char* c) {
    QString _ret = QHeaderView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QHeaderView_Tr3(const char* s, const char* c, int n) {
    QString _ret = QHeaderView::tr(s, c, static_cast<int>(n));
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
void QHeaderView_SetSelectionModel(QHeaderView* self, QItemSelectionModel* selectionModel) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setSelectionModel(selectionModel);
    } else {
        self->QHeaderView::setSelectionModel(selectionModel);
    }
}

// Base class handler implementation
void QHeaderView_QBaseSetSelectionModel(QHeaderView* self, QItemSelectionModel* selectionModel) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SetSelectionModel_IsBase(true);
        vqheaderview->setSelectionModel(selectionModel);
    } else {
        self->QHeaderView::setSelectionModel(selectionModel);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetSelectionModel(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SetSelectionModel_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SetSelectionModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_KeyboardSearch(QHeaderView* self, const libqt_string search) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->keyboardSearch(search_QString);
    } else {
        self->QHeaderView::keyboardSearch(search_QString);
    }
}

// Base class handler implementation
void QHeaderView_QBaseKeyboardSearch(QHeaderView* self, const libqt_string search) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_KeyboardSearch_IsBase(true);
        vqheaderview->keyboardSearch(search_QString);
    } else {
        self->QHeaderView::keyboardSearch(search_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnKeyboardSearch(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_KeyboardSearch_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_KeyboardSearch_Callback>(slot));
    }
}

// Derived class handler implementation
int QHeaderView_SizeHintForRow(const QHeaderView* self, int row) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->sizeHintForRow(static_cast<int>(row));
    } else {
        return self->QHeaderView::sizeHintForRow(static_cast<int>(row));
    }
}

// Base class handler implementation
int QHeaderView_QBaseSizeHintForRow(const QHeaderView* self, int row) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SizeHintForRow_IsBase(true);
        return vqheaderview->sizeHintForRow(static_cast<int>(row));
    } else {
        return self->QHeaderView::sizeHintForRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSizeHintForRow(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SizeHintForRow_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SizeHintForRow_Callback>(slot));
    }
}

// Derived class handler implementation
int QHeaderView_SizeHintForColumn(const QHeaderView* self, int column) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return self->QHeaderView::sizeHintForColumn(static_cast<int>(column));
    }
}

// Base class handler implementation
int QHeaderView_QBaseSizeHintForColumn(const QHeaderView* self, int column) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SizeHintForColumn_IsBase(true);
        return vqheaderview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return self->QHeaderView::sizeHintForColumn(static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSizeHintForColumn(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SizeHintForColumn_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SizeHintForColumn_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractItemDelegate* QHeaderView_ItemDelegateForIndex(const QHeaderView* self, const QModelIndex* index) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->itemDelegateForIndex(*index);
    } else {
        return self->QHeaderView::itemDelegateForIndex(*index);
    }
}

// Base class handler implementation
QAbstractItemDelegate* QHeaderView_QBaseItemDelegateForIndex(const QHeaderView* self, const QModelIndex* index) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ItemDelegateForIndex_IsBase(true);
        return vqheaderview->itemDelegateForIndex(*index);
    } else {
        return self->QHeaderView::itemDelegateForIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnItemDelegateForIndex(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ItemDelegateForIndex_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ItemDelegateForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QHeaderView_InputMethodQuery(const QHeaderView* self, int query) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return new QVariant(vqheaderview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQHeaderView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* QHeaderView_QBaseInputMethodQuery(const QHeaderView* self, int query) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_InputMethodQuery_IsBase(true);
        return new QVariant(vqheaderview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQHeaderView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInputMethodQuery(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_InputMethodQuery_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_SetRootIndex(QHeaderView* self, const QModelIndex* index) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setRootIndex(*index);
    } else {
        self->QHeaderView::setRootIndex(*index);
    }
}

// Base class handler implementation
void QHeaderView_QBaseSetRootIndex(QHeaderView* self, const QModelIndex* index) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SetRootIndex_IsBase(true);
        vqheaderview->setRootIndex(*index);
    } else {
        self->QHeaderView::setRootIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetRootIndex(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SetRootIndex_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SetRootIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_SelectAll(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->selectAll();
    } else {
        self->QHeaderView::selectAll();
    }
}

// Base class handler implementation
void QHeaderView_QBaseSelectAll(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SelectAll_IsBase(true);
        vqheaderview->selectAll();
    } else {
        self->QHeaderView::selectAll();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSelectAll(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SelectAll_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SelectAll_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_RowsAboutToBeRemoved(QHeaderView* self, const QModelIndex* parent, int start, int end) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQHeaderView*)self)->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QHeaderView_QBaseRowsAboutToBeRemoved(QHeaderView* self, const QModelIndex* parent, int start, int end) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_RowsAboutToBeRemoved_IsBase(true);
        vqheaderview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQHeaderView*)self)->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnRowsAboutToBeRemoved(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_RowsAboutToBeRemoved_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_RowsAboutToBeRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_SelectionChanged(QHeaderView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->selectionChanged(*selected, *deselected);
    } else {
        ((VirtualQHeaderView*)self)->selectionChanged(*selected, *deselected);
    }
}

// Base class handler implementation
void QHeaderView_QBaseSelectionChanged(QHeaderView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SelectionChanged_IsBase(true);
        vqheaderview->selectionChanged(*selected, *deselected);
    } else {
        ((VirtualQHeaderView*)self)->selectionChanged(*selected, *deselected);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSelectionChanged(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SelectionChanged_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SelectionChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_UpdateEditorData(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->updateEditorData();
    } else {
        ((VirtualQHeaderView*)self)->updateEditorData();
    }
}

// Base class handler implementation
void QHeaderView_QBaseUpdateEditorData(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_UpdateEditorData_IsBase(true);
        vqheaderview->updateEditorData();
    } else {
        ((VirtualQHeaderView*)self)->updateEditorData();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnUpdateEditorData(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_UpdateEditorData_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_UpdateEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_UpdateEditorGeometries(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->updateEditorGeometries();
    } else {
        ((VirtualQHeaderView*)self)->updateEditorGeometries();
    }
}

// Base class handler implementation
void QHeaderView_QBaseUpdateEditorGeometries(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_UpdateEditorGeometries_IsBase(true);
        vqheaderview->updateEditorGeometries();
    } else {
        ((VirtualQHeaderView*)self)->updateEditorGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnUpdateEditorGeometries(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_UpdateEditorGeometries_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_UpdateEditorGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_VerticalScrollbarAction(QHeaderView* self, int action) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQHeaderView*)self)->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QHeaderView_QBaseVerticalScrollbarAction(QHeaderView* self, int action) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_VerticalScrollbarAction_IsBase(true);
        vqheaderview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQHeaderView*)self)->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnVerticalScrollbarAction(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_VerticalScrollbarAction_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_VerticalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_HorizontalScrollbarAction(QHeaderView* self, int action) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQHeaderView*)self)->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QHeaderView_QBaseHorizontalScrollbarAction(QHeaderView* self, int action) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_HorizontalScrollbarAction_IsBase(true);
        vqheaderview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQHeaderView*)self)->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnHorizontalScrollbarAction(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_HorizontalScrollbarAction_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_HorizontalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_VerticalScrollbarValueChanged(QHeaderView* self, int value) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQHeaderView*)self)->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QHeaderView_QBaseVerticalScrollbarValueChanged(QHeaderView* self, int value) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_VerticalScrollbarValueChanged_IsBase(true);
        vqheaderview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQHeaderView*)self)->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnVerticalScrollbarValueChanged(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_VerticalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_VerticalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_HorizontalScrollbarValueChanged(QHeaderView* self, int value) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQHeaderView*)self)->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QHeaderView_QBaseHorizontalScrollbarValueChanged(QHeaderView* self, int value) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_HorizontalScrollbarValueChanged_IsBase(true);
        vqheaderview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQHeaderView*)self)->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnHorizontalScrollbarValueChanged(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_HorizontalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_HorizontalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_CloseEditor(QHeaderView* self, QWidget* editor, int hint) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        ((VirtualQHeaderView*)self)->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Base class handler implementation
void QHeaderView_QBaseCloseEditor(QHeaderView* self, QWidget* editor, int hint) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_CloseEditor_IsBase(true);
        vqheaderview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        ((VirtualQHeaderView*)self)->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnCloseEditor(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_CloseEditor_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_CloseEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_CommitData(QHeaderView* self, QWidget* editor) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->commitData(editor);
    } else {
        ((VirtualQHeaderView*)self)->commitData(editor);
    }
}

// Base class handler implementation
void QHeaderView_QBaseCommitData(QHeaderView* self, QWidget* editor) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_CommitData_IsBase(true);
        vqheaderview->commitData(editor);
    } else {
        ((VirtualQHeaderView*)self)->commitData(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnCommitData(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_CommitData_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_CommitData_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_EditorDestroyed(QHeaderView* self, QObject* editor) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->editorDestroyed(editor);
    } else {
        ((VirtualQHeaderView*)self)->editorDestroyed(editor);
    }
}

// Base class handler implementation
void QHeaderView_QBaseEditorDestroyed(QHeaderView* self, QObject* editor) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_EditorDestroyed_IsBase(true);
        vqheaderview->editorDestroyed(editor);
    } else {
        ((VirtualQHeaderView*)self)->editorDestroyed(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnEditorDestroyed(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_EditorDestroyed_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_EditorDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QHeaderView_SelectedIndexes(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        QList<QModelIndex> _ret = vqheaderview->selectedIndexes();
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
        QList<QModelIndex> _ret = ((VirtualQHeaderView*)self)->selectedIndexes();
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
libqt_list /* of QModelIndex* */ QHeaderView_QBaseSelectedIndexes(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SelectedIndexes_IsBase(true);
        QList<QModelIndex> _ret = vqheaderview->selectedIndexes();
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
        QList<QModelIndex> _ret = ((VirtualQHeaderView*)self)->selectedIndexes();
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
void QHeaderView_OnSelectedIndexes(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SelectedIndexes_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SelectedIndexes_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHeaderView_Edit2(QHeaderView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return ((VirtualQHeaderView*)self)->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Base class handler implementation
bool QHeaderView_QBaseEdit2(QHeaderView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_Edit2_IsBase(true);
        return vqheaderview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return ((VirtualQHeaderView*)self)->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnEdit2(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_Edit2_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Edit2_Callback>(slot));
    }
}

// Derived class handler implementation
int QHeaderView_SelectionCommand(const QHeaderView* self, const QModelIndex* index, const QEvent* event) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return static_cast<int>(vqheaderview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(((VirtualQHeaderView*)self)->selectionCommand(*index, event));
    }
}

// Base class handler implementation
int QHeaderView_QBaseSelectionCommand(const QHeaderView* self, const QModelIndex* index, const QEvent* event) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SelectionCommand_IsBase(true);
        return static_cast<int>(vqheaderview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(((VirtualQHeaderView*)self)->selectionCommand(*index, event));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSelectionCommand(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SelectionCommand_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SelectionCommand_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_StartDrag(QHeaderView* self, int supportedActions) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        ((VirtualQHeaderView*)self)->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Base class handler implementation
void QHeaderView_QBaseStartDrag(QHeaderView* self, int supportedActions) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_StartDrag_IsBase(true);
        vqheaderview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        ((VirtualQHeaderView*)self)->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnStartDrag(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_StartDrag_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_StartDrag_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_InitViewItemOption(const QHeaderView* self, QStyleOptionViewItem* option) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->initViewItemOption(option);
    } else {
        ((VirtualQHeaderView*)self)->initViewItemOption(option);
    }
}

// Base class handler implementation
void QHeaderView_QBaseInitViewItemOption(const QHeaderView* self, QStyleOptionViewItem* option) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_InitViewItemOption_IsBase(true);
        vqheaderview->initViewItemOption(option);
    } else {
        ((VirtualQHeaderView*)self)->initViewItemOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInitViewItemOption(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_InitViewItemOption_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_InitViewItemOption_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHeaderView_FocusNextPrevChild(QHeaderView* self, bool next) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->focusNextPrevChild(next);
    } else {
        return ((VirtualQHeaderView*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QHeaderView_QBaseFocusNextPrevChild(QHeaderView* self, bool next) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_FocusNextPrevChild_IsBase(true);
        return vqheaderview->focusNextPrevChild(next);
    } else {
        return ((VirtualQHeaderView*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnFocusNextPrevChild(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_DragEnterEvent(QHeaderView* self, QDragEnterEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->dragEnterEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseDragEnterEvent(QHeaderView* self, QDragEnterEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DragEnterEvent_IsBase(true);
        vqheaderview->dragEnterEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDragEnterEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DragEnterEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_DragMoveEvent(QHeaderView* self, QDragMoveEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->dragMoveEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseDragMoveEvent(QHeaderView* self, QDragMoveEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DragMoveEvent_IsBase(true);
        vqheaderview->dragMoveEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDragMoveEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DragMoveEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_DragLeaveEvent(QHeaderView* self, QDragLeaveEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->dragLeaveEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseDragLeaveEvent(QHeaderView* self, QDragLeaveEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DragLeaveEvent_IsBase(true);
        vqheaderview->dragLeaveEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDragLeaveEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DragLeaveEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_DropEvent(QHeaderView* self, QDropEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->dropEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseDropEvent(QHeaderView* self, QDropEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DropEvent_IsBase(true);
        vqheaderview->dropEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDropEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DropEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_FocusInEvent(QHeaderView* self, QFocusEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->focusInEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseFocusInEvent(QHeaderView* self, QFocusEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_FocusInEvent_IsBase(true);
        vqheaderview->focusInEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnFocusInEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_FocusInEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_FocusOutEvent(QHeaderView* self, QFocusEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->focusOutEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseFocusOutEvent(QHeaderView* self, QFocusEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_FocusOutEvent_IsBase(true);
        vqheaderview->focusOutEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnFocusOutEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_FocusOutEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_KeyPressEvent(QHeaderView* self, QKeyEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->keyPressEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseKeyPressEvent(QHeaderView* self, QKeyEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_KeyPressEvent_IsBase(true);
        vqheaderview->keyPressEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnKeyPressEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_KeyPressEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ResizeEvent(QHeaderView* self, QResizeEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->resizeEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseResizeEvent(QHeaderView* self, QResizeEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ResizeEvent_IsBase(true);
        vqheaderview->resizeEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnResizeEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ResizeEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_TimerEvent(QHeaderView* self, QTimerEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->timerEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseTimerEvent(QHeaderView* self, QTimerEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_TimerEvent_IsBase(true);
        vqheaderview->timerEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnTimerEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_TimerEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_InputMethodEvent(QHeaderView* self, QInputMethodEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->inputMethodEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseInputMethodEvent(QHeaderView* self, QInputMethodEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_InputMethodEvent_IsBase(true);
        vqheaderview->inputMethodEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInputMethodEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_InputMethodEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHeaderView_EventFilter(QHeaderView* self, QObject* object, QEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->eventFilter(object, event);
    } else {
        return ((VirtualQHeaderView*)self)->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QHeaderView_QBaseEventFilter(QHeaderView* self, QObject* object, QEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_EventFilter_IsBase(true);
        return vqheaderview->eventFilter(object, event);
    } else {
        return ((VirtualQHeaderView*)self)->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnEventFilter(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_EventFilter_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QHeaderView_ViewportSizeHint(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return new QSize(vqheaderview->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QHeaderView_QBaseViewportSizeHint(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ViewportSizeHint_IsBase(true);
        return new QSize(vqheaderview->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnViewportSizeHint(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ViewportSizeHint_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QHeaderView_MinimumSizeHint(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return new QSize(vqheaderview->minimumSizeHint());
    } else {
        return new QSize(((VirtualQHeaderView*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QHeaderView_QBaseMinimumSizeHint(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_MinimumSizeHint_IsBase(true);
        return new QSize(vqheaderview->minimumSizeHint());
    } else {
        return new QSize(((VirtualQHeaderView*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMinimumSizeHint(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_MinimumSizeHint_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_SetupViewport(QHeaderView* self, QWidget* viewport) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setupViewport(viewport);
    } else {
        self->QHeaderView::setupViewport(viewport);
    }
}

// Base class handler implementation
void QHeaderView_QBaseSetupViewport(QHeaderView* self, QWidget* viewport) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SetupViewport_IsBase(true);
        vqheaderview->setupViewport(viewport);
    } else {
        self->QHeaderView::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetupViewport(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SetupViewport_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_WheelEvent(QHeaderView* self, QWheelEvent* param1) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->wheelEvent(param1);
    } else {
        ((VirtualQHeaderView*)self)->wheelEvent(param1);
    }
}

// Base class handler implementation
void QHeaderView_QBaseWheelEvent(QHeaderView* self, QWheelEvent* param1) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_WheelEvent_IsBase(true);
        vqheaderview->wheelEvent(param1);
    } else {
        ((VirtualQHeaderView*)self)->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnWheelEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_WheelEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ContextMenuEvent(QHeaderView* self, QContextMenuEvent* param1) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->contextMenuEvent(param1);
    } else {
        ((VirtualQHeaderView*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QHeaderView_QBaseContextMenuEvent(QHeaderView* self, QContextMenuEvent* param1) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ContextMenuEvent_IsBase(true);
        vqheaderview->contextMenuEvent(param1);
    } else {
        ((VirtualQHeaderView*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnContextMenuEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ContextMenuEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ChangeEvent(QHeaderView* self, QEvent* param1) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->changeEvent(param1);
    } else {
        ((VirtualQHeaderView*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QHeaderView_QBaseChangeEvent(QHeaderView* self, QEvent* param1) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ChangeEvent_IsBase(true);
        vqheaderview->changeEvent(param1);
    } else {
        ((VirtualQHeaderView*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnChangeEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ChangeEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QHeaderView_DevType(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->devType();
    } else {
        return self->QHeaderView::devType();
    }
}

// Base class handler implementation
int QHeaderView_QBaseDevType(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DevType_IsBase(true);
        return vqheaderview->devType();
    } else {
        return self->QHeaderView::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDevType(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DevType_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int QHeaderView_HeightForWidth(const QHeaderView* self, int param1) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QHeaderView::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QHeaderView_QBaseHeightForWidth(const QHeaderView* self, int param1) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_HeightForWidth_IsBase(true);
        return vqheaderview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QHeaderView::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnHeightForWidth(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_HeightForWidth_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHeaderView_HasHeightForWidth(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->hasHeightForWidth();
    } else {
        return self->QHeaderView::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QHeaderView_QBaseHasHeightForWidth(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_HasHeightForWidth_IsBase(true);
        return vqheaderview->hasHeightForWidth();
    } else {
        return self->QHeaderView::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnHasHeightForWidth(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_HasHeightForWidth_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QHeaderView_PaintEngine(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->paintEngine();
    } else {
        return self->QHeaderView::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QHeaderView_QBasePaintEngine(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_PaintEngine_IsBase(true);
        return vqheaderview->paintEngine();
    } else {
        return self->QHeaderView::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnPaintEngine(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_PaintEngine_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_KeyReleaseEvent(QHeaderView* self, QKeyEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->keyReleaseEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseKeyReleaseEvent(QHeaderView* self, QKeyEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_KeyReleaseEvent_IsBase(true);
        vqheaderview->keyReleaseEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnKeyReleaseEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_EnterEvent(QHeaderView* self, QEnterEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->enterEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseEnterEvent(QHeaderView* self, QEnterEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_EnterEvent_IsBase(true);
        vqheaderview->enterEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnEnterEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_EnterEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_LeaveEvent(QHeaderView* self, QEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->leaveEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseLeaveEvent(QHeaderView* self, QEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_LeaveEvent_IsBase(true);
        vqheaderview->leaveEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnLeaveEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_LeaveEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_MoveEvent(QHeaderView* self, QMoveEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->moveEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseMoveEvent(QHeaderView* self, QMoveEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_MoveEvent_IsBase(true);
        vqheaderview->moveEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMoveEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_MoveEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_CloseEvent(QHeaderView* self, QCloseEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->closeEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseCloseEvent(QHeaderView* self, QCloseEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_CloseEvent_IsBase(true);
        vqheaderview->closeEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnCloseEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_CloseEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_TabletEvent(QHeaderView* self, QTabletEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->tabletEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseTabletEvent(QHeaderView* self, QTabletEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_TabletEvent_IsBase(true);
        vqheaderview->tabletEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnTabletEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_TabletEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ActionEvent(QHeaderView* self, QActionEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->actionEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseActionEvent(QHeaderView* self, QActionEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ActionEvent_IsBase(true);
        vqheaderview->actionEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnActionEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ActionEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ShowEvent(QHeaderView* self, QShowEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->showEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseShowEvent(QHeaderView* self, QShowEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ShowEvent_IsBase(true);
        vqheaderview->showEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnShowEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ShowEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_HideEvent(QHeaderView* self, QHideEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->hideEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseHideEvent(QHeaderView* self, QHideEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_HideEvent_IsBase(true);
        vqheaderview->hideEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnHideEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_HideEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHeaderView_NativeEvent(QHeaderView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQHeaderView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QHeaderView_QBaseNativeEvent(QHeaderView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_NativeEvent_IsBase(true);
        return vqheaderview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQHeaderView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnNativeEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_NativeEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QHeaderView_Metric(const QHeaderView* self, int param1) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQHeaderView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QHeaderView_QBaseMetric(const QHeaderView* self, int param1) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_Metric_IsBase(true);
        return vqheaderview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQHeaderView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMetric(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_Metric_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_InitPainter(const QHeaderView* self, QPainter* painter) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->initPainter(painter);
    } else {
        ((VirtualQHeaderView*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QHeaderView_QBaseInitPainter(const QHeaderView* self, QPainter* painter) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_InitPainter_IsBase(true);
        vqheaderview->initPainter(painter);
    } else {
        ((VirtualQHeaderView*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInitPainter(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_InitPainter_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QHeaderView_Redirected(const QHeaderView* self, QPoint* offset) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->redirected(offset);
    } else {
        return ((VirtualQHeaderView*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QHeaderView_QBaseRedirected(const QHeaderView* self, QPoint* offset) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_Redirected_IsBase(true);
        return vqheaderview->redirected(offset);
    } else {
        return ((VirtualQHeaderView*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnRedirected(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_Redirected_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QHeaderView_SharedPainter(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->sharedPainter();
    } else {
        return ((VirtualQHeaderView*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QHeaderView_QBaseSharedPainter(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SharedPainter_IsBase(true);
        return vqheaderview->sharedPainter();
    } else {
        return ((VirtualQHeaderView*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSharedPainter(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SharedPainter_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ChildEvent(QHeaderView* self, QChildEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->childEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseChildEvent(QHeaderView* self, QChildEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ChildEvent_IsBase(true);
        vqheaderview->childEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnChildEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ChildEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_CustomEvent(QHeaderView* self, QEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->customEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseCustomEvent(QHeaderView* self, QEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_CustomEvent_IsBase(true);
        vqheaderview->customEvent(event);
    } else {
        ((VirtualQHeaderView*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnCustomEvent(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_CustomEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ConnectNotify(QHeaderView* self, const QMetaMethod* signal) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->connectNotify(*signal);
    } else {
        ((VirtualQHeaderView*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QHeaderView_QBaseConnectNotify(QHeaderView* self, const QMetaMethod* signal) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ConnectNotify_IsBase(true);
        vqheaderview->connectNotify(*signal);
    } else {
        ((VirtualQHeaderView*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnConnectNotify(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ConnectNotify_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_DisconnectNotify(QHeaderView* self, const QMetaMethod* signal) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->disconnectNotify(*signal);
    } else {
        ((VirtualQHeaderView*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QHeaderView_QBaseDisconnectNotify(QHeaderView* self, const QMetaMethod* signal) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DisconnectNotify_IsBase(true);
        vqheaderview->disconnectNotify(*signal);
    } else {
        ((VirtualQHeaderView*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDisconnectNotify(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DisconnectNotify_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_UpdateSection(QHeaderView* self, int logicalIndex) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->updateSection(static_cast<int>(logicalIndex));
    } else {
        ((VirtualQHeaderView*)self)->updateSection(static_cast<int>(logicalIndex));
    }
}

// Base class handler implementation
void QHeaderView_QBaseUpdateSection(QHeaderView* self, int logicalIndex) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_UpdateSection_IsBase(true);
        vqheaderview->updateSection(static_cast<int>(logicalIndex));
    } else {
        ((VirtualQHeaderView*)self)->updateSection(static_cast<int>(logicalIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnUpdateSection(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_UpdateSection_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_UpdateSection_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ResizeSections2(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->resizeSections();
    } else {
        ((VirtualQHeaderView*)self)->resizeSections();
    }
}

// Base class handler implementation
void QHeaderView_QBaseResizeSections2(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ResizeSections2_IsBase(true);
        vqheaderview->resizeSections();
    } else {
        ((VirtualQHeaderView*)self)->resizeSections();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnResizeSections2(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ResizeSections2_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ResizeSections2_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_SectionsInserted(QHeaderView* self, const QModelIndex* parent, int logicalFirst, int logicalLast) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->sectionsInserted(*parent, static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
    } else {
        ((VirtualQHeaderView*)self)->sectionsInserted(*parent, static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
    }
}

// Base class handler implementation
void QHeaderView_QBaseSectionsInserted(QHeaderView* self, const QModelIndex* parent, int logicalFirst, int logicalLast) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SectionsInserted_IsBase(true);
        vqheaderview->sectionsInserted(*parent, static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
    } else {
        ((VirtualQHeaderView*)self)->sectionsInserted(*parent, static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSectionsInserted(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SectionsInserted_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SectionsInserted_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_SectionsAboutToBeRemoved(QHeaderView* self, const QModelIndex* parent, int logicalFirst, int logicalLast) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->sectionsAboutToBeRemoved(*parent, static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
    } else {
        ((VirtualQHeaderView*)self)->sectionsAboutToBeRemoved(*parent, static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
    }
}

// Base class handler implementation
void QHeaderView_QBaseSectionsAboutToBeRemoved(QHeaderView* self, const QModelIndex* parent, int logicalFirst, int logicalLast) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SectionsAboutToBeRemoved_IsBase(true);
        vqheaderview->sectionsAboutToBeRemoved(*parent, static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
    } else {
        ((VirtualQHeaderView*)self)->sectionsAboutToBeRemoved(*parent, static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSectionsAboutToBeRemoved(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SectionsAboutToBeRemoved_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SectionsAboutToBeRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_Initialize(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->initialize();
    } else {
        ((VirtualQHeaderView*)self)->initialize();
    }
}

// Base class handler implementation
void QHeaderView_QBaseInitialize(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_Initialize_IsBase(true);
        vqheaderview->initialize();
    } else {
        ((VirtualQHeaderView*)self)->initialize();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInitialize(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_Initialize_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Initialize_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_InitializeSections(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->initializeSections();
    } else {
        ((VirtualQHeaderView*)self)->initializeSections();
    }
}

// Base class handler implementation
void QHeaderView_QBaseInitializeSections(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_InitializeSections_IsBase(true);
        vqheaderview->initializeSections();
    } else {
        ((VirtualQHeaderView*)self)->initializeSections();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInitializeSections(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_InitializeSections_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_InitializeSections_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_InitializeSections2(QHeaderView* self, int start, int end) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->initializeSections(static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQHeaderView*)self)->initializeSections(static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QHeaderView_QBaseInitializeSections2(QHeaderView* self, int start, int end) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_InitializeSections2_IsBase(true);
        vqheaderview->initializeSections(static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQHeaderView*)self)->initializeSections(static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInitializeSections2(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_InitializeSections2_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_InitializeSections2_Callback>(slot));
    }
}

// Derived class handler implementation
int QHeaderView_State(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return static_cast<int>(vqheaderview->state());
    } else {
        return static_cast<int>(((VirtualQHeaderView*)self)->state());
    }
}

// Base class handler implementation
int QHeaderView_QBaseState(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_State_IsBase(true);
        return static_cast<int>(vqheaderview->state());
    } else {
        return static_cast<int>(((VirtualQHeaderView*)self)->state());
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnState(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_State_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_State_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_SetState(QHeaderView* self, int state) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setState(static_cast<VirtualQHeaderView::State>(state));
    } else {
        ((VirtualQHeaderView*)self)->setState(static_cast<VirtualQHeaderView::State>(state));
    }
}

// Base class handler implementation
void QHeaderView_QBaseSetState(QHeaderView* self, int state) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SetState_IsBase(true);
        vqheaderview->setState(static_cast<VirtualQHeaderView::State>(state));
    } else {
        ((VirtualQHeaderView*)self)->setState(static_cast<VirtualQHeaderView::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetState(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SetState_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SetState_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ScheduleDelayedItemsLayout(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->scheduleDelayedItemsLayout();
    } else {
        ((VirtualQHeaderView*)self)->scheduleDelayedItemsLayout();
    }
}

// Base class handler implementation
void QHeaderView_QBaseScheduleDelayedItemsLayout(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ScheduleDelayedItemsLayout_IsBase(true);
        vqheaderview->scheduleDelayedItemsLayout();
    } else {
        ((VirtualQHeaderView*)self)->scheduleDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnScheduleDelayedItemsLayout(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ScheduleDelayedItemsLayout_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ScheduleDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ExecuteDelayedItemsLayout(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->executeDelayedItemsLayout();
    } else {
        ((VirtualQHeaderView*)self)->executeDelayedItemsLayout();
    }
}

// Base class handler implementation
void QHeaderView_QBaseExecuteDelayedItemsLayout(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ExecuteDelayedItemsLayout_IsBase(true);
        vqheaderview->executeDelayedItemsLayout();
    } else {
        ((VirtualQHeaderView*)self)->executeDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnExecuteDelayedItemsLayout(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ExecuteDelayedItemsLayout_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ExecuteDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_SetDirtyRegion(QHeaderView* self, const QRegion* region) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setDirtyRegion(*region);
    } else {
        ((VirtualQHeaderView*)self)->setDirtyRegion(*region);
    }
}

// Base class handler implementation
void QHeaderView_QBaseSetDirtyRegion(QHeaderView* self, const QRegion* region) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SetDirtyRegion_IsBase(true);
        vqheaderview->setDirtyRegion(*region);
    } else {
        ((VirtualQHeaderView*)self)->setDirtyRegion(*region);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetDirtyRegion(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SetDirtyRegion_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SetDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ScrollDirtyRegion(QHeaderView* self, int dx, int dy) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQHeaderView*)self)->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QHeaderView_QBaseScrollDirtyRegion(QHeaderView* self, int dx, int dy) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ScrollDirtyRegion_IsBase(true);
        vqheaderview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQHeaderView*)self)->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnScrollDirtyRegion(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ScrollDirtyRegion_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ScrollDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
QPoint* QHeaderView_DirtyRegionOffset(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return new QPoint(vqheaderview->dirtyRegionOffset());
    }
    return {};
}

// Base class handler implementation
QPoint* QHeaderView_QBaseDirtyRegionOffset(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DirtyRegionOffset_IsBase(true);
        return new QPoint(vqheaderview->dirtyRegionOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDirtyRegionOffset(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DirtyRegionOffset_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DirtyRegionOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_StartAutoScroll(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->startAutoScroll();
    } else {
        ((VirtualQHeaderView*)self)->startAutoScroll();
    }
}

// Base class handler implementation
void QHeaderView_QBaseStartAutoScroll(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_StartAutoScroll_IsBase(true);
        vqheaderview->startAutoScroll();
    } else {
        ((VirtualQHeaderView*)self)->startAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnStartAutoScroll(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_StartAutoScroll_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_StartAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_StopAutoScroll(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->stopAutoScroll();
    } else {
        ((VirtualQHeaderView*)self)->stopAutoScroll();
    }
}

// Base class handler implementation
void QHeaderView_QBaseStopAutoScroll(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_StopAutoScroll_IsBase(true);
        vqheaderview->stopAutoScroll();
    } else {
        ((VirtualQHeaderView*)self)->stopAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnStopAutoScroll(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_StopAutoScroll_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_StopAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_DoAutoScroll(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->doAutoScroll();
    } else {
        ((VirtualQHeaderView*)self)->doAutoScroll();
    }
}

// Base class handler implementation
void QHeaderView_QBaseDoAutoScroll(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DoAutoScroll_IsBase(true);
        vqheaderview->doAutoScroll();
    } else {
        ((VirtualQHeaderView*)self)->doAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDoAutoScroll(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DoAutoScroll_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DoAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
int QHeaderView_DropIndicatorPosition(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return static_cast<int>(vqheaderview->dropIndicatorPosition());
    } else {
        return static_cast<int>(((VirtualQHeaderView*)self)->dropIndicatorPosition());
    }
}

// Base class handler implementation
int QHeaderView_QBaseDropIndicatorPosition(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DropIndicatorPosition_IsBase(true);
        return static_cast<int>(vqheaderview->dropIndicatorPosition());
    } else {
        return static_cast<int>(((VirtualQHeaderView*)self)->dropIndicatorPosition());
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDropIndicatorPosition(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DropIndicatorPosition_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DropIndicatorPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_SetViewportMargins(QHeaderView* self, int left, int top, int right, int bottom) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQHeaderView*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QHeaderView_QBaseSetViewportMargins(QHeaderView* self, int left, int top, int right, int bottom) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SetViewportMargins_IsBase(true);
        vqheaderview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQHeaderView*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetViewportMargins(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SetViewportMargins_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QHeaderView_ViewportMargins(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return new QMargins(vqheaderview->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QHeaderView_QBaseViewportMargins(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ViewportMargins_IsBase(true);
        return new QMargins(vqheaderview->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnViewportMargins(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_ViewportMargins_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_DrawFrame(QHeaderView* self, QPainter* param1) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->drawFrame(param1);
    } else {
        ((VirtualQHeaderView*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void QHeaderView_QBaseDrawFrame(QHeaderView* self, QPainter* param1) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DrawFrame_IsBase(true);
        vqheaderview->drawFrame(param1);
    } else {
        ((VirtualQHeaderView*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDrawFrame(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_DrawFrame_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_UpdateMicroFocus(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->updateMicroFocus();
    } else {
        ((VirtualQHeaderView*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QHeaderView_QBaseUpdateMicroFocus(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_UpdateMicroFocus_IsBase(true);
        vqheaderview->updateMicroFocus();
    } else {
        ((VirtualQHeaderView*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnUpdateMicroFocus(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_Create(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->create();
    } else {
        ((VirtualQHeaderView*)self)->create();
    }
}

// Base class handler implementation
void QHeaderView_QBaseCreate(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_Create_IsBase(true);
        vqheaderview->create();
    } else {
        ((VirtualQHeaderView*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnCreate(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_Create_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_Destroy(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->destroy();
    } else {
        ((VirtualQHeaderView*)self)->destroy();
    }
}

// Base class handler implementation
void QHeaderView_QBaseDestroy(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_Destroy_IsBase(true);
        vqheaderview->destroy();
    } else {
        ((VirtualQHeaderView*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDestroy(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_Destroy_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHeaderView_FocusNextChild(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->focusNextChild();
    } else {
        return ((VirtualQHeaderView*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QHeaderView_QBaseFocusNextChild(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_FocusNextChild_IsBase(true);
        return vqheaderview->focusNextChild();
    } else {
        return ((VirtualQHeaderView*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnFocusNextChild(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_FocusNextChild_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHeaderView_FocusPreviousChild(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->focusPreviousChild();
    } else {
        return ((VirtualQHeaderView*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QHeaderView_QBaseFocusPreviousChild(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_FocusPreviousChild_IsBase(true);
        return vqheaderview->focusPreviousChild();
    } else {
        return ((VirtualQHeaderView*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnFocusPreviousChild(QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_FocusPreviousChild_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QHeaderView_Sender(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->sender();
    } else {
        return ((VirtualQHeaderView*)self)->sender();
    }
}

// Base class handler implementation
QObject* QHeaderView_QBaseSender(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_Sender_IsBase(true);
        return vqheaderview->sender();
    } else {
        return ((VirtualQHeaderView*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSender(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_Sender_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QHeaderView_SenderSignalIndex(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->senderSignalIndex();
    } else {
        return ((VirtualQHeaderView*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QHeaderView_QBaseSenderSignalIndex(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SenderSignalIndex_IsBase(true);
        return vqheaderview->senderSignalIndex();
    } else {
        return ((VirtualQHeaderView*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSenderSignalIndex(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_SenderSignalIndex_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QHeaderView_Receivers(const QHeaderView* self, const char* signal) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->receivers(signal);
    } else {
        return ((VirtualQHeaderView*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QHeaderView_QBaseReceivers(const QHeaderView* self, const char* signal) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_Receivers_IsBase(true);
        return vqheaderview->receivers(signal);
    } else {
        return ((VirtualQHeaderView*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnReceivers(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_Receivers_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHeaderView_IsSignalConnected(const QHeaderView* self, const QMetaMethod* signal) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->isSignalConnected(*signal);
    } else {
        return ((VirtualQHeaderView*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QHeaderView_QBaseIsSignalConnected(const QHeaderView* self, const QMetaMethod* signal) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_IsSignalConnected_IsBase(true);
        return vqheaderview->isSignalConnected(*signal);
    } else {
        return ((VirtualQHeaderView*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnIsSignalConnected(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_IsSignalConnected_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QHeaderView_GetDecodedMetricF(const QHeaderView* self, int metricA, int metricB) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        return vqheaderview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQHeaderView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QHeaderView_QBaseGetDecodedMetricF(const QHeaderView* self, int metricA, int metricB) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_GetDecodedMetricF_IsBase(true);
        return vqheaderview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQHeaderView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnGetDecodedMetricF(const QHeaderView* self, intptr_t slot) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
        vqheaderview->setQHeaderView_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_GetDecodedMetricF_Callback>(slot));
    }
}

void QHeaderView_Delete(QHeaderView* self) {
    delete self;
}
