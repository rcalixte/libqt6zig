#pragma once
#ifndef SRCC_LIBVIRTUALQSTYLE_H
#define SRCC_LIBVIRTUALQSTYLE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QStyle so that we can call protected methods
class VirtualQStyle final : public QStyle {

  public:
    // Virtual class boolean flag
    bool isVirtualQStyle = true;

    // Virtual class public types (including callbacks)
    using QStyle_Metacall_Callback = int (*)(QStyle*, int, int, void**);
    using QStyle_Polish_Callback = void (*)(QStyle*, QWidget*);
    using QStyle_Unpolish_Callback = void (*)(QStyle*, QWidget*);
    using QStyle_Polish2_Callback = void (*)(QStyle*, QApplication*);
    using QStyle_Unpolish2_Callback = void (*)(QStyle*, QApplication*);
    using QStyle_Polish3_Callback = void (*)(QStyle*, QPalette*);
    using QStyle_ItemTextRect_Callback = QRect* (*)(const QStyle*, QFontMetrics*, QRect*, int, bool, libqt_string);
    using QStyle_ItemPixmapRect_Callback = QRect* (*)(const QStyle*, QRect*, int, QPixmap*);
    using QStyle_DrawItemText_Callback = void (*)(const QStyle*, QPainter*, QRect*, int, QPalette*, bool, libqt_string, int);
    using QStyle_DrawItemPixmap_Callback = void (*)(const QStyle*, QPainter*, QRect*, int, QPixmap*);
    using QStyle_StandardPalette_Callback = QPalette* (*)();
    using QStyle_DrawPrimitive_Callback = void (*)(const QStyle*, int, QStyleOption*, QPainter*, QWidget*);
    using QStyle_DrawControl_Callback = void (*)(const QStyle*, int, QStyleOption*, QPainter*, QWidget*);
    using QStyle_SubElementRect_Callback = QRect* (*)(const QStyle*, int, QStyleOption*, QWidget*);
    using QStyle_DrawComplexControl_Callback = void (*)(const QStyle*, int, QStyleOptionComplex*, QPainter*, QWidget*);
    using QStyle_HitTestComplexControl_Callback = int (*)(const QStyle*, int, QStyleOptionComplex*, QPoint*, QWidget*);
    using QStyle_SubControlRect_Callback = QRect* (*)(const QStyle*, int, QStyleOptionComplex*, int, QWidget*);
    using QStyle_PixelMetric_Callback = int (*)(const QStyle*, int, QStyleOption*, QWidget*);
    using QStyle_SizeFromContents_Callback = QSize* (*)(const QStyle*, int, QStyleOption*, QSize*, QWidget*);
    using QStyle_StyleHint_Callback = int (*)(const QStyle*, int, QStyleOption*, QWidget*, QStyleHintReturn*);
    using QStyle_StandardPixmap_Callback = QPixmap* (*)(const QStyle*, int, QStyleOption*, QWidget*);
    using QStyle_StandardIcon_Callback = QIcon* (*)(const QStyle*, int, QStyleOption*, QWidget*);
    using QStyle_GeneratedIconPixmap_Callback = QPixmap* (*)(const QStyle*, int, QPixmap*, QStyleOption*);
    using QStyle_LayoutSpacing_Callback = int (*)(const QStyle*, int, int, int, QStyleOption*, QWidget*);
    using QStyle_Event_Callback = bool (*)(QStyle*, QEvent*);
    using QStyle_EventFilter_Callback = bool (*)(QStyle*, QObject*, QEvent*);
    using QStyle_TimerEvent_Callback = void (*)(QStyle*, QTimerEvent*);
    using QStyle_ChildEvent_Callback = void (*)(QStyle*, QChildEvent*);
    using QStyle_CustomEvent_Callback = void (*)(QStyle*, QEvent*);
    using QStyle_ConnectNotify_Callback = void (*)(QStyle*, QMetaMethod*);
    using QStyle_DisconnectNotify_Callback = void (*)(QStyle*, QMetaMethod*);
    using QStyle_Sender_Callback = QObject* (*)();
    using QStyle_SenderSignalIndex_Callback = int (*)();
    using QStyle_Receivers_Callback = int (*)(const QStyle*, const char*);
    using QStyle_IsSignalConnected_Callback = bool (*)(const QStyle*, QMetaMethod*);

  protected:
    // Instance callback storage
    QStyle_Metacall_Callback qstyle_metacall_callback = nullptr;
    QStyle_Polish_Callback qstyle_polish_callback = nullptr;
    QStyle_Unpolish_Callback qstyle_unpolish_callback = nullptr;
    QStyle_Polish2_Callback qstyle_polish2_callback = nullptr;
    QStyle_Unpolish2_Callback qstyle_unpolish2_callback = nullptr;
    QStyle_Polish3_Callback qstyle_polish3_callback = nullptr;
    QStyle_ItemTextRect_Callback qstyle_itemtextrect_callback = nullptr;
    QStyle_ItemPixmapRect_Callback qstyle_itempixmaprect_callback = nullptr;
    QStyle_DrawItemText_Callback qstyle_drawitemtext_callback = nullptr;
    QStyle_DrawItemPixmap_Callback qstyle_drawitempixmap_callback = nullptr;
    QStyle_StandardPalette_Callback qstyle_standardpalette_callback = nullptr;
    QStyle_DrawPrimitive_Callback qstyle_drawprimitive_callback = nullptr;
    QStyle_DrawControl_Callback qstyle_drawcontrol_callback = nullptr;
    QStyle_SubElementRect_Callback qstyle_subelementrect_callback = nullptr;
    QStyle_DrawComplexControl_Callback qstyle_drawcomplexcontrol_callback = nullptr;
    QStyle_HitTestComplexControl_Callback qstyle_hittestcomplexcontrol_callback = nullptr;
    QStyle_SubControlRect_Callback qstyle_subcontrolrect_callback = nullptr;
    QStyle_PixelMetric_Callback qstyle_pixelmetric_callback = nullptr;
    QStyle_SizeFromContents_Callback qstyle_sizefromcontents_callback = nullptr;
    QStyle_StyleHint_Callback qstyle_stylehint_callback = nullptr;
    QStyle_StandardPixmap_Callback qstyle_standardpixmap_callback = nullptr;
    QStyle_StandardIcon_Callback qstyle_standardicon_callback = nullptr;
    QStyle_GeneratedIconPixmap_Callback qstyle_generatediconpixmap_callback = nullptr;
    QStyle_LayoutSpacing_Callback qstyle_layoutspacing_callback = nullptr;
    QStyle_Event_Callback qstyle_event_callback = nullptr;
    QStyle_EventFilter_Callback qstyle_eventfilter_callback = nullptr;
    QStyle_TimerEvent_Callback qstyle_timerevent_callback = nullptr;
    QStyle_ChildEvent_Callback qstyle_childevent_callback = nullptr;
    QStyle_CustomEvent_Callback qstyle_customevent_callback = nullptr;
    QStyle_ConnectNotify_Callback qstyle_connectnotify_callback = nullptr;
    QStyle_DisconnectNotify_Callback qstyle_disconnectnotify_callback = nullptr;
    QStyle_Sender_Callback qstyle_sender_callback = nullptr;
    QStyle_SenderSignalIndex_Callback qstyle_sendersignalindex_callback = nullptr;
    QStyle_Receivers_Callback qstyle_receivers_callback = nullptr;
    QStyle_IsSignalConnected_Callback qstyle_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qstyle_metacall_isbase = false;
    mutable bool qstyle_polish_isbase = false;
    mutable bool qstyle_unpolish_isbase = false;
    mutable bool qstyle_polish2_isbase = false;
    mutable bool qstyle_unpolish2_isbase = false;
    mutable bool qstyle_polish3_isbase = false;
    mutable bool qstyle_itemtextrect_isbase = false;
    mutable bool qstyle_itempixmaprect_isbase = false;
    mutable bool qstyle_drawitemtext_isbase = false;
    mutable bool qstyle_drawitempixmap_isbase = false;
    mutable bool qstyle_standardpalette_isbase = false;
    mutable bool qstyle_drawprimitive_isbase = false;
    mutable bool qstyle_drawcontrol_isbase = false;
    mutable bool qstyle_subelementrect_isbase = false;
    mutable bool qstyle_drawcomplexcontrol_isbase = false;
    mutable bool qstyle_hittestcomplexcontrol_isbase = false;
    mutable bool qstyle_subcontrolrect_isbase = false;
    mutable bool qstyle_pixelmetric_isbase = false;
    mutable bool qstyle_sizefromcontents_isbase = false;
    mutable bool qstyle_stylehint_isbase = false;
    mutable bool qstyle_standardpixmap_isbase = false;
    mutable bool qstyle_standardicon_isbase = false;
    mutable bool qstyle_generatediconpixmap_isbase = false;
    mutable bool qstyle_layoutspacing_isbase = false;
    mutable bool qstyle_event_isbase = false;
    mutable bool qstyle_eventfilter_isbase = false;
    mutable bool qstyle_timerevent_isbase = false;
    mutable bool qstyle_childevent_isbase = false;
    mutable bool qstyle_customevent_isbase = false;
    mutable bool qstyle_connectnotify_isbase = false;
    mutable bool qstyle_disconnectnotify_isbase = false;
    mutable bool qstyle_sender_isbase = false;
    mutable bool qstyle_sendersignalindex_isbase = false;
    mutable bool qstyle_receivers_isbase = false;
    mutable bool qstyle_issignalconnected_isbase = false;

  public:
    VirtualQStyle() : QStyle() {};

    ~VirtualQStyle() {
        qstyle_metacall_callback = nullptr;
        qstyle_polish_callback = nullptr;
        qstyle_unpolish_callback = nullptr;
        qstyle_polish2_callback = nullptr;
        qstyle_unpolish2_callback = nullptr;
        qstyle_polish3_callback = nullptr;
        qstyle_itemtextrect_callback = nullptr;
        qstyle_itempixmaprect_callback = nullptr;
        qstyle_drawitemtext_callback = nullptr;
        qstyle_drawitempixmap_callback = nullptr;
        qstyle_standardpalette_callback = nullptr;
        qstyle_drawprimitive_callback = nullptr;
        qstyle_drawcontrol_callback = nullptr;
        qstyle_subelementrect_callback = nullptr;
        qstyle_drawcomplexcontrol_callback = nullptr;
        qstyle_hittestcomplexcontrol_callback = nullptr;
        qstyle_subcontrolrect_callback = nullptr;
        qstyle_pixelmetric_callback = nullptr;
        qstyle_sizefromcontents_callback = nullptr;
        qstyle_stylehint_callback = nullptr;
        qstyle_standardpixmap_callback = nullptr;
        qstyle_standardicon_callback = nullptr;
        qstyle_generatediconpixmap_callback = nullptr;
        qstyle_layoutspacing_callback = nullptr;
        qstyle_event_callback = nullptr;
        qstyle_eventfilter_callback = nullptr;
        qstyle_timerevent_callback = nullptr;
        qstyle_childevent_callback = nullptr;
        qstyle_customevent_callback = nullptr;
        qstyle_connectnotify_callback = nullptr;
        qstyle_disconnectnotify_callback = nullptr;
        qstyle_sender_callback = nullptr;
        qstyle_sendersignalindex_callback = nullptr;
        qstyle_receivers_callback = nullptr;
        qstyle_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQStyle_Metacall_Callback(QStyle_Metacall_Callback cb) { qstyle_metacall_callback = cb; }
    inline void setQStyle_Polish_Callback(QStyle_Polish_Callback cb) { qstyle_polish_callback = cb; }
    inline void setQStyle_Unpolish_Callback(QStyle_Unpolish_Callback cb) { qstyle_unpolish_callback = cb; }
    inline void setQStyle_Polish2_Callback(QStyle_Polish2_Callback cb) { qstyle_polish2_callback = cb; }
    inline void setQStyle_Unpolish2_Callback(QStyle_Unpolish2_Callback cb) { qstyle_unpolish2_callback = cb; }
    inline void setQStyle_Polish3_Callback(QStyle_Polish3_Callback cb) { qstyle_polish3_callback = cb; }
    inline void setQStyle_ItemTextRect_Callback(QStyle_ItemTextRect_Callback cb) { qstyle_itemtextrect_callback = cb; }
    inline void setQStyle_ItemPixmapRect_Callback(QStyle_ItemPixmapRect_Callback cb) { qstyle_itempixmaprect_callback = cb; }
    inline void setQStyle_DrawItemText_Callback(QStyle_DrawItemText_Callback cb) { qstyle_drawitemtext_callback = cb; }
    inline void setQStyle_DrawItemPixmap_Callback(QStyle_DrawItemPixmap_Callback cb) { qstyle_drawitempixmap_callback = cb; }
    inline void setQStyle_StandardPalette_Callback(QStyle_StandardPalette_Callback cb) { qstyle_standardpalette_callback = cb; }
    inline void setQStyle_DrawPrimitive_Callback(QStyle_DrawPrimitive_Callback cb) { qstyle_drawprimitive_callback = cb; }
    inline void setQStyle_DrawControl_Callback(QStyle_DrawControl_Callback cb) { qstyle_drawcontrol_callback = cb; }
    inline void setQStyle_SubElementRect_Callback(QStyle_SubElementRect_Callback cb) { qstyle_subelementrect_callback = cb; }
    inline void setQStyle_DrawComplexControl_Callback(QStyle_DrawComplexControl_Callback cb) { qstyle_drawcomplexcontrol_callback = cb; }
    inline void setQStyle_HitTestComplexControl_Callback(QStyle_HitTestComplexControl_Callback cb) { qstyle_hittestcomplexcontrol_callback = cb; }
    inline void setQStyle_SubControlRect_Callback(QStyle_SubControlRect_Callback cb) { qstyle_subcontrolrect_callback = cb; }
    inline void setQStyle_PixelMetric_Callback(QStyle_PixelMetric_Callback cb) { qstyle_pixelmetric_callback = cb; }
    inline void setQStyle_SizeFromContents_Callback(QStyle_SizeFromContents_Callback cb) { qstyle_sizefromcontents_callback = cb; }
    inline void setQStyle_StyleHint_Callback(QStyle_StyleHint_Callback cb) { qstyle_stylehint_callback = cb; }
    inline void setQStyle_StandardPixmap_Callback(QStyle_StandardPixmap_Callback cb) { qstyle_standardpixmap_callback = cb; }
    inline void setQStyle_StandardIcon_Callback(QStyle_StandardIcon_Callback cb) { qstyle_standardicon_callback = cb; }
    inline void setQStyle_GeneratedIconPixmap_Callback(QStyle_GeneratedIconPixmap_Callback cb) { qstyle_generatediconpixmap_callback = cb; }
    inline void setQStyle_LayoutSpacing_Callback(QStyle_LayoutSpacing_Callback cb) { qstyle_layoutspacing_callback = cb; }
    inline void setQStyle_Event_Callback(QStyle_Event_Callback cb) { qstyle_event_callback = cb; }
    inline void setQStyle_EventFilter_Callback(QStyle_EventFilter_Callback cb) { qstyle_eventfilter_callback = cb; }
    inline void setQStyle_TimerEvent_Callback(QStyle_TimerEvent_Callback cb) { qstyle_timerevent_callback = cb; }
    inline void setQStyle_ChildEvent_Callback(QStyle_ChildEvent_Callback cb) { qstyle_childevent_callback = cb; }
    inline void setQStyle_CustomEvent_Callback(QStyle_CustomEvent_Callback cb) { qstyle_customevent_callback = cb; }
    inline void setQStyle_ConnectNotify_Callback(QStyle_ConnectNotify_Callback cb) { qstyle_connectnotify_callback = cb; }
    inline void setQStyle_DisconnectNotify_Callback(QStyle_DisconnectNotify_Callback cb) { qstyle_disconnectnotify_callback = cb; }
    inline void setQStyle_Sender_Callback(QStyle_Sender_Callback cb) { qstyle_sender_callback = cb; }
    inline void setQStyle_SenderSignalIndex_Callback(QStyle_SenderSignalIndex_Callback cb) { qstyle_sendersignalindex_callback = cb; }
    inline void setQStyle_Receivers_Callback(QStyle_Receivers_Callback cb) { qstyle_receivers_callback = cb; }
    inline void setQStyle_IsSignalConnected_Callback(QStyle_IsSignalConnected_Callback cb) { qstyle_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQStyle_Metacall_IsBase(bool value) const { qstyle_metacall_isbase = value; }
    inline void setQStyle_Polish_IsBase(bool value) const { qstyle_polish_isbase = value; }
    inline void setQStyle_Unpolish_IsBase(bool value) const { qstyle_unpolish_isbase = value; }
    inline void setQStyle_Polish2_IsBase(bool value) const { qstyle_polish2_isbase = value; }
    inline void setQStyle_Unpolish2_IsBase(bool value) const { qstyle_unpolish2_isbase = value; }
    inline void setQStyle_Polish3_IsBase(bool value) const { qstyle_polish3_isbase = value; }
    inline void setQStyle_ItemTextRect_IsBase(bool value) const { qstyle_itemtextrect_isbase = value; }
    inline void setQStyle_ItemPixmapRect_IsBase(bool value) const { qstyle_itempixmaprect_isbase = value; }
    inline void setQStyle_DrawItemText_IsBase(bool value) const { qstyle_drawitemtext_isbase = value; }
    inline void setQStyle_DrawItemPixmap_IsBase(bool value) const { qstyle_drawitempixmap_isbase = value; }
    inline void setQStyle_StandardPalette_IsBase(bool value) const { qstyle_standardpalette_isbase = value; }
    inline void setQStyle_DrawPrimitive_IsBase(bool value) const { qstyle_drawprimitive_isbase = value; }
    inline void setQStyle_DrawControl_IsBase(bool value) const { qstyle_drawcontrol_isbase = value; }
    inline void setQStyle_SubElementRect_IsBase(bool value) const { qstyle_subelementrect_isbase = value; }
    inline void setQStyle_DrawComplexControl_IsBase(bool value) const { qstyle_drawcomplexcontrol_isbase = value; }
    inline void setQStyle_HitTestComplexControl_IsBase(bool value) const { qstyle_hittestcomplexcontrol_isbase = value; }
    inline void setQStyle_SubControlRect_IsBase(bool value) const { qstyle_subcontrolrect_isbase = value; }
    inline void setQStyle_PixelMetric_IsBase(bool value) const { qstyle_pixelmetric_isbase = value; }
    inline void setQStyle_SizeFromContents_IsBase(bool value) const { qstyle_sizefromcontents_isbase = value; }
    inline void setQStyle_StyleHint_IsBase(bool value) const { qstyle_stylehint_isbase = value; }
    inline void setQStyle_StandardPixmap_IsBase(bool value) const { qstyle_standardpixmap_isbase = value; }
    inline void setQStyle_StandardIcon_IsBase(bool value) const { qstyle_standardicon_isbase = value; }
    inline void setQStyle_GeneratedIconPixmap_IsBase(bool value) const { qstyle_generatediconpixmap_isbase = value; }
    inline void setQStyle_LayoutSpacing_IsBase(bool value) const { qstyle_layoutspacing_isbase = value; }
    inline void setQStyle_Event_IsBase(bool value) const { qstyle_event_isbase = value; }
    inline void setQStyle_EventFilter_IsBase(bool value) const { qstyle_eventfilter_isbase = value; }
    inline void setQStyle_TimerEvent_IsBase(bool value) const { qstyle_timerevent_isbase = value; }
    inline void setQStyle_ChildEvent_IsBase(bool value) const { qstyle_childevent_isbase = value; }
    inline void setQStyle_CustomEvent_IsBase(bool value) const { qstyle_customevent_isbase = value; }
    inline void setQStyle_ConnectNotify_IsBase(bool value) const { qstyle_connectnotify_isbase = value; }
    inline void setQStyle_DisconnectNotify_IsBase(bool value) const { qstyle_disconnectnotify_isbase = value; }
    inline void setQStyle_Sender_IsBase(bool value) const { qstyle_sender_isbase = value; }
    inline void setQStyle_SenderSignalIndex_IsBase(bool value) const { qstyle_sendersignalindex_isbase = value; }
    inline void setQStyle_Receivers_IsBase(bool value) const { qstyle_receivers_isbase = value; }
    inline void setQStyle_IsSignalConnected_IsBase(bool value) const { qstyle_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstyle_metacall_isbase) {
            qstyle_metacall_isbase = false;
            return QStyle::qt_metacall(param1, param2, param3);
        } else if (qstyle_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qstyle_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QStyle::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QWidget* widget) override {
        if (qstyle_polish_isbase) {
            qstyle_polish_isbase = false;
            QStyle::polish(widget);
        } else if (qstyle_polish_callback != nullptr) {
            QWidget* cbval1 = widget;

            qstyle_polish_callback(this, cbval1);
        } else {
            QStyle::polish(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void unpolish(QWidget* widget) override {
        if (qstyle_unpolish_isbase) {
            qstyle_unpolish_isbase = false;
            QStyle::unpolish(widget);
        } else if (qstyle_unpolish_callback != nullptr) {
            QWidget* cbval1 = widget;

            qstyle_unpolish_callback(this, cbval1);
        } else {
            QStyle::unpolish(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QApplication* application) override {
        if (qstyle_polish2_isbase) {
            qstyle_polish2_isbase = false;
            QStyle::polish(application);
        } else if (qstyle_polish2_callback != nullptr) {
            QApplication* cbval1 = application;

            qstyle_polish2_callback(this, cbval1);
        } else {
            QStyle::polish(application);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void unpolish(QApplication* application) override {
        if (qstyle_unpolish2_isbase) {
            qstyle_unpolish2_isbase = false;
            QStyle::unpolish(application);
        } else if (qstyle_unpolish2_callback != nullptr) {
            QApplication* cbval1 = application;

            qstyle_unpolish2_callback(this, cbval1);
        } else {
            QStyle::unpolish(application);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QPalette& palette) override {
        if (qstyle_polish3_isbase) {
            qstyle_polish3_isbase = false;
            QStyle::polish(palette);
        } else if (qstyle_polish3_callback != nullptr) {
            QPalette& palette_ret = palette;
            // Cast returned reference into pointer
            QPalette* cbval1 = &palette_ret;

            qstyle_polish3_callback(this, cbval1);
        } else {
            QStyle::polish(palette);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect itemTextRect(const QFontMetrics& fm, const QRect& r, int flags, bool enabled, const QString& text) const override {
        if (qstyle_itemtextrect_isbase) {
            qstyle_itemtextrect_isbase = false;
            return QStyle::itemTextRect(fm, r, flags, enabled, text);
        } else if (qstyle_itemtextrect_callback != nullptr) {
            const QFontMetrics& fm_ret = fm;
            // Cast returned reference into pointer
            QFontMetrics* cbval1 = const_cast<QFontMetrics*>(&fm_ret);
            const QRect& r_ret = r;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&r_ret);
            int cbval3 = flags;
            bool cbval4 = enabled;
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval5 = text_str;

            QRect* callback_ret = qstyle_itemtextrect_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return *callback_ret;
        } else {
            return QStyle::itemTextRect(fm, r, flags, enabled, text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect itemPixmapRect(const QRect& r, int flags, const QPixmap& pixmap) const override {
        if (qstyle_itempixmaprect_isbase) {
            qstyle_itempixmaprect_isbase = false;
            return QStyle::itemPixmapRect(r, flags, pixmap);
        } else if (qstyle_itempixmaprect_callback != nullptr) {
            const QRect& r_ret = r;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&r_ret);
            int cbval2 = flags;
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval3 = const_cast<QPixmap*>(&pixmap_ret);

            QRect* callback_ret = qstyle_itempixmaprect_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QStyle::itemPixmapRect(r, flags, pixmap);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawItemText(QPainter* painter, const QRect& rect, int flags, const QPalette& pal, bool enabled, const QString& text, QPalette::ColorRole textRole) const override {
        if (qstyle_drawitemtext_isbase) {
            qstyle_drawitemtext_isbase = false;
            QStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
        } else if (qstyle_drawitemtext_callback != nullptr) {
            QPainter* cbval1 = painter;
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&rect_ret);
            int cbval3 = flags;
            const QPalette& pal_ret = pal;
            // Cast returned reference into pointer
            QPalette* cbval4 = const_cast<QPalette*>(&pal_ret);
            bool cbval5 = enabled;
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval6 = text_str;
            int cbval7 = static_cast<int>(textRole);

            qstyle_drawitemtext_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7);
        } else {
            QStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawItemPixmap(QPainter* painter, const QRect& rect, int alignment, const QPixmap& pixmap) const override {
        if (qstyle_drawitempixmap_isbase) {
            qstyle_drawitempixmap_isbase = false;
            QStyle::drawItemPixmap(painter, rect, alignment, pixmap);
        } else if (qstyle_drawitempixmap_callback != nullptr) {
            QPainter* cbval1 = painter;
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&rect_ret);
            int cbval3 = alignment;
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval4 = const_cast<QPixmap*>(&pixmap_ret);

            qstyle_drawitempixmap_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QStyle::drawItemPixmap(painter, rect, alignment, pixmap);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPalette standardPalette() const override {
        if (qstyle_standardpalette_isbase) {
            qstyle_standardpalette_isbase = false;
            return QStyle::standardPalette();
        } else if (qstyle_standardpalette_callback != nullptr) {
            QPalette* callback_ret = qstyle_standardpalette_callback();
            return *callback_ret;
        } else {
            return QStyle::standardPalette();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption* opt, QPainter* p, const QWidget* w) const override {
        if (qstyle_drawprimitive_callback != nullptr) {
            int cbval1 = static_cast<int>(pe);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            QPainter* cbval3 = p;
            QWidget* cbval4 = (QWidget*)w;

            qstyle_drawprimitive_callback(this, cbval1, cbval2, cbval3, cbval4);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawControl(QStyle::ControlElement element, const QStyleOption* opt, QPainter* p, const QWidget* w) const override {
        if (qstyle_drawcontrol_callback != nullptr) {
            int cbval1 = static_cast<int>(element);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            QPainter* cbval3 = p;
            QWidget* cbval4 = (QWidget*)w;

            qstyle_drawcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect subElementRect(QStyle::SubElement subElement, const QStyleOption* option, const QWidget* widget) const override {
        if (qstyle_subelementrect_callback != nullptr) {
            int cbval1 = static_cast<int>(subElement);
            QStyleOption* cbval2 = (QStyleOption*)option;
            QWidget* cbval3 = (QWidget*)widget;

            QRect* callback_ret = qstyle_subelementrect_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, QPainter* p, const QWidget* widget) const override {
        if (qstyle_drawcomplexcontrol_callback != nullptr) {
            int cbval1 = static_cast<int>(cc);
            QStyleOptionComplex* cbval2 = (QStyleOptionComplex*)opt;
            QPainter* cbval3 = p;
            QWidget* cbval4 = (QWidget*)widget;

            qstyle_drawcomplexcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStyle::SubControl hitTestComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, const QPoint& pt, const QWidget* widget) const override {
        if (qstyle_hittestcomplexcontrol_callback != nullptr) {
            int cbval1 = static_cast<int>(cc);
            QStyleOptionComplex* cbval2 = (QStyleOptionComplex*)opt;
            const QPoint& pt_ret = pt;
            // Cast returned reference into pointer
            QPoint* cbval3 = const_cast<QPoint*>(&pt_ret);
            QWidget* cbval4 = (QWidget*)widget;

            int callback_ret = qstyle_hittestcomplexcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
            return static_cast<QStyle::SubControl>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, QStyle::SubControl sc, const QWidget* widget) const override {
        if (qstyle_subcontrolrect_callback != nullptr) {
            int cbval1 = static_cast<int>(cc);
            QStyleOptionComplex* cbval2 = (QStyleOptionComplex*)opt;
            int cbval3 = static_cast<int>(sc);
            QWidget* cbval4 = (QWidget*)widget;

            QRect* callback_ret = qstyle_subcontrolrect_callback(this, cbval1, cbval2, cbval3, cbval4);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int pixelMetric(QStyle::PixelMetric metric, const QStyleOption* option, const QWidget* widget) const override {
        if (qstyle_pixelmetric_callback != nullptr) {
            int cbval1 = static_cast<int>(metric);
            QStyleOption* cbval2 = (QStyleOption*)option;
            QWidget* cbval3 = (QWidget*)widget;

            int callback_ret = qstyle_pixelmetric_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeFromContents(QStyle::ContentsType ct, const QStyleOption* opt, const QSize& contentsSize, const QWidget* w) const override {
        if (qstyle_sizefromcontents_callback != nullptr) {
            int cbval1 = static_cast<int>(ct);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            const QSize& contentsSize_ret = contentsSize;
            // Cast returned reference into pointer
            QSize* cbval3 = const_cast<QSize*>(&contentsSize_ret);
            QWidget* cbval4 = (QWidget*)w;

            QSize* callback_ret = qstyle_sizefromcontents_callback(this, cbval1, cbval2, cbval3, cbval4);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleHint(QStyle::StyleHint stylehint, const QStyleOption* opt, const QWidget* widget, QStyleHintReturn* returnData) const override {
        if (qstyle_stylehint_callback != nullptr) {
            int cbval1 = static_cast<int>(stylehint);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            QWidget* cbval3 = (QWidget*)widget;
            QStyleHintReturn* cbval4 = returnData;

            int callback_ret = qstyle_stylehint_callback(this, cbval1, cbval2, cbval3, cbval4);
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap standardPixmap(QStyle::StandardPixmap standardPixmap, const QStyleOption* opt, const QWidget* widget) const override {
        if (qstyle_standardpixmap_callback != nullptr) {
            int cbval1 = static_cast<int>(standardPixmap);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            QWidget* cbval3 = (QWidget*)widget;

            QPixmap* callback_ret = qstyle_standardpixmap_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QIcon standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption* option, const QWidget* widget) const override {
        if (qstyle_standardicon_callback != nullptr) {
            int cbval1 = static_cast<int>(standardIcon);
            QStyleOption* cbval2 = (QStyleOption*)option;
            QWidget* cbval3 = (QWidget*)widget;

            QIcon* callback_ret = qstyle_standardicon_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap generatedIconPixmap(QIcon::Mode iconMode, const QPixmap& pixmap, const QStyleOption* opt) const override {
        if (qstyle_generatediconpixmap_callback != nullptr) {
            int cbval1 = static_cast<int>(iconMode);
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval2 = const_cast<QPixmap*>(&pixmap_ret);
            QStyleOption* cbval3 = (QStyleOption*)opt;

            QPixmap* callback_ret = qstyle_generatediconpixmap_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption* option, const QWidget* widget) const override {
        if (qstyle_layoutspacing_callback != nullptr) {
            int cbval1 = static_cast<int>(control1);
            int cbval2 = static_cast<int>(control2);
            int cbval3 = static_cast<int>(orientation);
            QStyleOption* cbval4 = (QStyleOption*)option;
            QWidget* cbval5 = (QWidget*)widget;

            int callback_ret = qstyle_layoutspacing_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qstyle_event_isbase) {
            qstyle_event_isbase = false;
            return QStyle::event(event);
        } else if (qstyle_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qstyle_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QStyle::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstyle_eventfilter_isbase) {
            qstyle_eventfilter_isbase = false;
            return QStyle::eventFilter(watched, event);
        } else if (qstyle_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qstyle_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QStyle::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstyle_timerevent_isbase) {
            qstyle_timerevent_isbase = false;
            QStyle::timerEvent(event);
        } else if (qstyle_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qstyle_timerevent_callback(this, cbval1);
        } else {
            QStyle::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qstyle_childevent_isbase) {
            qstyle_childevent_isbase = false;
            QStyle::childEvent(event);
        } else if (qstyle_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qstyle_childevent_callback(this, cbval1);
        } else {
            QStyle::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstyle_customevent_isbase) {
            qstyle_customevent_isbase = false;
            QStyle::customEvent(event);
        } else if (qstyle_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qstyle_customevent_callback(this, cbval1);
        } else {
            QStyle::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstyle_connectnotify_isbase) {
            qstyle_connectnotify_isbase = false;
            QStyle::connectNotify(signal);
        } else if (qstyle_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qstyle_connectnotify_callback(this, cbval1);
        } else {
            QStyle::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstyle_disconnectnotify_isbase) {
            qstyle_disconnectnotify_isbase = false;
            QStyle::disconnectNotify(signal);
        } else if (qstyle_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qstyle_disconnectnotify_callback(this, cbval1);
        } else {
            QStyle::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qstyle_sender_isbase) {
            qstyle_sender_isbase = false;
            return QStyle::sender();
        } else if (qstyle_sender_callback != nullptr) {
            QObject* callback_ret = qstyle_sender_callback();
            return callback_ret;
        } else {
            return QStyle::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qstyle_sendersignalindex_isbase) {
            qstyle_sendersignalindex_isbase = false;
            return QStyle::senderSignalIndex();
        } else if (qstyle_sendersignalindex_callback != nullptr) {
            int callback_ret = qstyle_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QStyle::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qstyle_receivers_isbase) {
            qstyle_receivers_isbase = false;
            return QStyle::receivers(signal);
        } else if (qstyle_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qstyle_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QStyle::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qstyle_issignalconnected_isbase) {
            qstyle_issignalconnected_isbase = false;
            return QStyle::isSignalConnected(signal);
        } else if (qstyle_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qstyle_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QStyle::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QStyle_TimerEvent(QStyle* self, QTimerEvent* event);
    friend void QStyle_QBaseTimerEvent(QStyle* self, QTimerEvent* event);
    friend void QStyle_ChildEvent(QStyle* self, QChildEvent* event);
    friend void QStyle_QBaseChildEvent(QStyle* self, QChildEvent* event);
    friend void QStyle_CustomEvent(QStyle* self, QEvent* event);
    friend void QStyle_QBaseCustomEvent(QStyle* self, QEvent* event);
    friend void QStyle_ConnectNotify(QStyle* self, const QMetaMethod* signal);
    friend void QStyle_QBaseConnectNotify(QStyle* self, const QMetaMethod* signal);
    friend void QStyle_DisconnectNotify(QStyle* self, const QMetaMethod* signal);
    friend void QStyle_QBaseDisconnectNotify(QStyle* self, const QMetaMethod* signal);
    friend QObject* QStyle_Sender(const QStyle* self);
    friend QObject* QStyle_QBaseSender(const QStyle* self);
    friend int QStyle_SenderSignalIndex(const QStyle* self);
    friend int QStyle_QBaseSenderSignalIndex(const QStyle* self);
    friend int QStyle_Receivers(const QStyle* self, const char* signal);
    friend int QStyle_QBaseReceivers(const QStyle* self, const char* signal);
    friend bool QStyle_IsSignalConnected(const QStyle* self, const QMetaMethod* signal);
    friend bool QStyle_QBaseIsSignalConnected(const QStyle* self, const QMetaMethod* signal);
};

#endif
