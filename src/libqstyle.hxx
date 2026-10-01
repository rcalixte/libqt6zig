#pragma once
#ifndef LIBQSTYLE_HXX
#define LIBQSTYLE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QStyle
class VirtualQStyle : public QStyle {
  public:
    // Virtual class public types (including callbacks and access types)
    using QStyle_MetaObject_Callback = QMetaObject* (*)(const QStyle*);
    using QStyle_Metacast_Callback = void* (*)(QStyle*, const char*);
    using QStyle_Metacall_Callback = int (*)(QStyle*, int, int, void**);
    using QStyle_Polish_Callback = void (*)(QStyle*, QWidget*);
    using QStyle_Unpolish_Callback = void (*)(QStyle*, QWidget*);
    using QStyle_Polish2_Callback = void (*)(QStyle*, QApplication*);
    using QStyle_Unpolish2_Callback = void (*)(QStyle*, QApplication*);
    using QStyle_Polish3_Callback = void (*)(QStyle*, QPalette*);
    using QStyle_ItemTextRect_Callback = QRect* (*)(const QStyle*, QFontMetrics*, QRect*, int, bool, const char*);
    using QStyle_ItemPixmapRect_Callback = QRect* (*)(const QStyle*, QRect*, int, QPixmap*);
    using QStyle_DrawItemText_Callback = void (*)(const QStyle*, QPainter*, QRect*, int, QPalette*, bool, const char*, int);
    using QStyle_DrawItemPixmap_Callback = void (*)(const QStyle*, QPainter*, QRect*, int, QPixmap*);
    using QStyle_StandardPalette_Callback = QPalette* (*)(const QStyle*);
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
    using QStyle::isSignalConnected;
    using QStyle::receivers;
    using QStyle::sender;
    using QStyle::senderSignalIndex;

    // Instance callback storage
    QStyle_MetaObject_Callback qstyle_metaobject_callback = nullptr;
    QStyle_Metacast_Callback qstyle_metacast_callback = nullptr;
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

    // Access struct
    struct Base : QStyle {
        using QStyle::childEvent;
        using QStyle::connectNotify;
        using QStyle::customEvent;
        using QStyle::disconnectNotify;
        using QStyle::timerEvent;
    };

    VirtualQStyle() : QStyle() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qstyle_metaobject_callback) {
            QMetaObject* callback_ret = qstyle_metaobject_callback(this);
            return callback_ret;
        }
        return QStyle::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qstyle_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qstyle_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QStyle::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstyle_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qstyle_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QStyle::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QWidget* widget) override {
        if (qstyle_polish_callback) {
            QWidget* cbval1 = widget;
            qstyle_polish_callback(this, cbval1);
            return;
        }
        QStyle::polish(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void unpolish(QWidget* widget) override {
        if (qstyle_unpolish_callback) {
            QWidget* cbval1 = widget;
            qstyle_unpolish_callback(this, cbval1);
            return;
        }
        QStyle::unpolish(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QApplication* application) override {
        if (qstyle_polish2_callback) {
            QApplication* cbval1 = application;
            qstyle_polish2_callback(this, cbval1);
            return;
        }
        QStyle::polish(application);
    }

    // Virtual method for C ABI access and custom callback
    virtual void unpolish(QApplication* application) override {
        if (qstyle_unpolish2_callback) {
            QApplication* cbval1 = application;
            qstyle_unpolish2_callback(this, cbval1);
            return;
        }
        QStyle::unpolish(application);
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QPalette& palette) override {
        if (qstyle_polish3_callback) {
            QPalette& palette_ret = palette;
            // Cast returned reference into pointer
            QPalette* cbval1 = &palette_ret;
            qstyle_polish3_callback(this, cbval1);
            return;
        }
        QStyle::polish(palette);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect itemTextRect(const QFontMetrics& fm, const QRect& r, int flags, bool enabled, const QString& text) const override {
        if (qstyle_itemtextrect_callback) {
            const QFontMetrics& fm_ret = fm;
            // Cast returned reference into pointer
            QFontMetrics* cbval1 = const_cast<QFontMetrics*>(&fm_ret);
            const QRect& r_ret = r;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&r_ret);
            int cbval3 = flags;
            bool cbval4 = enabled;
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval5 = text_str;
            QRect* callback_ret = qstyle_itemtextrect_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(text_str);
            return callback_ret_Value;
        }
        return QStyle::itemTextRect(fm, r, flags, enabled, text);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect itemPixmapRect(const QRect& r, int flags, const QPixmap& pixmap) const override {
        if (qstyle_itempixmaprect_callback) {
            const QRect& r_ret = r;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&r_ret);
            int cbval2 = flags;
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval3 = const_cast<QPixmap*>(&pixmap_ret);
            QRect* callback_ret = qstyle_itempixmaprect_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStyle::itemPixmapRect(r, flags, pixmap);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawItemText(QPainter* painter, const QRect& rect, int flags, const QPalette& pal, bool enabled, const QString& text, QPalette::ColorRole textRole) const override {
        if (qstyle_drawitemtext_callback) {
            QPainter* cbval1 = painter;
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&rect_ret);
            int cbval3 = flags;
            const QPalette& pal_ret = pal;
            // Cast returned reference into pointer
            QPalette* cbval4 = const_cast<QPalette*>(&pal_ret);
            bool cbval5 = enabled;
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval6 = text_str;
            int cbval7 = static_cast<int>(textRole);
            qstyle_drawitemtext_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7);
            libqt_free(text_str);
            return;
        }
        QStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawItemPixmap(QPainter* painter, const QRect& rect, int alignment, const QPixmap& pixmap) const override {
        if (qstyle_drawitempixmap_callback) {
            QPainter* cbval1 = painter;
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&rect_ret);
            int cbval3 = alignment;
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval4 = const_cast<QPixmap*>(&pixmap_ret);
            qstyle_drawitempixmap_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QStyle::drawItemPixmap(painter, rect, alignment, pixmap);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPalette standardPalette() const override {
        if (qstyle_standardpalette_callback) {
            QPalette* callback_ret = qstyle_standardpalette_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStyle::standardPalette();
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption* opt, QPainter* p, const QWidget* w) const override {
        if (qstyle_drawprimitive_callback) {
            int cbval1 = static_cast<int>(pe);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            QPainter* cbval3 = p;
            QWidget* cbval4 = (QWidget*)w;
            qstyle_drawprimitive_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QStyle::drawPrimitive called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawControl(QStyle::ControlElement element, const QStyleOption* opt, QPainter* p, const QWidget* w) const override {
        if (qstyle_drawcontrol_callback) {
            int cbval1 = static_cast<int>(element);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            QPainter* cbval3 = p;
            QWidget* cbval4 = (QWidget*)w;
            qstyle_drawcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QStyle::drawControl called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect subElementRect(QStyle::SubElement subElement, const QStyleOption* option, const QWidget* widget) const override {
        if (qstyle_subelementrect_callback) {
            int cbval1 = static_cast<int>(subElement);
            QStyleOption* cbval2 = (QStyleOption*)option;
            QWidget* cbval3 = (QWidget*)widget;
            QRect* callback_ret = qstyle_subelementrect_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QStyle::subElementRect called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, QPainter* p, const QWidget* widget) const override {
        if (qstyle_drawcomplexcontrol_callback) {
            int cbval1 = static_cast<int>(cc);
            QStyleOptionComplex* cbval2 = (QStyleOptionComplex*)opt;
            QPainter* cbval3 = p;
            QWidget* cbval4 = (QWidget*)widget;
            qstyle_drawcomplexcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QStyle::drawComplexControl called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QStyle::SubControl hitTestComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, const QPoint& pt, const QWidget* widget) const override {
        if (qstyle_hittestcomplexcontrol_callback) {
            int cbval1 = static_cast<int>(cc);
            QStyleOptionComplex* cbval2 = (QStyleOptionComplex*)opt;
            const QPoint& pt_ret = pt;
            // Cast returned reference into pointer
            QPoint* cbval3 = const_cast<QPoint*>(&pt_ret);
            QWidget* cbval4 = (QWidget*)widget;
            int callback_ret = qstyle_hittestcomplexcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
            return static_cast<QStyle::SubControl>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QStyle::hitTestComplexControl called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, QStyle::SubControl sc, const QWidget* widget) const override {
        if (qstyle_subcontrolrect_callback) {
            int cbval1 = static_cast<int>(cc);
            QStyleOptionComplex* cbval2 = (QStyleOptionComplex*)opt;
            int cbval3 = static_cast<int>(sc);
            QWidget* cbval4 = (QWidget*)widget;
            QRect* callback_ret = qstyle_subcontrolrect_callback(this, cbval1, cbval2, cbval3, cbval4);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QStyle::subControlRect called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int pixelMetric(QStyle::PixelMetric metric, const QStyleOption* option, const QWidget* widget) const override {
        if (qstyle_pixelmetric_callback) {
            int cbval1 = static_cast<int>(metric);
            QStyleOption* cbval2 = (QStyleOption*)option;
            QWidget* cbval3 = (QWidget*)widget;
            int callback_ret = qstyle_pixelmetric_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QStyle::pixelMetric called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeFromContents(QStyle::ContentsType ct, const QStyleOption* opt, const QSize& contentsSize, const QWidget* w) const override {
        if (qstyle_sizefromcontents_callback) {
            int cbval1 = static_cast<int>(ct);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            const QSize& contentsSize_ret = contentsSize;
            // Cast returned reference into pointer
            QSize* cbval3 = const_cast<QSize*>(&contentsSize_ret);
            QWidget* cbval4 = (QWidget*)w;
            QSize* callback_ret = qstyle_sizefromcontents_callback(this, cbval1, cbval2, cbval3, cbval4);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QStyle::sizeFromContents called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleHint(QStyle::StyleHint stylehint, const QStyleOption* opt, const QWidget* widget, QStyleHintReturn* returnData) const override {
        if (qstyle_stylehint_callback) {
            int cbval1 = static_cast<int>(stylehint);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            QWidget* cbval3 = (QWidget*)widget;
            QStyleHintReturn* cbval4 = returnData;
            int callback_ret = qstyle_stylehint_callback(this, cbval1, cbval2, cbval3, cbval4);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QStyle::styleHint called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap standardPixmap(QStyle::StandardPixmap standardPixmap, const QStyleOption* opt, const QWidget* widget) const override {
        if (qstyle_standardpixmap_callback) {
            int cbval1 = static_cast<int>(standardPixmap);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            QWidget* cbval3 = (QWidget*)widget;
            QPixmap* callback_ret = qstyle_standardpixmap_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QStyle::standardPixmap called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QIcon standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption* option, const QWidget* widget) const override {
        if (qstyle_standardicon_callback) {
            int cbval1 = static_cast<int>(standardIcon);
            QStyleOption* cbval2 = (QStyleOption*)option;
            QWidget* cbval3 = (QWidget*)widget;
            QIcon* callback_ret = qstyle_standardicon_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QStyle::standardIcon called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap generatedIconPixmap(QIcon::Mode iconMode, const QPixmap& pixmap, const QStyleOption* opt) const override {
        if (qstyle_generatediconpixmap_callback) {
            int cbval1 = static_cast<int>(iconMode);
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval2 = const_cast<QPixmap*>(&pixmap_ret);
            QStyleOption* cbval3 = (QStyleOption*)opt;
            QPixmap* callback_ret = qstyle_generatediconpixmap_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QStyle::generatedIconPixmap called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption* option, const QWidget* widget) const override {
        if (qstyle_layoutspacing_callback) {
            int cbval1 = static_cast<int>(control1);
            int cbval2 = static_cast<int>(control2);
            int cbval3 = static_cast<int>(orientation);
            QStyleOption* cbval4 = (QStyleOption*)option;
            QWidget* cbval5 = (QWidget*)widget;
            int callback_ret = qstyle_layoutspacing_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QStyle::layoutSpacing called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qstyle_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qstyle_event_callback(this, cbval1);
            return callback_ret;
        }
        return QStyle::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstyle_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qstyle_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QStyle::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstyle_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qstyle_timerevent_callback(this, cbval1);
            return;
        }
        QStyle::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qstyle_childevent_callback) {
            QChildEvent* cbval1 = event;
            qstyle_childevent_callback(this, cbval1);
            return;
        }
        QStyle::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstyle_customevent_callback) {
            QEvent* cbval1 = event;
            qstyle_customevent_callback(this, cbval1);
            return;
        }
        QStyle::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstyle_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qstyle_connectnotify_callback(this, cbval1);
            return;
        }
        QStyle::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstyle_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qstyle_disconnectnotify_callback(this, cbval1);
            return;
        }
        QStyle::disconnectNotify(signal);
    }

    // Friend functions
    friend void QStyle_SuperTimerEvent(QStyle* self, QTimerEvent* event);
    friend void QStyle_SuperChildEvent(QStyle* self, QChildEvent* event);
    friend void QStyle_SuperCustomEvent(QStyle* self, QEvent* event);
    friend void QStyle_SuperConnectNotify(QStyle* self, const QMetaMethod* signal);
    friend void QStyle_SuperDisconnectNotify(QStyle* self, const QMetaMethod* signal);
};

#endif
