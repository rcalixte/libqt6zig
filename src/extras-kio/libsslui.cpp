#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__SslUi
#include <KSslErrorUiData>
#include <sslui.h>
#include "libsslui.h"
#include "libsslui.hxx"

bool KIO__SslUi_AskIgnoreSslErrors(const KSslErrorUiData* param1, int param2) {
    return KIO::SslUi::askIgnoreSslErrors(*param1, static_cast<KIO::SslUi::RulesStorage>(param2));
}
