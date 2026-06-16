#include <KFuzzyMatcher>
#define WORKAROUND_INNER_CLASS_DEFINITION_KFuzzyMatcher__Range
#define WORKAROUND_INNER_CLASS_DEFINITION_KFuzzyMatcher__Result
#include <QList>
#include <kfuzzymatcher.h>
#include "libkfuzzymatcher.h"
#include "libkfuzzymatcher.hxx"

KFuzzyMatcher__Result* KFuzzyMatcher__Result_new(const KFuzzyMatcher__Result* other) {
    return new KFuzzyMatcher::Result(*other);
}

KFuzzyMatcher__Result* KFuzzyMatcher__Result_new2(KFuzzyMatcher__Result* other) {
    return new KFuzzyMatcher::Result(std::move(*other));
}

void KFuzzyMatcher__Result_CopyAssign(KFuzzyMatcher__Result* self, KFuzzyMatcher__Result* other) {
    *self = *other;
}

void KFuzzyMatcher__Result_MoveAssign(KFuzzyMatcher__Result* self, KFuzzyMatcher__Result* other) {
    *self = std::move(*other);
}

int KFuzzyMatcher__Result_Score(const KFuzzyMatcher__Result* self) {
    return self->score;
}

void KFuzzyMatcher__Result_SetScore(KFuzzyMatcher__Result* self, int score) {
    self->score = static_cast<int>(score);
}

bool KFuzzyMatcher__Result_Matched(const KFuzzyMatcher__Result* self) {
    return self->matched;
}

void KFuzzyMatcher__Result_SetMatched(KFuzzyMatcher__Result* self, bool matched) {
    self->matched = matched;
}

void KFuzzyMatcher__Result_Delete(KFuzzyMatcher__Result* self) {
    delete self;
}

KFuzzyMatcher__Range* KFuzzyMatcher__Range_new() {
    return new KFuzzyMatcher::Range();
}

KFuzzyMatcher__Range* KFuzzyMatcher__Range_new2(const KFuzzyMatcher__Range* param1) {
    return new KFuzzyMatcher::Range(*param1);
}

int KFuzzyMatcher__Range_Start(const KFuzzyMatcher__Range* self) {
    return self->start;
}

void KFuzzyMatcher__Range_SetStart(KFuzzyMatcher__Range* self, int start) {
    self->start = static_cast<int>(start);
}

int KFuzzyMatcher__Range_Length(const KFuzzyMatcher__Range* self) {
    return self->length;
}

void KFuzzyMatcher__Range_SetLength(KFuzzyMatcher__Range* self, int length) {
    self->length = static_cast<int>(length);
}

void KFuzzyMatcher__Range_Delete(KFuzzyMatcher__Range* self) {
    delete self;
}

bool KFuzzyMatcher_MatchSimple(libqt_string pattern, libqt_string str) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    QString str_QString = QString::fromUtf8(str.data, str.len);
    return KFuzzyMatcher::matchSimple(pattern_QString, str_QString);
}

KFuzzyMatcher__Result* KFuzzyMatcher_Match(libqt_string pattern, libqt_string str) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    QString str_QString = QString::fromUtf8(str.data, str.len);
    return new KFuzzyMatcher::Result(KFuzzyMatcher::match(pattern_QString, str_QString));
}

libqt_list /* of KFuzzyMatcher__Range* */ KFuzzyMatcher_MatchedRanges(libqt_string pattern, libqt_string str, unsigned char type) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<KFuzzyMatcher::Range> _ret = KFuzzyMatcher::matchedRanges(pattern_QString, str_QString, static_cast<KFuzzyMatcher::RangeType>(type));
    // Convert QList<> from C++ memory to manually-managed C memory
    KFuzzyMatcher__Range** _arr = static_cast<KFuzzyMatcher__Range**>(malloc(sizeof(KFuzzyMatcher__Range*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KFuzzyMatcher::Range(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}
