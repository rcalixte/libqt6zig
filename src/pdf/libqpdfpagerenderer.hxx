#pragma once
#ifndef SRC_PDFC_LIBVIRTUALQPDFPAGERENDERER_H
#define SRC_PDFC_LIBVIRTUALQPDFPAGERENDERER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPdfPageRenderer so that we can call protected methods
class VirtualQPdfPageRenderer : public QPdfPageRenderer {

  public:
    // Virtual class public types (including callbacks)
    using QPdfPageRenderer_Metacall_Callback = int (*)(QPdfPageRenderer*, QMetaObject::Call, int, void**);
    using QPdfPageRenderer_Event_Callback = bool (*)(QPdfPageRenderer*, QEvent*);
    using QPdfPageRenderer_EventFilter_Callback = bool (*)(QPdfPageRenderer*, QObject*, QEvent*);
    using QPdfPageRenderer_TimerEvent_Callback = void (*)(QPdfPageRenderer*, QTimerEvent*);
    using QPdfPageRenderer_ChildEvent_Callback = void (*)(QPdfPageRenderer*, QChildEvent*);
    using QPdfPageRenderer_CustomEvent_Callback = void (*)(QPdfPageRenderer*, QEvent*);
    using QPdfPageRenderer_ConnectNotify_Callback = void (*)(QPdfPageRenderer*, const QMetaMethod&);
    using QPdfPageRenderer_DisconnectNotify_Callback = void (*)(QPdfPageRenderer*, const QMetaMethod&);
    using QPdfPageRenderer_Sender_Callback = QObject* (*)();
    using QPdfPageRenderer_SenderSignalIndex_Callback = int (*)();
    using QPdfPageRenderer_Receivers_Callback = int (*)(const QPdfPageRenderer*, const char*);
    using QPdfPageRenderer_IsSignalConnected_Callback = bool (*)(const QPdfPageRenderer*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QPdfPageRenderer_Metacall_Callback qpdfpagerenderer_metacall_callback = nullptr;
    QPdfPageRenderer_Event_Callback qpdfpagerenderer_event_callback = nullptr;
    QPdfPageRenderer_EventFilter_Callback qpdfpagerenderer_eventfilter_callback = nullptr;
    QPdfPageRenderer_TimerEvent_Callback qpdfpagerenderer_timerevent_callback = nullptr;
    QPdfPageRenderer_ChildEvent_Callback qpdfpagerenderer_childevent_callback = nullptr;
    QPdfPageRenderer_CustomEvent_Callback qpdfpagerenderer_customevent_callback = nullptr;
    QPdfPageRenderer_ConnectNotify_Callback qpdfpagerenderer_connectnotify_callback = nullptr;
    QPdfPageRenderer_DisconnectNotify_Callback qpdfpagerenderer_disconnectnotify_callback = nullptr;
    QPdfPageRenderer_Sender_Callback qpdfpagerenderer_sender_callback = nullptr;
    QPdfPageRenderer_SenderSignalIndex_Callback qpdfpagerenderer_sendersignalindex_callback = nullptr;
    QPdfPageRenderer_Receivers_Callback qpdfpagerenderer_receivers_callback = nullptr;
    QPdfPageRenderer_IsSignalConnected_Callback qpdfpagerenderer_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qpdfpagerenderer_metacall_isbase = false;
    mutable bool qpdfpagerenderer_event_isbase = false;
    mutable bool qpdfpagerenderer_eventfilter_isbase = false;
    mutable bool qpdfpagerenderer_timerevent_isbase = false;
    mutable bool qpdfpagerenderer_childevent_isbase = false;
    mutable bool qpdfpagerenderer_customevent_isbase = false;
    mutable bool qpdfpagerenderer_connectnotify_isbase = false;
    mutable bool qpdfpagerenderer_disconnectnotify_isbase = false;
    mutable bool qpdfpagerenderer_sender_isbase = false;
    mutable bool qpdfpagerenderer_sendersignalindex_isbase = false;
    mutable bool qpdfpagerenderer_receivers_isbase = false;
    mutable bool qpdfpagerenderer_issignalconnected_isbase = false;

  public:
    VirtualQPdfPageRenderer() : QPdfPageRenderer(){};
    VirtualQPdfPageRenderer(QObject* parent) : QPdfPageRenderer(parent){};

    ~VirtualQPdfPageRenderer() {
        qpdfpagerenderer_metacall_callback = nullptr;
        qpdfpagerenderer_event_callback = nullptr;
        qpdfpagerenderer_eventfilter_callback = nullptr;
        qpdfpagerenderer_timerevent_callback = nullptr;
        qpdfpagerenderer_childevent_callback = nullptr;
        qpdfpagerenderer_customevent_callback = nullptr;
        qpdfpagerenderer_connectnotify_callback = nullptr;
        qpdfpagerenderer_disconnectnotify_callback = nullptr;
        qpdfpagerenderer_sender_callback = nullptr;
        qpdfpagerenderer_sendersignalindex_callback = nullptr;
        qpdfpagerenderer_receivers_callback = nullptr;
        qpdfpagerenderer_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQPdfPageRenderer_Metacall_Callback(QPdfPageRenderer_Metacall_Callback cb) { qpdfpagerenderer_metacall_callback = cb; }
    void setQPdfPageRenderer_Event_Callback(QPdfPageRenderer_Event_Callback cb) { qpdfpagerenderer_event_callback = cb; }
    void setQPdfPageRenderer_EventFilter_Callback(QPdfPageRenderer_EventFilter_Callback cb) { qpdfpagerenderer_eventfilter_callback = cb; }
    void setQPdfPageRenderer_TimerEvent_Callback(QPdfPageRenderer_TimerEvent_Callback cb) { qpdfpagerenderer_timerevent_callback = cb; }
    void setQPdfPageRenderer_ChildEvent_Callback(QPdfPageRenderer_ChildEvent_Callback cb) { qpdfpagerenderer_childevent_callback = cb; }
    void setQPdfPageRenderer_CustomEvent_Callback(QPdfPageRenderer_CustomEvent_Callback cb) { qpdfpagerenderer_customevent_callback = cb; }
    void setQPdfPageRenderer_ConnectNotify_Callback(QPdfPageRenderer_ConnectNotify_Callback cb) { qpdfpagerenderer_connectnotify_callback = cb; }
    void setQPdfPageRenderer_DisconnectNotify_Callback(QPdfPageRenderer_DisconnectNotify_Callback cb) { qpdfpagerenderer_disconnectnotify_callback = cb; }
    void setQPdfPageRenderer_Sender_Callback(QPdfPageRenderer_Sender_Callback cb) { qpdfpagerenderer_sender_callback = cb; }
    void setQPdfPageRenderer_SenderSignalIndex_Callback(QPdfPageRenderer_SenderSignalIndex_Callback cb) { qpdfpagerenderer_sendersignalindex_callback = cb; }
    void setQPdfPageRenderer_Receivers_Callback(QPdfPageRenderer_Receivers_Callback cb) { qpdfpagerenderer_receivers_callback = cb; }
    void setQPdfPageRenderer_IsSignalConnected_Callback(QPdfPageRenderer_IsSignalConnected_Callback cb) { qpdfpagerenderer_issignalconnected_callback = cb; }

    // Base flag setters
    void setQPdfPageRenderer_Metacall_IsBase(bool value) const { qpdfpagerenderer_metacall_isbase = value; }
    void setQPdfPageRenderer_Event_IsBase(bool value) const { qpdfpagerenderer_event_isbase = value; }
    void setQPdfPageRenderer_EventFilter_IsBase(bool value) const { qpdfpagerenderer_eventfilter_isbase = value; }
    void setQPdfPageRenderer_TimerEvent_IsBase(bool value) const { qpdfpagerenderer_timerevent_isbase = value; }
    void setQPdfPageRenderer_ChildEvent_IsBase(bool value) const { qpdfpagerenderer_childevent_isbase = value; }
    void setQPdfPageRenderer_CustomEvent_IsBase(bool value) const { qpdfpagerenderer_customevent_isbase = value; }
    void setQPdfPageRenderer_ConnectNotify_IsBase(bool value) const { qpdfpagerenderer_connectnotify_isbase = value; }
    void setQPdfPageRenderer_DisconnectNotify_IsBase(bool value) const { qpdfpagerenderer_disconnectnotify_isbase = value; }
    void setQPdfPageRenderer_Sender_IsBase(bool value) const { qpdfpagerenderer_sender_isbase = value; }
    void setQPdfPageRenderer_SenderSignalIndex_IsBase(bool value) const { qpdfpagerenderer_sendersignalindex_isbase = value; }
    void setQPdfPageRenderer_Receivers_IsBase(bool value) const { qpdfpagerenderer_receivers_isbase = value; }
    void setQPdfPageRenderer_IsSignalConnected_IsBase(bool value) const { qpdfpagerenderer_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpdfpagerenderer_metacall_isbase) {
            qpdfpagerenderer_metacall_isbase = false;
            return QPdfPageRenderer::qt_metacall(param1, param2, param3);
        } else if (qpdfpagerenderer_metacall_callback != nullptr) {
            return qpdfpagerenderer_metacall_callback(this, param1, param2, param3);
        } else {
            return QPdfPageRenderer::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpdfpagerenderer_event_isbase) {
            qpdfpagerenderer_event_isbase = false;
            return QPdfPageRenderer::event(event);
        } else if (qpdfpagerenderer_event_callback != nullptr) {
            return qpdfpagerenderer_event_callback(this, event);
        } else {
            return QPdfPageRenderer::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpdfpagerenderer_eventfilter_isbase) {
            qpdfpagerenderer_eventfilter_isbase = false;
            return QPdfPageRenderer::eventFilter(watched, event);
        } else if (qpdfpagerenderer_eventfilter_callback != nullptr) {
            return qpdfpagerenderer_eventfilter_callback(this, watched, event);
        } else {
            return QPdfPageRenderer::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpdfpagerenderer_timerevent_isbase) {
            qpdfpagerenderer_timerevent_isbase = false;
            QPdfPageRenderer::timerEvent(event);
        } else if (qpdfpagerenderer_timerevent_callback != nullptr) {
            qpdfpagerenderer_timerevent_callback(this, event);
        } else {
            QPdfPageRenderer::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpdfpagerenderer_childevent_isbase) {
            qpdfpagerenderer_childevent_isbase = false;
            QPdfPageRenderer::childEvent(event);
        } else if (qpdfpagerenderer_childevent_callback != nullptr) {
            qpdfpagerenderer_childevent_callback(this, event);
        } else {
            QPdfPageRenderer::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpdfpagerenderer_customevent_isbase) {
            qpdfpagerenderer_customevent_isbase = false;
            QPdfPageRenderer::customEvent(event);
        } else if (qpdfpagerenderer_customevent_callback != nullptr) {
            qpdfpagerenderer_customevent_callback(this, event);
        } else {
            QPdfPageRenderer::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpdfpagerenderer_connectnotify_isbase) {
            qpdfpagerenderer_connectnotify_isbase = false;
            QPdfPageRenderer::connectNotify(signal);
        } else if (qpdfpagerenderer_connectnotify_callback != nullptr) {
            qpdfpagerenderer_connectnotify_callback(this, signal);
        } else {
            QPdfPageRenderer::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpdfpagerenderer_disconnectnotify_isbase) {
            qpdfpagerenderer_disconnectnotify_isbase = false;
            QPdfPageRenderer::disconnectNotify(signal);
        } else if (qpdfpagerenderer_disconnectnotify_callback != nullptr) {
            qpdfpagerenderer_disconnectnotify_callback(this, signal);
        } else {
            QPdfPageRenderer::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpdfpagerenderer_sender_isbase) {
            qpdfpagerenderer_sender_isbase = false;
            return QPdfPageRenderer::sender();
        } else if (qpdfpagerenderer_sender_callback != nullptr) {
            return qpdfpagerenderer_sender_callback();
        } else {
            return QPdfPageRenderer::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpdfpagerenderer_sendersignalindex_isbase) {
            qpdfpagerenderer_sendersignalindex_isbase = false;
            return QPdfPageRenderer::senderSignalIndex();
        } else if (qpdfpagerenderer_sendersignalindex_callback != nullptr) {
            return qpdfpagerenderer_sendersignalindex_callback();
        } else {
            return QPdfPageRenderer::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpdfpagerenderer_receivers_isbase) {
            qpdfpagerenderer_receivers_isbase = false;
            return QPdfPageRenderer::receivers(signal);
        } else if (qpdfpagerenderer_receivers_callback != nullptr) {
            return qpdfpagerenderer_receivers_callback(this, signal);
        } else {
            return QPdfPageRenderer::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpdfpagerenderer_issignalconnected_isbase) {
            qpdfpagerenderer_issignalconnected_isbase = false;
            return QPdfPageRenderer::isSignalConnected(signal);
        } else if (qpdfpagerenderer_issignalconnected_callback != nullptr) {
            return qpdfpagerenderer_issignalconnected_callback(this, signal);
        } else {
            return QPdfPageRenderer::isSignalConnected(signal);
        }
    }
};

#endif
