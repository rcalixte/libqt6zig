#include <QAnyStringView>
#include <QChar>
#include <QString>
#include <qanystringview.h>
#include "libqanystringview.h"
#include "libqanystringview.hxx"

int QAnyStringView_Compare(const char* lhs, const char* rhs) {
    return QAnyStringView::compare(QAnyStringView(lhs), QAnyStringView(rhs));
}

bool QAnyStringView_Equal(const char* lhs, const char* rhs) {
    return QAnyStringView::equal(QAnyStringView(lhs), QAnyStringView(rhs));
}

int QAnyStringView_Compare3(const char* lhs, const char* rhs, int cs) {
    return QAnyStringView::compare(QAnyStringView(lhs), QAnyStringView(rhs), static_cast<Qt::CaseSensitivity>(cs));
}
