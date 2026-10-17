#include <QChildEvent>
#include <QColor>
#include <QCustom3DItem>
#include <QCustom3DLabel>
#include <QEvent>
#include <QFont>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQuaternion>
#include <QString>
#include <QTimerEvent>
#include <QVector3D>
#include <qcustom3dlabel.h>
#include "libqcustom3dlabel.h"
#include "libqcustom3dlabel.hxx"

QCustom3DLabel* QCustom3DLabel_new() {
    return new VirtualQCustom3DLabel();
}

QCustom3DLabel* QCustom3DLabel_new2(const libqt_string text, const QFont* font, const QVector3D* position, const QVector3D* scaling, const QQuaternion* rotation) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQCustom3DLabel(text_QString, *font, *position, *scaling, *rotation);
}

QCustom3DLabel* QCustom3DLabel_new3(QObject* parent) {
    return new VirtualQCustom3DLabel(parent);
}

QCustom3DLabel* QCustom3DLabel_new4(const libqt_string text, const QFont* font, const QVector3D* position, const QVector3D* scaling, const QQuaternion* rotation, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQCustom3DLabel(text_QString, *font, *position, *scaling, *rotation, parent);
}

QMetaObject* QCustom3DLabel_MetaObject(const QCustom3DLabel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QCustom3DLabel_Metacast(QCustom3DLabel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QCustom3DLabel_Metacall(QCustom3DLabel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QCustom3DLabel_Tr(const char* s) {
    auto _ret = QCustom3DLabel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QCustom3DLabel_SetText(QCustom3DLabel* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

libqt_string QCustom3DLabel_Text(const QCustom3DLabel* self) {
    auto _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QCustom3DLabel_SetFont(QCustom3DLabel* self, const QFont* font) {
    self->setFont(*font);
}

QFont* QCustom3DLabel_Font(const QCustom3DLabel* self) {
    return new QFont(self->font());
}

void QCustom3DLabel_SetTextColor(QCustom3DLabel* self, const QColor* color) {
    self->setTextColor(*color);
}

QColor* QCustom3DLabel_TextColor(const QCustom3DLabel* self) {
    return new QColor(self->textColor());
}

void QCustom3DLabel_SetBackgroundColor(QCustom3DLabel* self, const QColor* color) {
    self->setBackgroundColor(*color);
}

QColor* QCustom3DLabel_BackgroundColor(const QCustom3DLabel* self) {
    return new QColor(self->backgroundColor());
}

void QCustom3DLabel_SetBorderEnabled(QCustom3DLabel* self, bool enabled) {
    self->setBorderEnabled(enabled);
}

bool QCustom3DLabel_IsBorderEnabled(const QCustom3DLabel* self) {
    return self->isBorderEnabled();
}

void QCustom3DLabel_SetBackgroundEnabled(QCustom3DLabel* self, bool enabled) {
    self->setBackgroundEnabled(enabled);
}

bool QCustom3DLabel_IsBackgroundEnabled(const QCustom3DLabel* self) {
    return self->isBackgroundEnabled();
}

void QCustom3DLabel_SetFacingCamera(QCustom3DLabel* self, bool enabled) {
    self->setFacingCamera(enabled);
}

bool QCustom3DLabel_IsFacingCamera(const QCustom3DLabel* self) {
    return self->isFacingCamera();
}

void QCustom3DLabel_TextChanged(QCustom3DLabel* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->textChanged(text_QString);
}

void QCustom3DLabel_Connect_TextChanged(QCustom3DLabel* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DLabel*, const char*) = reinterpret_cast<void (*)(QCustom3DLabel*, const char*)>(slot);
    QCustom3DLabel::connect(self,
                            static_cast<void (QCustom3DLabel::*)(const QString&)>(&QCustom3DLabel::textChanged),
                            [self, slotFunc](const QString& text) {
                                const auto text_ret = text;
                                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                QByteArray text_b = text_ret.toUtf8();
                                auto text_str_len = text_b.length();
                                const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
                                memcpy((void*)text_str, text_b.data(), text_str_len);
                                ((char*)text_str)[text_str_len] = '\0';
                                const char* sigval1 = text_str;
                                slotFunc(self, sigval1);
                                libqt_free(text_str);
                            });
}

void QCustom3DLabel_FontChanged(QCustom3DLabel* self, const QFont* font) {
    self->fontChanged(*font);
}

void QCustom3DLabel_Connect_FontChanged(QCustom3DLabel* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DLabel*, QFont*) = reinterpret_cast<void (*)(QCustom3DLabel*, QFont*)>(slot);
    QCustom3DLabel::connect(self,
                            static_cast<void (QCustom3DLabel::*)(const QFont&)>(&QCustom3DLabel::fontChanged),
                            [self, slotFunc](const QFont& font) {
                                const QFont& font_ret = font;
                                // Cast returned reference into pointer
                                QFont* sigval1 = const_cast<QFont*>(&font_ret);
                                slotFunc(self, sigval1);
                            });
}

void QCustom3DLabel_TextColorChanged(QCustom3DLabel* self, const QColor* color) {
    self->textColorChanged(*color);
}

void QCustom3DLabel_Connect_TextColorChanged(QCustom3DLabel* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DLabel*, QColor*) = reinterpret_cast<void (*)(QCustom3DLabel*, QColor*)>(slot);
    QCustom3DLabel::connect(self,
                            static_cast<void (QCustom3DLabel::*)(const QColor&)>(&QCustom3DLabel::textColorChanged),
                            [self, slotFunc](const QColor& color) {
                                const QColor& color_ret = color;
                                // Cast returned reference into pointer
                                QColor* sigval1 = const_cast<QColor*>(&color_ret);
                                slotFunc(self, sigval1);
                            });
}

void QCustom3DLabel_BackgroundColorChanged(QCustom3DLabel* self, const QColor* color) {
    self->backgroundColorChanged(*color);
}

void QCustom3DLabel_Connect_BackgroundColorChanged(QCustom3DLabel* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DLabel*, QColor*) = reinterpret_cast<void (*)(QCustom3DLabel*, QColor*)>(slot);
    QCustom3DLabel::connect(self,
                            static_cast<void (QCustom3DLabel::*)(const QColor&)>(&QCustom3DLabel::backgroundColorChanged),
                            [self, slotFunc](const QColor& color) {
                                const QColor& color_ret = color;
                                // Cast returned reference into pointer
                                QColor* sigval1 = const_cast<QColor*>(&color_ret);
                                slotFunc(self, sigval1);
                            });
}

void QCustom3DLabel_BorderEnabledChanged(QCustom3DLabel* self, bool enabled) {
    self->borderEnabledChanged(enabled);
}

void QCustom3DLabel_Connect_BorderEnabledChanged(QCustom3DLabel* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DLabel*, bool) = reinterpret_cast<void (*)(QCustom3DLabel*, bool)>(slot);
    QCustom3DLabel::connect(self,
                            static_cast<void (QCustom3DLabel::*)(bool)>(&QCustom3DLabel::borderEnabledChanged),
                            [self, slotFunc](bool enabled) {
                                bool sigval1 = enabled;
                                slotFunc(self, sigval1);
                            });
}

void QCustom3DLabel_BackgroundEnabledChanged(QCustom3DLabel* self, bool enabled) {
    self->backgroundEnabledChanged(enabled);
}

void QCustom3DLabel_Connect_BackgroundEnabledChanged(QCustom3DLabel* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DLabel*, bool) = reinterpret_cast<void (*)(QCustom3DLabel*, bool)>(slot);
    QCustom3DLabel::connect(self,
                            static_cast<void (QCustom3DLabel::*)(bool)>(&QCustom3DLabel::backgroundEnabledChanged),
                            [self, slotFunc](bool enabled) {
                                bool sigval1 = enabled;
                                slotFunc(self, sigval1);
                            });
}

void QCustom3DLabel_FacingCameraChanged(QCustom3DLabel* self, bool enabled) {
    self->facingCameraChanged(enabled);
}

void QCustom3DLabel_Connect_FacingCameraChanged(QCustom3DLabel* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DLabel*, bool) = reinterpret_cast<void (*)(QCustom3DLabel*, bool)>(slot);
    QCustom3DLabel::connect(self,
                            static_cast<void (QCustom3DLabel::*)(bool)>(&QCustom3DLabel::facingCameraChanged),
                            [self, slotFunc](bool enabled) {
                                bool sigval1 = enabled;
                                slotFunc(self, sigval1);
                            });
}

libqt_string QCustom3DLabel_Tr2(const char* s, const char* c) {
    auto _ret = QCustom3DLabel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCustom3DLabel_Tr3(const char* s, const char* c, int n) {
    auto _ret = QCustom3DLabel::tr(s, c, static_cast<int>(n));
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
QMetaObject* QCustom3DLabel_SuperMetaObject(const QCustom3DLabel* self) {
    return (QMetaObject*)self->QCustom3DLabel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QCustom3DLabel_OnMetaObject(QCustom3DLabel* self, intptr_t slot) {
    if (auto* vqcustom3dlabel = const_cast<VirtualQCustom3DLabel*>(dynamic_cast<const VirtualQCustom3DLabel*>(self)))
        vqcustom3dlabel->qcustom3dlabel_metaobject_callback = reinterpret_cast<VirtualQCustom3DLabel::QCustom3DLabel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QCustom3DLabel_SuperMetacast(QCustom3DLabel* self, const char* param1) {
    return self->QCustom3DLabel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QCustom3DLabel_OnMetacast(QCustom3DLabel* self, intptr_t slot) {
    if (auto* vqcustom3dlabel = dynamic_cast<VirtualQCustom3DLabel*>(self))
        vqcustom3dlabel->qcustom3dlabel_metacast_callback = reinterpret_cast<VirtualQCustom3DLabel::QCustom3DLabel_Metacast_Callback>(slot);
}

// Base class handler implementation
int QCustom3DLabel_SuperMetacall(QCustom3DLabel* self, int param1, int param2, void** param3) {
    return self->QCustom3DLabel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QCustom3DLabel_OnMetacall(QCustom3DLabel* self, intptr_t slot) {
    if (auto* vqcustom3dlabel = dynamic_cast<VirtualQCustom3DLabel*>(self))
        vqcustom3dlabel->qcustom3dlabel_metacall_callback = reinterpret_cast<VirtualQCustom3DLabel::QCustom3DLabel_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QCustom3DLabel_Event(QCustom3DLabel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QCustom3DLabel_SuperEvent(QCustom3DLabel* self, QEvent* event) {
    return self->QCustom3DLabel::event(event);
}

// Auxiliary method to allow providing re-implementation
void QCustom3DLabel_OnEvent(QCustom3DLabel* self, intptr_t slot) {
    if (auto* vqcustom3dlabel = dynamic_cast<VirtualQCustom3DLabel*>(self))
        vqcustom3dlabel->qcustom3dlabel_event_callback = reinterpret_cast<VirtualQCustom3DLabel::QCustom3DLabel_Event_Callback>(slot);
}

// Derived class handler implementation
bool QCustom3DLabel_EventFilter(QCustom3DLabel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QCustom3DLabel_SuperEventFilter(QCustom3DLabel* self, QObject* watched, QEvent* event) {
    return self->QCustom3DLabel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QCustom3DLabel_OnEventFilter(QCustom3DLabel* self, intptr_t slot) {
    if (auto* vqcustom3dlabel = dynamic_cast<VirtualQCustom3DLabel*>(self))
        vqcustom3dlabel->qcustom3dlabel_eventfilter_callback = reinterpret_cast<VirtualQCustom3DLabel::QCustom3DLabel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QCustom3DLabel_TimerEvent(QCustom3DLabel* self, QTimerEvent* event) {
    auto* vqcustom3dlabel = dynamic_cast<VirtualQCustom3DLabel*>(self);
    if (vqcustom3dlabel) {
        vqcustom3dlabel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCustom3DLabel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCustom3DLabel_SuperTimerEvent(QCustom3DLabel* self, QTimerEvent* event) {
    if (auto* vqcustom3dlabel = dynamic_cast<VirtualQCustom3DLabel*>(self)) {
        vqcustom3dlabel->QCustom3DLabel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QCustom3DLabel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCustom3DLabel_OnTimerEvent(QCustom3DLabel* self, intptr_t slot) {
    if (auto* vqcustom3dlabel = dynamic_cast<VirtualQCustom3DLabel*>(self))
        vqcustom3dlabel->qcustom3dlabel_timerevent_callback = reinterpret_cast<VirtualQCustom3DLabel::QCustom3DLabel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QCustom3DLabel_ChildEvent(QCustom3DLabel* self, QChildEvent* event) {
    auto* vqcustom3dlabel = dynamic_cast<VirtualQCustom3DLabel*>(self);
    if (vqcustom3dlabel) {
        vqcustom3dlabel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCustom3DLabel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCustom3DLabel_SuperChildEvent(QCustom3DLabel* self, QChildEvent* event) {
    if (auto* vqcustom3dlabel = dynamic_cast<VirtualQCustom3DLabel*>(self)) {
        vqcustom3dlabel->QCustom3DLabel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QCustom3DLabel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCustom3DLabel_OnChildEvent(QCustom3DLabel* self, intptr_t slot) {
    if (auto* vqcustom3dlabel = dynamic_cast<VirtualQCustom3DLabel*>(self))
        vqcustom3dlabel->qcustom3dlabel_childevent_callback = reinterpret_cast<VirtualQCustom3DLabel::QCustom3DLabel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QCustom3DLabel_CustomEvent(QCustom3DLabel* self, QEvent* event) {
    auto* vqcustom3dlabel = dynamic_cast<VirtualQCustom3DLabel*>(self);
    if (vqcustom3dlabel) {
        vqcustom3dlabel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCustom3DLabel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCustom3DLabel_SuperCustomEvent(QCustom3DLabel* self, QEvent* event) {
    if (auto* vqcustom3dlabel = dynamic_cast<VirtualQCustom3DLabel*>(self)) {
        vqcustom3dlabel->QCustom3DLabel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QCustom3DLabel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCustom3DLabel_OnCustomEvent(QCustom3DLabel* self, intptr_t slot) {
    if (auto* vqcustom3dlabel = dynamic_cast<VirtualQCustom3DLabel*>(self))
        vqcustom3dlabel->qcustom3dlabel_customevent_callback = reinterpret_cast<VirtualQCustom3DLabel::QCustom3DLabel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QCustom3DLabel_ConnectNotify(QCustom3DLabel* self, const QMetaMethod* signal) {
    auto* vqcustom3dlabel = dynamic_cast<VirtualQCustom3DLabel*>(self);
    if (vqcustom3dlabel) {
        vqcustom3dlabel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCustom3DLabel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCustom3DLabel_SuperConnectNotify(QCustom3DLabel* self, const QMetaMethod* signal) {
    if (auto* vqcustom3dlabel = dynamic_cast<VirtualQCustom3DLabel*>(self)) {
        vqcustom3dlabel->QCustom3DLabel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCustom3DLabel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCustom3DLabel_OnConnectNotify(QCustom3DLabel* self, intptr_t slot) {
    if (auto* vqcustom3dlabel = dynamic_cast<VirtualQCustom3DLabel*>(self))
        vqcustom3dlabel->qcustom3dlabel_connectnotify_callback = reinterpret_cast<VirtualQCustom3DLabel::QCustom3DLabel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QCustom3DLabel_DisconnectNotify(QCustom3DLabel* self, const QMetaMethod* signal) {
    auto* vqcustom3dlabel = dynamic_cast<VirtualQCustom3DLabel*>(self);
    if (vqcustom3dlabel) {
        vqcustom3dlabel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCustom3DLabel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCustom3DLabel_SuperDisconnectNotify(QCustom3DLabel* self, const QMetaMethod* signal) {
    if (auto* vqcustom3dlabel = dynamic_cast<VirtualQCustom3DLabel*>(self)) {
        vqcustom3dlabel->QCustom3DLabel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCustom3DLabel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCustom3DLabel_OnDisconnectNotify(QCustom3DLabel* self, intptr_t slot) {
    if (auto* vqcustom3dlabel = dynamic_cast<VirtualQCustom3DLabel*>(self))
        vqcustom3dlabel->qcustom3dlabel_disconnectnotify_callback = reinterpret_cast<VirtualQCustom3DLabel::QCustom3DLabel_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QCustom3DLabel_Sender(const QCustom3DLabel* self) {
    if (auto* vqcustom3dlabel = const_cast<VirtualQCustom3DLabel*>(dynamic_cast<const VirtualQCustom3DLabel*>(self))) {
        return vqcustom3dlabel->VirtualQCustom3DLabel::sender();
    } else
        qFatal("Error: Protected method QCustom3DLabel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QCustom3DLabel_SenderSignalIndex(const QCustom3DLabel* self) {
    if (auto* vqcustom3dlabel = const_cast<VirtualQCustom3DLabel*>(dynamic_cast<const VirtualQCustom3DLabel*>(self))) {
        return vqcustom3dlabel->VirtualQCustom3DLabel::senderSignalIndex();
    } else
        qFatal("Error: Protected method QCustom3DLabel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QCustom3DLabel_Receivers(const QCustom3DLabel* self, const char* signal) {
    if (auto* vqcustom3dlabel = const_cast<VirtualQCustom3DLabel*>(dynamic_cast<const VirtualQCustom3DLabel*>(self))) {
        return vqcustom3dlabel->VirtualQCustom3DLabel::receivers(signal);
    } else
        qFatal("Error: Protected method QCustom3DLabel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QCustom3DLabel_IsSignalConnected(const QCustom3DLabel* self, const QMetaMethod* signal) {
    if (auto* vqcustom3dlabel = const_cast<VirtualQCustom3DLabel*>(dynamic_cast<const VirtualQCustom3DLabel*>(self))) {
        return vqcustom3dlabel->VirtualQCustom3DLabel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QCustom3DLabel::isSignalConnected called without a directly constructed type");
}

void QCustom3DLabel_Delete(QCustom3DLabel* self) {
    delete self;
}
