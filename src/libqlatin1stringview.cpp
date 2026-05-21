#include <QChar>
#include <QLatin1Char>
#include <QLatin1String>
#include <QString>
#include <qlatin1stringview.h>
#include "libqlatin1stringview.h"
#include "libqlatin1stringview.hxx"

ptrdiff_t QLatin1String_MaxSize2() {
    return static_cast<ptrdiff_t>(QLatin1String::maxSize());
}
