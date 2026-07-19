#include <QAnyStringView>
#include <QChar>
#include <QString>
#include <qanystringview.h>
#include "libqanystringview.h"
#include "libqanystringview.hxx"

int QAnyStringView_Compare(libqt_string lhs, libqt_string rhs) {
    return QAnyStringView::compare(QAnyStringView(lhs.data, lhs.len), QAnyStringView(rhs.data, rhs.len));
}

bool QAnyStringView_Equal(libqt_string lhs, libqt_string rhs) {
    return QAnyStringView::equal(QAnyStringView(lhs.data, lhs.len), QAnyStringView(rhs.data, rhs.len));
}

int QAnyStringView_Compare3(libqt_string lhs, libqt_string rhs, int cs) {
    return QAnyStringView::compare(QAnyStringView(lhs.data, lhs.len), QAnyStringView(rhs.data, rhs.len), static_cast<Qt::CaseSensitivity>(cs));
}
