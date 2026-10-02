#include <QAbstractTextDocumentLayout>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__PaintContext
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__Selection
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QPainter>
#include <QPalette>
#include <QPointF>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QTextBlock>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextFormat>
#include <QTextFrame>
#include <QTextInlineObject>
#include <QTextObjectInterface>
#include <QTimerEvent>
#include <qabstracttextdocumentlayout.h>
#include "libqabstracttextdocumentlayout.h"
#include "libqabstracttextdocumentlayout.hxx"

QAbstractTextDocumentLayout* QAbstractTextDocumentLayout_new(QTextDocument* doc) {
    return new VirtualQAbstractTextDocumentLayout(doc);
}

QMetaObject* QAbstractTextDocumentLayout_MetaObject(const QAbstractTextDocumentLayout* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractTextDocumentLayout_Metacast(QAbstractTextDocumentLayout* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractTextDocumentLayout_Metacall(QAbstractTextDocumentLayout* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstractTextDocumentLayout_Tr(const char* s) {
    auto _ret = QAbstractTextDocumentLayout::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractTextDocumentLayout_Draw(QAbstractTextDocumentLayout* self, QPainter* painter, const QAbstractTextDocumentLayout__PaintContext* context) {
    self->draw(painter, *context);
}

int QAbstractTextDocumentLayout_HitTest(const QAbstractTextDocumentLayout* self, const QPointF* point, int accuracy) {
    return self->hitTest(*point, static_cast<Qt::HitTestAccuracy>(accuracy));
}

libqt_string QAbstractTextDocumentLayout_AnchorAt(const QAbstractTextDocumentLayout* self, const QPointF* pos) {
    auto _ret = self->anchorAt(*pos);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractTextDocumentLayout_ImageAt(const QAbstractTextDocumentLayout* self, const QPointF* pos) {
    auto _ret = self->imageAt(*pos);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QTextFormat* QAbstractTextDocumentLayout_FormatAt(const QAbstractTextDocumentLayout* self, const QPointF* pos) {
    return new QTextFormat(self->formatAt(*pos));
}

QTextBlock* QAbstractTextDocumentLayout_BlockWithMarkerAt(const QAbstractTextDocumentLayout* self, const QPointF* pos) {
    return new QTextBlock(self->blockWithMarkerAt(*pos));
}

int QAbstractTextDocumentLayout_PageCount(const QAbstractTextDocumentLayout* self) {
    return self->pageCount();
}

QSizeF* QAbstractTextDocumentLayout_DocumentSize(const QAbstractTextDocumentLayout* self) {
    return new QSizeF(self->documentSize());
}

QRectF* QAbstractTextDocumentLayout_FrameBoundingRect(const QAbstractTextDocumentLayout* self, QTextFrame* frame) {
    return new QRectF(self->frameBoundingRect(frame));
}

QRectF* QAbstractTextDocumentLayout_BlockBoundingRect(const QAbstractTextDocumentLayout* self, const QTextBlock* block) {
    return new QRectF(self->blockBoundingRect(*block));
}

void QAbstractTextDocumentLayout_SetPaintDevice(QAbstractTextDocumentLayout* self, QPaintDevice* device) {
    self->setPaintDevice(device);
}

QPaintDevice* QAbstractTextDocumentLayout_PaintDevice(const QAbstractTextDocumentLayout* self) {
    return self->paintDevice();
}

QTextDocument* QAbstractTextDocumentLayout_Document(const QAbstractTextDocumentLayout* self) {
    return self->document();
}

void QAbstractTextDocumentLayout_RegisterHandler(QAbstractTextDocumentLayout* self, int objectType, QObject* component) {
    self->registerHandler(static_cast<int>(objectType), component);
}

void QAbstractTextDocumentLayout_UnregisterHandler(QAbstractTextDocumentLayout* self, int objectType) {
    self->unregisterHandler(static_cast<int>(objectType));
}

QTextObjectInterface* QAbstractTextDocumentLayout_HandlerForObject(const QAbstractTextDocumentLayout* self, int objectType) {
    return self->handlerForObject(static_cast<int>(objectType));
}

void QAbstractTextDocumentLayout_Update(QAbstractTextDocumentLayout* self) {
    self->update();
}

void QAbstractTextDocumentLayout_Connect_Update(QAbstractTextDocumentLayout* self, intptr_t slot) {
    void (*slotFunc)(QAbstractTextDocumentLayout*) = reinterpret_cast<void (*)(QAbstractTextDocumentLayout*)>(slot);
    QAbstractTextDocumentLayout::connect(self,
                                         static_cast<void (QAbstractTextDocumentLayout::*)(const QRectF&)>(&QAbstractTextDocumentLayout::update),
                                         [self, slotFunc]() {
                                             slotFunc(self);
                                         });
}

void QAbstractTextDocumentLayout_UpdateBlock(QAbstractTextDocumentLayout* self, const QTextBlock* block) {
    self->updateBlock(*block);
}

void QAbstractTextDocumentLayout_Connect_UpdateBlock(QAbstractTextDocumentLayout* self, intptr_t slot) {
    void (*slotFunc)(QAbstractTextDocumentLayout*, QTextBlock*) = reinterpret_cast<void (*)(QAbstractTextDocumentLayout*, QTextBlock*)>(slot);
    QAbstractTextDocumentLayout::connect(self,
                                         static_cast<void (QAbstractTextDocumentLayout::*)(const QTextBlock&)>(&QAbstractTextDocumentLayout::updateBlock),
                                         [self, slotFunc](const QTextBlock& block) {
                                             const QTextBlock& block_ret = block;
                                             // Cast returned reference into pointer
                                             QTextBlock* sigval1 = const_cast<QTextBlock*>(&block_ret);
                                             slotFunc(self, sigval1);
                                         });
}

void QAbstractTextDocumentLayout_DocumentSizeChanged(QAbstractTextDocumentLayout* self, const QSizeF* newSize) {
    self->documentSizeChanged(*newSize);
}

void QAbstractTextDocumentLayout_Connect_DocumentSizeChanged(QAbstractTextDocumentLayout* self, intptr_t slot) {
    void (*slotFunc)(QAbstractTextDocumentLayout*, QSizeF*) = reinterpret_cast<void (*)(QAbstractTextDocumentLayout*, QSizeF*)>(slot);
    QAbstractTextDocumentLayout::connect(self,
                                         static_cast<void (QAbstractTextDocumentLayout::*)(const QSizeF&)>(&QAbstractTextDocumentLayout::documentSizeChanged),
                                         [self, slotFunc](const QSizeF& newSize) {
                                             const QSizeF& newSize_ret = newSize;
                                             // Cast returned reference into pointer
                                             QSizeF* sigval1 = const_cast<QSizeF*>(&newSize_ret);
                                             slotFunc(self, sigval1);
                                         });
}

void QAbstractTextDocumentLayout_PageCountChanged(QAbstractTextDocumentLayout* self, int newPages) {
    self->pageCountChanged(static_cast<int>(newPages));
}

void QAbstractTextDocumentLayout_Connect_PageCountChanged(QAbstractTextDocumentLayout* self, intptr_t slot) {
    void (*slotFunc)(QAbstractTextDocumentLayout*, int) = reinterpret_cast<void (*)(QAbstractTextDocumentLayout*, int)>(slot);
    QAbstractTextDocumentLayout::connect(self,
                                         static_cast<void (QAbstractTextDocumentLayout::*)(int)>(&QAbstractTextDocumentLayout::pageCountChanged),
                                         [self, slotFunc](int newPages) {
                                             int sigval1 = newPages;
                                             slotFunc(self, sigval1);
                                         });
}

void QAbstractTextDocumentLayout_DocumentChanged(QAbstractTextDocumentLayout* self, int from, int charsRemoved, int charsAdded) {
    auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self);
    if (vqabstracttextdocumentlayout) {
        vqabstracttextdocumentlayout->documentChanged(static_cast<int>(from), static_cast<int>(charsRemoved), static_cast<int>(charsAdded));
    }
}

void QAbstractTextDocumentLayout_ResizeInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format) {
    auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self);
    if (vqabstracttextdocumentlayout) {
        vqabstracttextdocumentlayout->resizeInlineObject(*item, static_cast<int>(posInDocument), *format);
    }
}

void QAbstractTextDocumentLayout_PositionInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format) {
    auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self);
    if (vqabstracttextdocumentlayout) {
        vqabstracttextdocumentlayout->positionInlineObject(*item, static_cast<int>(posInDocument), *format);
    }
}

void QAbstractTextDocumentLayout_DrawInlineObject(QAbstractTextDocumentLayout* self, QPainter* painter, const QRectF* rect, QTextInlineObject* object, int posInDocument, const QTextFormat* format) {
    auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self);
    if (vqabstracttextdocumentlayout) {
        vqabstracttextdocumentlayout->drawInlineObject(painter, *rect, *object, static_cast<int>(posInDocument), *format);
    }
}

libqt_string QAbstractTextDocumentLayout_Tr2(const char* s, const char* c) {
    auto _ret = QAbstractTextDocumentLayout::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractTextDocumentLayout_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAbstractTextDocumentLayout::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractTextDocumentLayout_UnregisterHandler2(QAbstractTextDocumentLayout* self, int objectType, QObject* component) {
    self->unregisterHandler(static_cast<int>(objectType), component);
}

void QAbstractTextDocumentLayout_Update1(QAbstractTextDocumentLayout* self, const QRectF* param1) {
    self->update(*param1);
}

void QAbstractTextDocumentLayout_Connect_Update1(QAbstractTextDocumentLayout* self, intptr_t slot) {
    void (*slotFunc)(QAbstractTextDocumentLayout*, QRectF*) = reinterpret_cast<void (*)(QAbstractTextDocumentLayout*, QRectF*)>(slot);
    QAbstractTextDocumentLayout::connect(self,
                                         static_cast<void (QAbstractTextDocumentLayout::*)(const QRectF&)>(&QAbstractTextDocumentLayout::update),
                                         [self, slotFunc](const QRectF& param1) {
                                             const QRectF& param1_ret = param1;
                                             // Cast returned reference into pointer
                                             QRectF* sigval1 = const_cast<QRectF*>(&param1_ret);
                                             slotFunc(self, sigval1);
                                         });
}

// Base class handler implementation
QMetaObject* QAbstractTextDocumentLayout_SuperMetaObject(const QAbstractTextDocumentLayout* self) {
    return (QMetaObject*)self->QAbstractTextDocumentLayout::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnMetaObject(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self)))
        vqabstracttextdocumentlayout->qabstracttextdocumentlayout_metaobject_callback = reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAbstractTextDocumentLayout_SuperMetacast(QAbstractTextDocumentLayout* self, const char* param1) {
    return self->QAbstractTextDocumentLayout::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnMetacast(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self))
        vqabstracttextdocumentlayout->qabstracttextdocumentlayout_metacast_callback = reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAbstractTextDocumentLayout_SuperMetacall(QAbstractTextDocumentLayout* self, int param1, int param2, void** param3) {
    return self->QAbstractTextDocumentLayout::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnMetacall(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self))
        vqabstracttextdocumentlayout->qabstracttextdocumentlayout_metacall_callback = reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnDraw(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self))
        vqabstracttextdocumentlayout->qabstracttextdocumentlayout_draw_callback = reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_Draw_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnHitTest(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self)))
        vqabstracttextdocumentlayout->qabstracttextdocumentlayout_hittest_callback = reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_HitTest_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnPageCount(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self)))
        vqabstracttextdocumentlayout->qabstracttextdocumentlayout_pagecount_callback = reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_PageCount_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnDocumentSize(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self)))
        vqabstracttextdocumentlayout->qabstracttextdocumentlayout_documentsize_callback = reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_DocumentSize_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnFrameBoundingRect(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self)))
        vqabstracttextdocumentlayout->qabstracttextdocumentlayout_frameboundingrect_callback = reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_FrameBoundingRect_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnBlockBoundingRect(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self)))
        vqabstracttextdocumentlayout->qabstracttextdocumentlayout_blockboundingrect_callback = reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_BlockBoundingRect_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnDocumentChanged(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self))
        vqabstracttextdocumentlayout->qabstracttextdocumentlayout_documentchanged_callback = reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_DocumentChanged_Callback>(slot);
}

// Base class handler implementation
void QAbstractTextDocumentLayout_SuperResizeInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->QAbstractTextDocumentLayout::resizeInlineObject(*item, static_cast<int>(posInDocument), *format);
    } else
        qFatal("Error: Protected virtual method QAbstractTextDocumentLayout::resizeInlineObject called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnResizeInlineObject(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self))
        vqabstracttextdocumentlayout->qabstracttextdocumentlayout_resizeinlineobject_callback = reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_ResizeInlineObject_Callback>(slot);
}

// Base class handler implementation
void QAbstractTextDocumentLayout_SuperPositionInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->QAbstractTextDocumentLayout::positionInlineObject(*item, static_cast<int>(posInDocument), *format);
    } else
        qFatal("Error: Protected virtual method QAbstractTextDocumentLayout::positionInlineObject called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnPositionInlineObject(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self))
        vqabstracttextdocumentlayout->qabstracttextdocumentlayout_positioninlineobject_callback = reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_PositionInlineObject_Callback>(slot);
}

// Base class handler implementation
void QAbstractTextDocumentLayout_SuperDrawInlineObject(QAbstractTextDocumentLayout* self, QPainter* painter, const QRectF* rect, QTextInlineObject* object, int posInDocument, const QTextFormat* format) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->QAbstractTextDocumentLayout::drawInlineObject(painter, *rect, *object, static_cast<int>(posInDocument), *format);
    } else
        qFatal("Error: Protected virtual method QAbstractTextDocumentLayout::drawInlineObject called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnDrawInlineObject(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self))
        vqabstracttextdocumentlayout->qabstracttextdocumentlayout_drawinlineobject_callback = reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_DrawInlineObject_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractTextDocumentLayout_Event(QAbstractTextDocumentLayout* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QAbstractTextDocumentLayout_SuperEvent(QAbstractTextDocumentLayout* self, QEvent* event) {
    return self->QAbstractTextDocumentLayout::event(event);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnEvent(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self))
        vqabstracttextdocumentlayout->qabstracttextdocumentlayout_event_callback = reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_Event_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractTextDocumentLayout_EventFilter(QAbstractTextDocumentLayout* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAbstractTextDocumentLayout_SuperEventFilter(QAbstractTextDocumentLayout* self, QObject* watched, QEvent* event) {
    return self->QAbstractTextDocumentLayout::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnEventFilter(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self))
        vqabstracttextdocumentlayout->qabstracttextdocumentlayout_eventfilter_callback = reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAbstractTextDocumentLayout_TimerEvent(QAbstractTextDocumentLayout* self, QTimerEvent* event) {
    auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self);
    if (vqabstracttextdocumentlayout) {
        vqabstracttextdocumentlayout->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractTextDocumentLayout::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractTextDocumentLayout_SuperTimerEvent(QAbstractTextDocumentLayout* self, QTimerEvent* event) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->QAbstractTextDocumentLayout::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractTextDocumentLayout::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnTimerEvent(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self))
        vqabstracttextdocumentlayout->qabstracttextdocumentlayout_timerevent_callback = reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractTextDocumentLayout_ChildEvent(QAbstractTextDocumentLayout* self, QChildEvent* event) {
    auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self);
    if (vqabstracttextdocumentlayout) {
        vqabstracttextdocumentlayout->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractTextDocumentLayout::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractTextDocumentLayout_SuperChildEvent(QAbstractTextDocumentLayout* self, QChildEvent* event) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->QAbstractTextDocumentLayout::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractTextDocumentLayout::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnChildEvent(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self))
        vqabstracttextdocumentlayout->qabstracttextdocumentlayout_childevent_callback = reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractTextDocumentLayout_CustomEvent(QAbstractTextDocumentLayout* self, QEvent* event) {
    auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self);
    if (vqabstracttextdocumentlayout) {
        vqabstracttextdocumentlayout->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractTextDocumentLayout::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractTextDocumentLayout_SuperCustomEvent(QAbstractTextDocumentLayout* self, QEvent* event) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->QAbstractTextDocumentLayout::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractTextDocumentLayout::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnCustomEvent(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self))
        vqabstracttextdocumentlayout->qabstracttextdocumentlayout_customevent_callback = reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractTextDocumentLayout_ConnectNotify(QAbstractTextDocumentLayout* self, const QMetaMethod* signal) {
    auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self);
    if (vqabstracttextdocumentlayout) {
        vqabstracttextdocumentlayout->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractTextDocumentLayout::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractTextDocumentLayout_SuperConnectNotify(QAbstractTextDocumentLayout* self, const QMetaMethod* signal) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->QAbstractTextDocumentLayout::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractTextDocumentLayout::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnConnectNotify(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self))
        vqabstracttextdocumentlayout->qabstracttextdocumentlayout_connectnotify_callback = reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAbstractTextDocumentLayout_DisconnectNotify(QAbstractTextDocumentLayout* self, const QMetaMethod* signal) {
    auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self);
    if (vqabstracttextdocumentlayout) {
        vqabstracttextdocumentlayout->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractTextDocumentLayout::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractTextDocumentLayout_SuperDisconnectNotify(QAbstractTextDocumentLayout* self, const QMetaMethod* signal) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->QAbstractTextDocumentLayout::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractTextDocumentLayout::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnDisconnectNotify(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self))
        vqabstracttextdocumentlayout->qabstracttextdocumentlayout_disconnectnotify_callback = reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
int QAbstractTextDocumentLayout_FormatIndex(QAbstractTextDocumentLayout* self, int pos) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        return vqabstracttextdocumentlayout->VirtualQAbstractTextDocumentLayout::formatIndex(static_cast<int>(pos));
    } else
        qFatal("Error: Protected method QAbstractTextDocumentLayout::formatIndex called without a directly constructed type");
}

// Derived class handler implementation
QTextCharFormat* QAbstractTextDocumentLayout_Format(QAbstractTextDocumentLayout* self, int pos) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self))
        return new QTextCharFormat(vqabstracttextdocumentlayout->format(static_cast<int>(pos)));
    qFatal("Error: Protected method QAbstractTextDocumentLayout::format called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QAbstractTextDocumentLayout_Sender(const QAbstractTextDocumentLayout* self) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        return vqabstracttextdocumentlayout->VirtualQAbstractTextDocumentLayout::sender();
    } else
        qFatal("Error: Protected method QAbstractTextDocumentLayout::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractTextDocumentLayout_SenderSignalIndex(const QAbstractTextDocumentLayout* self) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        return vqabstracttextdocumentlayout->VirtualQAbstractTextDocumentLayout::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAbstractTextDocumentLayout::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractTextDocumentLayout_Receivers(const QAbstractTextDocumentLayout* self, const char* signal) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        return vqabstracttextdocumentlayout->VirtualQAbstractTextDocumentLayout::receivers(signal);
    } else
        qFatal("Error: Protected method QAbstractTextDocumentLayout::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractTextDocumentLayout_IsSignalConnected(const QAbstractTextDocumentLayout* self, const QMetaMethod* signal) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        return vqabstracttextdocumentlayout->VirtualQAbstractTextDocumentLayout::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAbstractTextDocumentLayout::isSignalConnected called without a directly constructed type");
}

void QAbstractTextDocumentLayout_Delete(QAbstractTextDocumentLayout* self) {
    delete self;
}

QSizeF* QTextObjectInterface_IntrinsicSize(QTextObjectInterface* self, QTextDocument* doc, int posInDocument, const QTextFormat* format) {
    return new QSizeF(self->intrinsicSize(doc, static_cast<int>(posInDocument), *format));
}

void QTextObjectInterface_DrawObject(QTextObjectInterface* self, QPainter* painter, const QRectF* rect, QTextDocument* doc, int posInDocument, const QTextFormat* format) {
    self->drawObject(painter, *rect, doc, static_cast<int>(posInDocument), *format);
}

void QTextObjectInterface_Delete(QTextObjectInterface* self) {
    delete self;
}

QAbstractTextDocumentLayout__Selection* QAbstractTextDocumentLayout__Selection_new() {
    return new QAbstractTextDocumentLayout::Selection();
}

QAbstractTextDocumentLayout__Selection* QAbstractTextDocumentLayout__Selection_new2(const QAbstractTextDocumentLayout__Selection* param1) {
    return new QAbstractTextDocumentLayout::Selection(*param1);
}

QTextCursor* QAbstractTextDocumentLayout__Selection_Cursor(const QAbstractTextDocumentLayout__Selection* self) {
    return new QTextCursor(self->cursor);
}

void QAbstractTextDocumentLayout__Selection_SetCursor(QAbstractTextDocumentLayout__Selection* self, QTextCursor* cursor) {
    self->cursor = *cursor;
}

QTextCharFormat* QAbstractTextDocumentLayout__Selection_Format(const QAbstractTextDocumentLayout__Selection* self) {
    return new QTextCharFormat(self->format);
}

void QAbstractTextDocumentLayout__Selection_SetFormat(QAbstractTextDocumentLayout__Selection* self, QTextCharFormat* format) {
    self->format = *format;
}

void QAbstractTextDocumentLayout__Selection_OperatorAssign(QAbstractTextDocumentLayout__Selection* self, const QAbstractTextDocumentLayout__Selection* param1) {
    self->operator=(*param1);
}

void QAbstractTextDocumentLayout__Selection_Delete(QAbstractTextDocumentLayout__Selection* self) {
    delete self;
}

QAbstractTextDocumentLayout__PaintContext* QAbstractTextDocumentLayout__PaintContext_new() {
    return new QAbstractTextDocumentLayout::PaintContext();
}

QAbstractTextDocumentLayout__PaintContext* QAbstractTextDocumentLayout__PaintContext_new2(const QAbstractTextDocumentLayout__PaintContext* param1) {
    return new QAbstractTextDocumentLayout::PaintContext(*param1);
}

int QAbstractTextDocumentLayout__PaintContext_CursorPosition(const QAbstractTextDocumentLayout__PaintContext* self) {
    return self->cursorPosition;
}

void QAbstractTextDocumentLayout__PaintContext_SetCursorPosition(QAbstractTextDocumentLayout__PaintContext* self, int cursorPosition) {
    self->cursorPosition = static_cast<int>(cursorPosition);
}

QPalette* QAbstractTextDocumentLayout__PaintContext_Palette(const QAbstractTextDocumentLayout__PaintContext* self) {
    return new QPalette(self->palette);
}

void QAbstractTextDocumentLayout__PaintContext_SetPalette(QAbstractTextDocumentLayout__PaintContext* self, QPalette* palette) {
    self->palette = *palette;
}

QRectF* QAbstractTextDocumentLayout__PaintContext_Clip(const QAbstractTextDocumentLayout__PaintContext* self) {
    return new QRectF(self->clip);
}

void QAbstractTextDocumentLayout__PaintContext_SetClip(QAbstractTextDocumentLayout__PaintContext* self, QRectF* clip) {
    self->clip = *clip;
}

libqt_list /* of QAbstractTextDocumentLayout__Selection* */ QAbstractTextDocumentLayout__PaintContext_Selections(const QAbstractTextDocumentLayout__PaintContext* self) {
    QList<QAbstractTextDocumentLayout::Selection> selections_ret = self->selections;
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractTextDocumentLayout__Selection** selections_arr = static_cast<QAbstractTextDocumentLayout__Selection**>(malloc(sizeof(QAbstractTextDocumentLayout__Selection*) * (selections_ret.size())));
    for (qsizetype i = 0; i < selections_ret.size(); ++i) {
        selections_arr[i] = new QAbstractTextDocumentLayout::Selection(selections_ret[i]);
    }
    libqt_list selections_out;
    selections_out.len = selections_ret.size();
    selections_out.data = static_cast<void*>(selections_arr);
    return selections_out;
}

void QAbstractTextDocumentLayout__PaintContext_SetSelections(QAbstractTextDocumentLayout__PaintContext* self, libqt_list /* of QAbstractTextDocumentLayout__Selection* */ selections) {
    QList<QAbstractTextDocumentLayout::Selection> selections_QList;
    selections_QList.reserve(selections.len);
    QAbstractTextDocumentLayout__Selection** selections_arr = static_cast<QAbstractTextDocumentLayout__Selection**>(selections.data);
    for (size_t i = 0; i < selections.len; ++i) {
        selections_QList.push_back(*(selections_arr[i]));
    }
    self->selections = selections_QList;
}

void QAbstractTextDocumentLayout__PaintContext_OperatorAssign(QAbstractTextDocumentLayout__PaintContext* self, const QAbstractTextDocumentLayout__PaintContext* param1) {
    self->operator=(*param1);
}

void QAbstractTextDocumentLayout__PaintContext_Delete(QAbstractTextDocumentLayout__PaintContext* self) {
    delete self;
}
