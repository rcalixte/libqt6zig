#include <QAbstractScrollArea>
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
#include <QFrame>
#include <QHideEvent>
#include <QIODevice>
#include <QImage>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMargins>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPixmap>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qsciscintilla.h>
#include "libqsciscintilla.h"
#include "libqsciscintilla.hxx"

QsciScintilla* QsciScintilla_new(QWidget* parent) {
    return new VirtualQsciScintilla(parent);
}

QsciScintilla* QsciScintilla_new2() {
    return new VirtualQsciScintilla();
}

QMetaObject* QsciScintilla_MetaObject(const QsciScintilla* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciScintilla_Metacast(QsciScintilla* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciScintilla_Metacall(QsciScintilla* self, int param1, int param2, void** param3) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciScintilla*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciScintilla_Tr(const char* s) {
    QString _ret = QsciScintilla::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QsciScintilla_ApiContext(QsciScintilla* self, int pos, int* context_start, int* last_word_start) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        QList<QString> _ret = self->apiContext(static_cast<int>(pos), static_cast<int&>(*context_start), static_cast<int&>(*last_word_start));
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
    } else {
        QList<QString> _ret = ((VirtualQsciScintilla*)self)->apiContext(static_cast<int>(pos), static_cast<int&>(*context_start), static_cast<int&>(*last_word_start));
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
}

void QsciScintilla_Annotate(QsciScintilla* self, int line, const libqt_string text, int style) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->annotate(static_cast<int>(line), text_QString, static_cast<int>(style));
}

void QsciScintilla_Annotate2(QsciScintilla* self, int line, const libqt_string text, const QsciStyle* style) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->annotate(static_cast<int>(line), text_QString, *style);
}

void QsciScintilla_Annotate3(QsciScintilla* self, int line, const QsciStyledText* text) {
    self->annotate(static_cast<int>(line), *text);
}

libqt_string QsciScintilla_Annotation(const QsciScintilla* self, int line) {
    QString _ret = self->annotation(static_cast<int>(line));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QsciScintilla_AnnotationDisplay(const QsciScintilla* self) {
    return static_cast<int>(self->annotationDisplay());
}

void QsciScintilla_ClearAnnotations(QsciScintilla* self) {
    self->clearAnnotations();
}

bool QsciScintilla_AutoCompletionCaseSensitivity(const QsciScintilla* self) {
    return self->autoCompletionCaseSensitivity();
}

bool QsciScintilla_AutoCompletionFillupsEnabled(const QsciScintilla* self) {
    return self->autoCompletionFillupsEnabled();
}

bool QsciScintilla_AutoCompletionReplaceWord(const QsciScintilla* self) {
    return self->autoCompletionReplaceWord();
}

bool QsciScintilla_AutoCompletionShowSingle(const QsciScintilla* self) {
    return self->autoCompletionShowSingle();
}

int QsciScintilla_AutoCompletionSource(const QsciScintilla* self) {
    return static_cast<int>(self->autoCompletionSource());
}

int QsciScintilla_AutoCompletionThreshold(const QsciScintilla* self) {
    return self->autoCompletionThreshold();
}

int QsciScintilla_AutoCompletionUseSingle(const QsciScintilla* self) {
    return static_cast<int>(self->autoCompletionUseSingle());
}

bool QsciScintilla_AutoIndent(const QsciScintilla* self) {
    return self->autoIndent();
}

bool QsciScintilla_BackspaceUnindents(const QsciScintilla* self) {
    return self->backspaceUnindents();
}

void QsciScintilla_BeginUndoAction(QsciScintilla* self) {
    self->beginUndoAction();
}

int QsciScintilla_BraceMatching(const QsciScintilla* self) {
    return static_cast<int>(self->braceMatching());
}

libqt_string QsciScintilla_Bytes(const QsciScintilla* self, int start, int end) {
    QByteArray _qb = self->bytes(static_cast<int>(start), static_cast<int>(end));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QsciScintilla_CallTipsPosition(const QsciScintilla* self) {
    return static_cast<int>(self->callTipsPosition());
}

int QsciScintilla_CallTipsStyle(const QsciScintilla* self) {
    return static_cast<int>(self->callTipsStyle());
}

int QsciScintilla_CallTipsVisible(const QsciScintilla* self) {
    return self->callTipsVisible();
}

void QsciScintilla_CancelFind(QsciScintilla* self) {
    self->cancelFind();
}

void QsciScintilla_CancelList(QsciScintilla* self) {
    self->cancelList();
}

bool QsciScintilla_CaseSensitive(const QsciScintilla* self) {
    return self->caseSensitive();
}

void QsciScintilla_ClearFolds(QsciScintilla* self) {
    self->clearFolds();
}

void QsciScintilla_ClearIndicatorRange(QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo, int indicatorNumber) {
    self->clearIndicatorRange(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo), static_cast<int>(indicatorNumber));
}

void QsciScintilla_ClearRegisteredImages(QsciScintilla* self) {
    self->clearRegisteredImages();
}

QColor* QsciScintilla_Color(const QsciScintilla* self) {
    return new QColor(self->color());
}

libqt_list /* of int */ QsciScintilla_ContractedFolds(const QsciScintilla* self) {
    QList<int> _ret = self->contractedFolds();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QsciScintilla_ConvertEols(QsciScintilla* self, int mode) {
    self->convertEols(static_cast<QsciScintilla::EolMode>(mode));
}

QMenu* QsciScintilla_CreateStandardContextMenu(QsciScintilla* self) {
    return self->createStandardContextMenu();
}

QsciDocument* QsciScintilla_Document(const QsciScintilla* self) {
    return new QsciDocument(self->document());
}

void QsciScintilla_EndUndoAction(QsciScintilla* self) {
    self->endUndoAction();
}

QColor* QsciScintilla_EdgeColor(const QsciScintilla* self) {
    return new QColor(self->edgeColor());
}

int QsciScintilla_EdgeColumn(const QsciScintilla* self) {
    return self->edgeColumn();
}

int QsciScintilla_EdgeMode(const QsciScintilla* self) {
    return static_cast<int>(self->edgeMode());
}

void QsciScintilla_SetFont(QsciScintilla* self, const QFont* f) {
    self->setFont(*f);
}

int QsciScintilla_EolMode(const QsciScintilla* self) {
    return static_cast<int>(self->eolMode());
}

bool QsciScintilla_EolVisibility(const QsciScintilla* self) {
    return self->eolVisibility();
}

int QsciScintilla_ExtraAscent(const QsciScintilla* self) {
    return self->extraAscent();
}

int QsciScintilla_ExtraDescent(const QsciScintilla* self) {
    return self->extraDescent();
}

void QsciScintilla_FillIndicatorRange(QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo, int indicatorNumber) {
    self->fillIndicatorRange(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo), static_cast<int>(indicatorNumber));
}

bool QsciScintilla_FindFirst(QsciScintilla* self, const libqt_string expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11) {
    QString expr_QString = QString::fromUtf8(expr.data, expr.len);
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return self->findFirst(expr_QString, re, cs, wo, wrap, forward, static_cast<int>(line), static_cast<int>(index), show, posix, cxx11);
    } else {
        return ((VirtualQsciScintilla*)self)->findFirst(expr_QString, re, cs, wo, wrap, forward, static_cast<int>(line), static_cast<int>(index), show, posix, cxx11);
    }
}

bool QsciScintilla_FindFirstInSelection(QsciScintilla* self, const libqt_string expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11) {
    QString expr_QString = QString::fromUtf8(expr.data, expr.len);
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return self->findFirstInSelection(expr_QString, re, cs, wo, forward, show, posix, cxx11);
    } else {
        return ((VirtualQsciScintilla*)self)->findFirstInSelection(expr_QString, re, cs, wo, forward, show, posix, cxx11);
    }
}

bool QsciScintilla_FindNext(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return self->findNext();
    } else {
        return ((VirtualQsciScintilla*)self)->findNext();
    }
}

bool QsciScintilla_FindMatchingBrace(QsciScintilla* self, long* brace, long* other, int mode) {
    return self->findMatchingBrace(static_cast<long&>(*brace), static_cast<long&>(*other), static_cast<QsciScintilla::BraceMatch>(mode));
}

int QsciScintilla_FirstVisibleLine(const QsciScintilla* self) {
    return self->firstVisibleLine();
}

int QsciScintilla_Folding(const QsciScintilla* self) {
    return static_cast<int>(self->folding());
}

void QsciScintilla_GetCursorPosition(const QsciScintilla* self, int* line, int* index) {
    self->getCursorPosition(static_cast<int*>(line), static_cast<int*>(index));
}

void QsciScintilla_GetSelection(const QsciScintilla* self, int* lineFrom, int* indexFrom, int* lineTo, int* indexTo) {
    self->getSelection(static_cast<int*>(lineFrom), static_cast<int*>(indexFrom), static_cast<int*>(lineTo), static_cast<int*>(indexTo));
}

bool QsciScintilla_HasSelectedText(const QsciScintilla* self) {
    return self->hasSelectedText();
}

int QsciScintilla_Indentation(const QsciScintilla* self, int line) {
    return self->indentation(static_cast<int>(line));
}

bool QsciScintilla_IndentationGuides(const QsciScintilla* self) {
    return self->indentationGuides();
}

bool QsciScintilla_IndentationsUseTabs(const QsciScintilla* self) {
    return self->indentationsUseTabs();
}

int QsciScintilla_IndentationWidth(const QsciScintilla* self) {
    return self->indentationWidth();
}

int QsciScintilla_IndicatorDefine(QsciScintilla* self, int style) {
    return self->indicatorDefine(static_cast<QsciScintilla::IndicatorStyle>(style));
}

bool QsciScintilla_IndicatorDrawUnder(const QsciScintilla* self, int indicatorNumber) {
    return self->indicatorDrawUnder(static_cast<int>(indicatorNumber));
}

bool QsciScintilla_IsCallTipActive(const QsciScintilla* self) {
    return self->isCallTipActive();
}

bool QsciScintilla_IsListActive(const QsciScintilla* self) {
    return self->isListActive();
}

bool QsciScintilla_IsModified(const QsciScintilla* self) {
    return self->isModified();
}

bool QsciScintilla_IsReadOnly(const QsciScintilla* self) {
    return self->isReadOnly();
}

bool QsciScintilla_IsRedoAvailable(const QsciScintilla* self) {
    return self->isRedoAvailable();
}

bool QsciScintilla_IsUndoAvailable(const QsciScintilla* self) {
    return self->isUndoAvailable();
}

bool QsciScintilla_IsUtf8(const QsciScintilla* self) {
    return self->isUtf8();
}

bool QsciScintilla_IsWordCharacter(const QsciScintilla* self, char ch) {
    return self->isWordCharacter(static_cast<char>(ch));
}

int QsciScintilla_LineAt(const QsciScintilla* self, const QPoint* point) {
    return self->lineAt(*point);
}

void QsciScintilla_LineIndexFromPosition(const QsciScintilla* self, int position, int* line, int* index) {
    self->lineIndexFromPosition(static_cast<int>(position), static_cast<int*>(line), static_cast<int*>(index));
}

int QsciScintilla_LineLength(const QsciScintilla* self, int line) {
    return self->lineLength(static_cast<int>(line));
}

int QsciScintilla_Lines(const QsciScintilla* self) {
    return self->lines();
}

int QsciScintilla_Length(const QsciScintilla* self) {
    return self->length();
}

QsciLexer* QsciScintilla_Lexer(const QsciScintilla* self) {
    return self->lexer();
}

QColor* QsciScintilla_MarginBackgroundColor(const QsciScintilla* self, int margin) {
    return new QColor(self->marginBackgroundColor(static_cast<int>(margin)));
}

bool QsciScintilla_MarginLineNumbers(const QsciScintilla* self, int margin) {
    return self->marginLineNumbers(static_cast<int>(margin));
}

int QsciScintilla_MarginMarkerMask(const QsciScintilla* self, int margin) {
    return self->marginMarkerMask(static_cast<int>(margin));
}

int QsciScintilla_MarginOptions(const QsciScintilla* self) {
    return self->marginOptions();
}

bool QsciScintilla_MarginSensitivity(const QsciScintilla* self, int margin) {
    return self->marginSensitivity(static_cast<int>(margin));
}

int QsciScintilla_MarginType(const QsciScintilla* self, int margin) {
    return static_cast<int>(self->marginType(static_cast<int>(margin)));
}

int QsciScintilla_MarginWidth(const QsciScintilla* self, int margin) {
    return self->marginWidth(static_cast<int>(margin));
}

int QsciScintilla_Margins(const QsciScintilla* self) {
    return self->margins();
}

int QsciScintilla_MarkerDefine(QsciScintilla* self, int sym) {
    return self->markerDefine(static_cast<QsciScintilla::MarkerSymbol>(sym));
}

int QsciScintilla_MarkerDefine2(QsciScintilla* self, char ch) {
    return self->markerDefine(static_cast<char>(ch));
}

int QsciScintilla_MarkerDefine3(QsciScintilla* self, const QPixmap* pm) {
    return self->markerDefine(*pm);
}

int QsciScintilla_MarkerDefine4(QsciScintilla* self, const QImage* im) {
    return self->markerDefine(*im);
}

int QsciScintilla_MarkerAdd(QsciScintilla* self, int linenr, int markerNumber) {
    return self->markerAdd(static_cast<int>(linenr), static_cast<int>(markerNumber));
}

unsigned int QsciScintilla_MarkersAtLine(const QsciScintilla* self, int linenr) {
    return self->markersAtLine(static_cast<int>(linenr));
}

void QsciScintilla_MarkerDelete(QsciScintilla* self, int linenr) {
    self->markerDelete(static_cast<int>(linenr));
}

void QsciScintilla_MarkerDeleteAll(QsciScintilla* self) {
    self->markerDeleteAll();
}

void QsciScintilla_MarkerDeleteHandle(QsciScintilla* self, int mhandle) {
    self->markerDeleteHandle(static_cast<int>(mhandle));
}

int QsciScintilla_MarkerLine(const QsciScintilla* self, int mhandle) {
    return self->markerLine(static_cast<int>(mhandle));
}

int QsciScintilla_MarkerFindNext(const QsciScintilla* self, int linenr, unsigned int mask) {
    return self->markerFindNext(static_cast<int>(linenr), static_cast<unsigned int>(mask));
}

int QsciScintilla_MarkerFindPrevious(const QsciScintilla* self, int linenr, unsigned int mask) {
    return self->markerFindPrevious(static_cast<int>(linenr), static_cast<unsigned int>(mask));
}

bool QsciScintilla_OverwriteMode(const QsciScintilla* self) {
    return self->overwriteMode();
}

QColor* QsciScintilla_Paper(const QsciScintilla* self) {
    return new QColor(self->paper());
}

int QsciScintilla_PositionFromLineIndex(const QsciScintilla* self, int line, int index) {
    return self->positionFromLineIndex(static_cast<int>(line), static_cast<int>(index));
}

bool QsciScintilla_Read(QsciScintilla* self, QIODevice* io) {
    return self->read(io);
}

void QsciScintilla_Recolor(QsciScintilla* self, int start, int end) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->recolor(static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQsciScintilla*)self)->recolor(static_cast<int>(start), static_cast<int>(end));
    }
}

void QsciScintilla_RegisterImage(QsciScintilla* self, int id, const QPixmap* pm) {
    self->registerImage(static_cast<int>(id), *pm);
}

void QsciScintilla_RegisterImage2(QsciScintilla* self, int id, const QImage* im) {
    self->registerImage(static_cast<int>(id), *im);
}

void QsciScintilla_Replace(QsciScintilla* self, const libqt_string replaceStr) {
    QString replaceStr_QString = QString::fromUtf8(replaceStr.data, replaceStr.len);
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->replace(replaceStr_QString);
    } else {
        ((VirtualQsciScintilla*)self)->replace(replaceStr_QString);
    }
}

void QsciScintilla_ResetFoldMarginColors(QsciScintilla* self) {
    self->resetFoldMarginColors();
}

void QsciScintilla_ResetHotspotBackgroundColor(QsciScintilla* self) {
    self->resetHotspotBackgroundColor();
}

void QsciScintilla_ResetHotspotForegroundColor(QsciScintilla* self) {
    self->resetHotspotForegroundColor();
}

int QsciScintilla_ScrollWidth(const QsciScintilla* self) {
    return self->scrollWidth();
}

bool QsciScintilla_ScrollWidthTracking(const QsciScintilla* self) {
    return self->scrollWidthTracking();
}

void QsciScintilla_SetFoldMarginColors(QsciScintilla* self, const QColor* fore, const QColor* back) {
    self->setFoldMarginColors(*fore, *back);
}

void QsciScintilla_SetAnnotationDisplay(QsciScintilla* self, int display) {
    self->setAnnotationDisplay(static_cast<QsciScintilla::AnnotationDisplay>(display));
}

void QsciScintilla_SetAutoCompletionFillupsEnabled(QsciScintilla* self, bool enabled) {
    self->setAutoCompletionFillupsEnabled(enabled);
}

void QsciScintilla_SetAutoCompletionFillups(QsciScintilla* self, const char* fillups) {
    self->setAutoCompletionFillups(fillups);
}

void QsciScintilla_SetAutoCompletionWordSeparators(QsciScintilla* self, const libqt_list /* of libqt_string */ separators) {
    QList<QString> separators_QList;
    separators_QList.reserve(separators.len);
    libqt_string* separators_arr = static_cast<libqt_string*>(separators.data);
    for (size_t i = 0; i < separators.len; ++i) {
        QString separators_arr_i_QString = QString::fromUtf8(separators_arr[i].data, separators_arr[i].len);
        separators_QList.push_back(separators_arr_i_QString);
    }
    self->setAutoCompletionWordSeparators(separators_QList);
}

void QsciScintilla_SetCallTipsBackgroundColor(QsciScintilla* self, const QColor* col) {
    self->setCallTipsBackgroundColor(*col);
}

void QsciScintilla_SetCallTipsForegroundColor(QsciScintilla* self, const QColor* col) {
    self->setCallTipsForegroundColor(*col);
}

void QsciScintilla_SetCallTipsHighlightColor(QsciScintilla* self, const QColor* col) {
    self->setCallTipsHighlightColor(*col);
}

void QsciScintilla_SetCallTipsPosition(QsciScintilla* self, int position) {
    self->setCallTipsPosition(static_cast<QsciScintilla::CallTipsPosition>(position));
}

void QsciScintilla_SetCallTipsStyle(QsciScintilla* self, int style) {
    self->setCallTipsStyle(static_cast<QsciScintilla::CallTipsStyle>(style));
}

void QsciScintilla_SetCallTipsVisible(QsciScintilla* self, int nr) {
    self->setCallTipsVisible(static_cast<int>(nr));
}

void QsciScintilla_SetContractedFolds(QsciScintilla* self, const libqt_list /* of int */ folds) {
    QList<int> folds_QList;
    folds_QList.reserve(folds.len);
    int* folds_arr = static_cast<int*>(folds.data);
    for (size_t i = 0; i < folds.len; ++i) {
        folds_QList.push_back(static_cast<int>(folds_arr[i]));
    }
    self->setContractedFolds(folds_QList);
}

void QsciScintilla_SetDocument(QsciScintilla* self, const QsciDocument* document) {
    self->setDocument(*document);
}

void QsciScintilla_AddEdgeColumn(QsciScintilla* self, int colnr, const QColor* col) {
    self->addEdgeColumn(static_cast<int>(colnr), *col);
}

void QsciScintilla_ClearEdgeColumns(QsciScintilla* self) {
    self->clearEdgeColumns();
}

void QsciScintilla_SetEdgeColor(QsciScintilla* self, const QColor* col) {
    self->setEdgeColor(*col);
}

void QsciScintilla_SetEdgeColumn(QsciScintilla* self, int colnr) {
    self->setEdgeColumn(static_cast<int>(colnr));
}

void QsciScintilla_SetEdgeMode(QsciScintilla* self, int mode) {
    self->setEdgeMode(static_cast<QsciScintilla::EdgeMode>(mode));
}

void QsciScintilla_SetFirstVisibleLine(QsciScintilla* self, int linenr) {
    self->setFirstVisibleLine(static_cast<int>(linenr));
}

void QsciScintilla_SetIndicatorDrawUnder(QsciScintilla* self, bool under) {
    self->setIndicatorDrawUnder(under);
}

void QsciScintilla_SetIndicatorForegroundColor(QsciScintilla* self, const QColor* col) {
    self->setIndicatorForegroundColor(*col);
}

void QsciScintilla_SetIndicatorHoverForegroundColor(QsciScintilla* self, const QColor* col) {
    self->setIndicatorHoverForegroundColor(*col);
}

void QsciScintilla_SetIndicatorHoverStyle(QsciScintilla* self, int style) {
    self->setIndicatorHoverStyle(static_cast<QsciScintilla::IndicatorStyle>(style));
}

void QsciScintilla_SetIndicatorOutlineColor(QsciScintilla* self, const QColor* col) {
    self->setIndicatorOutlineColor(*col);
}

void QsciScintilla_SetMarginBackgroundColor(QsciScintilla* self, int margin, const QColor* col) {
    self->setMarginBackgroundColor(static_cast<int>(margin), *col);
}

void QsciScintilla_SetMarginOptions(QsciScintilla* self, int options) {
    self->setMarginOptions(static_cast<int>(options));
}

void QsciScintilla_SetMarginText(QsciScintilla* self, int line, const libqt_string text, int style) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setMarginText(static_cast<int>(line), text_QString, static_cast<int>(style));
}

void QsciScintilla_SetMarginText2(QsciScintilla* self, int line, const libqt_string text, const QsciStyle* style) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setMarginText(static_cast<int>(line), text_QString, *style);
}

void QsciScintilla_SetMarginText3(QsciScintilla* self, int line, const QsciStyledText* text) {
    self->setMarginText(static_cast<int>(line), *text);
}

void QsciScintilla_SetMarginType(QsciScintilla* self, int margin, int typeVal) {
    self->setMarginType(static_cast<int>(margin), static_cast<QsciScintilla::MarginType>(typeVal));
}

void QsciScintilla_ClearMarginText(QsciScintilla* self) {
    self->clearMarginText();
}

void QsciScintilla_SetMargins(QsciScintilla* self, int margins) {
    self->setMargins(static_cast<int>(margins));
}

void QsciScintilla_SetMarkerBackgroundColor(QsciScintilla* self, const QColor* col) {
    self->setMarkerBackgroundColor(*col);
}

void QsciScintilla_SetMarkerForegroundColor(QsciScintilla* self, const QColor* col) {
    self->setMarkerForegroundColor(*col);
}

void QsciScintilla_SetMatchedBraceBackgroundColor(QsciScintilla* self, const QColor* col) {
    self->setMatchedBraceBackgroundColor(*col);
}

void QsciScintilla_SetMatchedBraceForegroundColor(QsciScintilla* self, const QColor* col) {
    self->setMatchedBraceForegroundColor(*col);
}

void QsciScintilla_SetMatchedBraceIndicator(QsciScintilla* self, int indicatorNumber) {
    self->setMatchedBraceIndicator(static_cast<int>(indicatorNumber));
}

void QsciScintilla_ResetMatchedBraceIndicator(QsciScintilla* self) {
    self->resetMatchedBraceIndicator();
}

void QsciScintilla_SetScrollWidth(QsciScintilla* self, int pixelWidth) {
    self->setScrollWidth(static_cast<int>(pixelWidth));
}

void QsciScintilla_SetScrollWidthTracking(QsciScintilla* self, bool enabled) {
    self->setScrollWidthTracking(enabled);
}

void QsciScintilla_SetTabDrawMode(QsciScintilla* self, int mode) {
    self->setTabDrawMode(static_cast<QsciScintilla::TabDrawMode>(mode));
}

void QsciScintilla_SetUnmatchedBraceBackgroundColor(QsciScintilla* self, const QColor* col) {
    self->setUnmatchedBraceBackgroundColor(*col);
}

void QsciScintilla_SetUnmatchedBraceForegroundColor(QsciScintilla* self, const QColor* col) {
    self->setUnmatchedBraceForegroundColor(*col);
}

void QsciScintilla_SetUnmatchedBraceIndicator(QsciScintilla* self, int indicatorNumber) {
    self->setUnmatchedBraceIndicator(static_cast<int>(indicatorNumber));
}

void QsciScintilla_ResetUnmatchedBraceIndicator(QsciScintilla* self) {
    self->resetUnmatchedBraceIndicator();
}

void QsciScintilla_SetWrapVisualFlags(QsciScintilla* self, int endFlag) {
    self->setWrapVisualFlags(static_cast<QsciScintilla::WrapVisualFlag>(endFlag));
}

libqt_string QsciScintilla_SelectedText(const QsciScintilla* self) {
    QString _ret = self->selectedText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QsciScintilla_SelectionToEol(const QsciScintilla* self) {
    return self->selectionToEol();
}

void QsciScintilla_SetHotspotBackgroundColor(QsciScintilla* self, const QColor* col) {
    self->setHotspotBackgroundColor(*col);
}

void QsciScintilla_SetHotspotForegroundColor(QsciScintilla* self, const QColor* col) {
    self->setHotspotForegroundColor(*col);
}

void QsciScintilla_SetHotspotUnderline(QsciScintilla* self, bool enable) {
    self->setHotspotUnderline(enable);
}

void QsciScintilla_SetHotspotWrap(QsciScintilla* self, bool enable) {
    self->setHotspotWrap(enable);
}

void QsciScintilla_SetSelectionToEol(QsciScintilla* self, bool filled) {
    self->setSelectionToEol(filled);
}

void QsciScintilla_SetExtraAscent(QsciScintilla* self, int extra) {
    self->setExtraAscent(static_cast<int>(extra));
}

void QsciScintilla_SetExtraDescent(QsciScintilla* self, int extra) {
    self->setExtraDescent(static_cast<int>(extra));
}

void QsciScintilla_SetOverwriteMode(QsciScintilla* self, bool overwrite) {
    self->setOverwriteMode(overwrite);
}

void QsciScintilla_SetWhitespaceBackgroundColor(QsciScintilla* self, const QColor* col) {
    self->setWhitespaceBackgroundColor(*col);
}

void QsciScintilla_SetWhitespaceForegroundColor(QsciScintilla* self, const QColor* col) {
    self->setWhitespaceForegroundColor(*col);
}

void QsciScintilla_SetWhitespaceSize(QsciScintilla* self, int size) {
    self->setWhitespaceSize(static_cast<int>(size));
}

void QsciScintilla_SetWrapIndentMode(QsciScintilla* self, int mode) {
    self->setWrapIndentMode(static_cast<QsciScintilla::WrapIndentMode>(mode));
}

void QsciScintilla_ShowUserList(QsciScintilla* self, int id, const libqt_list /* of libqt_string */ list) {
    QList<QString> list_QList;
    list_QList.reserve(list.len);
    libqt_string* list_arr = static_cast<libqt_string*>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
        list_QList.push_back(list_arr_i_QString);
    }
    self->showUserList(static_cast<int>(id), list_QList);
}

QsciCommandSet* QsciScintilla_StandardCommands(const QsciScintilla* self) {
    return self->standardCommands();
}

int QsciScintilla_TabDrawMode(const QsciScintilla* self) {
    return static_cast<int>(self->tabDrawMode());
}

bool QsciScintilla_TabIndents(const QsciScintilla* self) {
    return self->tabIndents();
}

int QsciScintilla_TabWidth(const QsciScintilla* self) {
    return self->tabWidth();
}

libqt_string QsciScintilla_Text(const QsciScintilla* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciScintilla_Text2(const QsciScintilla* self, int line) {
    QString _ret = self->text(static_cast<int>(line));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciScintilla_Text3(const QsciScintilla* self, int start, int end) {
    QString _ret = self->text(static_cast<int>(start), static_cast<int>(end));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QsciScintilla_TextHeight(const QsciScintilla* self, int linenr) {
    return self->textHeight(static_cast<int>(linenr));
}

int QsciScintilla_WhitespaceSize(const QsciScintilla* self) {
    return self->whitespaceSize();
}

int QsciScintilla_WhitespaceVisibility(const QsciScintilla* self) {
    return static_cast<int>(self->whitespaceVisibility());
}

libqt_string QsciScintilla_WordAtLineIndex(const QsciScintilla* self, int line, int index) {
    QString _ret = self->wordAtLineIndex(static_cast<int>(line), static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciScintilla_WordAtPoint(const QsciScintilla* self, const QPoint* point) {
    QString _ret = self->wordAtPoint(*point);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciScintilla_WordCharacters(const QsciScintilla* self) {
    return (const char*)self->wordCharacters();
}

int QsciScintilla_WrapMode(const QsciScintilla* self) {
    return static_cast<int>(self->wrapMode());
}

int QsciScintilla_WrapIndentMode(const QsciScintilla* self) {
    return static_cast<int>(self->wrapIndentMode());
}

bool QsciScintilla_Write(const QsciScintilla* self, QIODevice* io) {
    return self->write(io);
}

void QsciScintilla_Append(QsciScintilla* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->append(text_QString);
    } else {
        ((VirtualQsciScintilla*)self)->append(text_QString);
    }
}

void QsciScintilla_AutoCompleteFromAll(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->autoCompleteFromAll();
    } else {
        ((VirtualQsciScintilla*)self)->autoCompleteFromAll();
    }
}

void QsciScintilla_AutoCompleteFromAPIs(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->autoCompleteFromAPIs();
    } else {
        ((VirtualQsciScintilla*)self)->autoCompleteFromAPIs();
    }
}

void QsciScintilla_AutoCompleteFromDocument(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->autoCompleteFromDocument();
    } else {
        ((VirtualQsciScintilla*)self)->autoCompleteFromDocument();
    }
}

void QsciScintilla_CallTip(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->callTip();
    } else {
        ((VirtualQsciScintilla*)self)->callTip();
    }
}

void QsciScintilla_Clear(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->clear();
    } else {
        ((VirtualQsciScintilla*)self)->clear();
    }
}

void QsciScintilla_Copy(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->copy();
    } else {
        ((VirtualQsciScintilla*)self)->copy();
    }
}

void QsciScintilla_Cut(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->cut();
    } else {
        ((VirtualQsciScintilla*)self)->cut();
    }
}

void QsciScintilla_EnsureCursorVisible(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->ensureCursorVisible();
    } else {
        ((VirtualQsciScintilla*)self)->ensureCursorVisible();
    }
}

void QsciScintilla_EnsureLineVisible(QsciScintilla* self, int line) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->ensureLineVisible(static_cast<int>(line));
    } else {
        ((VirtualQsciScintilla*)self)->ensureLineVisible(static_cast<int>(line));
    }
}

void QsciScintilla_FoldAll(QsciScintilla* self, bool children) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->foldAll(children);
    } else {
        ((VirtualQsciScintilla*)self)->foldAll(children);
    }
}

void QsciScintilla_FoldLine(QsciScintilla* self, int line) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->foldLine(static_cast<int>(line));
    } else {
        ((VirtualQsciScintilla*)self)->foldLine(static_cast<int>(line));
    }
}

void QsciScintilla_Indent(QsciScintilla* self, int line) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->indent(static_cast<int>(line));
    } else {
        ((VirtualQsciScintilla*)self)->indent(static_cast<int>(line));
    }
}

void QsciScintilla_Insert(QsciScintilla* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->insert(text_QString);
    } else {
        ((VirtualQsciScintilla*)self)->insert(text_QString);
    }
}

void QsciScintilla_InsertAt(QsciScintilla* self, const libqt_string text, int line, int index) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->insertAt(text_QString, static_cast<int>(line), static_cast<int>(index));
    } else {
        ((VirtualQsciScintilla*)self)->insertAt(text_QString, static_cast<int>(line), static_cast<int>(index));
    }
}

void QsciScintilla_MoveToMatchingBrace(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->moveToMatchingBrace();
    } else {
        ((VirtualQsciScintilla*)self)->moveToMatchingBrace();
    }
}

void QsciScintilla_Paste(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->paste();
    } else {
        ((VirtualQsciScintilla*)self)->paste();
    }
}

void QsciScintilla_Redo(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->redo();
    } else {
        ((VirtualQsciScintilla*)self)->redo();
    }
}

void QsciScintilla_RemoveSelectedText(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->removeSelectedText();
    } else {
        ((VirtualQsciScintilla*)self)->removeSelectedText();
    }
}

void QsciScintilla_ReplaceSelectedText(QsciScintilla* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->replaceSelectedText(text_QString);
    } else {
        ((VirtualQsciScintilla*)self)->replaceSelectedText(text_QString);
    }
}

void QsciScintilla_ResetSelectionBackgroundColor(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->resetSelectionBackgroundColor();
    } else {
        ((VirtualQsciScintilla*)self)->resetSelectionBackgroundColor();
    }
}

void QsciScintilla_ResetSelectionForegroundColor(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->resetSelectionForegroundColor();
    } else {
        ((VirtualQsciScintilla*)self)->resetSelectionForegroundColor();
    }
}

void QsciScintilla_SelectAll(QsciScintilla* self, bool selectVal) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->selectAll(selectVal);
    } else {
        ((VirtualQsciScintilla*)self)->selectAll(selectVal);
    }
}

void QsciScintilla_SelectToMatchingBrace(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->selectToMatchingBrace();
    } else {
        ((VirtualQsciScintilla*)self)->selectToMatchingBrace();
    }
}

void QsciScintilla_SetAutoCompletionCaseSensitivity(QsciScintilla* self, bool cs) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setAutoCompletionCaseSensitivity(cs);
    } else {
        ((VirtualQsciScintilla*)self)->setAutoCompletionCaseSensitivity(cs);
    }
}

void QsciScintilla_SetAutoCompletionReplaceWord(QsciScintilla* self, bool replace) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setAutoCompletionReplaceWord(replace);
    } else {
        ((VirtualQsciScintilla*)self)->setAutoCompletionReplaceWord(replace);
    }
}

void QsciScintilla_SetAutoCompletionShowSingle(QsciScintilla* self, bool single) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setAutoCompletionShowSingle(single);
    } else {
        ((VirtualQsciScintilla*)self)->setAutoCompletionShowSingle(single);
    }
}

void QsciScintilla_SetAutoCompletionSource(QsciScintilla* self, int source) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setAutoCompletionSource(static_cast<QsciScintilla::AutoCompletionSource>(source));
    } else {
        ((VirtualQsciScintilla*)self)->setAutoCompletionSource(static_cast<QsciScintilla::AutoCompletionSource>(source));
    }
}

void QsciScintilla_SetAutoCompletionThreshold(QsciScintilla* self, int thresh) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setAutoCompletionThreshold(static_cast<int>(thresh));
    } else {
        ((VirtualQsciScintilla*)self)->setAutoCompletionThreshold(static_cast<int>(thresh));
    }
}

void QsciScintilla_SetAutoCompletionUseSingle(QsciScintilla* self, int single) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setAutoCompletionUseSingle(static_cast<QsciScintilla::AutoCompletionUseSingle>(single));
    } else {
        ((VirtualQsciScintilla*)self)->setAutoCompletionUseSingle(static_cast<QsciScintilla::AutoCompletionUseSingle>(single));
    }
}

void QsciScintilla_SetAutoIndent(QsciScintilla* self, bool autoindent) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setAutoIndent(autoindent);
    } else {
        ((VirtualQsciScintilla*)self)->setAutoIndent(autoindent);
    }
}

void QsciScintilla_SetBraceMatching(QsciScintilla* self, int bm) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setBraceMatching(static_cast<QsciScintilla::BraceMatch>(bm));
    } else {
        ((VirtualQsciScintilla*)self)->setBraceMatching(static_cast<QsciScintilla::BraceMatch>(bm));
    }
}

void QsciScintilla_SetBackspaceUnindents(QsciScintilla* self, bool unindent) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setBackspaceUnindents(unindent);
    } else {
        ((VirtualQsciScintilla*)self)->setBackspaceUnindents(unindent);
    }
}

void QsciScintilla_SetCaretForegroundColor(QsciScintilla* self, const QColor* col) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setCaretForegroundColor(*col);
    } else {
        ((VirtualQsciScintilla*)self)->setCaretForegroundColor(*col);
    }
}

void QsciScintilla_SetCaretLineBackgroundColor(QsciScintilla* self, const QColor* col) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setCaretLineBackgroundColor(*col);
    } else {
        ((VirtualQsciScintilla*)self)->setCaretLineBackgroundColor(*col);
    }
}

void QsciScintilla_SetCaretLineFrameWidth(QsciScintilla* self, int width) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setCaretLineFrameWidth(static_cast<int>(width));
    } else {
        ((VirtualQsciScintilla*)self)->setCaretLineFrameWidth(static_cast<int>(width));
    }
}

void QsciScintilla_SetCaretLineVisible(QsciScintilla* self, bool enable) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setCaretLineVisible(enable);
    } else {
        ((VirtualQsciScintilla*)self)->setCaretLineVisible(enable);
    }
}

void QsciScintilla_SetCaretWidth(QsciScintilla* self, int width) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setCaretWidth(static_cast<int>(width));
    } else {
        ((VirtualQsciScintilla*)self)->setCaretWidth(static_cast<int>(width));
    }
}

void QsciScintilla_SetColor(QsciScintilla* self, const QColor* c) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setColor(*c);
    } else {
        ((VirtualQsciScintilla*)self)->setColor(*c);
    }
}

void QsciScintilla_SetCursorPosition(QsciScintilla* self, int line, int index) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setCursorPosition(static_cast<int>(line), static_cast<int>(index));
    } else {
        ((VirtualQsciScintilla*)self)->setCursorPosition(static_cast<int>(line), static_cast<int>(index));
    }
}

void QsciScintilla_SetEolMode(QsciScintilla* self, int mode) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setEolMode(static_cast<QsciScintilla::EolMode>(mode));
    } else {
        ((VirtualQsciScintilla*)self)->setEolMode(static_cast<QsciScintilla::EolMode>(mode));
    }
}

void QsciScintilla_SetEolVisibility(QsciScintilla* self, bool visible) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setEolVisibility(visible);
    } else {
        ((VirtualQsciScintilla*)self)->setEolVisibility(visible);
    }
}

void QsciScintilla_SetFolding(QsciScintilla* self, int fold, int margin) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setFolding(static_cast<QsciScintilla::FoldStyle>(fold), static_cast<int>(margin));
    } else {
        ((VirtualQsciScintilla*)self)->setFolding(static_cast<QsciScintilla::FoldStyle>(fold), static_cast<int>(margin));
    }
}

void QsciScintilla_SetIndentation(QsciScintilla* self, int line, int indentation) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setIndentation(static_cast<int>(line), static_cast<int>(indentation));
    } else {
        ((VirtualQsciScintilla*)self)->setIndentation(static_cast<int>(line), static_cast<int>(indentation));
    }
}

void QsciScintilla_SetIndentationGuides(QsciScintilla* self, bool enable) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setIndentationGuides(enable);
    } else {
        ((VirtualQsciScintilla*)self)->setIndentationGuides(enable);
    }
}

void QsciScintilla_SetIndentationGuidesBackgroundColor(QsciScintilla* self, const QColor* col) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setIndentationGuidesBackgroundColor(*col);
    } else {
        ((VirtualQsciScintilla*)self)->setIndentationGuidesBackgroundColor(*col);
    }
}

void QsciScintilla_SetIndentationGuidesForegroundColor(QsciScintilla* self, const QColor* col) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setIndentationGuidesForegroundColor(*col);
    } else {
        ((VirtualQsciScintilla*)self)->setIndentationGuidesForegroundColor(*col);
    }
}

void QsciScintilla_SetIndentationsUseTabs(QsciScintilla* self, bool tabs) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setIndentationsUseTabs(tabs);
    } else {
        ((VirtualQsciScintilla*)self)->setIndentationsUseTabs(tabs);
    }
}

void QsciScintilla_SetIndentationWidth(QsciScintilla* self, int width) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setIndentationWidth(static_cast<int>(width));
    } else {
        ((VirtualQsciScintilla*)self)->setIndentationWidth(static_cast<int>(width));
    }
}

void QsciScintilla_SetLexer(QsciScintilla* self, QsciLexer* lexer) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setLexer(lexer);
    } else {
        ((VirtualQsciScintilla*)self)->setLexer(lexer);
    }
}

void QsciScintilla_SetMarginsBackgroundColor(QsciScintilla* self, const QColor* col) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setMarginsBackgroundColor(*col);
    } else {
        ((VirtualQsciScintilla*)self)->setMarginsBackgroundColor(*col);
    }
}

void QsciScintilla_SetMarginsFont(QsciScintilla* self, const QFont* f) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setMarginsFont(*f);
    } else {
        ((VirtualQsciScintilla*)self)->setMarginsFont(*f);
    }
}

void QsciScintilla_SetMarginsForegroundColor(QsciScintilla* self, const QColor* col) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setMarginsForegroundColor(*col);
    } else {
        ((VirtualQsciScintilla*)self)->setMarginsForegroundColor(*col);
    }
}

void QsciScintilla_SetMarginLineNumbers(QsciScintilla* self, int margin, bool lnrs) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setMarginLineNumbers(static_cast<int>(margin), lnrs);
    } else {
        ((VirtualQsciScintilla*)self)->setMarginLineNumbers(static_cast<int>(margin), lnrs);
    }
}

void QsciScintilla_SetMarginMarkerMask(QsciScintilla* self, int margin, int mask) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setMarginMarkerMask(static_cast<int>(margin), static_cast<int>(mask));
    } else {
        ((VirtualQsciScintilla*)self)->setMarginMarkerMask(static_cast<int>(margin), static_cast<int>(mask));
    }
}

void QsciScintilla_SetMarginSensitivity(QsciScintilla* self, int margin, bool sens) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setMarginSensitivity(static_cast<int>(margin), sens);
    } else {
        ((VirtualQsciScintilla*)self)->setMarginSensitivity(static_cast<int>(margin), sens);
    }
}

void QsciScintilla_SetMarginWidth(QsciScintilla* self, int margin, int width) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setMarginWidth(static_cast<int>(margin), static_cast<int>(width));
    } else {
        ((VirtualQsciScintilla*)self)->setMarginWidth(static_cast<int>(margin), static_cast<int>(width));
    }
}

void QsciScintilla_SetMarginWidth2(QsciScintilla* self, int margin, const libqt_string s) {
    QString s_QString = QString::fromUtf8(s.data, s.len);
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setMarginWidth(static_cast<int>(margin), s_QString);
    } else {
        ((VirtualQsciScintilla*)self)->setMarginWidth(static_cast<int>(margin), s_QString);
    }
}

void QsciScintilla_SetModified(QsciScintilla* self, bool m) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setModified(m);
    } else {
        ((VirtualQsciScintilla*)self)->setModified(m);
    }
}

void QsciScintilla_SetPaper(QsciScintilla* self, const QColor* c) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setPaper(*c);
    } else {
        ((VirtualQsciScintilla*)self)->setPaper(*c);
    }
}

void QsciScintilla_SetReadOnly(QsciScintilla* self, bool ro) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setReadOnly(ro);
    } else {
        ((VirtualQsciScintilla*)self)->setReadOnly(ro);
    }
}

void QsciScintilla_SetSelection(QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setSelection(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo));
    } else {
        ((VirtualQsciScintilla*)self)->setSelection(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo));
    }
}

void QsciScintilla_SetSelectionBackgroundColor(QsciScintilla* self, const QColor* col) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setSelectionBackgroundColor(*col);
    } else {
        ((VirtualQsciScintilla*)self)->setSelectionBackgroundColor(*col);
    }
}

void QsciScintilla_SetSelectionForegroundColor(QsciScintilla* self, const QColor* col) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setSelectionForegroundColor(*col);
    } else {
        ((VirtualQsciScintilla*)self)->setSelectionForegroundColor(*col);
    }
}

void QsciScintilla_SetTabIndents(QsciScintilla* self, bool indent) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setTabIndents(indent);
    } else {
        ((VirtualQsciScintilla*)self)->setTabIndents(indent);
    }
}

void QsciScintilla_SetTabWidth(QsciScintilla* self, int width) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setTabWidth(static_cast<int>(width));
    } else {
        ((VirtualQsciScintilla*)self)->setTabWidth(static_cast<int>(width));
    }
}

void QsciScintilla_SetText(QsciScintilla* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setText(text_QString);
    } else {
        ((VirtualQsciScintilla*)self)->setText(text_QString);
    }
}

void QsciScintilla_SetUtf8(QsciScintilla* self, bool cp) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setUtf8(cp);
    } else {
        ((VirtualQsciScintilla*)self)->setUtf8(cp);
    }
}

void QsciScintilla_SetWhitespaceVisibility(QsciScintilla* self, int mode) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setWhitespaceVisibility(static_cast<QsciScintilla::WhitespaceVisibility>(mode));
    } else {
        ((VirtualQsciScintilla*)self)->setWhitespaceVisibility(static_cast<QsciScintilla::WhitespaceVisibility>(mode));
    }
}

void QsciScintilla_SetWrapMode(QsciScintilla* self, int mode) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->setWrapMode(static_cast<QsciScintilla::WrapMode>(mode));
    } else {
        ((VirtualQsciScintilla*)self)->setWrapMode(static_cast<QsciScintilla::WrapMode>(mode));
    }
}

void QsciScintilla_Undo(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->undo();
    } else {
        ((VirtualQsciScintilla*)self)->undo();
    }
}

void QsciScintilla_Unindent(QsciScintilla* self, int line) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->unindent(static_cast<int>(line));
    } else {
        ((VirtualQsciScintilla*)self)->unindent(static_cast<int>(line));
    }
}

void QsciScintilla_ZoomIn(QsciScintilla* self, int range) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->zoomIn(static_cast<int>(range));
    } else {
        ((VirtualQsciScintilla*)self)->zoomIn(static_cast<int>(range));
    }
}

void QsciScintilla_ZoomIn2(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->zoomIn();
    } else {
        ((VirtualQsciScintilla*)self)->zoomIn();
    }
}

void QsciScintilla_ZoomOut(QsciScintilla* self, int range) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->zoomOut(static_cast<int>(range));
    } else {
        ((VirtualQsciScintilla*)self)->zoomOut(static_cast<int>(range));
    }
}

void QsciScintilla_ZoomOut2(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->zoomOut();
    } else {
        ((VirtualQsciScintilla*)self)->zoomOut();
    }
}

void QsciScintilla_ZoomTo(QsciScintilla* self, int size) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        self->zoomTo(static_cast<int>(size));
    } else {
        ((VirtualQsciScintilla*)self)->zoomTo(static_cast<int>(size));
    }
}

void QsciScintilla_CursorPositionChanged(QsciScintilla* self, int line, int index) {
    self->cursorPositionChanged(static_cast<int>(line), static_cast<int>(index));
}

void QsciScintilla_Connect_CursorPositionChanged(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*, int, int) = reinterpret_cast<void (*)(QsciScintilla*, int, int)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::cursorPositionChanged, [self, slotFunc](int line, int index) {
        int sigval1 = line;
        int sigval2 = index;
        slotFunc(self, sigval1, sigval2);
    });
}

void QsciScintilla_CopyAvailable(QsciScintilla* self, bool yes) {
    self->copyAvailable(yes);
}

void QsciScintilla_Connect_CopyAvailable(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*, bool) = reinterpret_cast<void (*)(QsciScintilla*, bool)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::copyAvailable, [self, slotFunc](bool yes) {
        bool sigval1 = yes;
        slotFunc(self, sigval1);
    });
}

void QsciScintilla_IndicatorClicked(QsciScintilla* self, int line, int index, int state) {
    self->indicatorClicked(static_cast<int>(line), static_cast<int>(index), static_cast<Qt::KeyboardModifiers>(state));
}

void QsciScintilla_Connect_IndicatorClicked(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*, int, int, int) = reinterpret_cast<void (*)(QsciScintilla*, int, int, int)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::indicatorClicked, [self, slotFunc](int line, int index, Qt::KeyboardModifiers state) {
        int sigval1 = line;
        int sigval2 = index;
        int sigval3 = static_cast<int>(state);
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QsciScintilla_IndicatorReleased(QsciScintilla* self, int line, int index, int state) {
    self->indicatorReleased(static_cast<int>(line), static_cast<int>(index), static_cast<Qt::KeyboardModifiers>(state));
}

void QsciScintilla_Connect_IndicatorReleased(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*, int, int, int) = reinterpret_cast<void (*)(QsciScintilla*, int, int, int)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::indicatorReleased, [self, slotFunc](int line, int index, Qt::KeyboardModifiers state) {
        int sigval1 = line;
        int sigval2 = index;
        int sigval3 = static_cast<int>(state);
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QsciScintilla_LinesChanged(QsciScintilla* self) {
    self->linesChanged();
}

void QsciScintilla_Connect_LinesChanged(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*) = reinterpret_cast<void (*)(QsciScintilla*)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::linesChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QsciScintilla_MarginClicked(QsciScintilla* self, int margin, int line, int state) {
    self->marginClicked(static_cast<int>(margin), static_cast<int>(line), static_cast<Qt::KeyboardModifiers>(state));
}

void QsciScintilla_Connect_MarginClicked(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*, int, int, int) = reinterpret_cast<void (*)(QsciScintilla*, int, int, int)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::marginClicked, [self, slotFunc](int margin, int line, Qt::KeyboardModifiers state) {
        int sigval1 = margin;
        int sigval2 = line;
        int sigval3 = static_cast<int>(state);
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QsciScintilla_MarginRightClicked(QsciScintilla* self, int margin, int line, int state) {
    self->marginRightClicked(static_cast<int>(margin), static_cast<int>(line), static_cast<Qt::KeyboardModifiers>(state));
}

void QsciScintilla_Connect_MarginRightClicked(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*, int, int, int) = reinterpret_cast<void (*)(QsciScintilla*, int, int, int)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::marginRightClicked, [self, slotFunc](int margin, int line, Qt::KeyboardModifiers state) {
        int sigval1 = margin;
        int sigval2 = line;
        int sigval3 = static_cast<int>(state);
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QsciScintilla_ModificationAttempted(QsciScintilla* self) {
    self->modificationAttempted();
}

void QsciScintilla_Connect_ModificationAttempted(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*) = reinterpret_cast<void (*)(QsciScintilla*)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::modificationAttempted, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QsciScintilla_ModificationChanged(QsciScintilla* self, bool m) {
    self->modificationChanged(m);
}

void QsciScintilla_Connect_ModificationChanged(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*, bool) = reinterpret_cast<void (*)(QsciScintilla*, bool)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::modificationChanged, [self, slotFunc](bool m) {
        bool sigval1 = m;
        slotFunc(self, sigval1);
    });
}

void QsciScintilla_SelectionChanged(QsciScintilla* self) {
    self->selectionChanged();
}

void QsciScintilla_Connect_SelectionChanged(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*) = reinterpret_cast<void (*)(QsciScintilla*)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::selectionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QsciScintilla_TextChanged(QsciScintilla* self) {
    self->textChanged();
}

void QsciScintilla_Connect_TextChanged(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*) = reinterpret_cast<void (*)(QsciScintilla*)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::textChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QsciScintilla_UserListActivated(QsciScintilla* self, int id, const libqt_string stringVal) {
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    self->userListActivated(static_cast<int>(id), stringVal_QString);
}

void QsciScintilla_Connect_UserListActivated(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*, int, const char*) = reinterpret_cast<void (*)(QsciScintilla*, int, const char*)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::userListActivated, [self, slotFunc](int id, const QString& stringVal) {
        int sigval1 = id;
        const QString stringVal_ret = stringVal;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray stringVal_b = stringVal_ret.toUtf8();
        const char* stringVal_str = static_cast<const char*>(malloc(stringVal_b.length() + 1));
        memcpy((void*)stringVal_str, stringVal_b.data(), stringVal_b.length());
        ((char*)stringVal_str)[stringVal_b.length()] = '\0';
        const char* sigval2 = stringVal_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(stringVal_str);
    });
}

bool QsciScintilla_Event(QsciScintilla* self, QEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return vqsciscintilla->event(e);
    }
    return {};
}

void QsciScintilla_ChangeEvent(QsciScintilla* self, QEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->changeEvent(e);
    }
}

void QsciScintilla_ContextMenuEvent(QsciScintilla* self, QContextMenuEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->contextMenuEvent(e);
    }
}

void QsciScintilla_WheelEvent(QsciScintilla* self, QWheelEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->wheelEvent(e);
    }
}

libqt_string QsciScintilla_Tr2(const char* s, const char* c) {
    QString _ret = QsciScintilla::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciScintilla_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciScintilla::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QsciScintilla_ClearAnnotations1(QsciScintilla* self, int line) {
    self->clearAnnotations(static_cast<int>(line));
}

int QsciScintilla_IndicatorDefine2(QsciScintilla* self, int style, int indicatorNumber) {
    return self->indicatorDefine(static_cast<QsciScintilla::IndicatorStyle>(style), static_cast<int>(indicatorNumber));
}

int QsciScintilla_MarkerDefine22(QsciScintilla* self, int sym, int markerNumber) {
    return self->markerDefine(static_cast<QsciScintilla::MarkerSymbol>(sym), static_cast<int>(markerNumber));
}

int QsciScintilla_MarkerDefine23(QsciScintilla* self, char ch, int markerNumber) {
    return self->markerDefine(static_cast<char>(ch), static_cast<int>(markerNumber));
}

int QsciScintilla_MarkerDefine24(QsciScintilla* self, const QPixmap* pm, int markerNumber) {
    return self->markerDefine(*pm, static_cast<int>(markerNumber));
}

int QsciScintilla_MarkerDefine25(QsciScintilla* self, const QImage* im, int markerNumber) {
    return self->markerDefine(*im, static_cast<int>(markerNumber));
}

void QsciScintilla_MarkerDelete2(QsciScintilla* self, int linenr, int markerNumber) {
    self->markerDelete(static_cast<int>(linenr), static_cast<int>(markerNumber));
}

void QsciScintilla_MarkerDeleteAll1(QsciScintilla* self, int markerNumber) {
    self->markerDeleteAll(static_cast<int>(markerNumber));
}

void QsciScintilla_SetIndicatorDrawUnder2(QsciScintilla* self, bool under, int indicatorNumber) {
    self->setIndicatorDrawUnder(under, static_cast<int>(indicatorNumber));
}

void QsciScintilla_SetIndicatorForegroundColor2(QsciScintilla* self, const QColor* col, int indicatorNumber) {
    self->setIndicatorForegroundColor(*col, static_cast<int>(indicatorNumber));
}

void QsciScintilla_SetIndicatorHoverForegroundColor2(QsciScintilla* self, const QColor* col, int indicatorNumber) {
    self->setIndicatorHoverForegroundColor(*col, static_cast<int>(indicatorNumber));
}

void QsciScintilla_SetIndicatorHoverStyle2(QsciScintilla* self, int style, int indicatorNumber) {
    self->setIndicatorHoverStyle(static_cast<QsciScintilla::IndicatorStyle>(style), static_cast<int>(indicatorNumber));
}

void QsciScintilla_SetIndicatorOutlineColor2(QsciScintilla* self, const QColor* col, int indicatorNumber) {
    self->setIndicatorOutlineColor(*col, static_cast<int>(indicatorNumber));
}

void QsciScintilla_ClearMarginText1(QsciScintilla* self, int line) {
    self->clearMarginText(static_cast<int>(line));
}

void QsciScintilla_SetMarkerBackgroundColor2(QsciScintilla* self, const QColor* col, int markerNumber) {
    self->setMarkerBackgroundColor(*col, static_cast<int>(markerNumber));
}

void QsciScintilla_SetMarkerForegroundColor2(QsciScintilla* self, const QColor* col, int markerNumber) {
    self->setMarkerForegroundColor(*col, static_cast<int>(markerNumber));
}

void QsciScintilla_SetWrapVisualFlags2(QsciScintilla* self, int endFlag, int startFlag) {
    self->setWrapVisualFlags(static_cast<QsciScintilla::WrapVisualFlag>(endFlag), static_cast<QsciScintilla::WrapVisualFlag>(startFlag));
}

void QsciScintilla_SetWrapVisualFlags3(QsciScintilla* self, int endFlag, int startFlag, int indent) {
    self->setWrapVisualFlags(static_cast<QsciScintilla::WrapVisualFlag>(endFlag), static_cast<QsciScintilla::WrapVisualFlag>(startFlag), static_cast<int>(indent));
}

// Base class handler implementation
int QsciScintilla_QBaseMetacall(QsciScintilla* self, int param1, int param2, void** param3) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Metacall_IsBase(true);
        return vqsciscintilla->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QsciScintilla::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMetacall(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Metacall_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ QsciScintilla_QBaseApiContext(QsciScintilla* self, int pos, int* context_start, int* last_word_start) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ApiContext_IsBase(true);
        QList<QString> _ret = vqsciscintilla->apiContext(static_cast<int>(pos), static_cast<int&>(*context_start), static_cast<int&>(*last_word_start));
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
    } else {
        QList<QString> _ret = self->QsciScintilla::apiContext(static_cast<int>(pos), static_cast<int&>(*context_start), static_cast<int&>(*last_word_start));
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
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnApiContext(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ApiContext_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ApiContext_Callback>(slot));
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseFindFirst(QsciScintilla* self, const libqt_string expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    QString expr_QString = QString::fromUtf8(expr.data, expr.len);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_FindFirst_IsBase(true);
        return vqsciscintilla->findFirst(expr_QString, re, cs, wo, wrap, forward, static_cast<int>(line), static_cast<int>(index), show, posix, cxx11);
    } else {
        return self->QsciScintilla::findFirst(expr_QString, re, cs, wo, wrap, forward, static_cast<int>(line), static_cast<int>(index), show, posix, cxx11);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFindFirst(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_FindFirst_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FindFirst_Callback>(slot));
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseFindFirstInSelection(QsciScintilla* self, const libqt_string expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    QString expr_QString = QString::fromUtf8(expr.data, expr.len);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_FindFirstInSelection_IsBase(true);
        return vqsciscintilla->findFirstInSelection(expr_QString, re, cs, wo, forward, show, posix, cxx11);
    } else {
        return self->QsciScintilla::findFirstInSelection(expr_QString, re, cs, wo, forward, show, posix, cxx11);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFindFirstInSelection(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_FindFirstInSelection_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FindFirstInSelection_Callback>(slot));
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseFindNext(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_FindNext_IsBase(true);
        return vqsciscintilla->findNext();
    } else {
        return self->QsciScintilla::findNext();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFindNext(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_FindNext_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FindNext_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseRecolor(QsciScintilla* self, int start, int end) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Recolor_IsBase(true);
        vqsciscintilla->recolor(static_cast<int>(start), static_cast<int>(end));
    } else {
        self->QsciScintilla::recolor(static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnRecolor(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Recolor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Recolor_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseReplace(QsciScintilla* self, const libqt_string replaceStr) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    QString replaceStr_QString = QString::fromUtf8(replaceStr.data, replaceStr.len);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Replace_IsBase(true);
        vqsciscintilla->replace(replaceStr_QString);
    } else {
        self->QsciScintilla::replace(replaceStr_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnReplace(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Replace_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Replace_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseAppend(QsciScintilla* self, const libqt_string text) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Append_IsBase(true);
        vqsciscintilla->append(text_QString);
    } else {
        self->QsciScintilla::append(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnAppend(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Append_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Append_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseAutoCompleteFromAll(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_AutoCompleteFromAll_IsBase(true);
        vqsciscintilla->autoCompleteFromAll();
    } else {
        self->QsciScintilla::autoCompleteFromAll();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnAutoCompleteFromAll(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_AutoCompleteFromAll_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_AutoCompleteFromAll_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseAutoCompleteFromAPIs(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_AutoCompleteFromAPIs_IsBase(true);
        vqsciscintilla->autoCompleteFromAPIs();
    } else {
        self->QsciScintilla::autoCompleteFromAPIs();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnAutoCompleteFromAPIs(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_AutoCompleteFromAPIs_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_AutoCompleteFromAPIs_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseAutoCompleteFromDocument(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_AutoCompleteFromDocument_IsBase(true);
        vqsciscintilla->autoCompleteFromDocument();
    } else {
        self->QsciScintilla::autoCompleteFromDocument();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnAutoCompleteFromDocument(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_AutoCompleteFromDocument_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_AutoCompleteFromDocument_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseCallTip(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_CallTip_IsBase(true);
        vqsciscintilla->callTip();
    } else {
        self->QsciScintilla::callTip();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnCallTip(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_CallTip_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_CallTip_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseClear(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Clear_IsBase(true);
        vqsciscintilla->clear();
    } else {
        self->QsciScintilla::clear();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnClear(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Clear_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Clear_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseCopy(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Copy_IsBase(true);
        vqsciscintilla->copy();
    } else {
        self->QsciScintilla::copy();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnCopy(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Copy_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Copy_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseCut(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Cut_IsBase(true);
        vqsciscintilla->cut();
    } else {
        self->QsciScintilla::cut();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnCut(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Cut_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Cut_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseEnsureCursorVisible(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_EnsureCursorVisible_IsBase(true);
        vqsciscintilla->ensureCursorVisible();
    } else {
        self->QsciScintilla::ensureCursorVisible();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnEnsureCursorVisible(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_EnsureCursorVisible_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_EnsureCursorVisible_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseEnsureLineVisible(QsciScintilla* self, int line) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_EnsureLineVisible_IsBase(true);
        vqsciscintilla->ensureLineVisible(static_cast<int>(line));
    } else {
        self->QsciScintilla::ensureLineVisible(static_cast<int>(line));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnEnsureLineVisible(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_EnsureLineVisible_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_EnsureLineVisible_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseFoldAll(QsciScintilla* self, bool children) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_FoldAll_IsBase(true);
        vqsciscintilla->foldAll(children);
    } else {
        self->QsciScintilla::foldAll(children);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFoldAll(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_FoldAll_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FoldAll_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseFoldLine(QsciScintilla* self, int line) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_FoldLine_IsBase(true);
        vqsciscintilla->foldLine(static_cast<int>(line));
    } else {
        self->QsciScintilla::foldLine(static_cast<int>(line));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFoldLine(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_FoldLine_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FoldLine_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseIndent(QsciScintilla* self, int line) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Indent_IsBase(true);
        vqsciscintilla->indent(static_cast<int>(line));
    } else {
        self->QsciScintilla::indent(static_cast<int>(line));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnIndent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Indent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Indent_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseInsert(QsciScintilla* self, const libqt_string text) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Insert_IsBase(true);
        vqsciscintilla->insert(text_QString);
    } else {
        self->QsciScintilla::insert(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnInsert(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Insert_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Insert_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseInsertAt(QsciScintilla* self, const libqt_string text, int line, int index) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_InsertAt_IsBase(true);
        vqsciscintilla->insertAt(text_QString, static_cast<int>(line), static_cast<int>(index));
    } else {
        self->QsciScintilla::insertAt(text_QString, static_cast<int>(line), static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnInsertAt(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_InsertAt_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_InsertAt_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseMoveToMatchingBrace(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_MoveToMatchingBrace_IsBase(true);
        vqsciscintilla->moveToMatchingBrace();
    } else {
        self->QsciScintilla::moveToMatchingBrace();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMoveToMatchingBrace(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_MoveToMatchingBrace_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_MoveToMatchingBrace_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBasePaste(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Paste_IsBase(true);
        vqsciscintilla->paste();
    } else {
        self->QsciScintilla::paste();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnPaste(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Paste_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Paste_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseRedo(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Redo_IsBase(true);
        vqsciscintilla->redo();
    } else {
        self->QsciScintilla::redo();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnRedo(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Redo_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Redo_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseRemoveSelectedText(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_RemoveSelectedText_IsBase(true);
        vqsciscintilla->removeSelectedText();
    } else {
        self->QsciScintilla::removeSelectedText();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnRemoveSelectedText(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_RemoveSelectedText_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_RemoveSelectedText_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseReplaceSelectedText(QsciScintilla* self, const libqt_string text) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ReplaceSelectedText_IsBase(true);
        vqsciscintilla->replaceSelectedText(text_QString);
    } else {
        self->QsciScintilla::replaceSelectedText(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnReplaceSelectedText(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ReplaceSelectedText_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ReplaceSelectedText_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseResetSelectionBackgroundColor(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ResetSelectionBackgroundColor_IsBase(true);
        vqsciscintilla->resetSelectionBackgroundColor();
    } else {
        self->QsciScintilla::resetSelectionBackgroundColor();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnResetSelectionBackgroundColor(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ResetSelectionBackgroundColor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ResetSelectionBackgroundColor_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseResetSelectionForegroundColor(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ResetSelectionForegroundColor_IsBase(true);
        vqsciscintilla->resetSelectionForegroundColor();
    } else {
        self->QsciScintilla::resetSelectionForegroundColor();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnResetSelectionForegroundColor(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ResetSelectionForegroundColor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ResetSelectionForegroundColor_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSelectAll(QsciScintilla* self, bool selectVal) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SelectAll_IsBase(true);
        vqsciscintilla->selectAll(selectVal);
    } else {
        self->QsciScintilla::selectAll(selectVal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSelectAll(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SelectAll_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SelectAll_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSelectToMatchingBrace(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SelectToMatchingBrace_IsBase(true);
        vqsciscintilla->selectToMatchingBrace();
    } else {
        self->QsciScintilla::selectToMatchingBrace();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSelectToMatchingBrace(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SelectToMatchingBrace_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SelectToMatchingBrace_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetAutoCompletionCaseSensitivity(QsciScintilla* self, bool cs) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionCaseSensitivity_IsBase(true);
        vqsciscintilla->setAutoCompletionCaseSensitivity(cs);
    } else {
        self->QsciScintilla::setAutoCompletionCaseSensitivity(cs);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetAutoCompletionCaseSensitivity(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionCaseSensitivity_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetAutoCompletionCaseSensitivity_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetAutoCompletionReplaceWord(QsciScintilla* self, bool replace) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionReplaceWord_IsBase(true);
        vqsciscintilla->setAutoCompletionReplaceWord(replace);
    } else {
        self->QsciScintilla::setAutoCompletionReplaceWord(replace);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetAutoCompletionReplaceWord(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionReplaceWord_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetAutoCompletionReplaceWord_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetAutoCompletionShowSingle(QsciScintilla* self, bool single) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionShowSingle_IsBase(true);
        vqsciscintilla->setAutoCompletionShowSingle(single);
    } else {
        self->QsciScintilla::setAutoCompletionShowSingle(single);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetAutoCompletionShowSingle(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionShowSingle_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetAutoCompletionShowSingle_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetAutoCompletionSource(QsciScintilla* self, int source) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionSource_IsBase(true);
        vqsciscintilla->setAutoCompletionSource(static_cast<QsciScintilla::AutoCompletionSource>(source));
    } else {
        self->QsciScintilla::setAutoCompletionSource(static_cast<QsciScintilla::AutoCompletionSource>(source));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetAutoCompletionSource(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionSource_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetAutoCompletionSource_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetAutoCompletionThreshold(QsciScintilla* self, int thresh) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionThreshold_IsBase(true);
        vqsciscintilla->setAutoCompletionThreshold(static_cast<int>(thresh));
    } else {
        self->QsciScintilla::setAutoCompletionThreshold(static_cast<int>(thresh));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetAutoCompletionThreshold(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionThreshold_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetAutoCompletionThreshold_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetAutoCompletionUseSingle(QsciScintilla* self, int single) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionUseSingle_IsBase(true);
        vqsciscintilla->setAutoCompletionUseSingle(static_cast<QsciScintilla::AutoCompletionUseSingle>(single));
    } else {
        self->QsciScintilla::setAutoCompletionUseSingle(static_cast<QsciScintilla::AutoCompletionUseSingle>(single));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetAutoCompletionUseSingle(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionUseSingle_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetAutoCompletionUseSingle_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetAutoIndent(QsciScintilla* self, bool autoindent) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetAutoIndent_IsBase(true);
        vqsciscintilla->setAutoIndent(autoindent);
    } else {
        self->QsciScintilla::setAutoIndent(autoindent);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetAutoIndent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetAutoIndent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetAutoIndent_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetBraceMatching(QsciScintilla* self, int bm) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetBraceMatching_IsBase(true);
        vqsciscintilla->setBraceMatching(static_cast<QsciScintilla::BraceMatch>(bm));
    } else {
        self->QsciScintilla::setBraceMatching(static_cast<QsciScintilla::BraceMatch>(bm));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetBraceMatching(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetBraceMatching_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetBraceMatching_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetBackspaceUnindents(QsciScintilla* self, bool unindent) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetBackspaceUnindents_IsBase(true);
        vqsciscintilla->setBackspaceUnindents(unindent);
    } else {
        self->QsciScintilla::setBackspaceUnindents(unindent);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetBackspaceUnindents(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetBackspaceUnindents_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetBackspaceUnindents_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetCaretForegroundColor(QsciScintilla* self, const QColor* col) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetCaretForegroundColor_IsBase(true);
        vqsciscintilla->setCaretForegroundColor(*col);
    } else {
        self->QsciScintilla::setCaretForegroundColor(*col);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetCaretForegroundColor(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetCaretForegroundColor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetCaretForegroundColor_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetCaretLineBackgroundColor(QsciScintilla* self, const QColor* col) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetCaretLineBackgroundColor_IsBase(true);
        vqsciscintilla->setCaretLineBackgroundColor(*col);
    } else {
        self->QsciScintilla::setCaretLineBackgroundColor(*col);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetCaretLineBackgroundColor(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetCaretLineBackgroundColor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetCaretLineBackgroundColor_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetCaretLineFrameWidth(QsciScintilla* self, int width) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetCaretLineFrameWidth_IsBase(true);
        vqsciscintilla->setCaretLineFrameWidth(static_cast<int>(width));
    } else {
        self->QsciScintilla::setCaretLineFrameWidth(static_cast<int>(width));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetCaretLineFrameWidth(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetCaretLineFrameWidth_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetCaretLineFrameWidth_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetCaretLineVisible(QsciScintilla* self, bool enable) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetCaretLineVisible_IsBase(true);
        vqsciscintilla->setCaretLineVisible(enable);
    } else {
        self->QsciScintilla::setCaretLineVisible(enable);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetCaretLineVisible(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetCaretLineVisible_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetCaretLineVisible_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetCaretWidth(QsciScintilla* self, int width) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetCaretWidth_IsBase(true);
        vqsciscintilla->setCaretWidth(static_cast<int>(width));
    } else {
        self->QsciScintilla::setCaretWidth(static_cast<int>(width));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetCaretWidth(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetCaretWidth_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetCaretWidth_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetColor(QsciScintilla* self, const QColor* c) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetColor_IsBase(true);
        vqsciscintilla->setColor(*c);
    } else {
        self->QsciScintilla::setColor(*c);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetColor(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetColor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetColor_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetCursorPosition(QsciScintilla* self, int line, int index) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetCursorPosition_IsBase(true);
        vqsciscintilla->setCursorPosition(static_cast<int>(line), static_cast<int>(index));
    } else {
        self->QsciScintilla::setCursorPosition(static_cast<int>(line), static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetCursorPosition(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetCursorPosition_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetCursorPosition_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetEolMode(QsciScintilla* self, int mode) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetEolMode_IsBase(true);
        vqsciscintilla->setEolMode(static_cast<QsciScintilla::EolMode>(mode));
    } else {
        self->QsciScintilla::setEolMode(static_cast<QsciScintilla::EolMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetEolMode(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetEolMode_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetEolMode_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetEolVisibility(QsciScintilla* self, bool visible) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetEolVisibility_IsBase(true);
        vqsciscintilla->setEolVisibility(visible);
    } else {
        self->QsciScintilla::setEolVisibility(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetEolVisibility(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetEolVisibility_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetEolVisibility_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetFolding(QsciScintilla* self, int fold, int margin) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetFolding_IsBase(true);
        vqsciscintilla->setFolding(static_cast<QsciScintilla::FoldStyle>(fold), static_cast<int>(margin));
    } else {
        self->QsciScintilla::setFolding(static_cast<QsciScintilla::FoldStyle>(fold), static_cast<int>(margin));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetFolding(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetFolding_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetFolding_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetIndentation(QsciScintilla* self, int line, int indentation) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetIndentation_IsBase(true);
        vqsciscintilla->setIndentation(static_cast<int>(line), static_cast<int>(indentation));
    } else {
        self->QsciScintilla::setIndentation(static_cast<int>(line), static_cast<int>(indentation));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetIndentation(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetIndentation_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetIndentation_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetIndentationGuides(QsciScintilla* self, bool enable) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetIndentationGuides_IsBase(true);
        vqsciscintilla->setIndentationGuides(enable);
    } else {
        self->QsciScintilla::setIndentationGuides(enable);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetIndentationGuides(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetIndentationGuides_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetIndentationGuides_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetIndentationGuidesBackgroundColor(QsciScintilla* self, const QColor* col) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetIndentationGuidesBackgroundColor_IsBase(true);
        vqsciscintilla->setIndentationGuidesBackgroundColor(*col);
    } else {
        self->QsciScintilla::setIndentationGuidesBackgroundColor(*col);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetIndentationGuidesBackgroundColor(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetIndentationGuidesBackgroundColor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetIndentationGuidesBackgroundColor_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetIndentationGuidesForegroundColor(QsciScintilla* self, const QColor* col) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetIndentationGuidesForegroundColor_IsBase(true);
        vqsciscintilla->setIndentationGuidesForegroundColor(*col);
    } else {
        self->QsciScintilla::setIndentationGuidesForegroundColor(*col);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetIndentationGuidesForegroundColor(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetIndentationGuidesForegroundColor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetIndentationGuidesForegroundColor_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetIndentationsUseTabs(QsciScintilla* self, bool tabs) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetIndentationsUseTabs_IsBase(true);
        vqsciscintilla->setIndentationsUseTabs(tabs);
    } else {
        self->QsciScintilla::setIndentationsUseTabs(tabs);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetIndentationsUseTabs(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetIndentationsUseTabs_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetIndentationsUseTabs_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetIndentationWidth(QsciScintilla* self, int width) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetIndentationWidth_IsBase(true);
        vqsciscintilla->setIndentationWidth(static_cast<int>(width));
    } else {
        self->QsciScintilla::setIndentationWidth(static_cast<int>(width));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetIndentationWidth(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetIndentationWidth_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetIndentationWidth_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetLexer(QsciScintilla* self, QsciLexer* lexer) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetLexer_IsBase(true);
        vqsciscintilla->setLexer(lexer);
    } else {
        self->QsciScintilla::setLexer(lexer);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetLexer(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetLexer_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetLexer_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetMarginsBackgroundColor(QsciScintilla* self, const QColor* col) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetMarginsBackgroundColor_IsBase(true);
        vqsciscintilla->setMarginsBackgroundColor(*col);
    } else {
        self->QsciScintilla::setMarginsBackgroundColor(*col);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginsBackgroundColor(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetMarginsBackgroundColor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginsBackgroundColor_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetMarginsFont(QsciScintilla* self, const QFont* f) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetMarginsFont_IsBase(true);
        vqsciscintilla->setMarginsFont(*f);
    } else {
        self->QsciScintilla::setMarginsFont(*f);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginsFont(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetMarginsFont_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginsFont_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetMarginsForegroundColor(QsciScintilla* self, const QColor* col) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetMarginsForegroundColor_IsBase(true);
        vqsciscintilla->setMarginsForegroundColor(*col);
    } else {
        self->QsciScintilla::setMarginsForegroundColor(*col);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginsForegroundColor(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetMarginsForegroundColor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginsForegroundColor_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetMarginLineNumbers(QsciScintilla* self, int margin, bool lnrs) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetMarginLineNumbers_IsBase(true);
        vqsciscintilla->setMarginLineNumbers(static_cast<int>(margin), lnrs);
    } else {
        self->QsciScintilla::setMarginLineNumbers(static_cast<int>(margin), lnrs);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginLineNumbers(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetMarginLineNumbers_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginLineNumbers_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetMarginMarkerMask(QsciScintilla* self, int margin, int mask) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetMarginMarkerMask_IsBase(true);
        vqsciscintilla->setMarginMarkerMask(static_cast<int>(margin), static_cast<int>(mask));
    } else {
        self->QsciScintilla::setMarginMarkerMask(static_cast<int>(margin), static_cast<int>(mask));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginMarkerMask(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetMarginMarkerMask_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginMarkerMask_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetMarginSensitivity(QsciScintilla* self, int margin, bool sens) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetMarginSensitivity_IsBase(true);
        vqsciscintilla->setMarginSensitivity(static_cast<int>(margin), sens);
    } else {
        self->QsciScintilla::setMarginSensitivity(static_cast<int>(margin), sens);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginSensitivity(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetMarginSensitivity_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginSensitivity_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetMarginWidth(QsciScintilla* self, int margin, int width) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetMarginWidth_IsBase(true);
        vqsciscintilla->setMarginWidth(static_cast<int>(margin), static_cast<int>(width));
    } else {
        self->QsciScintilla::setMarginWidth(static_cast<int>(margin), static_cast<int>(width));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginWidth(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetMarginWidth_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginWidth_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetMarginWidth2(QsciScintilla* self, int margin, const libqt_string s) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    QString s_QString = QString::fromUtf8(s.data, s.len);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetMarginWidth2_IsBase(true);
        vqsciscintilla->setMarginWidth(static_cast<int>(margin), s_QString);
    } else {
        self->QsciScintilla::setMarginWidth(static_cast<int>(margin), s_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginWidth2(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetMarginWidth2_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginWidth2_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetModified(QsciScintilla* self, bool m) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetModified_IsBase(true);
        vqsciscintilla->setModified(m);
    } else {
        self->QsciScintilla::setModified(m);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetModified(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetModified_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetModified_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetPaper(QsciScintilla* self, const QColor* c) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetPaper_IsBase(true);
        vqsciscintilla->setPaper(*c);
    } else {
        self->QsciScintilla::setPaper(*c);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetPaper(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetPaper_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetPaper_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetReadOnly(QsciScintilla* self, bool ro) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetReadOnly_IsBase(true);
        vqsciscintilla->setReadOnly(ro);
    } else {
        self->QsciScintilla::setReadOnly(ro);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetReadOnly(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetReadOnly_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetReadOnly_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetSelection(QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetSelection_IsBase(true);
        vqsciscintilla->setSelection(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo));
    } else {
        self->QsciScintilla::setSelection(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetSelection(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetSelection_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetSelection_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetSelectionBackgroundColor(QsciScintilla* self, const QColor* col) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetSelectionBackgroundColor_IsBase(true);
        vqsciscintilla->setSelectionBackgroundColor(*col);
    } else {
        self->QsciScintilla::setSelectionBackgroundColor(*col);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetSelectionBackgroundColor(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetSelectionBackgroundColor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetSelectionBackgroundColor_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetSelectionForegroundColor(QsciScintilla* self, const QColor* col) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetSelectionForegroundColor_IsBase(true);
        vqsciscintilla->setSelectionForegroundColor(*col);
    } else {
        self->QsciScintilla::setSelectionForegroundColor(*col);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetSelectionForegroundColor(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetSelectionForegroundColor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetSelectionForegroundColor_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetTabIndents(QsciScintilla* self, bool indent) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetTabIndents_IsBase(true);
        vqsciscintilla->setTabIndents(indent);
    } else {
        self->QsciScintilla::setTabIndents(indent);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetTabIndents(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetTabIndents_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetTabIndents_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetTabWidth(QsciScintilla* self, int width) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetTabWidth_IsBase(true);
        vqsciscintilla->setTabWidth(static_cast<int>(width));
    } else {
        self->QsciScintilla::setTabWidth(static_cast<int>(width));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetTabWidth(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetTabWidth_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetTabWidth_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetText(QsciScintilla* self, const libqt_string text) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetText_IsBase(true);
        vqsciscintilla->setText(text_QString);
    } else {
        self->QsciScintilla::setText(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetText(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetText_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetText_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetUtf8(QsciScintilla* self, bool cp) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetUtf8_IsBase(true);
        vqsciscintilla->setUtf8(cp);
    } else {
        self->QsciScintilla::setUtf8(cp);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetUtf8(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetUtf8_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetUtf8_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetWhitespaceVisibility(QsciScintilla* self, int mode) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetWhitespaceVisibility_IsBase(true);
        vqsciscintilla->setWhitespaceVisibility(static_cast<QsciScintilla::WhitespaceVisibility>(mode));
    } else {
        self->QsciScintilla::setWhitespaceVisibility(static_cast<QsciScintilla::WhitespaceVisibility>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetWhitespaceVisibility(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetWhitespaceVisibility_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetWhitespaceVisibility_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetWrapMode(QsciScintilla* self, int mode) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetWrapMode_IsBase(true);
        vqsciscintilla->setWrapMode(static_cast<QsciScintilla::WrapMode>(mode));
    } else {
        self->QsciScintilla::setWrapMode(static_cast<QsciScintilla::WrapMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetWrapMode(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetWrapMode_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetWrapMode_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseUndo(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Undo_IsBase(true);
        vqsciscintilla->undo();
    } else {
        self->QsciScintilla::undo();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnUndo(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Undo_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Undo_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseUnindent(QsciScintilla* self, int line) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Unindent_IsBase(true);
        vqsciscintilla->unindent(static_cast<int>(line));
    } else {
        self->QsciScintilla::unindent(static_cast<int>(line));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnUnindent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Unindent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Unindent_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseZoomIn(QsciScintilla* self, int range) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ZoomIn_IsBase(true);
        vqsciscintilla->zoomIn(static_cast<int>(range));
    } else {
        self->QsciScintilla::zoomIn(static_cast<int>(range));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnZoomIn(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ZoomIn_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ZoomIn_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseZoomIn2(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ZoomIn2_IsBase(true);
        vqsciscintilla->zoomIn();
    } else {
        self->QsciScintilla::zoomIn();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnZoomIn2(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ZoomIn2_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ZoomIn2_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseZoomOut(QsciScintilla* self, int range) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ZoomOut_IsBase(true);
        vqsciscintilla->zoomOut(static_cast<int>(range));
    } else {
        self->QsciScintilla::zoomOut(static_cast<int>(range));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnZoomOut(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ZoomOut_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ZoomOut_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseZoomOut2(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ZoomOut2_IsBase(true);
        vqsciscintilla->zoomOut();
    } else {
        self->QsciScintilla::zoomOut();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnZoomOut2(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ZoomOut2_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ZoomOut2_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseZoomTo(QsciScintilla* self, int size) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ZoomTo_IsBase(true);
        vqsciscintilla->zoomTo(static_cast<int>(size));
    } else {
        self->QsciScintilla::zoomTo(static_cast<int>(size));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnZoomTo(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ZoomTo_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ZoomTo_Callback>(slot));
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseEvent(QsciScintilla* self, QEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Event_IsBase(true);
        return vqsciscintilla->event(e);
    } else {
        return ((VirtualQsciScintilla*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Event_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Event_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseChangeEvent(QsciScintilla* self, QEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ChangeEvent_IsBase(true);
        vqsciscintilla->changeEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnChangeEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ChangeEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ChangeEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseContextMenuEvent(QsciScintilla* self, QContextMenuEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ContextMenuEvent_IsBase(true);
        vqsciscintilla->contextMenuEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->contextMenuEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnContextMenuEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ContextMenuEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ContextMenuEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseWheelEvent(QsciScintilla* self, QWheelEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_WheelEvent_IsBase(true);
        vqsciscintilla->wheelEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnWheelEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_WheelEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_CanInsertFromMimeData(const QsciScintilla* self, const QMimeData* source) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return vqsciscintilla->canInsertFromMimeData(source);
    } else {
        return ((VirtualQsciScintilla*)self)->canInsertFromMimeData(source);
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseCanInsertFromMimeData(const QsciScintilla* self, const QMimeData* source) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_CanInsertFromMimeData_IsBase(true);
        return vqsciscintilla->canInsertFromMimeData(source);
    } else {
        return ((VirtualQsciScintilla*)self)->canInsertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnCanInsertFromMimeData(const QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_CanInsertFromMimeData_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_CanInsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciScintilla_FromMimeData(const QsciScintilla* self, const QMimeData* source, bool* rectangular) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        QByteArray _qb = vqsciscintilla->fromMimeData(source, *rectangular);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciScintilla*)self)->fromMimeData(source, *rectangular);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciScintilla_QBaseFromMimeData(const QsciScintilla* self, const QMimeData* source, bool* rectangular) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_FromMimeData_IsBase(true);
        QByteArray _qb = vqsciscintilla->fromMimeData(source, *rectangular);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciScintilla*)self)->fromMimeData(source, *rectangular);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFromMimeData(const QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_FromMimeData_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QsciScintilla_ToMimeData(const QsciScintilla* self, const libqt_string text, bool rectangular) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    QByteArray text_QByteArray(text.data, text.len);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return vqsciscintilla->toMimeData(text_QByteArray, rectangular);
    } else {
        return ((VirtualQsciScintilla*)self)->toMimeData(text_QByteArray, rectangular);
    }
}

// Base class handler implementation
QMimeData* QsciScintilla_QBaseToMimeData(const QsciScintilla* self, const libqt_string text, bool rectangular) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    QByteArray text_QByteArray(text.data, text.len);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ToMimeData_IsBase(true);
        return vqsciscintilla->toMimeData(text_QByteArray, rectangular);
    } else {
        return ((VirtualQsciScintilla*)self)->toMimeData(text_QByteArray, rectangular);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnToMimeData(const QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ToMimeData_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ToMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_DragEnterEvent(QsciScintilla* self, QDragEnterEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->dragEnterEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->dragEnterEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseDragEnterEvent(QsciScintilla* self, QDragEnterEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_DragEnterEvent_IsBase(true);
        vqsciscintilla->dragEnterEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->dragEnterEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnDragEnterEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_DragEnterEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_DragLeaveEvent(QsciScintilla* self, QDragLeaveEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->dragLeaveEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseDragLeaveEvent(QsciScintilla* self, QDragLeaveEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_DragLeaveEvent_IsBase(true);
        vqsciscintilla->dragLeaveEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnDragLeaveEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_DragLeaveEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_DragMoveEvent(QsciScintilla* self, QDragMoveEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->dragMoveEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->dragMoveEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseDragMoveEvent(QsciScintilla* self, QDragMoveEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_DragMoveEvent_IsBase(true);
        vqsciscintilla->dragMoveEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnDragMoveEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_DragMoveEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_DropEvent(QsciScintilla* self, QDropEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->dropEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->dropEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseDropEvent(QsciScintilla* self, QDropEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_DropEvent_IsBase(true);
        vqsciscintilla->dropEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->dropEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnDropEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_DropEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_FocusInEvent(QsciScintilla* self, QFocusEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->focusInEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseFocusInEvent(QsciScintilla* self, QFocusEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_FocusInEvent_IsBase(true);
        vqsciscintilla->focusInEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFocusInEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_FocusInEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_FocusOutEvent(QsciScintilla* self, QFocusEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->focusOutEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseFocusOutEvent(QsciScintilla* self, QFocusEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_FocusOutEvent_IsBase(true);
        vqsciscintilla->focusOutEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFocusOutEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_FocusOutEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_FocusNextPrevChild(QsciScintilla* self, bool next) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return vqsciscintilla->focusNextPrevChild(next);
    } else {
        return ((VirtualQsciScintilla*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseFocusNextPrevChild(QsciScintilla* self, bool next) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_FocusNextPrevChild_IsBase(true);
        return vqsciscintilla->focusNextPrevChild(next);
    } else {
        return ((VirtualQsciScintilla*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFocusNextPrevChild(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_KeyPressEvent(QsciScintilla* self, QKeyEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->keyPressEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->keyPressEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseKeyPressEvent(QsciScintilla* self, QKeyEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_KeyPressEvent_IsBase(true);
        vqsciscintilla->keyPressEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnKeyPressEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_KeyPressEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_InputMethodEvent(QsciScintilla* self, QInputMethodEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->inputMethodEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseInputMethodEvent(QsciScintilla* self, QInputMethodEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_InputMethodEvent_IsBase(true);
        vqsciscintilla->inputMethodEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnInputMethodEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_InputMethodEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QsciScintilla_InputMethodQuery(const QsciScintilla* self, int query) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return new QVariant(vqsciscintilla->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Base class handler implementation
QVariant* QsciScintilla_QBaseInputMethodQuery(const QsciScintilla* self, int query) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_InputMethodQuery_IsBase(true);
        return new QVariant(vqsciscintilla->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnInputMethodQuery(const QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_InputMethodQuery_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_MouseDoubleClickEvent(QsciScintilla* self, QMouseEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->mouseDoubleClickEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->mouseDoubleClickEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseMouseDoubleClickEvent(QsciScintilla* self, QMouseEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_MouseDoubleClickEvent_IsBase(true);
        vqsciscintilla->mouseDoubleClickEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->mouseDoubleClickEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMouseDoubleClickEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_MouseMoveEvent(QsciScintilla* self, QMouseEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->mouseMoveEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseMouseMoveEvent(QsciScintilla* self, QMouseEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_MouseMoveEvent_IsBase(true);
        vqsciscintilla->mouseMoveEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMouseMoveEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_MouseMoveEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_MousePressEvent(QsciScintilla* self, QMouseEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->mousePressEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseMousePressEvent(QsciScintilla* self, QMouseEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_MousePressEvent_IsBase(true);
        vqsciscintilla->mousePressEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMousePressEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_MousePressEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_MouseReleaseEvent(QsciScintilla* self, QMouseEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->mouseReleaseEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseMouseReleaseEvent(QsciScintilla* self, QMouseEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_MouseReleaseEvent_IsBase(true);
        vqsciscintilla->mouseReleaseEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMouseReleaseEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_PaintEvent(QsciScintilla* self, QPaintEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->paintEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBasePaintEvent(QsciScintilla* self, QPaintEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_PaintEvent_IsBase(true);
        vqsciscintilla->paintEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnPaintEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_PaintEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_ResizeEvent(QsciScintilla* self, QResizeEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->resizeEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseResizeEvent(QsciScintilla* self, QResizeEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ResizeEvent_IsBase(true);
        vqsciscintilla->resizeEvent(e);
    } else {
        ((VirtualQsciScintilla*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnResizeEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ResizeEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_ScrollContentsBy(QsciScintilla* self, int dx, int dy) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQsciScintilla*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseScrollContentsBy(QsciScintilla* self, int dx, int dy) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ScrollContentsBy_IsBase(true);
        vqsciscintilla->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQsciScintilla*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnScrollContentsBy(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ScrollContentsBy_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QsciScintilla_MinimumSizeHint(const QsciScintilla* self) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return new QSize(vqsciscintilla->minimumSizeHint());
    } else {
        return new QSize(((VirtualQsciScintilla*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QsciScintilla_QBaseMinimumSizeHint(const QsciScintilla* self) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_MinimumSizeHint_IsBase(true);
        return new QSize(vqsciscintilla->minimumSizeHint());
    } else {
        return new QSize(((VirtualQsciScintilla*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMinimumSizeHint(const QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_MinimumSizeHint_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QsciScintilla_SizeHint(const QsciScintilla* self) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return new QSize(vqsciscintilla->sizeHint());
    } else {
        return new QSize(((VirtualQsciScintilla*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QsciScintilla_QBaseSizeHint(const QsciScintilla* self) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SizeHint_IsBase(true);
        return new QSize(vqsciscintilla->sizeHint());
    } else {
        return new QSize(((VirtualQsciScintilla*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSizeHint(const QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SizeHint_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetupViewport(QsciScintilla* self, QWidget* viewport) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setupViewport(viewport);
    } else {
        self->QsciScintilla::setupViewport(viewport);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetupViewport(QsciScintilla* self, QWidget* viewport) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetupViewport_IsBase(true);
        vqsciscintilla->setupViewport(viewport);
    } else {
        self->QsciScintilla::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetupViewport(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetupViewport_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_EventFilter(QsciScintilla* self, QObject* param1, QEvent* param2) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return vqsciscintilla->eventFilter(param1, param2);
    } else {
        return ((VirtualQsciScintilla*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseEventFilter(QsciScintilla* self, QObject* param1, QEvent* param2) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_EventFilter_IsBase(true);
        return vqsciscintilla->eventFilter(param1, param2);
    } else {
        return ((VirtualQsciScintilla*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnEventFilter(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_EventFilter_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_ViewportEvent(QsciScintilla* self, QEvent* param1) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return vqsciscintilla->viewportEvent(param1);
    } else {
        return ((VirtualQsciScintilla*)self)->viewportEvent(param1);
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseViewportEvent(QsciScintilla* self, QEvent* param1) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ViewportEvent_IsBase(true);
        return vqsciscintilla->viewportEvent(param1);
    } else {
        return ((VirtualQsciScintilla*)self)->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnViewportEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ViewportEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QsciScintilla_ViewportSizeHint(const QsciScintilla* self) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return new QSize(vqsciscintilla->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QsciScintilla_QBaseViewportSizeHint(const QsciScintilla* self) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ViewportSizeHint_IsBase(true);
        return new QSize(vqsciscintilla->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnViewportSizeHint(const QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ViewportSizeHint_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_InitStyleOption(const QsciScintilla* self, QStyleOptionFrame* option) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->initStyleOption(option);
    } else {
        ((VirtualQsciScintilla*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseInitStyleOption(const QsciScintilla* self, QStyleOptionFrame* option) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_InitStyleOption_IsBase(true);
        vqsciscintilla->initStyleOption(option);
    } else {
        ((VirtualQsciScintilla*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnInitStyleOption(const QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_InitStyleOption_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciScintilla_DevType(const QsciScintilla* self) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return vqsciscintilla->devType();
    } else {
        return self->QsciScintilla::devType();
    }
}

// Base class handler implementation
int QsciScintilla_QBaseDevType(const QsciScintilla* self) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_DevType_IsBase(true);
        return vqsciscintilla->devType();
    } else {
        return self->QsciScintilla::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnDevType(const QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_DevType_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetVisible(QsciScintilla* self, bool visible) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setVisible(visible);
    } else {
        self->QsciScintilla::setVisible(visible);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetVisible(QsciScintilla* self, bool visible) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetVisible_IsBase(true);
        vqsciscintilla->setVisible(visible);
    } else {
        self->QsciScintilla::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetVisible(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetVisible_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciScintilla_HeightForWidth(const QsciScintilla* self, int param1) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return vqsciscintilla->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QsciScintilla::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QsciScintilla_QBaseHeightForWidth(const QsciScintilla* self, int param1) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_HeightForWidth_IsBase(true);
        return vqsciscintilla->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QsciScintilla::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnHeightForWidth(const QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_HeightForWidth_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_HasHeightForWidth(const QsciScintilla* self) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return vqsciscintilla->hasHeightForWidth();
    } else {
        return self->QsciScintilla::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseHasHeightForWidth(const QsciScintilla* self) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_HasHeightForWidth_IsBase(true);
        return vqsciscintilla->hasHeightForWidth();
    } else {
        return self->QsciScintilla::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnHasHeightForWidth(const QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_HasHeightForWidth_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QsciScintilla_PaintEngine(const QsciScintilla* self) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return vqsciscintilla->paintEngine();
    } else {
        return self->QsciScintilla::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QsciScintilla_QBasePaintEngine(const QsciScintilla* self) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_PaintEngine_IsBase(true);
        return vqsciscintilla->paintEngine();
    } else {
        return self->QsciScintilla::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnPaintEngine(const QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_PaintEngine_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_KeyReleaseEvent(QsciScintilla* self, QKeyEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->keyReleaseEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseKeyReleaseEvent(QsciScintilla* self, QKeyEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_KeyReleaseEvent_IsBase(true);
        vqsciscintilla->keyReleaseEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnKeyReleaseEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_EnterEvent(QsciScintilla* self, QEnterEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->enterEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseEnterEvent(QsciScintilla* self, QEnterEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_EnterEvent_IsBase(true);
        vqsciscintilla->enterEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnEnterEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_EnterEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_LeaveEvent(QsciScintilla* self, QEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->leaveEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseLeaveEvent(QsciScintilla* self, QEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_LeaveEvent_IsBase(true);
        vqsciscintilla->leaveEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnLeaveEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_LeaveEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_MoveEvent(QsciScintilla* self, QMoveEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->moveEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseMoveEvent(QsciScintilla* self, QMoveEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_MoveEvent_IsBase(true);
        vqsciscintilla->moveEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMoveEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_MoveEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_CloseEvent(QsciScintilla* self, QCloseEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->closeEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseCloseEvent(QsciScintilla* self, QCloseEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_CloseEvent_IsBase(true);
        vqsciscintilla->closeEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnCloseEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_CloseEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_TabletEvent(QsciScintilla* self, QTabletEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->tabletEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseTabletEvent(QsciScintilla* self, QTabletEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_TabletEvent_IsBase(true);
        vqsciscintilla->tabletEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnTabletEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_TabletEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_ActionEvent(QsciScintilla* self, QActionEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->actionEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseActionEvent(QsciScintilla* self, QActionEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ActionEvent_IsBase(true);
        vqsciscintilla->actionEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnActionEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ActionEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_ShowEvent(QsciScintilla* self, QShowEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->showEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseShowEvent(QsciScintilla* self, QShowEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ShowEvent_IsBase(true);
        vqsciscintilla->showEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnShowEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ShowEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_HideEvent(QsciScintilla* self, QHideEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->hideEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseHideEvent(QsciScintilla* self, QHideEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_HideEvent_IsBase(true);
        vqsciscintilla->hideEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnHideEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_HideEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_NativeEvent(QsciScintilla* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return vqsciscintilla->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQsciScintilla*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseNativeEvent(QsciScintilla* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_NativeEvent_IsBase(true);
        return vqsciscintilla->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQsciScintilla*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnNativeEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_NativeEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciScintilla_Metric(const QsciScintilla* self, int param1) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return vqsciscintilla->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQsciScintilla*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QsciScintilla_QBaseMetric(const QsciScintilla* self, int param1) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Metric_IsBase(true);
        return vqsciscintilla->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQsciScintilla*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMetric(const QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Metric_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_InitPainter(const QsciScintilla* self, QPainter* painter) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->initPainter(painter);
    } else {
        ((VirtualQsciScintilla*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseInitPainter(const QsciScintilla* self, QPainter* painter) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_InitPainter_IsBase(true);
        vqsciscintilla->initPainter(painter);
    } else {
        ((VirtualQsciScintilla*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnInitPainter(const QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_InitPainter_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QsciScintilla_Redirected(const QsciScintilla* self, QPoint* offset) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return vqsciscintilla->redirected(offset);
    } else {
        return ((VirtualQsciScintilla*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QsciScintilla_QBaseRedirected(const QsciScintilla* self, QPoint* offset) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Redirected_IsBase(true);
        return vqsciscintilla->redirected(offset);
    } else {
        return ((VirtualQsciScintilla*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnRedirected(const QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Redirected_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QsciScintilla_SharedPainter(const QsciScintilla* self) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return vqsciscintilla->sharedPainter();
    } else {
        return ((VirtualQsciScintilla*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QsciScintilla_QBaseSharedPainter(const QsciScintilla* self) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SharedPainter_IsBase(true);
        return vqsciscintilla->sharedPainter();
    } else {
        return ((VirtualQsciScintilla*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSharedPainter(const QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SharedPainter_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_TimerEvent(QsciScintilla* self, QTimerEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->timerEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseTimerEvent(QsciScintilla* self, QTimerEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_TimerEvent_IsBase(true);
        vqsciscintilla->timerEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnTimerEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_TimerEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_ChildEvent(QsciScintilla* self, QChildEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->childEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseChildEvent(QsciScintilla* self, QChildEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ChildEvent_IsBase(true);
        vqsciscintilla->childEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnChildEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ChildEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_CustomEvent(QsciScintilla* self, QEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->customEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseCustomEvent(QsciScintilla* self, QEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_CustomEvent_IsBase(true);
        vqsciscintilla->customEvent(event);
    } else {
        ((VirtualQsciScintilla*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnCustomEvent(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_CustomEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_ConnectNotify(QsciScintilla* self, const QMetaMethod* signal) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->connectNotify(*signal);
    } else {
        ((VirtualQsciScintilla*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseConnectNotify(QsciScintilla* self, const QMetaMethod* signal) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ConnectNotify_IsBase(true);
        vqsciscintilla->connectNotify(*signal);
    } else {
        ((VirtualQsciScintilla*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnConnectNotify(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ConnectNotify_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_DisconnectNotify(QsciScintilla* self, const QMetaMethod* signal) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->disconnectNotify(*signal);
    } else {
        ((VirtualQsciScintilla*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseDisconnectNotify(QsciScintilla* self, const QMetaMethod* signal) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_DisconnectNotify_IsBase(true);
        vqsciscintilla->disconnectNotify(*signal);
    } else {
        ((VirtualQsciScintilla*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnDisconnectNotify(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetScrollBars(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setScrollBars();
    } else {
        ((VirtualQsciScintilla*)self)->setScrollBars();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetScrollBars(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetScrollBars_IsBase(true);
        vqsciscintilla->setScrollBars();
    } else {
        ((VirtualQsciScintilla*)self)->setScrollBars();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetScrollBars(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetScrollBars_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetScrollBars_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_ContextMenuNeeded(const QsciScintilla* self, int x, int y) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return vqsciscintilla->contextMenuNeeded(static_cast<int>(x), static_cast<int>(y));
    } else {
        return ((VirtualQsciScintilla*)self)->contextMenuNeeded(static_cast<int>(x), static_cast<int>(y));
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseContextMenuNeeded(const QsciScintilla* self, int x, int y) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ContextMenuNeeded_IsBase(true);
        return vqsciscintilla->contextMenuNeeded(static_cast<int>(x), static_cast<int>(y));
    } else {
        return ((VirtualQsciScintilla*)self)->contextMenuNeeded(static_cast<int>(x), static_cast<int>(y));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnContextMenuNeeded(const QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ContextMenuNeeded_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ContextMenuNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetViewportMargins(QsciScintilla* self, int left, int top, int right, int bottom) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQsciScintilla*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetViewportMargins(QsciScintilla* self, int left, int top, int right, int bottom) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetViewportMargins_IsBase(true);
        vqsciscintilla->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQsciScintilla*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetViewportMargins(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SetViewportMargins_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QsciScintilla_ViewportMargins(const QsciScintilla* self) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return new QMargins(vqsciscintilla->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QsciScintilla_QBaseViewportMargins(const QsciScintilla* self) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ViewportMargins_IsBase(true);
        return new QMargins(vqsciscintilla->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnViewportMargins(const QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_ViewportMargins_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_DrawFrame(QsciScintilla* self, QPainter* param1) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->drawFrame(param1);
    } else {
        ((VirtualQsciScintilla*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseDrawFrame(QsciScintilla* self, QPainter* param1) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_DrawFrame_IsBase(true);
        vqsciscintilla->drawFrame(param1);
    } else {
        ((VirtualQsciScintilla*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnDrawFrame(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_DrawFrame_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_UpdateMicroFocus(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->updateMicroFocus();
    } else {
        ((VirtualQsciScintilla*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseUpdateMicroFocus(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_UpdateMicroFocus_IsBase(true);
        vqsciscintilla->updateMicroFocus();
    } else {
        ((VirtualQsciScintilla*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnUpdateMicroFocus(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_Create(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->create();
    } else {
        ((VirtualQsciScintilla*)self)->create();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseCreate(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Create_IsBase(true);
        vqsciscintilla->create();
    } else {
        ((VirtualQsciScintilla*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnCreate(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Create_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_Destroy(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->destroy();
    } else {
        ((VirtualQsciScintilla*)self)->destroy();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseDestroy(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Destroy_IsBase(true);
        vqsciscintilla->destroy();
    } else {
        ((VirtualQsciScintilla*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnDestroy(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Destroy_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_FocusNextChild(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return vqsciscintilla->focusNextChild();
    } else {
        return ((VirtualQsciScintilla*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseFocusNextChild(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_FocusNextChild_IsBase(true);
        return vqsciscintilla->focusNextChild();
    } else {
        return ((VirtualQsciScintilla*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFocusNextChild(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_FocusNextChild_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_FocusPreviousChild(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return vqsciscintilla->focusPreviousChild();
    } else {
        return ((VirtualQsciScintilla*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseFocusPreviousChild(QsciScintilla* self) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_FocusPreviousChild_IsBase(true);
        return vqsciscintilla->focusPreviousChild();
    } else {
        return ((VirtualQsciScintilla*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFocusPreviousChild(QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_FocusPreviousChild_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciScintilla_Sender(const QsciScintilla* self) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return vqsciscintilla->sender();
    } else {
        return ((VirtualQsciScintilla*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciScintilla_QBaseSender(const QsciScintilla* self) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Sender_IsBase(true);
        return vqsciscintilla->sender();
    } else {
        return ((VirtualQsciScintilla*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSender(const QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Sender_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciScintilla_SenderSignalIndex(const QsciScintilla* self) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return vqsciscintilla->senderSignalIndex();
    } else {
        return ((VirtualQsciScintilla*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciScintilla_QBaseSenderSignalIndex(const QsciScintilla* self) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SenderSignalIndex_IsBase(true);
        return vqsciscintilla->senderSignalIndex();
    } else {
        return ((VirtualQsciScintilla*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSenderSignalIndex(const QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciScintilla_Receivers(const QsciScintilla* self, const char* signal) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return vqsciscintilla->receivers(signal);
    } else {
        return ((VirtualQsciScintilla*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciScintilla_QBaseReceivers(const QsciScintilla* self, const char* signal) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Receivers_IsBase(true);
        return vqsciscintilla->receivers(signal);
    } else {
        return ((VirtualQsciScintilla*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnReceivers(const QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_Receivers_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_IsSignalConnected(const QsciScintilla* self, const QMetaMethod* signal) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return vqsciscintilla->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciScintilla*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseIsSignalConnected(const QsciScintilla* self, const QMetaMethod* signal) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_IsSignalConnected_IsBase(true);
        return vqsciscintilla->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciScintilla*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnIsSignalConnected(const QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QsciScintilla_GetDecodedMetricF(const QsciScintilla* self, int metricA, int metricB) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        return vqsciscintilla->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQsciScintilla*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QsciScintilla_QBaseGetDecodedMetricF(const QsciScintilla* self, int metricA, int metricB) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_GetDecodedMetricF_IsBase(true);
        return vqsciscintilla->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQsciScintilla*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnGetDecodedMetricF(const QsciScintilla* self, intptr_t slot) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla && vqsciscintilla->isVirtualQsciScintilla) {
        vqsciscintilla->setQsciScintilla_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_GetDecodedMetricF_Callback>(slot));
    }
}

void QsciScintilla_Delete(QsciScintilla* self) {
    delete self;
}
