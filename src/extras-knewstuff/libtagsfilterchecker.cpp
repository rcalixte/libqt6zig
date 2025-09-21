#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__TagsFilterChecker
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <tagsfilterchecker.h>
#include "libtagsfilterchecker.h"
#include "libtagsfilterchecker.hxx"

KNSCore__TagsFilterChecker* KNSCore__TagsFilterChecker_new(const libqt_list /* of libqt_string */ tagFilter) {
    QList<QString> tagFilter_QList;
    tagFilter_QList.reserve(tagFilter.len);
    libqt_string* tagFilter_arr = static_cast<libqt_string*>(tagFilter.data);
    for (size_t i = 0; i < tagFilter.len; ++i) {
        QString tagFilter_arr_i_QString = QString::fromUtf8(tagFilter_arr[i].data, tagFilter_arr[i].len);
        tagFilter_QList.push_back(tagFilter_arr_i_QString);
    }
    return new KNSCore::TagsFilterChecker(tagFilter_QList);
}

bool KNSCore__TagsFilterChecker_FilterAccepts(KNSCore__TagsFilterChecker* self, const libqt_list /* of libqt_string */ tags) {
    QList<QString> tags_QList;
    tags_QList.reserve(tags.len);
    libqt_string* tags_arr = static_cast<libqt_string*>(tags.data);
    for (size_t i = 0; i < tags.len; ++i) {
        QString tags_arr_i_QString = QString::fromUtf8(tags_arr[i].data, tags_arr[i].len);
        tags_QList.push_back(tags_arr_i_QString);
    }
    return self->filterAccepts(tags_QList);
}

void KNSCore__TagsFilterChecker_Delete(KNSCore__TagsFilterChecker* self) {
    delete self;
}
