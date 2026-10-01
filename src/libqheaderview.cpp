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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QHeaderView_Tr(const char* s) {
    auto _ret = QHeaderView::tr(s);
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
    self->setModel(model);
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
    return new QSize(self->sizeHint());
}

void QHeaderView_SetVisible(QHeaderView* self, bool v) {
    self->setVisible(v);
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
    self->doItemsLayout();
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
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

bool QHeaderView_RestoreState(QHeaderView* self, const libqt_string state) {
    QByteArray state_QByteArray(state.data, state.len);
    return self->restoreState(state_QByteArray);
}

void QHeaderView_Reset(QHeaderView* self) {
    self->reset();
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
    QHeaderView::connect(self,
                         static_cast<void (QHeaderView::*)(int, int, int)>(&QHeaderView::sectionMoved),
                         [self, slotFunc](int logicalIndex, int oldVisualIndex, int newVisualIndex) {
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
    QHeaderView::connect(self,
                         static_cast<void (QHeaderView::*)(int, int, int)>(&QHeaderView::sectionResized),
                         [self, slotFunc](int logicalIndex, int oldSize, int newSize) {
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
    QHeaderView::connect(self,
                         static_cast<void (QHeaderView::*)(int)>(&QHeaderView::sectionPressed),
                         [self, slotFunc](int logicalIndex) {
                             int sigval1 = logicalIndex;
                             slotFunc(self, sigval1);
                         });
}

void QHeaderView_SectionClicked(QHeaderView* self, int logicalIndex) {
    self->sectionClicked(static_cast<int>(logicalIndex));
}

void QHeaderView_Connect_SectionClicked(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int) = reinterpret_cast<void (*)(QHeaderView*, int)>(slot);
    QHeaderView::connect(self,
                         static_cast<void (QHeaderView::*)(int)>(&QHeaderView::sectionClicked),
                         [self, slotFunc](int logicalIndex) {
                             int sigval1 = logicalIndex;
                             slotFunc(self, sigval1);
                         });
}

void QHeaderView_SectionEntered(QHeaderView* self, int logicalIndex) {
    self->sectionEntered(static_cast<int>(logicalIndex));
}

void QHeaderView_Connect_SectionEntered(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int) = reinterpret_cast<void (*)(QHeaderView*, int)>(slot);
    QHeaderView::connect(self,
                         static_cast<void (QHeaderView::*)(int)>(&QHeaderView::sectionEntered),
                         [self, slotFunc](int logicalIndex) {
                             int sigval1 = logicalIndex;
                             slotFunc(self, sigval1);
                         });
}

void QHeaderView_SectionDoubleClicked(QHeaderView* self, int logicalIndex) {
    self->sectionDoubleClicked(static_cast<int>(logicalIndex));
}

void QHeaderView_Connect_SectionDoubleClicked(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int) = reinterpret_cast<void (*)(QHeaderView*, int)>(slot);
    QHeaderView::connect(self,
                         static_cast<void (QHeaderView::*)(int)>(&QHeaderView::sectionDoubleClicked),
                         [self, slotFunc](int logicalIndex) {
                             int sigval1 = logicalIndex;
                             slotFunc(self, sigval1);
                         });
}

void QHeaderView_SectionCountChanged(QHeaderView* self, int oldCount, int newCount) {
    self->sectionCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
}

void QHeaderView_Connect_SectionCountChanged(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int, int) = reinterpret_cast<void (*)(QHeaderView*, int, int)>(slot);
    QHeaderView::connect(self,
                         static_cast<void (QHeaderView::*)(int, int)>(&QHeaderView::sectionCountChanged),
                         [self, slotFunc](int oldCount, int newCount) {
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
    QHeaderView::connect(self,
                         static_cast<void (QHeaderView::*)(int)>(&QHeaderView::sectionHandleDoubleClicked),
                         [self, slotFunc](int logicalIndex) {
                             int sigval1 = logicalIndex;
                             slotFunc(self, sigval1);
                         });
}

void QHeaderView_GeometriesChanged(QHeaderView* self) {
    self->geometriesChanged();
}

void QHeaderView_Connect_GeometriesChanged(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*) = reinterpret_cast<void (*)(QHeaderView*)>(slot);
    QHeaderView::connect(self,
                         static_cast<void (QHeaderView::*)()>(&QHeaderView::geometriesChanged),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

void QHeaderView_SortIndicatorChanged(QHeaderView* self, int logicalIndex, int order) {
    self->sortIndicatorChanged(static_cast<int>(logicalIndex), static_cast<Qt::SortOrder>(order));
}

void QHeaderView_Connect_SortIndicatorChanged(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int, int) = reinterpret_cast<void (*)(QHeaderView*, int, int)>(slot);
    QHeaderView::connect(self,
                         static_cast<void (QHeaderView::*)(int, Qt::SortOrder)>(&QHeaderView::sortIndicatorChanged),
                         [self, slotFunc](int logicalIndex, Qt::SortOrder order) {
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
    QHeaderView::connect(self,
                         static_cast<void (QHeaderView::*)(bool)>(&QHeaderView::sortIndicatorClearableChanged),
                         [self, slotFunc](bool clearable) {
                             bool sigval1 = clearable;
                             slotFunc(self, sigval1);
                         });
}

void QHeaderView_CurrentChanged(QHeaderView* self, const QModelIndex* current, const QModelIndex* old) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->currentChanged(*current, *old);
    }
}

bool QHeaderView_Event(QHeaderView* self, QEvent* e) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        return vqheaderview->event(e);
    }
    qFatal("Error: Protected method QHeaderView::event called without a directly constructed type");
}

void QHeaderView_PaintEvent(QHeaderView* self, QPaintEvent* e) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->paintEvent(e);
    }
}

void QHeaderView_MousePressEvent(QHeaderView* self, QMouseEvent* e) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->mousePressEvent(e);
    }
}

void QHeaderView_MouseMoveEvent(QHeaderView* self, QMouseEvent* e) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->mouseMoveEvent(e);
    }
}

void QHeaderView_MouseReleaseEvent(QHeaderView* self, QMouseEvent* e) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->mouseReleaseEvent(e);
    }
}

void QHeaderView_MouseDoubleClickEvent(QHeaderView* self, QMouseEvent* e) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->mouseDoubleClickEvent(e);
    }
}

bool QHeaderView_ViewportEvent(QHeaderView* self, QEvent* e) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        return vqheaderview->viewportEvent(e);
    }
    qFatal("Error: Protected method QHeaderView::viewportEvent called without a directly constructed type");
}

void QHeaderView_PaintSection(const QHeaderView* self, QPainter* painter, const QRect* rect, int logicalIndex) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->paintSection(painter, *rect, static_cast<int>(logicalIndex));
    }
}

QSize* QHeaderView_SectionSizeFromContents(const QHeaderView* self, int logicalIndex) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview) {
        return new QSize(vqheaderview->sectionSizeFromContents(static_cast<int>(logicalIndex)));
    }
    qFatal("Error: Protected method QHeaderView::sectionSizeFromContents called without a directly constructed type");
}

int QHeaderView_HorizontalOffset(const QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview) {
        return vqheaderview->horizontalOffset();
    }
    qFatal("Error: Protected method QHeaderView::horizontalOffset called without a directly constructed type");
}

int QHeaderView_VerticalOffset(const QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview) {
        return vqheaderview->verticalOffset();
    }
    qFatal("Error: Protected method QHeaderView::verticalOffset called without a directly constructed type");
}

void QHeaderView_UpdateGeometries(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->updateGeometries();
    }
}

void QHeaderView_ScrollContentsBy(QHeaderView* self, int dx, int dy) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
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
    if (vqheaderview) {
        vqheaderview->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

void QHeaderView_RowsInserted(QHeaderView* self, const QModelIndex* parent, int start, int end) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

QRect* QHeaderView_VisualRect(const QHeaderView* self, const QModelIndex* index) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview) {
        return new QRect(vqheaderview->visualRect(*index));
    }
    qFatal("Error: Protected method QHeaderView::visualRect called without a directly constructed type");
}

void QHeaderView_ScrollTo(QHeaderView* self, const QModelIndex* index, int hint) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

QModelIndex* QHeaderView_IndexAt(const QHeaderView* self, const QPoint* p) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview) {
        return new QModelIndex(vqheaderview->indexAt(*p));
    }
    qFatal("Error: Protected method QHeaderView::indexAt called without a directly constructed type");
}

bool QHeaderView_IsIndexHidden(const QHeaderView* self, const QModelIndex* index) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview) {
        return vqheaderview->isIndexHidden(*index);
    }
    qFatal("Error: Protected method QHeaderView::isIndexHidden called without a directly constructed type");
}

QModelIndex* QHeaderView_MoveCursor(QHeaderView* self, int param1, int param2) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        return new QModelIndex(vqheaderview->moveCursor(static_cast<VirtualQHeaderView::CursorAction>(param1), static_cast<Qt::KeyboardModifiers>(param2)));
    }
    qFatal("Error: Protected method QHeaderView::moveCursor called without a directly constructed type");
}

void QHeaderView_SetSelection(QHeaderView* self, const QRect* rect, int flags) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(flags));
    }
}

QRegion* QHeaderView_VisualRegionForSelection(const QHeaderView* self, const QItemSelection* selection) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview) {
        return new QRegion(vqheaderview->visualRegionForSelection(*selection));
    }
    qFatal("Error: Protected method QHeaderView::visualRegionForSelection called without a directly constructed type");
}

void QHeaderView_InitStyleOptionForIndex(const QHeaderView* self, QStyleOptionHeader* option, int logicalIndex) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->initStyleOptionForIndex(option, static_cast<int>(logicalIndex));
    }
}

void QHeaderView_InitStyleOption(const QHeaderView* self, QStyleOptionHeader* option) {
    auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->initStyleOption(option);
    }
}

libqt_string QHeaderView_Tr2(const char* s, const char* c) {
    auto _ret = QHeaderView::tr(s, c);
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
    auto _ret = QHeaderView::tr(s, c, static_cast<int>(n));
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
QMetaObject* QHeaderView_SuperMetaObject(const QHeaderView* self) {
    return (QMetaObject*)self->QHeaderView::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMetaObject(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_metaobject_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QHeaderView_SuperMetacast(QHeaderView* self, const char* param1) {
    return self->QHeaderView::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMetacast(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_metacast_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_Metacast_Callback>(slot);
}

// Base class handler implementation
int QHeaderView_SuperMetacall(QHeaderView* self, int param1, int param2, void** param3) {
    return self->QHeaderView::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMetacall(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_metacall_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_Metacall_Callback>(slot);
}

// Base class handler implementation
void QHeaderView_SuperSetModel(QHeaderView* self, QAbstractItemModel* model) {
    self->QHeaderView::setModel(model);
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetModel(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_setmodel_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_SetModel_Callback>(slot);
}

// Base class handler implementation
QSize* QHeaderView_SuperSizeHint(const QHeaderView* self) {
    return new QSize(self->QHeaderView::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSizeHint(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_sizehint_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_SizeHint_Callback>(slot);
}

// Base class handler implementation
void QHeaderView_SuperSetVisible(QHeaderView* self, bool v) {
    self->QHeaderView::setVisible(v);
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetVisible(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_setvisible_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_SetVisible_Callback>(slot);
}

// Base class handler implementation
void QHeaderView_SuperDoItemsLayout(QHeaderView* self) {
    self->QHeaderView::doItemsLayout();
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDoItemsLayout(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_doitemslayout_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_DoItemsLayout_Callback>(slot);
}

// Base class handler implementation
void QHeaderView_SuperReset(QHeaderView* self) {
    self->QHeaderView::reset();
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnReset(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_reset_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_Reset_Callback>(slot);
}

// Base class handler implementation
void QHeaderView_SuperCurrentChanged(QHeaderView* self, const QModelIndex* current, const QModelIndex* old) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::currentChanged(*current, *old);
    } else
        qFatal("Error: Protected virtual method QHeaderView::currentChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnCurrentChanged(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_currentchanged_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_CurrentChanged_Callback>(slot);
}

// Base class handler implementation
bool QHeaderView_SuperEvent(QHeaderView* self, QEvent* e) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        return vqheaderview->QHeaderView::event(e);
    } else
        qFatal("Error: Protected virtual method QHeaderView::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_event_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_Event_Callback>(slot);
}

// Base class handler implementation
void QHeaderView_SuperPaintEvent(QHeaderView* self, QPaintEvent* e) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method QHeaderView::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnPaintEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_paintevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QHeaderView_SuperMousePressEvent(QHeaderView* self, QMouseEvent* e) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method QHeaderView::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMousePressEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_mousepressevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QHeaderView_SuperMouseMoveEvent(QHeaderView* self, QMouseEvent* e) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method QHeaderView::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMouseMoveEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_mousemoveevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QHeaderView_SuperMouseReleaseEvent(QHeaderView* self, QMouseEvent* e) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QHeaderView::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMouseReleaseEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_mousereleaseevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QHeaderView_SuperMouseDoubleClickEvent(QHeaderView* self, QMouseEvent* e) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::mouseDoubleClickEvent(e);
    } else
        qFatal("Error: Protected virtual method QHeaderView::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMouseDoubleClickEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_mousedoubleclickevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_MouseDoubleClickEvent_Callback>(slot);
}

// Base class handler implementation
bool QHeaderView_SuperViewportEvent(QHeaderView* self, QEvent* e) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        return vqheaderview->QHeaderView::viewportEvent(e);
    } else
        qFatal("Error: Protected virtual method QHeaderView::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnViewportEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_viewportevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_ViewportEvent_Callback>(slot);
}

// Base class handler implementation
void QHeaderView_SuperPaintSection(const QHeaderView* self, QPainter* painter, const QRect* rect, int logicalIndex) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->QHeaderView::paintSection(painter, *rect, static_cast<int>(logicalIndex));
    } else
        qFatal("Error: Protected virtual method QHeaderView::paintSection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnPaintSection(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_paintsection_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_PaintSection_Callback>(slot);
}

// Base class handler implementation
QSize* QHeaderView_SuperSectionSizeFromContents(const QHeaderView* self, int logicalIndex) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        return new QSize(vqheaderview->QHeaderView::sectionSizeFromContents(static_cast<int>(logicalIndex)));
    qFatal("Error: Protected virtual method QHeaderView::sectionSizeFromContents called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSectionSizeFromContents(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_sectionsizefromcontents_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_SectionSizeFromContents_Callback>(slot);
}

// Base class handler implementation
int QHeaderView_SuperHorizontalOffset(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->QHeaderView::horizontalOffset();
    } else
        qFatal("Error: Protected virtual method QHeaderView::horizontalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnHorizontalOffset(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_horizontaloffset_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_HorizontalOffset_Callback>(slot);
}

// Base class handler implementation
int QHeaderView_SuperVerticalOffset(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->QHeaderView::verticalOffset();
    } else
        qFatal("Error: Protected virtual method QHeaderView::verticalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnVerticalOffset(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_verticaloffset_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_VerticalOffset_Callback>(slot);
}

// Base class handler implementation
void QHeaderView_SuperUpdateGeometries(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::updateGeometries();
    } else
        qFatal("Error: Protected virtual method QHeaderView::updateGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnUpdateGeometries(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_updategeometries_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_UpdateGeometries_Callback>(slot);
}

// Base class handler implementation
void QHeaderView_SuperScrollContentsBy(QHeaderView* self, int dx, int dy) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method QHeaderView::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnScrollContentsBy(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_scrollcontentsby_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_ScrollContentsBy_Callback>(slot);
}

// Base class handler implementation
void QHeaderView_SuperDataChanged(QHeaderView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::dataChanged(*topLeft, *bottomRight, roles_QList);
    } else
        qFatal("Error: Protected virtual method QHeaderView::dataChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDataChanged(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_datachanged_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_DataChanged_Callback>(slot);
}

// Base class handler implementation
void QHeaderView_SuperRowsInserted(QHeaderView* self, const QModelIndex* parent, int start, int end) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method QHeaderView::rowsInserted called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnRowsInserted(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_rowsinserted_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_RowsInserted_Callback>(slot);
}

// Base class handler implementation
QRect* QHeaderView_SuperVisualRect(const QHeaderView* self, const QModelIndex* index) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        return new QRect(vqheaderview->QHeaderView::visualRect(*index));
    qFatal("Error: Protected virtual method QHeaderView::visualRect called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnVisualRect(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_visualrect_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_VisualRect_Callback>(slot);
}

// Base class handler implementation
void QHeaderView_SuperScrollTo(QHeaderView* self, const QModelIndex* index, int hint) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else
        qFatal("Error: Protected virtual method QHeaderView::scrollTo called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnScrollTo(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_scrollto_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_ScrollTo_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QHeaderView_SuperIndexAt(const QHeaderView* self, const QPoint* p) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        return new QModelIndex(vqheaderview->QHeaderView::indexAt(*p));
    qFatal("Error: Protected virtual method QHeaderView::indexAt called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnIndexAt(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_indexat_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_IndexAt_Callback>(slot);
}

// Base class handler implementation
bool QHeaderView_SuperIsIndexHidden(const QHeaderView* self, const QModelIndex* index) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->QHeaderView::isIndexHidden(*index);
    } else
        qFatal("Error: Protected virtual method QHeaderView::isIndexHidden called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnIsIndexHidden(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_isindexhidden_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_IsIndexHidden_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QHeaderView_SuperMoveCursor(QHeaderView* self, int param1, int param2) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        return new QModelIndex(vqheaderview->QHeaderView::moveCursor(static_cast<VirtualQHeaderView::CursorAction>(param1), static_cast<Qt::KeyboardModifiers>(param2)));
    qFatal("Error: Protected virtual method QHeaderView::moveCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMoveCursor(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_movecursor_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_MoveCursor_Callback>(slot);
}

// Base class handler implementation
void QHeaderView_SuperSetSelection(QHeaderView* self, const QRect* rect, int flags) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(flags));
    } else
        qFatal("Error: Protected virtual method QHeaderView::setSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetSelection(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_setselection_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_SetSelection_Callback>(slot);
}

// Base class handler implementation
QRegion* QHeaderView_SuperVisualRegionForSelection(const QHeaderView* self, const QItemSelection* selection) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        return new QRegion(vqheaderview->QHeaderView::visualRegionForSelection(*selection));
    qFatal("Error: Protected virtual method QHeaderView::visualRegionForSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnVisualRegionForSelection(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_visualregionforselection_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_VisualRegionForSelection_Callback>(slot);
}

// Base class handler implementation
void QHeaderView_SuperInitStyleOptionForIndex(const QHeaderView* self, QStyleOptionHeader* option, int logicalIndex) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->QHeaderView::initStyleOptionForIndex(option, static_cast<int>(logicalIndex));
    } else
        qFatal("Error: Protected virtual method QHeaderView::initStyleOptionForIndex called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInitStyleOptionForIndex(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_initstyleoptionforindex_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_InitStyleOptionForIndex_Callback>(slot);
}

// Base class handler implementation
void QHeaderView_SuperInitStyleOption(const QHeaderView* self, QStyleOptionHeader* option) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->QHeaderView::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QHeaderView::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInitStyleOption(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_initstyleoption_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_SetSelectionModel(QHeaderView* self, QItemSelectionModel* selectionModel) {
    self->setSelectionModel(selectionModel);
}

// Base class handler implementation
void QHeaderView_SuperSetSelectionModel(QHeaderView* self, QItemSelectionModel* selectionModel) {
    self->QHeaderView::setSelectionModel(selectionModel);
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetSelectionModel(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_setselectionmodel_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_SetSelectionModel_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_KeyboardSearch(QHeaderView* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->keyboardSearch(search_QString);
}

// Base class handler implementation
void QHeaderView_SuperKeyboardSearch(QHeaderView* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->QHeaderView::keyboardSearch(search_QString);
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnKeyboardSearch(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_keyboardsearch_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_KeyboardSearch_Callback>(slot);
}

// Derived class handler implementation
int QHeaderView_SizeHintForRow(const QHeaderView* self, int row) {
    return self->sizeHintForRow(static_cast<int>(row));
}

// Base class handler implementation
int QHeaderView_SuperSizeHintForRow(const QHeaderView* self, int row) {
    return self->QHeaderView::sizeHintForRow(static_cast<int>(row));
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSizeHintForRow(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_sizehintforrow_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_SizeHintForRow_Callback>(slot);
}

// Derived class handler implementation
int QHeaderView_SizeHintForColumn(const QHeaderView* self, int column) {
    return self->sizeHintForColumn(static_cast<int>(column));
}

// Base class handler implementation
int QHeaderView_SuperSizeHintForColumn(const QHeaderView* self, int column) {
    return self->QHeaderView::sizeHintForColumn(static_cast<int>(column));
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSizeHintForColumn(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_sizehintforcolumn_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_SizeHintForColumn_Callback>(slot);
}

// Derived class handler implementation
QAbstractItemDelegate* QHeaderView_ItemDelegateForIndex(const QHeaderView* self, const QModelIndex* index) {
    return self->itemDelegateForIndex(*index);
}

// Base class handler implementation
QAbstractItemDelegate* QHeaderView_SuperItemDelegateForIndex(const QHeaderView* self, const QModelIndex* index) {
    return self->QHeaderView::itemDelegateForIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnItemDelegateForIndex(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_itemdelegateforindex_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_ItemDelegateForIndex_Callback>(slot);
}

// Derived class handler implementation
QVariant* QHeaderView_InputMethodQuery(const QHeaderView* self, int query) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QHeaderView_SuperInputMethodQuery(const QHeaderView* self, int query) {
    return new QVariant(self->QHeaderView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInputMethodQuery(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_inputmethodquery_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_SetRootIndex(QHeaderView* self, const QModelIndex* index) {
    self->setRootIndex(*index);
}

// Base class handler implementation
void QHeaderView_SuperSetRootIndex(QHeaderView* self, const QModelIndex* index) {
    self->QHeaderView::setRootIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetRootIndex(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_setrootindex_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_SetRootIndex_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_SelectAll(QHeaderView* self) {
    self->selectAll();
}

// Base class handler implementation
void QHeaderView_SuperSelectAll(QHeaderView* self) {
    self->QHeaderView::selectAll();
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSelectAll(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_selectall_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_SelectAll_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_RowsAboutToBeRemoved(QHeaderView* self, const QModelIndex* parent, int start, int end) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        qFatal("Error: Protected virtual method QHeaderView::rowsAboutToBeRemoved called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperRowsAboutToBeRemoved(QHeaderView* self, const QModelIndex* parent, int start, int end) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method QHeaderView::rowsAboutToBeRemoved called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnRowsAboutToBeRemoved(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_rowsabouttoberemoved_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_RowsAboutToBeRemoved_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_SelectionChanged(QHeaderView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->selectionChanged(*selected, *deselected);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::selectionChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperSelectionChanged(QHeaderView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::selectionChanged(*selected, *deselected);
    } else
        qFatal("Error: Protected virtual method QHeaderView::selectionChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSelectionChanged(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_selectionchanged_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_SelectionChanged_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_UpdateEditorData(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->updateEditorData();
    } else {
        qFatal("Error: Protected virtual method QHeaderView::updateEditorData called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperUpdateEditorData(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::updateEditorData();
    } else
        qFatal("Error: Protected virtual method QHeaderView::updateEditorData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnUpdateEditorData(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_updateeditordata_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_UpdateEditorData_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_UpdateEditorGeometries(QHeaderView* self) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->updateEditorGeometries();
    } else {
        qFatal("Error: Protected virtual method QHeaderView::updateEditorGeometries called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperUpdateEditorGeometries(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::updateEditorGeometries();
    } else
        qFatal("Error: Protected virtual method QHeaderView::updateEditorGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnUpdateEditorGeometries(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_updateeditorgeometries_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_UpdateEditorGeometries_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_VerticalScrollbarAction(QHeaderView* self, int action) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        qFatal("Error: Protected virtual method QHeaderView::verticalScrollbarAction called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperVerticalScrollbarAction(QHeaderView* self, int action) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::verticalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method QHeaderView::verticalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnVerticalScrollbarAction(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_verticalscrollbaraction_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_VerticalScrollbarAction_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_HorizontalScrollbarAction(QHeaderView* self, int action) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        qFatal("Error: Protected virtual method QHeaderView::horizontalScrollbarAction called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperHorizontalScrollbarAction(QHeaderView* self, int action) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::horizontalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method QHeaderView::horizontalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnHorizontalScrollbarAction(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_horizontalscrollbaraction_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_HorizontalScrollbarAction_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_VerticalScrollbarValueChanged(QHeaderView* self, int value) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        qFatal("Error: Protected virtual method QHeaderView::verticalScrollbarValueChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperVerticalScrollbarValueChanged(QHeaderView* self, int value) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::verticalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method QHeaderView::verticalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnVerticalScrollbarValueChanged(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_verticalscrollbarvaluechanged_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_VerticalScrollbarValueChanged_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_HorizontalScrollbarValueChanged(QHeaderView* self, int value) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        qFatal("Error: Protected virtual method QHeaderView::horizontalScrollbarValueChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperHorizontalScrollbarValueChanged(QHeaderView* self, int value) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::horizontalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method QHeaderView::horizontalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnHorizontalScrollbarValueChanged(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_horizontalscrollbarvaluechanged_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_HorizontalScrollbarValueChanged_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_CloseEditor(QHeaderView* self, QWidget* editor, int hint) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        qFatal("Error: Protected virtual method QHeaderView::closeEditor called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperCloseEditor(QHeaderView* self, QWidget* editor, int hint) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else
        qFatal("Error: Protected virtual method QHeaderView::closeEditor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnCloseEditor(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_closeeditor_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_CloseEditor_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_CommitData(QHeaderView* self, QWidget* editor) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->commitData(editor);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::commitData called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperCommitData(QHeaderView* self, QWidget* editor) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::commitData(editor);
    } else
        qFatal("Error: Protected virtual method QHeaderView::commitData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnCommitData(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_commitdata_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_CommitData_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_EditorDestroyed(QHeaderView* self, QObject* editor) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->editorDestroyed(editor);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::editorDestroyed called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperEditorDestroyed(QHeaderView* self, QObject* editor) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::editorDestroyed(editor);
    } else
        qFatal("Error: Protected virtual method QHeaderView::editorDestroyed called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnEditorDestroyed(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_editordestroyed_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_EditorDestroyed_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QHeaderView_SelectedIndexes(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview) {
        QList<QModelIndex> _ret = vqheaderview->selectedIndexes();
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
        qFatal("Error: Protected virtual method QHeaderView::selectedIndexes called without a directly constructed type");
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QHeaderView_SuperSelectedIndexes(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        QList<QModelIndex> _ret = vqheaderview->QHeaderView::selectedIndexes();
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
        qFatal("Error: Protected virtual method QHeaderView::selectedIndexes called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSelectedIndexes(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_selectedindexes_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_SelectedIndexes_Callback>(slot);
}

// Derived class handler implementation
bool QHeaderView_Edit2(QHeaderView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        return vqheaderview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::edit2 called without a directly constructed type");
    }
}

// Base class handler implementation
bool QHeaderView_SuperEdit2(QHeaderView* self, const QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        return vqheaderview->QHeaderView::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else
        qFatal("Error: Protected virtual method QHeaderView::edit2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnEdit2(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_edit2_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_Edit2_Callback>(slot);
}

// Derived class handler implementation
int QHeaderView_SelectionCommand(const QHeaderView* self, const QModelIndex* index, const QEvent* event) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview) {
        return static_cast<int>(vqheaderview->selectionCommand(*index, event));
    } else {
        qFatal("Error: Protected virtual method QHeaderView::selectionCommand called without a directly constructed type");
    }
}

// Base class handler implementation
int QHeaderView_SuperSelectionCommand(const QHeaderView* self, const QModelIndex* index, const QEvent* event) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return static_cast<int>(vqheaderview->QHeaderView::selectionCommand(*index, event));
    } else
        qFatal("Error: Protected virtual method QHeaderView::selectionCommand called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSelectionCommand(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_selectioncommand_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_SelectionCommand_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_StartDrag(QHeaderView* self, int supportedActions) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        qFatal("Error: Protected virtual method QHeaderView::startDrag called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperStartDrag(QHeaderView* self, int supportedActions) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else
        qFatal("Error: Protected virtual method QHeaderView::startDrag called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnStartDrag(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_startdrag_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_StartDrag_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_InitViewItemOption(const QHeaderView* self, QStyleOptionViewItem* option) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview) {
        vqheaderview->initViewItemOption(option);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::initViewItemOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperInitViewItemOption(const QHeaderView* self, QStyleOptionViewItem* option) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->QHeaderView::initViewItemOption(option);
    } else
        qFatal("Error: Protected virtual method QHeaderView::initViewItemOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInitViewItemOption(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_initviewitemoption_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_InitViewItemOption_Callback>(slot);
}

// Derived class handler implementation
bool QHeaderView_FocusNextPrevChild(QHeaderView* self, bool next) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        return vqheaderview->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QHeaderView_SuperFocusNextPrevChild(QHeaderView* self, bool next) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        return vqheaderview->QHeaderView::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QHeaderView::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnFocusNextPrevChild(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_focusnextprevchild_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_DragEnterEvent(QHeaderView* self, QDragEnterEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperDragEnterEvent(QHeaderView* self, QDragEnterEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeaderView::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDragEnterEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_dragenterevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_DragMoveEvent(QHeaderView* self, QDragMoveEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperDragMoveEvent(QHeaderView* self, QDragMoveEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeaderView::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDragMoveEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_dragmoveevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_DragLeaveEvent(QHeaderView* self, QDragLeaveEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperDragLeaveEvent(QHeaderView* self, QDragLeaveEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeaderView::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDragLeaveEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_dragleaveevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_DropEvent(QHeaderView* self, QDropEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperDropEvent(QHeaderView* self, QDropEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeaderView::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDropEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_dropevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_FocusInEvent(QHeaderView* self, QFocusEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperFocusInEvent(QHeaderView* self, QFocusEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeaderView::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnFocusInEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_focusinevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_FocusOutEvent(QHeaderView* self, QFocusEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperFocusOutEvent(QHeaderView* self, QFocusEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeaderView::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnFocusOutEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_focusoutevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_KeyPressEvent(QHeaderView* self, QKeyEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperKeyPressEvent(QHeaderView* self, QKeyEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeaderView::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnKeyPressEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_keypressevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_ResizeEvent(QHeaderView* self, QResizeEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperResizeEvent(QHeaderView* self, QResizeEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeaderView::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnResizeEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_resizeevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_TimerEvent(QHeaderView* self, QTimerEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperTimerEvent(QHeaderView* self, QTimerEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeaderView::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnTimerEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_timerevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_InputMethodEvent(QHeaderView* self, QInputMethodEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperInputMethodEvent(QHeaderView* self, QInputMethodEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeaderView::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInputMethodEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_inputmethodevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
bool QHeaderView_EventFilter(QHeaderView* self, QObject* object, QEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        return vqheaderview->eventFilter(object, event);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QHeaderView_SuperEventFilter(QHeaderView* self, QObject* object, QEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        return vqheaderview->QHeaderView::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method QHeaderView::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnEventFilter(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_eventfilter_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_EventFilter_Callback>(slot);
}

// Derived class handler implementation
QSize* QHeaderView_ViewportSizeHint(const QHeaderView* self) {
    return new QSize((self->*&VirtualQHeaderView::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* QHeaderView_SuperViewportSizeHint(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        return new QSize(vqheaderview->viewportSizeHint());
    qFatal("Error: Protected virtual method QHeaderView::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnViewportSizeHint(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_viewportsizehint_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QHeaderView_MinimumSizeHint(const QHeaderView* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QHeaderView_SuperMinimumSizeHint(const QHeaderView* self) {
    return new QSize(self->QHeaderView::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMinimumSizeHint(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_minimumsizehint_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_SetupViewport(QHeaderView* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void QHeaderView_SuperSetupViewport(QHeaderView* self, QWidget* viewport) {
    self->QHeaderView::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetupViewport(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_setupviewport_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_WheelEvent(QHeaderView* self, QWheelEvent* param1) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->wheelEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperWheelEvent(QHeaderView* self, QWheelEvent* param1) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method QHeaderView::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnWheelEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_wheelevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_ContextMenuEvent(QHeaderView* self, QContextMenuEvent* param1) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperContextMenuEvent(QHeaderView* self, QContextMenuEvent* param1) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QHeaderView::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnContextMenuEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_contextmenuevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_ChangeEvent(QHeaderView* self, QEvent* param1) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperChangeEvent(QHeaderView* self, QEvent* param1) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QHeaderView::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnChangeEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_changeevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QHeaderView_DevType(const QHeaderView* self) {
    return self->devType();
}

// Base class handler implementation
int QHeaderView_SuperDevType(const QHeaderView* self) {
    return self->QHeaderView::devType();
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDevType(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_devtype_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_DevType_Callback>(slot);
}

// Derived class handler implementation
int QHeaderView_HeightForWidth(const QHeaderView* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QHeaderView_SuperHeightForWidth(const QHeaderView* self, int param1) {
    return self->QHeaderView::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnHeightForWidth(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_heightforwidth_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QHeaderView_HasHeightForWidth(const QHeaderView* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QHeaderView_SuperHasHeightForWidth(const QHeaderView* self) {
    return self->QHeaderView::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnHasHeightForWidth(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_hasheightforwidth_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QHeaderView_PaintEngine(const QHeaderView* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QHeaderView_SuperPaintEngine(const QHeaderView* self) {
    return self->QHeaderView::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnPaintEngine(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_paintengine_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_KeyReleaseEvent(QHeaderView* self, QKeyEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperKeyReleaseEvent(QHeaderView* self, QKeyEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeaderView::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnKeyReleaseEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_keyreleaseevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_EnterEvent(QHeaderView* self, QEnterEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperEnterEvent(QHeaderView* self, QEnterEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeaderView::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnEnterEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_enterevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_LeaveEvent(QHeaderView* self, QEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperLeaveEvent(QHeaderView* self, QEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeaderView::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnLeaveEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_leaveevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_MoveEvent(QHeaderView* self, QMoveEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperMoveEvent(QHeaderView* self, QMoveEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeaderView::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMoveEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_moveevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_CloseEvent(QHeaderView* self, QCloseEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperCloseEvent(QHeaderView* self, QCloseEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeaderView::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnCloseEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_closeevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_TabletEvent(QHeaderView* self, QTabletEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperTabletEvent(QHeaderView* self, QTabletEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeaderView::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnTabletEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_tabletevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_ActionEvent(QHeaderView* self, QActionEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperActionEvent(QHeaderView* self, QActionEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeaderView::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnActionEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_actionevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_ShowEvent(QHeaderView* self, QShowEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperShowEvent(QHeaderView* self, QShowEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeaderView::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnShowEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_showevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_HideEvent(QHeaderView* self, QHideEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperHideEvent(QHeaderView* self, QHideEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeaderView::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnHideEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_hideevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QHeaderView_NativeEvent(QHeaderView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        return vqheaderview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QHeaderView::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QHeaderView_SuperNativeEvent(QHeaderView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        return vqheaderview->QHeaderView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QHeaderView::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnNativeEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_nativeevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QHeaderView_Metric(const QHeaderView* self, int param1) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview) {
        return vqheaderview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QHeaderView::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QHeaderView_SuperMetric(const QHeaderView* self, int param1) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->QHeaderView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QHeaderView::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMetric(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_metric_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_Metric_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_InitPainter(const QHeaderView* self, QPainter* painter) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview) {
        vqheaderview->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperInitPainter(const QHeaderView* self, QPainter* painter) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->QHeaderView::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QHeaderView::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInitPainter(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_initpainter_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QHeaderView_Redirected(const QHeaderView* self, QPoint* offset) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview) {
        return vqheaderview->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QHeaderView_SuperRedirected(const QHeaderView* self, QPoint* offset) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->QHeaderView::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QHeaderView::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnRedirected(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_redirected_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QHeaderView_SharedPainter(const QHeaderView* self) {
    auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self));
    if (vqheaderview) {
        return vqheaderview->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QHeaderView::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QHeaderView_SuperSharedPainter(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->QHeaderView::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QHeaderView::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSharedPainter(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        vqheaderview->qheaderview_sharedpainter_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_ChildEvent(QHeaderView* self, QChildEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperChildEvent(QHeaderView* self, QChildEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeaderView::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnChildEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_childevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_CustomEvent(QHeaderView* self, QEvent* event) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperCustomEvent(QHeaderView* self, QEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeaderView::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnCustomEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_customevent_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_ConnectNotify(QHeaderView* self, const QMetaMethod* signal) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperConnectNotify(QHeaderView* self, const QMetaMethod* signal) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHeaderView::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnConnectNotify(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_connectnotify_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QHeaderView_DisconnectNotify(QHeaderView* self, const QMetaMethod* signal) {
    auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
    if (vqheaderview) {
        vqheaderview->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHeaderView::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeaderView_SuperDisconnectNotify(QHeaderView* self, const QMetaMethod* signal) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->QHeaderView::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHeaderView::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDisconnectNotify(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self))
        vqheaderview->qheaderview_disconnectnotify_callback = reinterpret_cast<VirtualQHeaderView::QHeaderView_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QHeaderView_UpdateSection(QHeaderView* self, int logicalIndex) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->VirtualQHeaderView::updateSection(static_cast<int>(logicalIndex));
    } else
        qFatal("Error: Protected method QHeaderView::updateSection called without a directly constructed type");
}

// Derived class protected handler implementation
void QHeaderView_ResizeSections2(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->VirtualQHeaderView::resizeSections();
    } else
        qFatal("Error: Protected method QHeaderView::resizeSections2 called without a directly constructed type");
}

// Derived class protected handler implementation
void QHeaderView_SectionsInserted(QHeaderView* self, const QModelIndex* parent, int logicalFirst, int logicalLast) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->VirtualQHeaderView::sectionsInserted(*parent, static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
    } else
        qFatal("Error: Protected method QHeaderView::sectionsInserted called without a directly constructed type");
}

// Derived class protected handler implementation
void QHeaderView_SectionsAboutToBeRemoved(QHeaderView* self, const QModelIndex* parent, int logicalFirst, int logicalLast) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->VirtualQHeaderView::sectionsAboutToBeRemoved(*parent, static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
    } else
        qFatal("Error: Protected method QHeaderView::sectionsAboutToBeRemoved called without a directly constructed type");
}

// Derived class protected handler implementation
void QHeaderView_Initialize(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->VirtualQHeaderView::initialize();
    } else
        qFatal("Error: Protected method QHeaderView::initialize called without a directly constructed type");
}

// Derived class protected handler implementation
void QHeaderView_InitializeSections(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->VirtualQHeaderView::initializeSections();
    } else
        qFatal("Error: Protected method QHeaderView::initializeSections called without a directly constructed type");
}

// Derived class protected handler implementation
void QHeaderView_InitializeSections2(QHeaderView* self, int start, int end) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->VirtualQHeaderView::initializeSections(static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected method QHeaderView::initializeSections2 called without a directly constructed type");
}

// Derived class protected handler implementation
int QHeaderView_State(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return static_cast<int>(vqheaderview->VirtualQHeaderView::state());
    } else
        qFatal("Error: Protected method QHeaderView::state called without a directly constructed type");
}

// Derived class protected handler implementation
void QHeaderView_SetState(QHeaderView* self, int state) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->VirtualQHeaderView::setState(static_cast<VirtualQHeaderView::State>(state));
    } else
        qFatal("Error: Protected method QHeaderView::setState called without a directly constructed type");
}

// Derived class protected handler implementation
void QHeaderView_ScheduleDelayedItemsLayout(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->VirtualQHeaderView::scheduleDelayedItemsLayout();
    } else
        qFatal("Error: Protected method QHeaderView::scheduleDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QHeaderView_ExecuteDelayedItemsLayout(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->VirtualQHeaderView::executeDelayedItemsLayout();
    } else
        qFatal("Error: Protected method QHeaderView::executeDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QHeaderView_SetDirtyRegion(QHeaderView* self, const QRegion* region) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->VirtualQHeaderView::setDirtyRegion(*region);
    } else
        qFatal("Error: Protected method QHeaderView::setDirtyRegion called without a directly constructed type");
}

// Derived class protected handler implementation
void QHeaderView_ScrollDirtyRegion(QHeaderView* self, int dx, int dy) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->VirtualQHeaderView::scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected method QHeaderView::scrollDirtyRegion called without a directly constructed type");
}

// Derived class handler implementation
QPoint* QHeaderView_DirtyRegionOffset(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        return new QPoint(vqheaderview->dirtyRegionOffset());
    qFatal("Error: Protected method QHeaderView::dirtyRegionOffset called without a directly constructed type");
}

// Derived class protected handler implementation
void QHeaderView_StartAutoScroll(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->VirtualQHeaderView::startAutoScroll();
    } else
        qFatal("Error: Protected method QHeaderView::startAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void QHeaderView_StopAutoScroll(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->VirtualQHeaderView::stopAutoScroll();
    } else
        qFatal("Error: Protected method QHeaderView::stopAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void QHeaderView_DoAutoScroll(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->VirtualQHeaderView::doAutoScroll();
    } else
        qFatal("Error: Protected method QHeaderView::doAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
int QHeaderView_DropIndicatorPosition(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return static_cast<int>(vqheaderview->VirtualQHeaderView::dropIndicatorPosition());
    } else
        qFatal("Error: Protected method QHeaderView::dropIndicatorPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QHeaderView_SetViewportMargins(QHeaderView* self, int left, int top, int right, int bottom) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->VirtualQHeaderView::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method QHeaderView::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* QHeaderView_ViewportMargins(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self)))
        return new QMargins(vqheaderview->viewportMargins());
    qFatal("Error: Protected method QHeaderView::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void QHeaderView_DrawFrame(QHeaderView* self, QPainter* param1) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->VirtualQHeaderView::drawFrame(param1);
    } else
        qFatal("Error: Protected method QHeaderView::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QHeaderView_UpdateMicroFocus(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->VirtualQHeaderView::updateMicroFocus();
    } else
        qFatal("Error: Protected method QHeaderView::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QHeaderView_Create(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->VirtualQHeaderView::create();
    } else
        qFatal("Error: Protected method QHeaderView::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QHeaderView_Destroy(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->VirtualQHeaderView::destroy();
    } else
        qFatal("Error: Protected method QHeaderView::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QHeaderView_FocusNextChild(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        return vqheaderview->VirtualQHeaderView::focusNextChild();
    } else
        qFatal("Error: Protected method QHeaderView::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QHeaderView_FocusPreviousChild(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        return vqheaderview->VirtualQHeaderView::focusPreviousChild();
    } else
        qFatal("Error: Protected method QHeaderView::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QHeaderView_Sender(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->VirtualQHeaderView::sender();
    } else
        qFatal("Error: Protected method QHeaderView::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QHeaderView_SenderSignalIndex(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->VirtualQHeaderView::senderSignalIndex();
    } else
        qFatal("Error: Protected method QHeaderView::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QHeaderView_Receivers(const QHeaderView* self, const char* signal) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->VirtualQHeaderView::receivers(signal);
    } else
        qFatal("Error: Protected method QHeaderView::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QHeaderView_IsSignalConnected(const QHeaderView* self, const QMetaMethod* signal) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->VirtualQHeaderView::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QHeaderView::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QHeaderView_GetDecodedMetricF(const QHeaderView* self, int metricA, int metricB) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->VirtualQHeaderView::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QHeaderView::getDecodedMetricF called without a directly constructed type");
}

void QHeaderView_Delete(QHeaderView* self) {
    delete self;
}
