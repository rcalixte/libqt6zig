#pragma once
#ifndef SRCC_LIBVIRTUALQCOMMONSTYLE_H
#define SRCC_LIBVIRTUALQCOMMONSTYLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QCommonStyle so that we can call protected methods
class VirtualQCommonStyle final : public QCommonStyle {

  public:
    // Virtual class boolean flag
    bool isVirtualQCommonStyle = true;

    // Virtual class public types (including callbacks)
    using QCommonStyle_Metacall_Callback = int (*)(QCommonStyle*, int, int, void**);
    using QCommonStyle_DrawPrimitive_Callback = void (*)(const QCommonStyle*, int, QStyleOption*, QPainter*, QWidget*);
    using QCommonStyle_DrawControl_Callback = void (*)(const QCommonStyle*, int, QStyleOption*, QPainter*, QWidget*);
    using QCommonStyle_SubElementRect_Callback = QRect* (*)(const QCommonStyle*, int, QStyleOption*, QWidget*);
    using QCommonStyle_DrawComplexControl_Callback = void (*)(const QCommonStyle*, int, QStyleOptionComplex*, QPainter*, QWidget*);
    using QCommonStyle_HitTestComplexControl_Callback = int (*)(const QCommonStyle*, int, QStyleOptionComplex*, QPoint*, QWidget*);
    using QCommonStyle_SubControlRect_Callback = QRect* (*)(const QCommonStyle*, int, QStyleOptionComplex*, int, QWidget*);
    using QCommonStyle_SizeFromContents_Callback = QSize* (*)(const QCommonStyle*, int, QStyleOption*, QSize*, QWidget*);
    using QCommonStyle_PixelMetric_Callback = int (*)(const QCommonStyle*, int, QStyleOption*, QWidget*);
    using QCommonStyle_StyleHint_Callback = int (*)(const QCommonStyle*, int, QStyleOption*, QWidget*, QStyleHintReturn*);
    using QCommonStyle_StandardIcon_Callback = QIcon* (*)(const QCommonStyle*, int, QStyleOption*, QWidget*);
    using QCommonStyle_StandardPixmap_Callback = QPixmap* (*)(const QCommonStyle*, int, QStyleOption*, QWidget*);
    using QCommonStyle_GeneratedIconPixmap_Callback = QPixmap* (*)(const QCommonStyle*, int, QPixmap*, QStyleOption*);
    using QCommonStyle_LayoutSpacing_Callback = int (*)(const QCommonStyle*, int, int, int, QStyleOption*, QWidget*);
    using QCommonStyle_Polish_Callback = void (*)(QCommonStyle*, QPalette*);
    using QCommonStyle_Polish2_Callback = void (*)(QCommonStyle*, QApplication*);
    using QCommonStyle_Polish3_Callback = void (*)(QCommonStyle*, QWidget*);
    using QCommonStyle_Unpolish_Callback = void (*)(QCommonStyle*, QWidget*);
    using QCommonStyle_Unpolish2_Callback = void (*)(QCommonStyle*, QApplication*);
    using QCommonStyle_ItemTextRect_Callback = QRect* (*)(const QCommonStyle*, QFontMetrics*, QRect*, int, bool, libqt_string);
    using QCommonStyle_ItemPixmapRect_Callback = QRect* (*)(const QCommonStyle*, QRect*, int, QPixmap*);
    using QCommonStyle_DrawItemText_Callback = void (*)(const QCommonStyle*, QPainter*, QRect*, int, QPalette*, bool, libqt_string, int);
    using QCommonStyle_DrawItemPixmap_Callback = void (*)(const QCommonStyle*, QPainter*, QRect*, int, QPixmap*);
    using QCommonStyle_StandardPalette_Callback = QPalette* (*)();
    using QCommonStyle_Event_Callback = bool (*)(QCommonStyle*, QEvent*);
    using QCommonStyle_EventFilter_Callback = bool (*)(QCommonStyle*, QObject*, QEvent*);
    using QCommonStyle_TimerEvent_Callback = void (*)(QCommonStyle*, QTimerEvent*);
    using QCommonStyle_ChildEvent_Callback = void (*)(QCommonStyle*, QChildEvent*);
    using QCommonStyle_CustomEvent_Callback = void (*)(QCommonStyle*, QEvent*);
    using QCommonStyle_ConnectNotify_Callback = void (*)(QCommonStyle*, QMetaMethod*);
    using QCommonStyle_DisconnectNotify_Callback = void (*)(QCommonStyle*, QMetaMethod*);
    using QCommonStyle_Sender_Callback = QObject* (*)();
    using QCommonStyle_SenderSignalIndex_Callback = int (*)();
    using QCommonStyle_Receivers_Callback = int (*)(const QCommonStyle*, const char*);
    using QCommonStyle_IsSignalConnected_Callback = bool (*)(const QCommonStyle*, QMetaMethod*);

  protected:
    // Instance callback storage
    QCommonStyle_Metacall_Callback qcommonstyle_metacall_callback = nullptr;
    QCommonStyle_DrawPrimitive_Callback qcommonstyle_drawprimitive_callback = nullptr;
    QCommonStyle_DrawControl_Callback qcommonstyle_drawcontrol_callback = nullptr;
    QCommonStyle_SubElementRect_Callback qcommonstyle_subelementrect_callback = nullptr;
    QCommonStyle_DrawComplexControl_Callback qcommonstyle_drawcomplexcontrol_callback = nullptr;
    QCommonStyle_HitTestComplexControl_Callback qcommonstyle_hittestcomplexcontrol_callback = nullptr;
    QCommonStyle_SubControlRect_Callback qcommonstyle_subcontrolrect_callback = nullptr;
    QCommonStyle_SizeFromContents_Callback qcommonstyle_sizefromcontents_callback = nullptr;
    QCommonStyle_PixelMetric_Callback qcommonstyle_pixelmetric_callback = nullptr;
    QCommonStyle_StyleHint_Callback qcommonstyle_stylehint_callback = nullptr;
    QCommonStyle_StandardIcon_Callback qcommonstyle_standardicon_callback = nullptr;
    QCommonStyle_StandardPixmap_Callback qcommonstyle_standardpixmap_callback = nullptr;
    QCommonStyle_GeneratedIconPixmap_Callback qcommonstyle_generatediconpixmap_callback = nullptr;
    QCommonStyle_LayoutSpacing_Callback qcommonstyle_layoutspacing_callback = nullptr;
    QCommonStyle_Polish_Callback qcommonstyle_polish_callback = nullptr;
    QCommonStyle_Polish2_Callback qcommonstyle_polish2_callback = nullptr;
    QCommonStyle_Polish3_Callback qcommonstyle_polish3_callback = nullptr;
    QCommonStyle_Unpolish_Callback qcommonstyle_unpolish_callback = nullptr;
    QCommonStyle_Unpolish2_Callback qcommonstyle_unpolish2_callback = nullptr;
    QCommonStyle_ItemTextRect_Callback qcommonstyle_itemtextrect_callback = nullptr;
    QCommonStyle_ItemPixmapRect_Callback qcommonstyle_itempixmaprect_callback = nullptr;
    QCommonStyle_DrawItemText_Callback qcommonstyle_drawitemtext_callback = nullptr;
    QCommonStyle_DrawItemPixmap_Callback qcommonstyle_drawitempixmap_callback = nullptr;
    QCommonStyle_StandardPalette_Callback qcommonstyle_standardpalette_callback = nullptr;
    QCommonStyle_Event_Callback qcommonstyle_event_callback = nullptr;
    QCommonStyle_EventFilter_Callback qcommonstyle_eventfilter_callback = nullptr;
    QCommonStyle_TimerEvent_Callback qcommonstyle_timerevent_callback = nullptr;
    QCommonStyle_ChildEvent_Callback qcommonstyle_childevent_callback = nullptr;
    QCommonStyle_CustomEvent_Callback qcommonstyle_customevent_callback = nullptr;
    QCommonStyle_ConnectNotify_Callback qcommonstyle_connectnotify_callback = nullptr;
    QCommonStyle_DisconnectNotify_Callback qcommonstyle_disconnectnotify_callback = nullptr;
    QCommonStyle_Sender_Callback qcommonstyle_sender_callback = nullptr;
    QCommonStyle_SenderSignalIndex_Callback qcommonstyle_sendersignalindex_callback = nullptr;
    QCommonStyle_Receivers_Callback qcommonstyle_receivers_callback = nullptr;
    QCommonStyle_IsSignalConnected_Callback qcommonstyle_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qcommonstyle_metacall_isbase = false;
    mutable bool qcommonstyle_drawprimitive_isbase = false;
    mutable bool qcommonstyle_drawcontrol_isbase = false;
    mutable bool qcommonstyle_subelementrect_isbase = false;
    mutable bool qcommonstyle_drawcomplexcontrol_isbase = false;
    mutable bool qcommonstyle_hittestcomplexcontrol_isbase = false;
    mutable bool qcommonstyle_subcontrolrect_isbase = false;
    mutable bool qcommonstyle_sizefromcontents_isbase = false;
    mutable bool qcommonstyle_pixelmetric_isbase = false;
    mutable bool qcommonstyle_stylehint_isbase = false;
    mutable bool qcommonstyle_standardicon_isbase = false;
    mutable bool qcommonstyle_standardpixmap_isbase = false;
    mutable bool qcommonstyle_generatediconpixmap_isbase = false;
    mutable bool qcommonstyle_layoutspacing_isbase = false;
    mutable bool qcommonstyle_polish_isbase = false;
    mutable bool qcommonstyle_polish2_isbase = false;
    mutable bool qcommonstyle_polish3_isbase = false;
    mutable bool qcommonstyle_unpolish_isbase = false;
    mutable bool qcommonstyle_unpolish2_isbase = false;
    mutable bool qcommonstyle_itemtextrect_isbase = false;
    mutable bool qcommonstyle_itempixmaprect_isbase = false;
    mutable bool qcommonstyle_drawitemtext_isbase = false;
    mutable bool qcommonstyle_drawitempixmap_isbase = false;
    mutable bool qcommonstyle_standardpalette_isbase = false;
    mutable bool qcommonstyle_event_isbase = false;
    mutable bool qcommonstyle_eventfilter_isbase = false;
    mutable bool qcommonstyle_timerevent_isbase = false;
    mutable bool qcommonstyle_childevent_isbase = false;
    mutable bool qcommonstyle_customevent_isbase = false;
    mutable bool qcommonstyle_connectnotify_isbase = false;
    mutable bool qcommonstyle_disconnectnotify_isbase = false;
    mutable bool qcommonstyle_sender_isbase = false;
    mutable bool qcommonstyle_sendersignalindex_isbase = false;
    mutable bool qcommonstyle_receivers_isbase = false;
    mutable bool qcommonstyle_issignalconnected_isbase = false;

  public:
    VirtualQCommonStyle() : QCommonStyle() {};

    ~VirtualQCommonStyle() {
        qcommonstyle_metacall_callback = nullptr;
        qcommonstyle_drawprimitive_callback = nullptr;
        qcommonstyle_drawcontrol_callback = nullptr;
        qcommonstyle_subelementrect_callback = nullptr;
        qcommonstyle_drawcomplexcontrol_callback = nullptr;
        qcommonstyle_hittestcomplexcontrol_callback = nullptr;
        qcommonstyle_subcontrolrect_callback = nullptr;
        qcommonstyle_sizefromcontents_callback = nullptr;
        qcommonstyle_pixelmetric_callback = nullptr;
        qcommonstyle_stylehint_callback = nullptr;
        qcommonstyle_standardicon_callback = nullptr;
        qcommonstyle_standardpixmap_callback = nullptr;
        qcommonstyle_generatediconpixmap_callback = nullptr;
        qcommonstyle_layoutspacing_callback = nullptr;
        qcommonstyle_polish_callback = nullptr;
        qcommonstyle_polish2_callback = nullptr;
        qcommonstyle_polish3_callback = nullptr;
        qcommonstyle_unpolish_callback = nullptr;
        qcommonstyle_unpolish2_callback = nullptr;
        qcommonstyle_itemtextrect_callback = nullptr;
        qcommonstyle_itempixmaprect_callback = nullptr;
        qcommonstyle_drawitemtext_callback = nullptr;
        qcommonstyle_drawitempixmap_callback = nullptr;
        qcommonstyle_standardpalette_callback = nullptr;
        qcommonstyle_event_callback = nullptr;
        qcommonstyle_eventfilter_callback = nullptr;
        qcommonstyle_timerevent_callback = nullptr;
        qcommonstyle_childevent_callback = nullptr;
        qcommonstyle_customevent_callback = nullptr;
        qcommonstyle_connectnotify_callback = nullptr;
        qcommonstyle_disconnectnotify_callback = nullptr;
        qcommonstyle_sender_callback = nullptr;
        qcommonstyle_sendersignalindex_callback = nullptr;
        qcommonstyle_receivers_callback = nullptr;
        qcommonstyle_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQCommonStyle_Metacall_Callback(QCommonStyle_Metacall_Callback cb) { qcommonstyle_metacall_callback = cb; }
    inline void setQCommonStyle_DrawPrimitive_Callback(QCommonStyle_DrawPrimitive_Callback cb) { qcommonstyle_drawprimitive_callback = cb; }
    inline void setQCommonStyle_DrawControl_Callback(QCommonStyle_DrawControl_Callback cb) { qcommonstyle_drawcontrol_callback = cb; }
    inline void setQCommonStyle_SubElementRect_Callback(QCommonStyle_SubElementRect_Callback cb) { qcommonstyle_subelementrect_callback = cb; }
    inline void setQCommonStyle_DrawComplexControl_Callback(QCommonStyle_DrawComplexControl_Callback cb) { qcommonstyle_drawcomplexcontrol_callback = cb; }
    inline void setQCommonStyle_HitTestComplexControl_Callback(QCommonStyle_HitTestComplexControl_Callback cb) { qcommonstyle_hittestcomplexcontrol_callback = cb; }
    inline void setQCommonStyle_SubControlRect_Callback(QCommonStyle_SubControlRect_Callback cb) { qcommonstyle_subcontrolrect_callback = cb; }
    inline void setQCommonStyle_SizeFromContents_Callback(QCommonStyle_SizeFromContents_Callback cb) { qcommonstyle_sizefromcontents_callback = cb; }
    inline void setQCommonStyle_PixelMetric_Callback(QCommonStyle_PixelMetric_Callback cb) { qcommonstyle_pixelmetric_callback = cb; }
    inline void setQCommonStyle_StyleHint_Callback(QCommonStyle_StyleHint_Callback cb) { qcommonstyle_stylehint_callback = cb; }
    inline void setQCommonStyle_StandardIcon_Callback(QCommonStyle_StandardIcon_Callback cb) { qcommonstyle_standardicon_callback = cb; }
    inline void setQCommonStyle_StandardPixmap_Callback(QCommonStyle_StandardPixmap_Callback cb) { qcommonstyle_standardpixmap_callback = cb; }
    inline void setQCommonStyle_GeneratedIconPixmap_Callback(QCommonStyle_GeneratedIconPixmap_Callback cb) { qcommonstyle_generatediconpixmap_callback = cb; }
    inline void setQCommonStyle_LayoutSpacing_Callback(QCommonStyle_LayoutSpacing_Callback cb) { qcommonstyle_layoutspacing_callback = cb; }
    inline void setQCommonStyle_Polish_Callback(QCommonStyle_Polish_Callback cb) { qcommonstyle_polish_callback = cb; }
    inline void setQCommonStyle_Polish2_Callback(QCommonStyle_Polish2_Callback cb) { qcommonstyle_polish2_callback = cb; }
    inline void setQCommonStyle_Polish3_Callback(QCommonStyle_Polish3_Callback cb) { qcommonstyle_polish3_callback = cb; }
    inline void setQCommonStyle_Unpolish_Callback(QCommonStyle_Unpolish_Callback cb) { qcommonstyle_unpolish_callback = cb; }
    inline void setQCommonStyle_Unpolish2_Callback(QCommonStyle_Unpolish2_Callback cb) { qcommonstyle_unpolish2_callback = cb; }
    inline void setQCommonStyle_ItemTextRect_Callback(QCommonStyle_ItemTextRect_Callback cb) { qcommonstyle_itemtextrect_callback = cb; }
    inline void setQCommonStyle_ItemPixmapRect_Callback(QCommonStyle_ItemPixmapRect_Callback cb) { qcommonstyle_itempixmaprect_callback = cb; }
    inline void setQCommonStyle_DrawItemText_Callback(QCommonStyle_DrawItemText_Callback cb) { qcommonstyle_drawitemtext_callback = cb; }
    inline void setQCommonStyle_DrawItemPixmap_Callback(QCommonStyle_DrawItemPixmap_Callback cb) { qcommonstyle_drawitempixmap_callback = cb; }
    inline void setQCommonStyle_StandardPalette_Callback(QCommonStyle_StandardPalette_Callback cb) { qcommonstyle_standardpalette_callback = cb; }
    inline void setQCommonStyle_Event_Callback(QCommonStyle_Event_Callback cb) { qcommonstyle_event_callback = cb; }
    inline void setQCommonStyle_EventFilter_Callback(QCommonStyle_EventFilter_Callback cb) { qcommonstyle_eventfilter_callback = cb; }
    inline void setQCommonStyle_TimerEvent_Callback(QCommonStyle_TimerEvent_Callback cb) { qcommonstyle_timerevent_callback = cb; }
    inline void setQCommonStyle_ChildEvent_Callback(QCommonStyle_ChildEvent_Callback cb) { qcommonstyle_childevent_callback = cb; }
    inline void setQCommonStyle_CustomEvent_Callback(QCommonStyle_CustomEvent_Callback cb) { qcommonstyle_customevent_callback = cb; }
    inline void setQCommonStyle_ConnectNotify_Callback(QCommonStyle_ConnectNotify_Callback cb) { qcommonstyle_connectnotify_callback = cb; }
    inline void setQCommonStyle_DisconnectNotify_Callback(QCommonStyle_DisconnectNotify_Callback cb) { qcommonstyle_disconnectnotify_callback = cb; }
    inline void setQCommonStyle_Sender_Callback(QCommonStyle_Sender_Callback cb) { qcommonstyle_sender_callback = cb; }
    inline void setQCommonStyle_SenderSignalIndex_Callback(QCommonStyle_SenderSignalIndex_Callback cb) { qcommonstyle_sendersignalindex_callback = cb; }
    inline void setQCommonStyle_Receivers_Callback(QCommonStyle_Receivers_Callback cb) { qcommonstyle_receivers_callback = cb; }
    inline void setQCommonStyle_IsSignalConnected_Callback(QCommonStyle_IsSignalConnected_Callback cb) { qcommonstyle_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQCommonStyle_Metacall_IsBase(bool value) const { qcommonstyle_metacall_isbase = value; }
    inline void setQCommonStyle_DrawPrimitive_IsBase(bool value) const { qcommonstyle_drawprimitive_isbase = value; }
    inline void setQCommonStyle_DrawControl_IsBase(bool value) const { qcommonstyle_drawcontrol_isbase = value; }
    inline void setQCommonStyle_SubElementRect_IsBase(bool value) const { qcommonstyle_subelementrect_isbase = value; }
    inline void setQCommonStyle_DrawComplexControl_IsBase(bool value) const { qcommonstyle_drawcomplexcontrol_isbase = value; }
    inline void setQCommonStyle_HitTestComplexControl_IsBase(bool value) const { qcommonstyle_hittestcomplexcontrol_isbase = value; }
    inline void setQCommonStyle_SubControlRect_IsBase(bool value) const { qcommonstyle_subcontrolrect_isbase = value; }
    inline void setQCommonStyle_SizeFromContents_IsBase(bool value) const { qcommonstyle_sizefromcontents_isbase = value; }
    inline void setQCommonStyle_PixelMetric_IsBase(bool value) const { qcommonstyle_pixelmetric_isbase = value; }
    inline void setQCommonStyle_StyleHint_IsBase(bool value) const { qcommonstyle_stylehint_isbase = value; }
    inline void setQCommonStyle_StandardIcon_IsBase(bool value) const { qcommonstyle_standardicon_isbase = value; }
    inline void setQCommonStyle_StandardPixmap_IsBase(bool value) const { qcommonstyle_standardpixmap_isbase = value; }
    inline void setQCommonStyle_GeneratedIconPixmap_IsBase(bool value) const { qcommonstyle_generatediconpixmap_isbase = value; }
    inline void setQCommonStyle_LayoutSpacing_IsBase(bool value) const { qcommonstyle_layoutspacing_isbase = value; }
    inline void setQCommonStyle_Polish_IsBase(bool value) const { qcommonstyle_polish_isbase = value; }
    inline void setQCommonStyle_Polish2_IsBase(bool value) const { qcommonstyle_polish2_isbase = value; }
    inline void setQCommonStyle_Polish3_IsBase(bool value) const { qcommonstyle_polish3_isbase = value; }
    inline void setQCommonStyle_Unpolish_IsBase(bool value) const { qcommonstyle_unpolish_isbase = value; }
    inline void setQCommonStyle_Unpolish2_IsBase(bool value) const { qcommonstyle_unpolish2_isbase = value; }
    inline void setQCommonStyle_ItemTextRect_IsBase(bool value) const { qcommonstyle_itemtextrect_isbase = value; }
    inline void setQCommonStyle_ItemPixmapRect_IsBase(bool value) const { qcommonstyle_itempixmaprect_isbase = value; }
    inline void setQCommonStyle_DrawItemText_IsBase(bool value) const { qcommonstyle_drawitemtext_isbase = value; }
    inline void setQCommonStyle_DrawItemPixmap_IsBase(bool value) const { qcommonstyle_drawitempixmap_isbase = value; }
    inline void setQCommonStyle_StandardPalette_IsBase(bool value) const { qcommonstyle_standardpalette_isbase = value; }
    inline void setQCommonStyle_Event_IsBase(bool value) const { qcommonstyle_event_isbase = value; }
    inline void setQCommonStyle_EventFilter_IsBase(bool value) const { qcommonstyle_eventfilter_isbase = value; }
    inline void setQCommonStyle_TimerEvent_IsBase(bool value) const { qcommonstyle_timerevent_isbase = value; }
    inline void setQCommonStyle_ChildEvent_IsBase(bool value) const { qcommonstyle_childevent_isbase = value; }
    inline void setQCommonStyle_CustomEvent_IsBase(bool value) const { qcommonstyle_customevent_isbase = value; }
    inline void setQCommonStyle_ConnectNotify_IsBase(bool value) const { qcommonstyle_connectnotify_isbase = value; }
    inline void setQCommonStyle_DisconnectNotify_IsBase(bool value) const { qcommonstyle_disconnectnotify_isbase = value; }
    inline void setQCommonStyle_Sender_IsBase(bool value) const { qcommonstyle_sender_isbase = value; }
    inline void setQCommonStyle_SenderSignalIndex_IsBase(bool value) const { qcommonstyle_sendersignalindex_isbase = value; }
    inline void setQCommonStyle_Receivers_IsBase(bool value) const { qcommonstyle_receivers_isbase = value; }
    inline void setQCommonStyle_IsSignalConnected_IsBase(bool value) const { qcommonstyle_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcommonstyle_metacall_isbase) {
            qcommonstyle_metacall_isbase = false;
            return QCommonStyle::qt_metacall(param1, param2, param3);
        } else if (qcommonstyle_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qcommonstyle_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QCommonStyle::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption* opt, QPainter* p, const QWidget* w) const override {
        if (qcommonstyle_drawprimitive_isbase) {
            qcommonstyle_drawprimitive_isbase = false;
            QCommonStyle::drawPrimitive(pe, opt, p, w);
        } else if (qcommonstyle_drawprimitive_callback != nullptr) {
            int cbval1 = static_cast<int>(pe);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            QPainter* cbval3 = p;
            QWidget* cbval4 = (QWidget*)w;

            qcommonstyle_drawprimitive_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QCommonStyle::drawPrimitive(pe, opt, p, w);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawControl(QStyle::ControlElement element, const QStyleOption* opt, QPainter* p, const QWidget* w) const override {
        if (qcommonstyle_drawcontrol_isbase) {
            qcommonstyle_drawcontrol_isbase = false;
            QCommonStyle::drawControl(element, opt, p, w);
        } else if (qcommonstyle_drawcontrol_callback != nullptr) {
            int cbval1 = static_cast<int>(element);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            QPainter* cbval3 = p;
            QWidget* cbval4 = (QWidget*)w;

            qcommonstyle_drawcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QCommonStyle::drawControl(element, opt, p, w);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect subElementRect(QStyle::SubElement r, const QStyleOption* opt, const QWidget* widget) const override {
        if (qcommonstyle_subelementrect_isbase) {
            qcommonstyle_subelementrect_isbase = false;
            return QCommonStyle::subElementRect(r, opt, widget);
        } else if (qcommonstyle_subelementrect_callback != nullptr) {
            int cbval1 = static_cast<int>(r);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            QWidget* cbval3 = (QWidget*)widget;

            QRect* callback_ret = qcommonstyle_subelementrect_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QCommonStyle::subElementRect(r, opt, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, QPainter* p, const QWidget* w) const override {
        if (qcommonstyle_drawcomplexcontrol_isbase) {
            qcommonstyle_drawcomplexcontrol_isbase = false;
            QCommonStyle::drawComplexControl(cc, opt, p, w);
        } else if (qcommonstyle_drawcomplexcontrol_callback != nullptr) {
            int cbval1 = static_cast<int>(cc);
            QStyleOptionComplex* cbval2 = (QStyleOptionComplex*)opt;
            QPainter* cbval3 = p;
            QWidget* cbval4 = (QWidget*)w;

            qcommonstyle_drawcomplexcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QCommonStyle::drawComplexControl(cc, opt, p, w);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStyle::SubControl hitTestComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, const QPoint& pt, const QWidget* w) const override {
        if (qcommonstyle_hittestcomplexcontrol_isbase) {
            qcommonstyle_hittestcomplexcontrol_isbase = false;
            return QCommonStyle::hitTestComplexControl(cc, opt, pt, w);
        } else if (qcommonstyle_hittestcomplexcontrol_callback != nullptr) {
            int cbval1 = static_cast<int>(cc);
            QStyleOptionComplex* cbval2 = (QStyleOptionComplex*)opt;
            const QPoint& pt_ret = pt;
            // Cast returned reference into pointer
            QPoint* cbval3 = const_cast<QPoint*>(&pt_ret);
            QWidget* cbval4 = (QWidget*)w;

            int callback_ret = qcommonstyle_hittestcomplexcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
            return static_cast<QStyle::SubControl>(callback_ret);
        } else {
            return QCommonStyle::hitTestComplexControl(cc, opt, pt, w);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, QStyle::SubControl sc, const QWidget* w) const override {
        if (qcommonstyle_subcontrolrect_isbase) {
            qcommonstyle_subcontrolrect_isbase = false;
            return QCommonStyle::subControlRect(cc, opt, sc, w);
        } else if (qcommonstyle_subcontrolrect_callback != nullptr) {
            int cbval1 = static_cast<int>(cc);
            QStyleOptionComplex* cbval2 = (QStyleOptionComplex*)opt;
            int cbval3 = static_cast<int>(sc);
            QWidget* cbval4 = (QWidget*)w;

            QRect* callback_ret = qcommonstyle_subcontrolrect_callback(this, cbval1, cbval2, cbval3, cbval4);
            return *callback_ret;
        } else {
            return QCommonStyle::subControlRect(cc, opt, sc, w);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeFromContents(QStyle::ContentsType ct, const QStyleOption* opt, const QSize& contentsSize, const QWidget* widget) const override {
        if (qcommonstyle_sizefromcontents_isbase) {
            qcommonstyle_sizefromcontents_isbase = false;
            return QCommonStyle::sizeFromContents(ct, opt, contentsSize, widget);
        } else if (qcommonstyle_sizefromcontents_callback != nullptr) {
            int cbval1 = static_cast<int>(ct);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            const QSize& contentsSize_ret = contentsSize;
            // Cast returned reference into pointer
            QSize* cbval3 = const_cast<QSize*>(&contentsSize_ret);
            QWidget* cbval4 = (QWidget*)widget;

            QSize* callback_ret = qcommonstyle_sizefromcontents_callback(this, cbval1, cbval2, cbval3, cbval4);
            return *callback_ret;
        } else {
            return QCommonStyle::sizeFromContents(ct, opt, contentsSize, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int pixelMetric(QStyle::PixelMetric m, const QStyleOption* opt, const QWidget* widget) const override {
        if (qcommonstyle_pixelmetric_isbase) {
            qcommonstyle_pixelmetric_isbase = false;
            return QCommonStyle::pixelMetric(m, opt, widget);
        } else if (qcommonstyle_pixelmetric_callback != nullptr) {
            int cbval1 = static_cast<int>(m);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            QWidget* cbval3 = (QWidget*)widget;

            int callback_ret = qcommonstyle_pixelmetric_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QCommonStyle::pixelMetric(m, opt, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleHint(QStyle::StyleHint sh, const QStyleOption* opt, const QWidget* w, QStyleHintReturn* shret) const override {
        if (qcommonstyle_stylehint_isbase) {
            qcommonstyle_stylehint_isbase = false;
            return QCommonStyle::styleHint(sh, opt, w, shret);
        } else if (qcommonstyle_stylehint_callback != nullptr) {
            int cbval1 = static_cast<int>(sh);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            QWidget* cbval3 = (QWidget*)w;
            QStyleHintReturn* cbval4 = shret;

            int callback_ret = qcommonstyle_stylehint_callback(this, cbval1, cbval2, cbval3, cbval4);
            return static_cast<int>(callback_ret);
        } else {
            return QCommonStyle::styleHint(sh, opt, w, shret);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QIcon standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption* opt, const QWidget* widget) const override {
        if (qcommonstyle_standardicon_isbase) {
            qcommonstyle_standardicon_isbase = false;
            return QCommonStyle::standardIcon(standardIcon, opt, widget);
        } else if (qcommonstyle_standardicon_callback != nullptr) {
            int cbval1 = static_cast<int>(standardIcon);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            QWidget* cbval3 = (QWidget*)widget;

            QIcon* callback_ret = qcommonstyle_standardicon_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QCommonStyle::standardIcon(standardIcon, opt, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap standardPixmap(QStyle::StandardPixmap sp, const QStyleOption* opt, const QWidget* widget) const override {
        if (qcommonstyle_standardpixmap_isbase) {
            qcommonstyle_standardpixmap_isbase = false;
            return QCommonStyle::standardPixmap(sp, opt, widget);
        } else if (qcommonstyle_standardpixmap_callback != nullptr) {
            int cbval1 = static_cast<int>(sp);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            QWidget* cbval3 = (QWidget*)widget;

            QPixmap* callback_ret = qcommonstyle_standardpixmap_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QCommonStyle::standardPixmap(sp, opt, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap generatedIconPixmap(QIcon::Mode iconMode, const QPixmap& pixmap, const QStyleOption* opt) const override {
        if (qcommonstyle_generatediconpixmap_isbase) {
            qcommonstyle_generatediconpixmap_isbase = false;
            return QCommonStyle::generatedIconPixmap(iconMode, pixmap, opt);
        } else if (qcommonstyle_generatediconpixmap_callback != nullptr) {
            int cbval1 = static_cast<int>(iconMode);
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval2 = const_cast<QPixmap*>(&pixmap_ret);
            QStyleOption* cbval3 = (QStyleOption*)opt;

            QPixmap* callback_ret = qcommonstyle_generatediconpixmap_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QCommonStyle::generatedIconPixmap(iconMode, pixmap, opt);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption* option, const QWidget* widget) const override {
        if (qcommonstyle_layoutspacing_isbase) {
            qcommonstyle_layoutspacing_isbase = false;
            return QCommonStyle::layoutSpacing(control1, control2, orientation, option, widget);
        } else if (qcommonstyle_layoutspacing_callback != nullptr) {
            int cbval1 = static_cast<int>(control1);
            int cbval2 = static_cast<int>(control2);
            int cbval3 = static_cast<int>(orientation);
            QStyleOption* cbval4 = (QStyleOption*)option;
            QWidget* cbval5 = (QWidget*)widget;

            int callback_ret = qcommonstyle_layoutspacing_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return static_cast<int>(callback_ret);
        } else {
            return QCommonStyle::layoutSpacing(control1, control2, orientation, option, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QPalette& param1) override {
        if (qcommonstyle_polish_isbase) {
            qcommonstyle_polish_isbase = false;
            QCommonStyle::polish(param1);
        } else if (qcommonstyle_polish_callback != nullptr) {
            QPalette& param1_ret = param1;
            // Cast returned reference into pointer
            QPalette* cbval1 = &param1_ret;

            qcommonstyle_polish_callback(this, cbval1);
        } else {
            QCommonStyle::polish(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QApplication* app) override {
        if (qcommonstyle_polish2_isbase) {
            qcommonstyle_polish2_isbase = false;
            QCommonStyle::polish(app);
        } else if (qcommonstyle_polish2_callback != nullptr) {
            QApplication* cbval1 = app;

            qcommonstyle_polish2_callback(this, cbval1);
        } else {
            QCommonStyle::polish(app);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QWidget* widget) override {
        if (qcommonstyle_polish3_isbase) {
            qcommonstyle_polish3_isbase = false;
            QCommonStyle::polish(widget);
        } else if (qcommonstyle_polish3_callback != nullptr) {
            QWidget* cbval1 = widget;

            qcommonstyle_polish3_callback(this, cbval1);
        } else {
            QCommonStyle::polish(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void unpolish(QWidget* widget) override {
        if (qcommonstyle_unpolish_isbase) {
            qcommonstyle_unpolish_isbase = false;
            QCommonStyle::unpolish(widget);
        } else if (qcommonstyle_unpolish_callback != nullptr) {
            QWidget* cbval1 = widget;

            qcommonstyle_unpolish_callback(this, cbval1);
        } else {
            QCommonStyle::unpolish(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void unpolish(QApplication* application) override {
        if (qcommonstyle_unpolish2_isbase) {
            qcommonstyle_unpolish2_isbase = false;
            QCommonStyle::unpolish(application);
        } else if (qcommonstyle_unpolish2_callback != nullptr) {
            QApplication* cbval1 = application;

            qcommonstyle_unpolish2_callback(this, cbval1);
        } else {
            QCommonStyle::unpolish(application);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect itemTextRect(const QFontMetrics& fm, const QRect& r, int flags, bool enabled, const QString& text) const override {
        if (qcommonstyle_itemtextrect_isbase) {
            qcommonstyle_itemtextrect_isbase = false;
            return QCommonStyle::itemTextRect(fm, r, flags, enabled, text);
        } else if (qcommonstyle_itemtextrect_callback != nullptr) {
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
            text_str.data = static_cast<const char*>(malloc((text_str.len + 1) * sizeof(char)));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval5 = text_str;

            QRect* callback_ret = qcommonstyle_itemtextrect_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return *callback_ret;
        } else {
            return QCommonStyle::itemTextRect(fm, r, flags, enabled, text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect itemPixmapRect(const QRect& r, int flags, const QPixmap& pixmap) const override {
        if (qcommonstyle_itempixmaprect_isbase) {
            qcommonstyle_itempixmaprect_isbase = false;
            return QCommonStyle::itemPixmapRect(r, flags, pixmap);
        } else if (qcommonstyle_itempixmaprect_callback != nullptr) {
            const QRect& r_ret = r;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&r_ret);
            int cbval2 = flags;
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval3 = const_cast<QPixmap*>(&pixmap_ret);

            QRect* callback_ret = qcommonstyle_itempixmaprect_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QCommonStyle::itemPixmapRect(r, flags, pixmap);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawItemText(QPainter* painter, const QRect& rect, int flags, const QPalette& pal, bool enabled, const QString& text, QPalette::ColorRole textRole) const override {
        if (qcommonstyle_drawitemtext_isbase) {
            qcommonstyle_drawitemtext_isbase = false;
            QCommonStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
        } else if (qcommonstyle_drawitemtext_callback != nullptr) {
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
            text_str.data = static_cast<const char*>(malloc((text_str.len + 1) * sizeof(char)));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval6 = text_str;
            int cbval7 = static_cast<int>(textRole);

            qcommonstyle_drawitemtext_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7);
        } else {
            QCommonStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawItemPixmap(QPainter* painter, const QRect& rect, int alignment, const QPixmap& pixmap) const override {
        if (qcommonstyle_drawitempixmap_isbase) {
            qcommonstyle_drawitempixmap_isbase = false;
            QCommonStyle::drawItemPixmap(painter, rect, alignment, pixmap);
        } else if (qcommonstyle_drawitempixmap_callback != nullptr) {
            QPainter* cbval1 = painter;
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&rect_ret);
            int cbval3 = alignment;
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval4 = const_cast<QPixmap*>(&pixmap_ret);

            qcommonstyle_drawitempixmap_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QCommonStyle::drawItemPixmap(painter, rect, alignment, pixmap);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPalette standardPalette() const override {
        if (qcommonstyle_standardpalette_isbase) {
            qcommonstyle_standardpalette_isbase = false;
            return QCommonStyle::standardPalette();
        } else if (qcommonstyle_standardpalette_callback != nullptr) {
            QPalette* callback_ret = qcommonstyle_standardpalette_callback();
            return *callback_ret;
        } else {
            return QCommonStyle::standardPalette();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcommonstyle_event_isbase) {
            qcommonstyle_event_isbase = false;
            return QCommonStyle::event(event);
        } else if (qcommonstyle_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qcommonstyle_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCommonStyle::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcommonstyle_eventfilter_isbase) {
            qcommonstyle_eventfilter_isbase = false;
            return QCommonStyle::eventFilter(watched, event);
        } else if (qcommonstyle_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qcommonstyle_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QCommonStyle::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcommonstyle_timerevent_isbase) {
            qcommonstyle_timerevent_isbase = false;
            QCommonStyle::timerEvent(event);
        } else if (qcommonstyle_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qcommonstyle_timerevent_callback(this, cbval1);
        } else {
            QCommonStyle::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcommonstyle_childevent_isbase) {
            qcommonstyle_childevent_isbase = false;
            QCommonStyle::childEvent(event);
        } else if (qcommonstyle_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qcommonstyle_childevent_callback(this, cbval1);
        } else {
            QCommonStyle::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcommonstyle_customevent_isbase) {
            qcommonstyle_customevent_isbase = false;
            QCommonStyle::customEvent(event);
        } else if (qcommonstyle_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qcommonstyle_customevent_callback(this, cbval1);
        } else {
            QCommonStyle::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcommonstyle_connectnotify_isbase) {
            qcommonstyle_connectnotify_isbase = false;
            QCommonStyle::connectNotify(signal);
        } else if (qcommonstyle_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qcommonstyle_connectnotify_callback(this, cbval1);
        } else {
            QCommonStyle::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcommonstyle_disconnectnotify_isbase) {
            qcommonstyle_disconnectnotify_isbase = false;
            QCommonStyle::disconnectNotify(signal);
        } else if (qcommonstyle_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qcommonstyle_disconnectnotify_callback(this, cbval1);
        } else {
            QCommonStyle::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcommonstyle_sender_isbase) {
            qcommonstyle_sender_isbase = false;
            return QCommonStyle::sender();
        } else if (qcommonstyle_sender_callback != nullptr) {
            QObject* callback_ret = qcommonstyle_sender_callback();
            return callback_ret;
        } else {
            return QCommonStyle::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcommonstyle_sendersignalindex_isbase) {
            qcommonstyle_sendersignalindex_isbase = false;
            return QCommonStyle::senderSignalIndex();
        } else if (qcommonstyle_sendersignalindex_callback != nullptr) {
            int callback_ret = qcommonstyle_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QCommonStyle::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcommonstyle_receivers_isbase) {
            qcommonstyle_receivers_isbase = false;
            return QCommonStyle::receivers(signal);
        } else if (qcommonstyle_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qcommonstyle_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QCommonStyle::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcommonstyle_issignalconnected_isbase) {
            qcommonstyle_issignalconnected_isbase = false;
            return QCommonStyle::isSignalConnected(signal);
        } else if (qcommonstyle_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qcommonstyle_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCommonStyle::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QCommonStyle_TimerEvent(QCommonStyle* self, QTimerEvent* event);
    friend void QCommonStyle_QBaseTimerEvent(QCommonStyle* self, QTimerEvent* event);
    friend void QCommonStyle_ChildEvent(QCommonStyle* self, QChildEvent* event);
    friend void QCommonStyle_QBaseChildEvent(QCommonStyle* self, QChildEvent* event);
    friend void QCommonStyle_CustomEvent(QCommonStyle* self, QEvent* event);
    friend void QCommonStyle_QBaseCustomEvent(QCommonStyle* self, QEvent* event);
    friend void QCommonStyle_ConnectNotify(QCommonStyle* self, const QMetaMethod* signal);
    friend void QCommonStyle_QBaseConnectNotify(QCommonStyle* self, const QMetaMethod* signal);
    friend void QCommonStyle_DisconnectNotify(QCommonStyle* self, const QMetaMethod* signal);
    friend void QCommonStyle_QBaseDisconnectNotify(QCommonStyle* self, const QMetaMethod* signal);
    friend QObject* QCommonStyle_Sender(const QCommonStyle* self);
    friend QObject* QCommonStyle_QBaseSender(const QCommonStyle* self);
    friend int QCommonStyle_SenderSignalIndex(const QCommonStyle* self);
    friend int QCommonStyle_QBaseSenderSignalIndex(const QCommonStyle* self);
    friend int QCommonStyle_Receivers(const QCommonStyle* self, const char* signal);
    friend int QCommonStyle_QBaseReceivers(const QCommonStyle* self, const char* signal);
    friend bool QCommonStyle_IsSignalConnected(const QCommonStyle* self, const QMetaMethod* signal);
    friend bool QCommonStyle_QBaseIsSignalConnected(const QCommonStyle* self, const QMetaMethod* signal);
};

#endif
