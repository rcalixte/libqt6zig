#include <KConfigGroup>
#include <KSyntaxHighlighting/Theme>
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__AbstractAnnotationItemDelegate
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__AnnotationModel
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__AttributeBlock
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__CodeCompletionModel
#include <KTextEditor/Cursor>
#include <KTextEditor/Document>
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__InlineNoteProvider
#include <KTextEditor/MainWindow>
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Range
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__TextHintProvider
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View
#include <KXMLGUIClient>
#include <QList>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QPoint>
#include <QRect>
#include <QScrollBar>
#include <QSet>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWidget>
#include <view.h>
#include "libview.h"
#include "libview.hxx"

QMetaObject* KTextEditor__View_MetaObject(const KTextEditor__View* self) {
    return (QMetaObject*)self->metaObject();
}

void* KTextEditor__View_Metacast(KTextEditor__View* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KTextEditor__View_Metacall(KTextEditor__View* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KTextEditor__View_Tr(const char* s) {
    QString _ret = KTextEditor::View::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KTextEditor__Document* KTextEditor__View_Document(const KTextEditor__View* self) {
    return self->document();
}

int KTextEditor__View_ViewMode(const KTextEditor__View* self) {
    return static_cast<int>(self->viewMode());
}

libqt_string KTextEditor__View_ViewModeHuman(const KTextEditor__View* self) {
    QString _ret = self->viewModeHuman();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KTextEditor__View_SetViewInputMode(KTextEditor__View* self, int inputMode) {
    self->setViewInputMode(static_cast<KTextEditor::View::InputMode>(inputMode));
}

int KTextEditor__View_ViewInputMode(const KTextEditor__View* self) {
    return static_cast<int>(self->viewInputMode());
}

libqt_string KTextEditor__View_ViewInputModeHuman(const KTextEditor__View* self) {
    QString _ret = self->viewInputModeHuman();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KTextEditor__MainWindow* KTextEditor__View_MainWindow(const KTextEditor__View* self) {
    return self->mainWindow();
}

void KTextEditor__View_FocusIn(KTextEditor__View* self, KTextEditor__View* view) {
    self->focusIn(view);
}

void KTextEditor__View_Connect_FocusIn(KTextEditor__View* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__View*, KTextEditor__View*) = reinterpret_cast<void (*)(KTextEditor__View*, KTextEditor__View*)>(slot);
    KTextEditor::View::connect(self, &KTextEditor::View::focusIn, [self, slotFunc](KTextEditor::View* view) {
        KTextEditor__View* sigval1 = view;
        slotFunc(self, sigval1);
    });
}

void KTextEditor__View_FocusOut(KTextEditor__View* self, KTextEditor__View* view) {
    self->focusOut(view);
}

void KTextEditor__View_Connect_FocusOut(KTextEditor__View* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__View*, KTextEditor__View*) = reinterpret_cast<void (*)(KTextEditor__View*, KTextEditor__View*)>(slot);
    KTextEditor::View::connect(self, &KTextEditor::View::focusOut, [self, slotFunc](KTextEditor::View* view) {
        KTextEditor__View* sigval1 = view;
        slotFunc(self, sigval1);
    });
}

void KTextEditor__View_ViewModeChanged(KTextEditor__View* self, KTextEditor__View* view, int mode) {
    self->viewModeChanged(view, static_cast<KTextEditor::View::ViewMode>(mode));
}

void KTextEditor__View_Connect_ViewModeChanged(KTextEditor__View* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__View*, KTextEditor__View*, int) = reinterpret_cast<void (*)(KTextEditor__View*, KTextEditor__View*, int)>(slot);
    KTextEditor::View::connect(self, &KTextEditor::View::viewModeChanged, [self, slotFunc](KTextEditor::View* view, KTextEditor::View::ViewMode mode) {
        KTextEditor__View* sigval1 = view;
        int sigval2 = static_cast<int>(mode);
        slotFunc(self, sigval1, sigval2);
    });
}

void KTextEditor__View_ViewInputModeChanged(KTextEditor__View* self, KTextEditor__View* view, int mode) {
    self->viewInputModeChanged(view, static_cast<KTextEditor::View::InputMode>(mode));
}

void KTextEditor__View_Connect_ViewInputModeChanged(KTextEditor__View* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__View*, KTextEditor__View*, int) = reinterpret_cast<void (*)(KTextEditor__View*, KTextEditor__View*, int)>(slot);
    KTextEditor::View::connect(self, &KTextEditor::View::viewInputModeChanged, [self, slotFunc](KTextEditor::View* view, KTextEditor::View::InputMode mode) {
        KTextEditor__View* sigval1 = view;
        int sigval2 = static_cast<int>(mode);
        slotFunc(self, sigval1, sigval2);
    });
}

void KTextEditor__View_TextInserted(KTextEditor__View* self, KTextEditor__View* view, KTextEditor__Cursor* position, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->textInserted(view, *position, text_QString);
}

void KTextEditor__View_Connect_TextInserted(KTextEditor__View* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__View*, KTextEditor__View*, KTextEditor__Cursor*, const char*) = reinterpret_cast<void (*)(KTextEditor__View*, KTextEditor__View*, KTextEditor__Cursor*, const char*)>(slot);
    KTextEditor::View::connect(self, &KTextEditor::View::textInserted, [self, slotFunc](KTextEditor::View* view, KTextEditor::Cursor position, const QString& text) {
        KTextEditor__View* sigval1 = view;
        KTextEditor__Cursor* sigval2 = new KTextEditor::Cursor(position);
        const QString text_ret = text;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray text_b = text_ret.toUtf8();
        const char* text_str = static_cast<const char*>(malloc(text_b.length() + 1));
        memcpy((void*)text_str, text_b.data(), text_b.length());
        ((char*)text_str)[text_b.length()] = '\0';
        const char* sigval3 = text_str;
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(text_str);
    });
}

void KTextEditor__View_SetContextMenu(KTextEditor__View* self, QMenu* menu) {
    self->setContextMenu(menu);
}

QMenu* KTextEditor__View_ContextMenu(const KTextEditor__View* self) {
    return self->contextMenu();
}

QMenu* KTextEditor__View_DefaultContextMenu(const KTextEditor__View* self, QMenu* menu) {
    return self->defaultContextMenu(menu);
}

void KTextEditor__View_ContextMenuAboutToShow(KTextEditor__View* self, KTextEditor__View* view, QMenu* menu) {
    self->contextMenuAboutToShow(view, menu);
}

void KTextEditor__View_Connect_ContextMenuAboutToShow(KTextEditor__View* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__View*, KTextEditor__View*, QMenu*) = reinterpret_cast<void (*)(KTextEditor__View*, KTextEditor__View*, QMenu*)>(slot);
    KTextEditor::View::connect(self, &KTextEditor::View::contextMenuAboutToShow, [self, slotFunc](KTextEditor::View* view, QMenu* menu) {
        KTextEditor__View* sigval1 = view;
        QMenu* sigval2 = menu;
        slotFunc(self, sigval1, sigval2);
    });
}

bool KTextEditor__View_SetCursorPosition(KTextEditor__View* self, KTextEditor__Cursor* position) {
    return self->setCursorPosition(*position);
}

void KTextEditor__View_SetCursorPositions(KTextEditor__View* self, const libqt_list /* of KTextEditor__Cursor* */ positions) {
    QList<KTextEditor::Cursor> positions_QList;
    positions_QList.reserve(positions.len);
    KTextEditor__Cursor** positions_arr = static_cast<KTextEditor__Cursor**>(positions.data);
    for (size_t i = 0; i < positions.len; ++i) {
        positions_QList.push_back(*(positions_arr[i]));
    }
    self->setCursorPositions(positions_QList);
}

KTextEditor__Cursor* KTextEditor__View_CursorPosition(const KTextEditor__View* self) {
    return new KTextEditor::Cursor(self->cursorPosition());
}

libqt_list /* of KTextEditor__Cursor* */ KTextEditor__View_CursorPositions(const KTextEditor__View* self) {
    QList<KTextEditor::Cursor> _ret = self->cursorPositions();
    // Convert QList<> from C++ memory to manually-managed C memory
    KTextEditor__Cursor** _arr = static_cast<KTextEditor__Cursor**>(malloc(sizeof(KTextEditor__Cursor*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KTextEditor::Cursor(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

KTextEditor__Cursor* KTextEditor__View_CursorPositionVirtual(const KTextEditor__View* self) {
    return new KTextEditor::Cursor(self->cursorPositionVirtual());
}

QPoint* KTextEditor__View_CursorToCoordinate(const KTextEditor__View* self, KTextEditor__Cursor* cursor) {
    return new QPoint(self->cursorToCoordinate(*cursor));
}

QPoint* KTextEditor__View_CursorPositionCoordinates(const KTextEditor__View* self) {
    return new QPoint(self->cursorPositionCoordinates());
}

KTextEditor__Cursor* KTextEditor__View_CoordinatesToCursor(const KTextEditor__View* self, const QPoint* coord) {
    return new KTextEditor::Cursor(self->coordinatesToCursor(*coord));
}

void KTextEditor__View_CursorPositionChanged(KTextEditor__View* self, KTextEditor__View* view, KTextEditor__Cursor* newPosition) {
    self->cursorPositionChanged(view, *newPosition);
}

void KTextEditor__View_Connect_CursorPositionChanged(KTextEditor__View* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__View*, KTextEditor__View*, KTextEditor__Cursor*) = reinterpret_cast<void (*)(KTextEditor__View*, KTextEditor__View*, KTextEditor__Cursor*)>(slot);
    KTextEditor::View::connect(self, &KTextEditor::View::cursorPositionChanged, [self, slotFunc](KTextEditor::View* view, KTextEditor::Cursor newPosition) {
        KTextEditor__View* sigval1 = view;
        KTextEditor__Cursor* sigval2 = new KTextEditor::Cursor(newPosition);
        slotFunc(self, sigval1, sigval2);
    });
}

void KTextEditor__View_VerticalScrollPositionChanged(KTextEditor__View* self, KTextEditor__View* view, KTextEditor__Cursor* newPos) {
    self->verticalScrollPositionChanged(view, *newPos);
}

void KTextEditor__View_Connect_VerticalScrollPositionChanged(KTextEditor__View* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__View*, KTextEditor__View*, KTextEditor__Cursor*) = reinterpret_cast<void (*)(KTextEditor__View*, KTextEditor__View*, KTextEditor__Cursor*)>(slot);
    KTextEditor::View::connect(self, &KTextEditor::View::verticalScrollPositionChanged, [self, slotFunc](KTextEditor::View* view, KTextEditor::Cursor newPos) {
        KTextEditor__View* sigval1 = view;
        KTextEditor__Cursor* sigval2 = new KTextEditor::Cursor(newPos);
        slotFunc(self, sigval1, sigval2);
    });
}

void KTextEditor__View_HorizontalScrollPositionChanged(KTextEditor__View* self, KTextEditor__View* view) {
    self->horizontalScrollPositionChanged(view);
}

void KTextEditor__View_Connect_HorizontalScrollPositionChanged(KTextEditor__View* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__View*, KTextEditor__View*) = reinterpret_cast<void (*)(KTextEditor__View*, KTextEditor__View*)>(slot);
    KTextEditor::View::connect(self, &KTextEditor::View::horizontalScrollPositionChanged, [self, slotFunc](KTextEditor::View* view) {
        KTextEditor__View* sigval1 = view;
        slotFunc(self, sigval1);
    });
}

bool KTextEditor__View_MouseTrackingEnabled(const KTextEditor__View* self) {
    return self->mouseTrackingEnabled();
}

bool KTextEditor__View_SetMouseTrackingEnabled(KTextEditor__View* self, bool enable) {
    return self->setMouseTrackingEnabled(enable);
}

void KTextEditor__View_MousePositionChanged(KTextEditor__View* self, KTextEditor__View* view, KTextEditor__Cursor* newPosition) {
    self->mousePositionChanged(view, *newPosition);
}

void KTextEditor__View_Connect_MousePositionChanged(KTextEditor__View* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__View*, KTextEditor__View*, KTextEditor__Cursor*) = reinterpret_cast<void (*)(KTextEditor__View*, KTextEditor__View*, KTextEditor__Cursor*)>(slot);
    KTextEditor::View::connect(self, &KTextEditor::View::mousePositionChanged, [self, slotFunc](KTextEditor::View* view, KTextEditor::Cursor newPosition) {
        KTextEditor__View* sigval1 = view;
        KTextEditor__Cursor* sigval2 = new KTextEditor::Cursor(newPosition);
        slotFunc(self, sigval1, sigval2);
    });
}

bool KTextEditor__View_SetSelection(KTextEditor__View* self, KTextEditor__Range* range) {
    return self->setSelection(*range);
}

void KTextEditor__View_SetSelections(KTextEditor__View* self, const libqt_list /* of KTextEditor__Range* */ ranges) {
    QList<KTextEditor::Range> ranges_QList;
    ranges_QList.reserve(ranges.len);
    KTextEditor__Range** ranges_arr = static_cast<KTextEditor__Range**>(ranges.data);
    for (size_t i = 0; i < ranges.len; ++i) {
        ranges_QList.push_back(*(ranges_arr[i]));
    }
    self->setSelections(ranges_QList);
}

bool KTextEditor__View_Selection(const KTextEditor__View* self) {
    return self->selection();
}

KTextEditor__Range* KTextEditor__View_SelectionRange(const KTextEditor__View* self) {
    return new KTextEditor::Range(self->selectionRange());
}

libqt_list /* of KTextEditor__Range* */ KTextEditor__View_SelectionRanges(const KTextEditor__View* self) {
    QList<KTextEditor::Range> _ret = self->selectionRanges();
    // Convert QList<> from C++ memory to manually-managed C memory
    KTextEditor__Range** _arr = static_cast<KTextEditor__Range**>(malloc(sizeof(KTextEditor__Range*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KTextEditor::Range(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string KTextEditor__View_SelectionText(const KTextEditor__View* self) {
    QString _ret = self->selectionText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KTextEditor__View_RemoveSelection(KTextEditor__View* self) {
    return self->removeSelection();
}

bool KTextEditor__View_RemoveSelectionText(KTextEditor__View* self) {
    return self->removeSelectionText();
}

bool KTextEditor__View_SetBlockSelection(KTextEditor__View* self, bool on) {
    return self->setBlockSelection(on);
}

bool KTextEditor__View_BlockSelection(const KTextEditor__View* self) {
    return self->blockSelection();
}

void KTextEditor__View_SelectionChanged(KTextEditor__View* self, KTextEditor__View* view) {
    self->selectionChanged(view);
}

void KTextEditor__View_Connect_SelectionChanged(KTextEditor__View* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__View*, KTextEditor__View*) = reinterpret_cast<void (*)(KTextEditor__View*, KTextEditor__View*)>(slot);
    KTextEditor::View::connect(self, &KTextEditor::View::selectionChanged, [self, slotFunc](KTextEditor::View* view) {
        KTextEditor__View* sigval1 = view;
        slotFunc(self, sigval1);
    });
}

bool KTextEditor__View_InsertText(KTextEditor__View* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->insertText(text_QString);
}

bool KTextEditor__View_InsertTemplate(KTextEditor__View* self, KTextEditor__Cursor* insertPosition, const libqt_string templateString) {
    QString templateString_QString = QString::fromUtf8(templateString.data, templateString.len);
    return self->insertTemplate(*insertPosition, templateString_QString);
}

void KTextEditor__View_SetScrollPosition(KTextEditor__View* self, KTextEditor__Cursor* cursor) {
    self->setScrollPosition(*cursor);
}

void KTextEditor__View_SetHorizontalScrollPosition(KTextEditor__View* self, int x) {
    self->setHorizontalScrollPosition(static_cast<int>(x));
}

KTextEditor__Cursor* KTextEditor__View_MaxScrollPosition(const KTextEditor__View* self) {
    return new KTextEditor::Cursor(self->maxScrollPosition());
}

int KTextEditor__View_FirstDisplayedLine(const KTextEditor__View* self) {
    return self->firstDisplayedLine();
}

int KTextEditor__View_LastDisplayedLine(const KTextEditor__View* self) {
    return self->lastDisplayedLine();
}

QRect* KTextEditor__View_TextAreaRect(const KTextEditor__View* self) {
    return new QRect(self->textAreaRect());
}

QScrollBar* KTextEditor__View_VerticalScrollBar(const KTextEditor__View* self) {
    return self->verticalScrollBar();
}

QScrollBar* KTextEditor__View_HorizontalScrollBar(const KTextEditor__View* self) {
    return self->horizontalScrollBar();
}

void KTextEditor__View_DisplayRangeChanged(KTextEditor__View* self, KTextEditor__View* view) {
    self->displayRangeChanged(view);
}

void KTextEditor__View_Connect_DisplayRangeChanged(KTextEditor__View* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__View*, KTextEditor__View*) = reinterpret_cast<void (*)(KTextEditor__View*, KTextEditor__View*)>(slot);
    KTextEditor::View::connect(self, &KTextEditor::View::displayRangeChanged, [self, slotFunc](KTextEditor::View* view) {
        KTextEditor__View* sigval1 = view;
        slotFunc(self, sigval1);
    });
}

bool KTextEditor__View_Print(KTextEditor__View* self) {
    return self->print();
}

void KTextEditor__View_PrintPreview(KTextEditor__View* self) {
    self->printPreview();
}

bool KTextEditor__View_IsStatusBarEnabled(const KTextEditor__View* self) {
    return self->isStatusBarEnabled();
}

void KTextEditor__View_SetStatusBarEnabled(KTextEditor__View* self, bool enable) {
    self->setStatusBarEnabled(enable);
}

void KTextEditor__View_StatusBarEnabledChanged(KTextEditor__View* self, KTextEditor__View* view, bool enabled) {
    self->statusBarEnabledChanged(view, enabled);
}

void KTextEditor__View_Connect_StatusBarEnabledChanged(KTextEditor__View* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__View*, KTextEditor__View*, bool) = reinterpret_cast<void (*)(KTextEditor__View*, KTextEditor__View*, bool)>(slot);
    KTextEditor::View::connect(self, &KTextEditor::View::statusBarEnabledChanged, [self, slotFunc](KTextEditor::View* view, bool enabled) {
        KTextEditor__View* sigval1 = view;
        bool sigval2 = enabled;
        slotFunc(self, sigval1, sigval2);
    });
}

void KTextEditor__View_ReadSessionConfig(KTextEditor__View* self, const KConfigGroup* config, const libqt_list /* set of libqt_string */ flags) {
    // Convert libqt_list to QSet<>
    QSet<QString> flags_set;
    flags_set.reserve(flags.len);
    const libqt_string* flags_strarr = static_cast<const libqt_string*>(flags.data);
    for (size_t i = 0; i < flags.len; ++i) {
        flags_set.insert(QString::fromUtf8(flags_strarr[i].data));
    }
    self->readSessionConfig(*config, flags_set);
}

void KTextEditor__View_WriteSessionConfig(KTextEditor__View* self, KConfigGroup* config, const libqt_list /* set of libqt_string */ flags) {
    // Convert libqt_list to QSet<>
    QSet<QString> flags_set;
    flags_set.reserve(flags.len);
    const libqt_string* flags_strarr = static_cast<const libqt_string*>(flags.data);
    for (size_t i = 0; i < flags.len; ++i) {
        flags_set.insert(QString::fromUtf8(flags_strarr[i].data));
    }
    self->writeSessionConfig(*config, flags_set);
}

libqt_list /* of KTextEditor__AttributeBlock* */ KTextEditor__View_LineAttributes(KTextEditor__View* self, int line) {
    QList<KTextEditor::AttributeBlock> _ret = self->lineAttributes(static_cast<int>(line));
    // Convert QList<> from C++ memory to manually-managed C memory
    KTextEditor__AttributeBlock** _arr = static_cast<KTextEditor__AttributeBlock**>(malloc(sizeof(KTextEditor__AttributeBlock*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KTextEditor::AttributeBlock(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KTextEditor__View_ConfigChanged(KTextEditor__View* self, KTextEditor__View* view) {
    self->configChanged(view);
}

void KTextEditor__View_Connect_ConfigChanged(KTextEditor__View* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__View*, KTextEditor__View*) = reinterpret_cast<void (*)(KTextEditor__View*, KTextEditor__View*)>(slot);
    KTextEditor::View::connect(self, &KTextEditor::View::configChanged, [self, slotFunc](KTextEditor::View* view) {
        KTextEditor__View* sigval1 = view;
        slotFunc(self, sigval1);
    });
}

libqt_list /* of libqt_string */ KTextEditor__View_ConfigKeys(const KTextEditor__View* self) {
    QList<QString> _ret = self->configKeys();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QVariant* KTextEditor__View_ConfigValue(KTextEditor__View* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QVariant(self->configValue(key_QString));
}

void KTextEditor__View_SetConfigValue(KTextEditor__View* self, const libqt_string key, const QVariant* value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->setConfigValue(key_QString, *value);
}

void KTextEditor__View_SetAnnotationModel(KTextEditor__View* self, KTextEditor__AnnotationModel* model) {
    self->setAnnotationModel(model);
}

KTextEditor__AnnotationModel* KTextEditor__View_AnnotationModel(const KTextEditor__View* self) {
    return self->annotationModel();
}

void KTextEditor__View_SetAnnotationBorderVisible(KTextEditor__View* self, bool visible) {
    self->setAnnotationBorderVisible(visible);
}

bool KTextEditor__View_IsAnnotationBorderVisible(const KTextEditor__View* self) {
    return self->isAnnotationBorderVisible();
}

void KTextEditor__View_SetAnnotationItemDelegate(KTextEditor__View* self, KTextEditor__AbstractAnnotationItemDelegate* delegate) {
    self->setAnnotationItemDelegate(delegate);
}

KTextEditor__AbstractAnnotationItemDelegate* KTextEditor__View_AnnotationItemDelegate(const KTextEditor__View* self) {
    return self->annotationItemDelegate();
}

void KTextEditor__View_SetAnnotationUniformItemSizes(KTextEditor__View* self, bool uniformItemSizes) {
    self->setAnnotationUniformItemSizes(uniformItemSizes);
}

bool KTextEditor__View_UniformAnnotationItemSizes(const KTextEditor__View* self) {
    return self->uniformAnnotationItemSizes();
}

void KTextEditor__View_AnnotationContextMenuAboutToShow(KTextEditor__View* self, KTextEditor__View* view, QMenu* menu, int line) {
    self->annotationContextMenuAboutToShow(view, menu, static_cast<int>(line));
}

void KTextEditor__View_Connect_AnnotationContextMenuAboutToShow(KTextEditor__View* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__View*, KTextEditor__View*, QMenu*, int) = reinterpret_cast<void (*)(KTextEditor__View*, KTextEditor__View*, QMenu*, int)>(slot);
    KTextEditor::View::connect(self, &KTextEditor::View::annotationContextMenuAboutToShow, [self, slotFunc](KTextEditor::View* view, QMenu* menu, int line) {
        KTextEditor__View* sigval1 = view;
        QMenu* sigval2 = menu;
        int sigval3 = line;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void KTextEditor__View_AnnotationActivated(KTextEditor__View* self, KTextEditor__View* view, int line) {
    self->annotationActivated(view, static_cast<int>(line));
}

void KTextEditor__View_Connect_AnnotationActivated(KTextEditor__View* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__View*, KTextEditor__View*, int) = reinterpret_cast<void (*)(KTextEditor__View*, KTextEditor__View*, int)>(slot);
    KTextEditor::View::connect(self, &KTextEditor::View::annotationActivated, [self, slotFunc](KTextEditor::View* view, int line) {
        KTextEditor__View* sigval1 = view;
        int sigval2 = line;
        slotFunc(self, sigval1, sigval2);
    });
}

void KTextEditor__View_AnnotationBorderVisibilityChanged(KTextEditor__View* self, KTextEditor__View* view, bool visible) {
    self->annotationBorderVisibilityChanged(view, visible);
}

void KTextEditor__View_Connect_AnnotationBorderVisibilityChanged(KTextEditor__View* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__View*, KTextEditor__View*, bool) = reinterpret_cast<void (*)(KTextEditor__View*, KTextEditor__View*, bool)>(slot);
    KTextEditor::View::connect(self, &KTextEditor::View::annotationBorderVisibilityChanged, [self, slotFunc](KTextEditor::View* view, bool visible) {
        KTextEditor__View* sigval1 = view;
        bool sigval2 = visible;
        slotFunc(self, sigval1, sigval2);
    });
}

void KTextEditor__View_RegisterInlineNoteProvider(KTextEditor__View* self, KTextEditor__InlineNoteProvider* provider) {
    self->registerInlineNoteProvider(provider);
}

void KTextEditor__View_UnregisterInlineNoteProvider(KTextEditor__View* self, KTextEditor__InlineNoteProvider* provider) {
    self->unregisterInlineNoteProvider(provider);
}

void KTextEditor__View_RegisterTextHintProvider(KTextEditor__View* self, KTextEditor__TextHintProvider* provider) {
    self->registerTextHintProvider(provider);
}

void KTextEditor__View_UnregisterTextHintProvider(KTextEditor__View* self, KTextEditor__TextHintProvider* provider) {
    self->unregisterTextHintProvider(provider);
}

void KTextEditor__View_SetTextHintDelay(KTextEditor__View* self, int delay) {
    self->setTextHintDelay(static_cast<int>(delay));
}

int KTextEditor__View_TextHintDelay(const KTextEditor__View* self) {
    return self->textHintDelay();
}

bool KTextEditor__View_IsCompletionActive(const KTextEditor__View* self) {
    return self->isCompletionActive();
}

void KTextEditor__View_StartCompletion(KTextEditor__View* self, KTextEditor__Range* word, KTextEditor__CodeCompletionModel* model) {
    self->startCompletion(*word, model);
}

void KTextEditor__View_AbortCompletion(KTextEditor__View* self) {
    self->abortCompletion();
}

void KTextEditor__View_ForceCompletion(KTextEditor__View* self) {
    self->forceCompletion();
}

void KTextEditor__View_RegisterCompletionModel(KTextEditor__View* self, KTextEditor__CodeCompletionModel* model) {
    self->registerCompletionModel(model);
}

void KTextEditor__View_UnregisterCompletionModel(KTextEditor__View* self, KTextEditor__CodeCompletionModel* model) {
    self->unregisterCompletionModel(model);
}

bool KTextEditor__View_IsAutomaticInvocationEnabled(const KTextEditor__View* self) {
    return self->isAutomaticInvocationEnabled();
}

void KTextEditor__View_SetAutomaticInvocationEnabled(KTextEditor__View* self, bool enabled) {
    self->setAutomaticInvocationEnabled(enabled);
}

void KTextEditor__View_StartCompletion2(KTextEditor__View* self, const KTextEditor__Range* word, const libqt_list /* of KTextEditor__CodeCompletionModel* */ models, int invocationType) {
    QList<KTextEditor::CodeCompletionModel*> models_QList;
    models_QList.reserve(models.len);
    KTextEditor__CodeCompletionModel** models_arr = static_cast<KTextEditor__CodeCompletionModel**>(models.data);
    for (size_t i = 0; i < models.len; ++i) {
        models_QList.push_back(models_arr[i]);
    }
    self->startCompletion(*word, models_QList, static_cast<KTextEditor::CodeCompletionModel::InvocationType>(invocationType));
}

libqt_list /* of KTextEditor__CodeCompletionModel* */ KTextEditor__View_CodeCompletionModels(const KTextEditor__View* self) {
    QList<KTextEditor::CodeCompletionModel*> _ret = self->codeCompletionModels();
    // Convert QList<> from C++ memory to manually-managed C memory
    KTextEditor__CodeCompletionModel** _arr = static_cast<KTextEditor__CodeCompletionModel**>(malloc(sizeof(KTextEditor__CodeCompletionModel*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

KSyntaxHighlighting__Theme* KTextEditor__View_Theme(const KTextEditor__View* self) {
    return new KSyntaxHighlighting::Theme(self->theme());
}

libqt_string KTextEditor__View_Tr2(const char* s, const char* c) {
    QString _ret = KTextEditor::View::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__View_Tr3(const char* s, const char* c, int n) {
    QString _ret = KTextEditor::View::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KTextEditor__View_InsertTemplate3(KTextEditor__View* self, KTextEditor__Cursor* insertPosition, const libqt_string templateString, const libqt_string script) {
    QString templateString_QString = QString::fromUtf8(templateString.data, templateString.len);
    QString script_QString = QString::fromUtf8(script.data, script.len);
    return self->insertTemplate(*insertPosition, templateString_QString, script_QString);
}

int KTextEditor__View_FirstDisplayedLine1(const KTextEditor__View* self, int lineType) {
    return self->firstDisplayedLine(static_cast<KTextEditor::View::LineType>(lineType));
}

int KTextEditor__View_LastDisplayedLine1(const KTextEditor__View* self, int lineType) {
    return self->lastDisplayedLine(static_cast<KTextEditor::View::LineType>(lineType));
}

void KTextEditor__View_Delete(KTextEditor__View* self) {
    delete self;
}
