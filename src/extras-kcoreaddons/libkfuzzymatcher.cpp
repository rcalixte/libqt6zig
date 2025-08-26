#include <KFuzzyMatcher>
#define WORKAROUND_INNER_CLASS_DEFINITION_KFuzzyMatcher__Range
#define WORKAROUND_INNER_CLASS_DEFINITION_KFuzzyMatcher__Result
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
