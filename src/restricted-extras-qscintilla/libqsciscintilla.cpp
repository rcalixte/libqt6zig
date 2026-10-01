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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciScintilla_Tr(const char* s) {
    auto _ret = QsciScintilla::tr(s);
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
    QList<QString> _ret = self->apiContext(static_cast<int>(pos), static_cast<int&>(*context_start), static_cast<int&>(*last_word_start));
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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
    auto _ret = self->annotation(static_cast<int>(line));
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
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
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
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
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
    return self->findFirst(expr_QString, re, cs, wo, wrap, forward, static_cast<int>(line), static_cast<int>(index), show, posix, cxx11);
}

bool QsciScintilla_FindFirstInSelection(QsciScintilla* self, const libqt_string expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11) {
    QString expr_QString = QString::fromUtf8(expr.data, expr.len);
    return self->findFirstInSelection(expr_QString, re, cs, wo, forward, show, posix, cxx11);
}

bool QsciScintilla_FindNext(QsciScintilla* self) {
    return self->findNext();
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
    self->recolor(static_cast<int>(start), static_cast<int>(end));
}

void QsciScintilla_RegisterImage(QsciScintilla* self, int id, const QPixmap* pm) {
    self->registerImage(static_cast<int>(id), *pm);
}

void QsciScintilla_RegisterImage2(QsciScintilla* self, int id, const QImage* im) {
    self->registerImage(static_cast<int>(id), *im);
}

void QsciScintilla_Replace(QsciScintilla* self, const libqt_string replaceStr) {
    QString replaceStr_QString = QString::fromUtf8(replaceStr.data, replaceStr.len);
    self->replace(replaceStr_QString);
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
    auto _ret = self->selectedText();
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

libqt_string QsciScintilla_Text2(const QsciScintilla* self, int line) {
    auto _ret = self->text(static_cast<int>(line));
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
    auto _ret = self->text(static_cast<int>(start), static_cast<int>(end));
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
    auto _ret = self->wordAtLineIndex(static_cast<int>(line), static_cast<int>(index));
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
    auto _ret = self->wordAtPoint(*point);
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
    self->append(text_QString);
}

void QsciScintilla_AutoCompleteFromAll(QsciScintilla* self) {
    self->autoCompleteFromAll();
}

void QsciScintilla_AutoCompleteFromAPIs(QsciScintilla* self) {
    self->autoCompleteFromAPIs();
}

void QsciScintilla_AutoCompleteFromDocument(QsciScintilla* self) {
    self->autoCompleteFromDocument();
}

void QsciScintilla_CallTip(QsciScintilla* self) {
    self->callTip();
}

void QsciScintilla_Clear(QsciScintilla* self) {
    self->clear();
}

void QsciScintilla_Copy(QsciScintilla* self) {
    self->copy();
}

void QsciScintilla_Cut(QsciScintilla* self) {
    self->cut();
}

void QsciScintilla_EnsureCursorVisible(QsciScintilla* self) {
    self->ensureCursorVisible();
}

void QsciScintilla_EnsureLineVisible(QsciScintilla* self, int line) {
    self->ensureLineVisible(static_cast<int>(line));
}

void QsciScintilla_FoldAll(QsciScintilla* self, bool children) {
    self->foldAll(children);
}

void QsciScintilla_FoldLine(QsciScintilla* self, int line) {
    self->foldLine(static_cast<int>(line));
}

void QsciScintilla_Indent(QsciScintilla* self, int line) {
    self->indent(static_cast<int>(line));
}

void QsciScintilla_Insert(QsciScintilla* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->insert(text_QString);
}

void QsciScintilla_InsertAt(QsciScintilla* self, const libqt_string text, int line, int index) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->insertAt(text_QString, static_cast<int>(line), static_cast<int>(index));
}

void QsciScintilla_MoveToMatchingBrace(QsciScintilla* self) {
    self->moveToMatchingBrace();
}

void QsciScintilla_Paste(QsciScintilla* self) {
    self->paste();
}

void QsciScintilla_Redo(QsciScintilla* self) {
    self->redo();
}

void QsciScintilla_RemoveSelectedText(QsciScintilla* self) {
    self->removeSelectedText();
}

void QsciScintilla_ReplaceSelectedText(QsciScintilla* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->replaceSelectedText(text_QString);
}

void QsciScintilla_ResetSelectionBackgroundColor(QsciScintilla* self) {
    self->resetSelectionBackgroundColor();
}

void QsciScintilla_ResetSelectionForegroundColor(QsciScintilla* self) {
    self->resetSelectionForegroundColor();
}

void QsciScintilla_SelectAll(QsciScintilla* self, bool select) {
    self->selectAll(select);
}

void QsciScintilla_SelectToMatchingBrace(QsciScintilla* self) {
    self->selectToMatchingBrace();
}

void QsciScintilla_SetAutoCompletionCaseSensitivity(QsciScintilla* self, bool cs) {
    self->setAutoCompletionCaseSensitivity(cs);
}

void QsciScintilla_SetAutoCompletionReplaceWord(QsciScintilla* self, bool replace) {
    self->setAutoCompletionReplaceWord(replace);
}

void QsciScintilla_SetAutoCompletionShowSingle(QsciScintilla* self, bool single) {
    self->setAutoCompletionShowSingle(single);
}

void QsciScintilla_SetAutoCompletionSource(QsciScintilla* self, int source) {
    self->setAutoCompletionSource(static_cast<QsciScintilla::AutoCompletionSource>(source));
}

void QsciScintilla_SetAutoCompletionThreshold(QsciScintilla* self, int thresh) {
    self->setAutoCompletionThreshold(static_cast<int>(thresh));
}

void QsciScintilla_SetAutoCompletionUseSingle(QsciScintilla* self, int single) {
    self->setAutoCompletionUseSingle(static_cast<QsciScintilla::AutoCompletionUseSingle>(single));
}

void QsciScintilla_SetAutoIndent(QsciScintilla* self, bool autoindent) {
    self->setAutoIndent(autoindent);
}

void QsciScintilla_SetBraceMatching(QsciScintilla* self, int bm) {
    self->setBraceMatching(static_cast<QsciScintilla::BraceMatch>(bm));
}

void QsciScintilla_SetBackspaceUnindents(QsciScintilla* self, bool unindent) {
    self->setBackspaceUnindents(unindent);
}

void QsciScintilla_SetCaretForegroundColor(QsciScintilla* self, const QColor* col) {
    self->setCaretForegroundColor(*col);
}

void QsciScintilla_SetCaretLineBackgroundColor(QsciScintilla* self, const QColor* col) {
    self->setCaretLineBackgroundColor(*col);
}

void QsciScintilla_SetCaretLineFrameWidth(QsciScintilla* self, int width) {
    self->setCaretLineFrameWidth(static_cast<int>(width));
}

void QsciScintilla_SetCaretLineVisible(QsciScintilla* self, bool enable) {
    self->setCaretLineVisible(enable);
}

void QsciScintilla_SetCaretWidth(QsciScintilla* self, int width) {
    self->setCaretWidth(static_cast<int>(width));
}

void QsciScintilla_SetColor(QsciScintilla* self, const QColor* c) {
    self->setColor(*c);
}

void QsciScintilla_SetCursorPosition(QsciScintilla* self, int line, int index) {
    self->setCursorPosition(static_cast<int>(line), static_cast<int>(index));
}

void QsciScintilla_SetEolMode(QsciScintilla* self, int mode) {
    self->setEolMode(static_cast<QsciScintilla::EolMode>(mode));
}

void QsciScintilla_SetEolVisibility(QsciScintilla* self, bool visible) {
    self->setEolVisibility(visible);
}

void QsciScintilla_SetFolding(QsciScintilla* self, int fold, int margin) {
    self->setFolding(static_cast<QsciScintilla::FoldStyle>(fold), static_cast<int>(margin));
}

void QsciScintilla_SetIndentation(QsciScintilla* self, int line, int indentation) {
    self->setIndentation(static_cast<int>(line), static_cast<int>(indentation));
}

void QsciScintilla_SetIndentationGuides(QsciScintilla* self, bool enable) {
    self->setIndentationGuides(enable);
}

void QsciScintilla_SetIndentationGuidesBackgroundColor(QsciScintilla* self, const QColor* col) {
    self->setIndentationGuidesBackgroundColor(*col);
}

void QsciScintilla_SetIndentationGuidesForegroundColor(QsciScintilla* self, const QColor* col) {
    self->setIndentationGuidesForegroundColor(*col);
}

void QsciScintilla_SetIndentationsUseTabs(QsciScintilla* self, bool tabs) {
    self->setIndentationsUseTabs(tabs);
}

void QsciScintilla_SetIndentationWidth(QsciScintilla* self, int width) {
    self->setIndentationWidth(static_cast<int>(width));
}

void QsciScintilla_SetLexer(QsciScintilla* self, QsciLexer* lexer) {
    self->setLexer(lexer);
}

void QsciScintilla_SetMarginsBackgroundColor(QsciScintilla* self, const QColor* col) {
    self->setMarginsBackgroundColor(*col);
}

void QsciScintilla_SetMarginsFont(QsciScintilla* self, const QFont* f) {
    self->setMarginsFont(*f);
}

void QsciScintilla_SetMarginsForegroundColor(QsciScintilla* self, const QColor* col) {
    self->setMarginsForegroundColor(*col);
}

void QsciScintilla_SetMarginLineNumbers(QsciScintilla* self, int margin, bool lnrs) {
    self->setMarginLineNumbers(static_cast<int>(margin), lnrs);
}

void QsciScintilla_SetMarginMarkerMask(QsciScintilla* self, int margin, int mask) {
    self->setMarginMarkerMask(static_cast<int>(margin), static_cast<int>(mask));
}

void QsciScintilla_SetMarginSensitivity(QsciScintilla* self, int margin, bool sens) {
    self->setMarginSensitivity(static_cast<int>(margin), sens);
}

void QsciScintilla_SetMarginWidth(QsciScintilla* self, int margin, int width) {
    self->setMarginWidth(static_cast<int>(margin), static_cast<int>(width));
}

void QsciScintilla_SetMarginWidth2(QsciScintilla* self, int margin, const libqt_string s) {
    QString s_QString = QString::fromUtf8(s.data, s.len);
    self->setMarginWidth(static_cast<int>(margin), s_QString);
}

void QsciScintilla_SetModified(QsciScintilla* self, bool m) {
    self->setModified(m);
}

void QsciScintilla_SetPaper(QsciScintilla* self, const QColor* c) {
    self->setPaper(*c);
}

void QsciScintilla_SetReadOnly(QsciScintilla* self, bool ro) {
    self->setReadOnly(ro);
}

void QsciScintilla_SetSelection(QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo) {
    self->setSelection(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo));
}

void QsciScintilla_SetSelectionBackgroundColor(QsciScintilla* self, const QColor* col) {
    self->setSelectionBackgroundColor(*col);
}

void QsciScintilla_SetSelectionForegroundColor(QsciScintilla* self, const QColor* col) {
    self->setSelectionForegroundColor(*col);
}

void QsciScintilla_SetTabIndents(QsciScintilla* self, bool indent) {
    self->setTabIndents(indent);
}

void QsciScintilla_SetTabWidth(QsciScintilla* self, int width) {
    self->setTabWidth(static_cast<int>(width));
}

void QsciScintilla_SetText(QsciScintilla* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

void QsciScintilla_SetUtf8(QsciScintilla* self, bool cp) {
    self->setUtf8(cp);
}

void QsciScintilla_SetWhitespaceVisibility(QsciScintilla* self, int mode) {
    self->setWhitespaceVisibility(static_cast<QsciScintilla::WhitespaceVisibility>(mode));
}

void QsciScintilla_SetWrapMode(QsciScintilla* self, int mode) {
    self->setWrapMode(static_cast<QsciScintilla::WrapMode>(mode));
}

void QsciScintilla_Undo(QsciScintilla* self) {
    self->undo();
}

void QsciScintilla_Unindent(QsciScintilla* self, int line) {
    self->unindent(static_cast<int>(line));
}

void QsciScintilla_ZoomIn(QsciScintilla* self, int range) {
    self->zoomIn(static_cast<int>(range));
}

void QsciScintilla_ZoomIn2(QsciScintilla* self) {
    self->zoomIn();
}

void QsciScintilla_ZoomOut(QsciScintilla* self, int range) {
    self->zoomOut(static_cast<int>(range));
}

void QsciScintilla_ZoomOut2(QsciScintilla* self) {
    self->zoomOut();
}

void QsciScintilla_ZoomTo(QsciScintilla* self, int size) {
    self->zoomTo(static_cast<int>(size));
}

void QsciScintilla_CursorPositionChanged(QsciScintilla* self, int line, int index) {
    self->cursorPositionChanged(static_cast<int>(line), static_cast<int>(index));
}

void QsciScintilla_Connect_CursorPositionChanged(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*, int, int) = reinterpret_cast<void (*)(QsciScintilla*, int, int)>(slot);
    QsciScintilla::connect(self,
                           static_cast<void (QsciScintilla::*)(int, int)>(&QsciScintilla::cursorPositionChanged),
                           [self, slotFunc](int line, int index) {
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
    QsciScintilla::connect(self,
                           static_cast<void (QsciScintilla::*)(bool)>(&QsciScintilla::copyAvailable),
                           [self, slotFunc](bool yes) {
                               bool sigval1 = yes;
                               slotFunc(self, sigval1);
                           });
}

void QsciScintilla_IndicatorClicked(QsciScintilla* self, int line, int index, int state) {
    self->indicatorClicked(static_cast<int>(line), static_cast<int>(index), static_cast<Qt::KeyboardModifiers>(state));
}

void QsciScintilla_Connect_IndicatorClicked(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*, int, int, int) = reinterpret_cast<void (*)(QsciScintilla*, int, int, int)>(slot);
    QsciScintilla::connect(self,
                           static_cast<void (QsciScintilla::*)(int, int, Qt::KeyboardModifiers)>(&QsciScintilla::indicatorClicked),
                           [self, slotFunc](int line, int index, Qt::KeyboardModifiers state) {
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
    QsciScintilla::connect(self,
                           static_cast<void (QsciScintilla::*)(int, int, Qt::KeyboardModifiers)>(&QsciScintilla::indicatorReleased),
                           [self, slotFunc](int line, int index, Qt::KeyboardModifiers state) {
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
    QsciScintilla::connect(self,
                           static_cast<void (QsciScintilla::*)()>(&QsciScintilla::linesChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QsciScintilla_MarginClicked(QsciScintilla* self, int margin, int line, int state) {
    self->marginClicked(static_cast<int>(margin), static_cast<int>(line), static_cast<Qt::KeyboardModifiers>(state));
}

void QsciScintilla_Connect_MarginClicked(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*, int, int, int) = reinterpret_cast<void (*)(QsciScintilla*, int, int, int)>(slot);
    QsciScintilla::connect(self,
                           static_cast<void (QsciScintilla::*)(int, int, Qt::KeyboardModifiers)>(&QsciScintilla::marginClicked),
                           [self, slotFunc](int margin, int line, Qt::KeyboardModifiers state) {
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
    QsciScintilla::connect(self,
                           static_cast<void (QsciScintilla::*)(int, int, Qt::KeyboardModifiers)>(&QsciScintilla::marginRightClicked),
                           [self, slotFunc](int margin, int line, Qt::KeyboardModifiers state) {
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
    QsciScintilla::connect(self,
                           static_cast<void (QsciScintilla::*)()>(&QsciScintilla::modificationAttempted),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QsciScintilla_ModificationChanged(QsciScintilla* self, bool m) {
    self->modificationChanged(m);
}

void QsciScintilla_Connect_ModificationChanged(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*, bool) = reinterpret_cast<void (*)(QsciScintilla*, bool)>(slot);
    QsciScintilla::connect(self,
                           static_cast<void (QsciScintilla::*)(bool)>(&QsciScintilla::modificationChanged),
                           [self, slotFunc](bool m) {
                               bool sigval1 = m;
                               slotFunc(self, sigval1);
                           });
}

void QsciScintilla_SelectionChanged(QsciScintilla* self) {
    self->selectionChanged();
}

void QsciScintilla_Connect_SelectionChanged(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*) = reinterpret_cast<void (*)(QsciScintilla*)>(slot);
    QsciScintilla::connect(self,
                           static_cast<void (QsciScintilla::*)()>(&QsciScintilla::selectionChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QsciScintilla_TextChanged(QsciScintilla* self) {
    self->textChanged();
}

void QsciScintilla_Connect_TextChanged(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*) = reinterpret_cast<void (*)(QsciScintilla*)>(slot);
    QsciScintilla::connect(self,
                           static_cast<void (QsciScintilla::*)()>(&QsciScintilla::textChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QsciScintilla_UserListActivated(QsciScintilla* self, int id, const libqt_string string) {
    QString string_QString = QString::fromUtf8(string.data, string.len);
    self->userListActivated(static_cast<int>(id), string_QString);
}

void QsciScintilla_Connect_UserListActivated(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*, int, const char*) = reinterpret_cast<void (*)(QsciScintilla*, int, const char*)>(slot);
    QsciScintilla::connect(self,
                           static_cast<void (QsciScintilla::*)(int, const QString&)>(&QsciScintilla::userListActivated),
                           [self, slotFunc](int id, const QString& string) {
                               int sigval1 = id;
                               const auto string_ret = string;
                               // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                               QByteArray string_b = string_ret.toUtf8();
                               auto string_str_len = string_b.length();
                               const char* string_str = static_cast<const char*>(malloc(string_str_len + 1));
                               memcpy((void*)string_str, string_b.data(), string_str_len);
                               ((char*)string_str)[string_str_len] = '\0';
                               const char* sigval2 = string_str;
                               slotFunc(self, sigval1, sigval2);
                               libqt_free(string_str);
                           });
}

bool QsciScintilla_Event(QsciScintilla* self, QEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        return vqsciscintilla->event(e);
    }
    qFatal("Error: Protected method QsciScintilla::event called without a directly constructed type");
}

void QsciScintilla_ChangeEvent(QsciScintilla* self, QEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->changeEvent(e);
    }
}

void QsciScintilla_ContextMenuEvent(QsciScintilla* self, QContextMenuEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->contextMenuEvent(e);
    }
}

void QsciScintilla_WheelEvent(QsciScintilla* self, QWheelEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->wheelEvent(e);
    }
}

libqt_string QsciScintilla_Tr2(const char* s, const char* c) {
    auto _ret = QsciScintilla::tr(s, c);
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
    auto _ret = QsciScintilla::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciScintilla_SuperMetaObject(const QsciScintilla* self) {
    return (QMetaObject*)self->QsciScintilla::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMetaObject(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self)))
        vqsciscintilla->qsciscintilla_metaobject_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciScintilla_SuperMetacast(QsciScintilla* self, const char* param1) {
    return self->QsciScintilla::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMetacast(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_metacast_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciScintilla_SuperMetacall(QsciScintilla* self, int param1, int param2, void** param3) {
    return self->QsciScintilla::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMetacall(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_metacall_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Metacall_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of libqt_string */ QsciScintilla_SuperApiContext(QsciScintilla* self, int pos, int* context_start, int* last_word_start) {
    QList<QString> _ret = self->QsciScintilla::apiContext(static_cast<int>(pos), static_cast<int&>(*context_start), static_cast<int&>(*last_word_start));
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnApiContext(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_apicontext_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ApiContext_Callback>(slot);
}

// Base class handler implementation
bool QsciScintilla_SuperFindFirst(QsciScintilla* self, const libqt_string expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11) {
    QString expr_QString = QString::fromUtf8(expr.data, expr.len);
    return self->QsciScintilla::findFirst(expr_QString, re, cs, wo, wrap, forward, static_cast<int>(line), static_cast<int>(index), show, posix, cxx11);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFindFirst(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_findfirst_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FindFirst_Callback>(slot);
}

// Base class handler implementation
bool QsciScintilla_SuperFindFirstInSelection(QsciScintilla* self, const libqt_string expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11) {
    QString expr_QString = QString::fromUtf8(expr.data, expr.len);
    return self->QsciScintilla::findFirstInSelection(expr_QString, re, cs, wo, forward, show, posix, cxx11);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFindFirstInSelection(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_findfirstinselection_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FindFirstInSelection_Callback>(slot);
}

// Base class handler implementation
bool QsciScintilla_SuperFindNext(QsciScintilla* self) {
    return self->QsciScintilla::findNext();
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFindNext(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_findnext_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FindNext_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperRecolor(QsciScintilla* self, int start, int end) {
    self->QsciScintilla::recolor(static_cast<int>(start), static_cast<int>(end));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnRecolor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_recolor_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Recolor_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperReplace(QsciScintilla* self, const libqt_string replaceStr) {
    QString replaceStr_QString = QString::fromUtf8(replaceStr.data, replaceStr.len);
    self->QsciScintilla::replace(replaceStr_QString);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnReplace(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_replace_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Replace_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperAppend(QsciScintilla* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->QsciScintilla::append(text_QString);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnAppend(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_append_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Append_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperAutoCompleteFromAll(QsciScintilla* self) {
    self->QsciScintilla::autoCompleteFromAll();
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnAutoCompleteFromAll(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_autocompletefromall_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_AutoCompleteFromAll_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperAutoCompleteFromAPIs(QsciScintilla* self) {
    self->QsciScintilla::autoCompleteFromAPIs();
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnAutoCompleteFromAPIs(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_autocompletefromapis_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_AutoCompleteFromAPIs_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperAutoCompleteFromDocument(QsciScintilla* self) {
    self->QsciScintilla::autoCompleteFromDocument();
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnAutoCompleteFromDocument(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_autocompletefromdocument_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_AutoCompleteFromDocument_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperCallTip(QsciScintilla* self) {
    self->QsciScintilla::callTip();
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnCallTip(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_calltip_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_CallTip_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperClear(QsciScintilla* self) {
    self->QsciScintilla::clear();
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnClear(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_clear_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Clear_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperCopy(QsciScintilla* self) {
    self->QsciScintilla::copy();
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnCopy(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_copy_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Copy_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperCut(QsciScintilla* self) {
    self->QsciScintilla::cut();
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnCut(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_cut_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Cut_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperEnsureCursorVisible(QsciScintilla* self) {
    self->QsciScintilla::ensureCursorVisible();
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnEnsureCursorVisible(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_ensurecursorvisible_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_EnsureCursorVisible_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperEnsureLineVisible(QsciScintilla* self, int line) {
    self->QsciScintilla::ensureLineVisible(static_cast<int>(line));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnEnsureLineVisible(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_ensurelinevisible_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_EnsureLineVisible_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperFoldAll(QsciScintilla* self, bool children) {
    self->QsciScintilla::foldAll(children);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFoldAll(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_foldall_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FoldAll_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperFoldLine(QsciScintilla* self, int line) {
    self->QsciScintilla::foldLine(static_cast<int>(line));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFoldLine(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_foldline_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FoldLine_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperIndent(QsciScintilla* self, int line) {
    self->QsciScintilla::indent(static_cast<int>(line));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnIndent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_indent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Indent_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperInsert(QsciScintilla* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->QsciScintilla::insert(text_QString);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnInsert(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_insert_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Insert_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperInsertAt(QsciScintilla* self, const libqt_string text, int line, int index) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->QsciScintilla::insertAt(text_QString, static_cast<int>(line), static_cast<int>(index));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnInsertAt(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_insertat_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_InsertAt_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperMoveToMatchingBrace(QsciScintilla* self) {
    self->QsciScintilla::moveToMatchingBrace();
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMoveToMatchingBrace(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_movetomatchingbrace_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_MoveToMatchingBrace_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperPaste(QsciScintilla* self) {
    self->QsciScintilla::paste();
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnPaste(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_paste_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Paste_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperRedo(QsciScintilla* self) {
    self->QsciScintilla::redo();
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnRedo(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_redo_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Redo_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperRemoveSelectedText(QsciScintilla* self) {
    self->QsciScintilla::removeSelectedText();
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnRemoveSelectedText(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_removeselectedtext_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_RemoveSelectedText_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperReplaceSelectedText(QsciScintilla* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->QsciScintilla::replaceSelectedText(text_QString);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnReplaceSelectedText(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_replaceselectedtext_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ReplaceSelectedText_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperResetSelectionBackgroundColor(QsciScintilla* self) {
    self->QsciScintilla::resetSelectionBackgroundColor();
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnResetSelectionBackgroundColor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_resetselectionbackgroundcolor_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ResetSelectionBackgroundColor_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperResetSelectionForegroundColor(QsciScintilla* self) {
    self->QsciScintilla::resetSelectionForegroundColor();
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnResetSelectionForegroundColor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_resetselectionforegroundcolor_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ResetSelectionForegroundColor_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSelectAll(QsciScintilla* self, bool select) {
    self->QsciScintilla::selectAll(select);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSelectAll(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_selectall_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SelectAll_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSelectToMatchingBrace(QsciScintilla* self) {
    self->QsciScintilla::selectToMatchingBrace();
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSelectToMatchingBrace(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_selecttomatchingbrace_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SelectToMatchingBrace_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetAutoCompletionCaseSensitivity(QsciScintilla* self, bool cs) {
    self->QsciScintilla::setAutoCompletionCaseSensitivity(cs);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetAutoCompletionCaseSensitivity(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setautocompletioncasesensitivity_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetAutoCompletionCaseSensitivity_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetAutoCompletionReplaceWord(QsciScintilla* self, bool replace) {
    self->QsciScintilla::setAutoCompletionReplaceWord(replace);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetAutoCompletionReplaceWord(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setautocompletionreplaceword_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetAutoCompletionReplaceWord_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetAutoCompletionShowSingle(QsciScintilla* self, bool single) {
    self->QsciScintilla::setAutoCompletionShowSingle(single);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetAutoCompletionShowSingle(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setautocompletionshowsingle_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetAutoCompletionShowSingle_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetAutoCompletionSource(QsciScintilla* self, int source) {
    self->QsciScintilla::setAutoCompletionSource(static_cast<QsciScintilla::AutoCompletionSource>(source));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetAutoCompletionSource(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setautocompletionsource_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetAutoCompletionSource_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetAutoCompletionThreshold(QsciScintilla* self, int thresh) {
    self->QsciScintilla::setAutoCompletionThreshold(static_cast<int>(thresh));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetAutoCompletionThreshold(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setautocompletionthreshold_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetAutoCompletionThreshold_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetAutoCompletionUseSingle(QsciScintilla* self, int single) {
    self->QsciScintilla::setAutoCompletionUseSingle(static_cast<QsciScintilla::AutoCompletionUseSingle>(single));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetAutoCompletionUseSingle(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setautocompletionusesingle_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetAutoCompletionUseSingle_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetAutoIndent(QsciScintilla* self, bool autoindent) {
    self->QsciScintilla::setAutoIndent(autoindent);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetAutoIndent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setautoindent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetAutoIndent_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetBraceMatching(QsciScintilla* self, int bm) {
    self->QsciScintilla::setBraceMatching(static_cast<QsciScintilla::BraceMatch>(bm));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetBraceMatching(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setbracematching_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetBraceMatching_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetBackspaceUnindents(QsciScintilla* self, bool unindent) {
    self->QsciScintilla::setBackspaceUnindents(unindent);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetBackspaceUnindents(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setbackspaceunindents_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetBackspaceUnindents_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetCaretForegroundColor(QsciScintilla* self, const QColor* col) {
    self->QsciScintilla::setCaretForegroundColor(*col);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetCaretForegroundColor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setcaretforegroundcolor_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetCaretForegroundColor_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetCaretLineBackgroundColor(QsciScintilla* self, const QColor* col) {
    self->QsciScintilla::setCaretLineBackgroundColor(*col);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetCaretLineBackgroundColor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setcaretlinebackgroundcolor_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetCaretLineBackgroundColor_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetCaretLineFrameWidth(QsciScintilla* self, int width) {
    self->QsciScintilla::setCaretLineFrameWidth(static_cast<int>(width));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetCaretLineFrameWidth(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setcaretlineframewidth_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetCaretLineFrameWidth_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetCaretLineVisible(QsciScintilla* self, bool enable) {
    self->QsciScintilla::setCaretLineVisible(enable);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetCaretLineVisible(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setcaretlinevisible_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetCaretLineVisible_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetCaretWidth(QsciScintilla* self, int width) {
    self->QsciScintilla::setCaretWidth(static_cast<int>(width));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetCaretWidth(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setcaretwidth_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetCaretWidth_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetColor(QsciScintilla* self, const QColor* c) {
    self->QsciScintilla::setColor(*c);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetColor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setcolor_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetColor_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetCursorPosition(QsciScintilla* self, int line, int index) {
    self->QsciScintilla::setCursorPosition(static_cast<int>(line), static_cast<int>(index));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetCursorPosition(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setcursorposition_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetCursorPosition_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetEolMode(QsciScintilla* self, int mode) {
    self->QsciScintilla::setEolMode(static_cast<QsciScintilla::EolMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetEolMode(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_seteolmode_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetEolMode_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetEolVisibility(QsciScintilla* self, bool visible) {
    self->QsciScintilla::setEolVisibility(visible);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetEolVisibility(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_seteolvisibility_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetEolVisibility_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetFolding(QsciScintilla* self, int fold, int margin) {
    self->QsciScintilla::setFolding(static_cast<QsciScintilla::FoldStyle>(fold), static_cast<int>(margin));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetFolding(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setfolding_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetFolding_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetIndentation(QsciScintilla* self, int line, int indentation) {
    self->QsciScintilla::setIndentation(static_cast<int>(line), static_cast<int>(indentation));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetIndentation(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setindentation_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetIndentation_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetIndentationGuides(QsciScintilla* self, bool enable) {
    self->QsciScintilla::setIndentationGuides(enable);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetIndentationGuides(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setindentationguides_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetIndentationGuides_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetIndentationGuidesBackgroundColor(QsciScintilla* self, const QColor* col) {
    self->QsciScintilla::setIndentationGuidesBackgroundColor(*col);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetIndentationGuidesBackgroundColor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setindentationguidesbackgroundcolor_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetIndentationGuidesBackgroundColor_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetIndentationGuidesForegroundColor(QsciScintilla* self, const QColor* col) {
    self->QsciScintilla::setIndentationGuidesForegroundColor(*col);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetIndentationGuidesForegroundColor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setindentationguidesforegroundcolor_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetIndentationGuidesForegroundColor_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetIndentationsUseTabs(QsciScintilla* self, bool tabs) {
    self->QsciScintilla::setIndentationsUseTabs(tabs);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetIndentationsUseTabs(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setindentationsusetabs_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetIndentationsUseTabs_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetIndentationWidth(QsciScintilla* self, int width) {
    self->QsciScintilla::setIndentationWidth(static_cast<int>(width));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetIndentationWidth(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setindentationwidth_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetIndentationWidth_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetLexer(QsciScintilla* self, QsciLexer* lexer) {
    self->QsciScintilla::setLexer(lexer);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetLexer(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setlexer_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetLexer_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetMarginsBackgroundColor(QsciScintilla* self, const QColor* col) {
    self->QsciScintilla::setMarginsBackgroundColor(*col);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginsBackgroundColor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setmarginsbackgroundcolor_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginsBackgroundColor_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetMarginsFont(QsciScintilla* self, const QFont* f) {
    self->QsciScintilla::setMarginsFont(*f);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginsFont(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setmarginsfont_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginsFont_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetMarginsForegroundColor(QsciScintilla* self, const QColor* col) {
    self->QsciScintilla::setMarginsForegroundColor(*col);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginsForegroundColor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setmarginsforegroundcolor_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginsForegroundColor_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetMarginLineNumbers(QsciScintilla* self, int margin, bool lnrs) {
    self->QsciScintilla::setMarginLineNumbers(static_cast<int>(margin), lnrs);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginLineNumbers(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setmarginlinenumbers_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginLineNumbers_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetMarginMarkerMask(QsciScintilla* self, int margin, int mask) {
    self->QsciScintilla::setMarginMarkerMask(static_cast<int>(margin), static_cast<int>(mask));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginMarkerMask(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setmarginmarkermask_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginMarkerMask_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetMarginSensitivity(QsciScintilla* self, int margin, bool sens) {
    self->QsciScintilla::setMarginSensitivity(static_cast<int>(margin), sens);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginSensitivity(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setmarginsensitivity_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginSensitivity_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetMarginWidth(QsciScintilla* self, int margin, int width) {
    self->QsciScintilla::setMarginWidth(static_cast<int>(margin), static_cast<int>(width));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginWidth(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setmarginwidth_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginWidth_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetMarginWidth2(QsciScintilla* self, int margin, const libqt_string s) {
    QString s_QString = QString::fromUtf8(s.data, s.len);
    self->QsciScintilla::setMarginWidth(static_cast<int>(margin), s_QString);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginWidth2(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setmarginwidth2_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginWidth2_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetModified(QsciScintilla* self, bool m) {
    self->QsciScintilla::setModified(m);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetModified(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setmodified_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetModified_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetPaper(QsciScintilla* self, const QColor* c) {
    self->QsciScintilla::setPaper(*c);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetPaper(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setpaper_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetPaper_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetReadOnly(QsciScintilla* self, bool ro) {
    self->QsciScintilla::setReadOnly(ro);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetReadOnly(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setreadonly_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetReadOnly_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetSelection(QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo) {
    self->QsciScintilla::setSelection(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetSelection(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setselection_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetSelection_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetSelectionBackgroundColor(QsciScintilla* self, const QColor* col) {
    self->QsciScintilla::setSelectionBackgroundColor(*col);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetSelectionBackgroundColor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setselectionbackgroundcolor_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetSelectionBackgroundColor_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetSelectionForegroundColor(QsciScintilla* self, const QColor* col) {
    self->QsciScintilla::setSelectionForegroundColor(*col);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetSelectionForegroundColor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setselectionforegroundcolor_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetSelectionForegroundColor_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetTabIndents(QsciScintilla* self, bool indent) {
    self->QsciScintilla::setTabIndents(indent);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetTabIndents(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_settabindents_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetTabIndents_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetTabWidth(QsciScintilla* self, int width) {
    self->QsciScintilla::setTabWidth(static_cast<int>(width));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetTabWidth(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_settabwidth_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetTabWidth_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetText(QsciScintilla* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->QsciScintilla::setText(text_QString);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetText(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_settext_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetText_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetUtf8(QsciScintilla* self, bool cp) {
    self->QsciScintilla::setUtf8(cp);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetUtf8(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setutf8_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetUtf8_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetWhitespaceVisibility(QsciScintilla* self, int mode) {
    self->QsciScintilla::setWhitespaceVisibility(static_cast<QsciScintilla::WhitespaceVisibility>(mode));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetWhitespaceVisibility(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setwhitespacevisibility_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetWhitespaceVisibility_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperSetWrapMode(QsciScintilla* self, int mode) {
    self->QsciScintilla::setWrapMode(static_cast<QsciScintilla::WrapMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetWrapMode(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setwrapmode_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetWrapMode_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperUndo(QsciScintilla* self) {
    self->QsciScintilla::undo();
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnUndo(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_undo_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Undo_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperUnindent(QsciScintilla* self, int line) {
    self->QsciScintilla::unindent(static_cast<int>(line));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnUnindent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_unindent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Unindent_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperZoomIn(QsciScintilla* self, int range) {
    self->QsciScintilla::zoomIn(static_cast<int>(range));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnZoomIn(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_zoomin_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ZoomIn_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperZoomIn2(QsciScintilla* self) {
    self->QsciScintilla::zoomIn();
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnZoomIn2(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_zoomin2_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ZoomIn2_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperZoomOut(QsciScintilla* self, int range) {
    self->QsciScintilla::zoomOut(static_cast<int>(range));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnZoomOut(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_zoomout_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ZoomOut_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperZoomOut2(QsciScintilla* self) {
    self->QsciScintilla::zoomOut();
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnZoomOut2(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_zoomout2_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ZoomOut2_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperZoomTo(QsciScintilla* self, int size) {
    self->QsciScintilla::zoomTo(static_cast<int>(size));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnZoomTo(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_zoomto_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ZoomTo_Callback>(slot);
}

// Base class handler implementation
bool QsciScintilla_SuperEvent(QsciScintilla* self, QEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        return vqsciscintilla->QsciScintilla::event(e);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_event_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Event_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperChangeEvent(QsciScintilla* self, QEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnChangeEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_changeevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperContextMenuEvent(QsciScintilla* self, QContextMenuEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::contextMenuEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnContextMenuEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_contextmenuevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
void QsciScintilla_SuperWheelEvent(QsciScintilla* self, QWheelEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnWheelEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_wheelevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
bool QsciScintilla_CanInsertFromMimeData(const QsciScintilla* self, const QMimeData* source) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla) {
        return vqsciscintilla->canInsertFromMimeData(source);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::canInsertFromMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciScintilla_SuperCanInsertFromMimeData(const QsciScintilla* self, const QMimeData* source) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->QsciScintilla::canInsertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::canInsertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnCanInsertFromMimeData(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self)))
        vqsciscintilla->qsciscintilla_caninsertfrommimedata_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_CanInsertFromMimeData_Callback>(slot);
}

// Derived class handler implementation
libqt_string QsciScintilla_FromMimeData(const QsciScintilla* self, const QMimeData* source, bool* rectangular) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla) {
        QByteArray _qb = vqsciscintilla->fromMimeData(source, *rectangular);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::fromMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
libqt_string QsciScintilla_SuperFromMimeData(const QsciScintilla* self, const QMimeData* source, bool* rectangular) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        QByteArray _qb = vqsciscintilla->QsciScintilla::fromMimeData(source, *rectangular);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected virtual method QsciScintilla::fromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFromMimeData(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self)))
        vqsciscintilla->qsciscintilla_frommimedata_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FromMimeData_Callback>(slot);
}

// Derived class handler implementation
QMimeData* QsciScintilla_ToMimeData(const QsciScintilla* self, const libqt_string text, bool rectangular) {
    QByteArray text_QByteArray(text.data, text.len);
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla) {
        return vqsciscintilla->toMimeData(text_QByteArray, rectangular);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::toMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
QMimeData* QsciScintilla_SuperToMimeData(const QsciScintilla* self, const libqt_string text, bool rectangular) {
    QByteArray text_QByteArray(text.data, text.len);
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->QsciScintilla::toMimeData(text_QByteArray, rectangular);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::toMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnToMimeData(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self)))
        vqsciscintilla->qsciscintilla_tomimedata_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ToMimeData_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_DragEnterEvent(QsciScintilla* self, QDragEnterEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->dragEnterEvent(e);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperDragEnterEvent(QsciScintilla* self, QDragEnterEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::dragEnterEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnDragEnterEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_dragenterevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_DragLeaveEvent(QsciScintilla* self, QDragLeaveEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->dragLeaveEvent(e);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperDragLeaveEvent(QsciScintilla* self, QDragLeaveEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::dragLeaveEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnDragLeaveEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_dragleaveevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_DragMoveEvent(QsciScintilla* self, QDragMoveEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->dragMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperDragMoveEvent(QsciScintilla* self, QDragMoveEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::dragMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnDragMoveEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_dragmoveevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_DropEvent(QsciScintilla* self, QDropEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->dropEvent(e);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperDropEvent(QsciScintilla* self, QDropEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::dropEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnDropEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_dropevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_FocusInEvent(QsciScintilla* self, QFocusEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->focusInEvent(e);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperFocusInEvent(QsciScintilla* self, QFocusEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFocusInEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_focusinevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_FocusOutEvent(QsciScintilla* self, QFocusEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperFocusOutEvent(QsciScintilla* self, QFocusEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFocusOutEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_focusoutevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
bool QsciScintilla_FocusNextPrevChild(QsciScintilla* self, bool next) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        return vqsciscintilla->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciScintilla_SuperFocusNextPrevChild(QsciScintilla* self, bool next) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        return vqsciscintilla->QsciScintilla::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFocusNextPrevChild(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_focusnextprevchild_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_KeyPressEvent(QsciScintilla* self, QKeyEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->keyPressEvent(e);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperKeyPressEvent(QsciScintilla* self, QKeyEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnKeyPressEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_keypressevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_InputMethodEvent(QsciScintilla* self, QInputMethodEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperInputMethodEvent(QsciScintilla* self, QInputMethodEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnInputMethodEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_inputmethodevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QsciScintilla_InputMethodQuery(const QsciScintilla* self, int query) {
    return new QVariant((self->*&VirtualQsciScintilla::Base::inputMethodQuery)(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QsciScintilla_SuperInputMethodQuery(const QsciScintilla* self, int query) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self)))
        return new QVariant(vqsciscintilla->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    qFatal("Error: Protected virtual method QsciScintilla::inputMethodQuery called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnInputMethodQuery(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self)))
        vqsciscintilla->qsciscintilla_inputmethodquery_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_MouseDoubleClickEvent(QsciScintilla* self, QMouseEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->mouseDoubleClickEvent(e);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperMouseDoubleClickEvent(QsciScintilla* self, QMouseEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::mouseDoubleClickEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMouseDoubleClickEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_mousedoubleclickevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_MouseMoveEvent(QsciScintilla* self, QMouseEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->mouseMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperMouseMoveEvent(QsciScintilla* self, QMouseEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMouseMoveEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_mousemoveevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_MousePressEvent(QsciScintilla* self, QMouseEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperMousePressEvent(QsciScintilla* self, QMouseEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMousePressEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_mousepressevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_MouseReleaseEvent(QsciScintilla* self, QMouseEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperMouseReleaseEvent(QsciScintilla* self, QMouseEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMouseReleaseEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_mousereleaseevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_PaintEvent(QsciScintilla* self, QPaintEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->paintEvent(e);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperPaintEvent(QsciScintilla* self, QPaintEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnPaintEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_paintevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_ResizeEvent(QsciScintilla* self, QResizeEvent* e) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->resizeEvent(e);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperResizeEvent(QsciScintilla* self, QResizeEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnResizeEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_resizeevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_ScrollContentsBy(QsciScintilla* self, int dx, int dy) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::scrollContentsBy called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperScrollContentsBy(QsciScintilla* self, int dx, int dy) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method QsciScintilla::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnScrollContentsBy(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_scrollcontentsby_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ScrollContentsBy_Callback>(slot);
}

// Derived class handler implementation
QSize* QsciScintilla_MinimumSizeHint(const QsciScintilla* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QsciScintilla_SuperMinimumSizeHint(const QsciScintilla* self) {
    return new QSize(self->QsciScintilla::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMinimumSizeHint(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self)))
        vqsciscintilla->qsciscintilla_minimumsizehint_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QsciScintilla_SizeHint(const QsciScintilla* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QsciScintilla_SuperSizeHint(const QsciScintilla* self) {
    return new QSize(self->QsciScintilla::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSizeHint(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self)))
        vqsciscintilla->qsciscintilla_sizehint_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_SetupViewport(QsciScintilla* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void QsciScintilla_SuperSetupViewport(QsciScintilla* self, QWidget* viewport) {
    self->QsciScintilla::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetupViewport(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setupviewport_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
bool QsciScintilla_EventFilter(QsciScintilla* self, QObject* param1, QEvent* param2) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        return vqsciscintilla->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciScintilla_SuperEventFilter(QsciScintilla* self, QObject* param1, QEvent* param2) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        return vqsciscintilla->QsciScintilla::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnEventFilter(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_eventfilter_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool QsciScintilla_ViewportEvent(QsciScintilla* self, QEvent* param1) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        return vqsciscintilla->viewportEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciScintilla_SuperViewportEvent(QsciScintilla* self, QEvent* param1) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        return vqsciscintilla->QsciScintilla::viewportEvent(param1);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnViewportEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_viewportevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* QsciScintilla_ViewportSizeHint(const QsciScintilla* self) {
    return new QSize((self->*&VirtualQsciScintilla::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* QsciScintilla_SuperViewportSizeHint(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self)))
        return new QSize(vqsciscintilla->viewportSizeHint());
    qFatal("Error: Protected virtual method QsciScintilla::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnViewportSizeHint(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self)))
        vqsciscintilla->qsciscintilla_viewportsizehint_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_InitStyleOption(const QsciScintilla* self, QStyleOptionFrame* option) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla) {
        vqsciscintilla->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperInitStyleOption(const QsciScintilla* self, QStyleOptionFrame* option) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->QsciScintilla::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnInitStyleOption(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self)))
        vqsciscintilla->qsciscintilla_initstyleoption_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QsciScintilla_DevType(const QsciScintilla* self) {
    return self->devType();
}

// Base class handler implementation
int QsciScintilla_SuperDevType(const QsciScintilla* self) {
    return self->QsciScintilla::devType();
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnDevType(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self)))
        vqsciscintilla->qsciscintilla_devtype_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_DevType_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_SetVisible(QsciScintilla* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QsciScintilla_SuperSetVisible(QsciScintilla* self, bool visible) {
    self->QsciScintilla::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetVisible(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_setvisible_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QsciScintilla_HeightForWidth(const QsciScintilla* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QsciScintilla_SuperHeightForWidth(const QsciScintilla* self, int param1) {
    return self->QsciScintilla::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnHeightForWidth(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self)))
        vqsciscintilla->qsciscintilla_heightforwidth_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QsciScintilla_HasHeightForWidth(const QsciScintilla* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QsciScintilla_SuperHasHeightForWidth(const QsciScintilla* self) {
    return self->QsciScintilla::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnHasHeightForWidth(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self)))
        vqsciscintilla->qsciscintilla_hasheightforwidth_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QsciScintilla_PaintEngine(const QsciScintilla* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QsciScintilla_SuperPaintEngine(const QsciScintilla* self) {
    return self->QsciScintilla::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnPaintEngine(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self)))
        vqsciscintilla->qsciscintilla_paintengine_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_KeyReleaseEvent(QsciScintilla* self, QKeyEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperKeyReleaseEvent(QsciScintilla* self, QKeyEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnKeyReleaseEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_keyreleaseevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_EnterEvent(QsciScintilla* self, QEnterEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperEnterEvent(QsciScintilla* self, QEnterEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnEnterEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_enterevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_LeaveEvent(QsciScintilla* self, QEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperLeaveEvent(QsciScintilla* self, QEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnLeaveEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_leaveevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_MoveEvent(QsciScintilla* self, QMoveEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperMoveEvent(QsciScintilla* self, QMoveEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMoveEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_moveevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_CloseEvent(QsciScintilla* self, QCloseEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperCloseEvent(QsciScintilla* self, QCloseEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnCloseEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_closeevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_TabletEvent(QsciScintilla* self, QTabletEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperTabletEvent(QsciScintilla* self, QTabletEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnTabletEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_tabletevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_ActionEvent(QsciScintilla* self, QActionEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperActionEvent(QsciScintilla* self, QActionEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnActionEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_actionevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_ShowEvent(QsciScintilla* self, QShowEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperShowEvent(QsciScintilla* self, QShowEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnShowEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_showevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_HideEvent(QsciScintilla* self, QHideEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperHideEvent(QsciScintilla* self, QHideEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnHideEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_hideevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QsciScintilla_NativeEvent(QsciScintilla* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        return vqsciscintilla->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciScintilla_SuperNativeEvent(QsciScintilla* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        return vqsciscintilla->QsciScintilla::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QsciScintilla::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnNativeEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_nativeevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QsciScintilla_Metric(const QsciScintilla* self, int param1) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla) {
        return vqsciscintilla->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QsciScintilla_SuperMetric(const QsciScintilla* self, int param1) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->QsciScintilla::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QsciScintilla::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMetric(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self)))
        vqsciscintilla->qsciscintilla_metric_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Metric_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_InitPainter(const QsciScintilla* self, QPainter* painter) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla) {
        vqsciscintilla->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperInitPainter(const QsciScintilla* self, QPainter* painter) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->QsciScintilla::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnInitPainter(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self)))
        vqsciscintilla->qsciscintilla_initpainter_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QsciScintilla_Redirected(const QsciScintilla* self, QPoint* offset) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla) {
        return vqsciscintilla->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QsciScintilla_SuperRedirected(const QsciScintilla* self, QPoint* offset) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->QsciScintilla::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnRedirected(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self)))
        vqsciscintilla->qsciscintilla_redirected_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QsciScintilla_SharedPainter(const QsciScintilla* self) {
    auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self));
    if (vqsciscintilla) {
        return vqsciscintilla->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QsciScintilla_SuperSharedPainter(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->QsciScintilla::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QsciScintilla::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSharedPainter(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self)))
        vqsciscintilla->qsciscintilla_sharedpainter_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_TimerEvent(QsciScintilla* self, QTimerEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperTimerEvent(QsciScintilla* self, QTimerEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnTimerEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_timerevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_ChildEvent(QsciScintilla* self, QChildEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperChildEvent(QsciScintilla* self, QChildEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnChildEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_childevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_CustomEvent(QsciScintilla* self, QEvent* event) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperCustomEvent(QsciScintilla* self, QEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnCustomEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_customevent_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_ConnectNotify(QsciScintilla* self, const QMetaMethod* signal) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperConnectNotify(QsciScintilla* self, const QMetaMethod* signal) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnConnectNotify(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_connectnotify_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciScintilla_DisconnectNotify(QsciScintilla* self, const QMetaMethod* signal) {
    auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self);
    if (vqsciscintilla) {
        vqsciscintilla->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciScintilla::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintilla_SuperDisconnectNotify(QsciScintilla* self, const QMetaMethod* signal) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->QsciScintilla::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciScintilla::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnDisconnectNotify(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self))
        vqsciscintilla->qsciscintilla_disconnectnotify_callback = reinterpret_cast<VirtualQsciScintilla::QsciScintilla_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QsciScintilla_SetScrollBars(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->VirtualQsciScintilla::setScrollBars();
    } else
        qFatal("Error: Protected method QsciScintilla::setScrollBars called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciScintilla_TextAsBytes(const QsciScintilla* self, const libqt_string text) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqsciscintilla->VirtualQsciScintilla::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciScintilla::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciScintilla_BytesAsText(const QsciScintilla* self, const char* bytes, int size) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        auto _ret = vqsciscintilla->VirtualQsciScintilla::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciScintilla::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciScintilla_ContextMenuNeeded(const QsciScintilla* self, int x, int y) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->VirtualQsciScintilla::contextMenuNeeded(static_cast<int>(x), static_cast<int>(y));
    } else
        qFatal("Error: Protected method QsciScintilla::contextMenuNeeded called without a directly constructed type");
}

// Derived class protected handler implementation
void QsciScintilla_SetViewportMargins(QsciScintilla* self, int left, int top, int right, int bottom) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->VirtualQsciScintilla::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method QsciScintilla::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* QsciScintilla_ViewportMargins(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self)))
        return new QMargins(vqsciscintilla->viewportMargins());
    qFatal("Error: Protected method QsciScintilla::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void QsciScintilla_DrawFrame(QsciScintilla* self, QPainter* param1) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->VirtualQsciScintilla::drawFrame(param1);
    } else
        qFatal("Error: Protected method QsciScintilla::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QsciScintilla_UpdateMicroFocus(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->VirtualQsciScintilla::updateMicroFocus();
    } else
        qFatal("Error: Protected method QsciScintilla::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QsciScintilla_Create(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->VirtualQsciScintilla::create();
    } else
        qFatal("Error: Protected method QsciScintilla::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QsciScintilla_Destroy(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->VirtualQsciScintilla::destroy();
    } else
        qFatal("Error: Protected method QsciScintilla::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciScintilla_FocusNextChild(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        return vqsciscintilla->VirtualQsciScintilla::focusNextChild();
    } else
        qFatal("Error: Protected method QsciScintilla::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciScintilla_FocusPreviousChild(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        return vqsciscintilla->VirtualQsciScintilla::focusPreviousChild();
    } else
        qFatal("Error: Protected method QsciScintilla::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciScintilla_Sender(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->VirtualQsciScintilla::sender();
    } else
        qFatal("Error: Protected method QsciScintilla::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciScintilla_SenderSignalIndex(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->VirtualQsciScintilla::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciScintilla::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciScintilla_Receivers(const QsciScintilla* self, const char* signal) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->VirtualQsciScintilla::receivers(signal);
    } else
        qFatal("Error: Protected method QsciScintilla::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciScintilla_IsSignalConnected(const QsciScintilla* self, const QMetaMethod* signal) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->VirtualQsciScintilla::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciScintilla::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QsciScintilla_GetDecodedMetricF(const QsciScintilla* self, int metricA, int metricB) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->VirtualQsciScintilla::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QsciScintilla::getDecodedMetricF called without a directly constructed type");
}

void QsciScintilla_Delete(QsciScintilla* self) {
    delete self;
}
