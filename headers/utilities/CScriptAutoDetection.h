#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 5 member(s).
class CScriptAutoDetection {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNonSpacedOverrideLocaleName@CScriptAutoDetection@@QEAAJPEB_W0PEA_WHPEAW4AMBIGUOUS_CJK_TEXT@@@Z
    long GetNonSpacedOverrideLocaleName(wchar_t const *, wchar_t const *, wchar_t *, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNonSpacedOverrideLocaleScripts@CScriptAutoDetection@@QEAAJPEB_WKPEAKPEAW4AMBIGUOUS_CJK_TEXT@@PEAW4SPECIAL_SCRIPTS_FOUND_FLAGS@@@Z
    long GetNonSpacedOverrideLocaleScripts(wchar_t const *, unsigned long, unsigned long *, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasScript@CScriptAutoDetection@@QEAAJPEB_W0@Z
    long HasScript(wchar_t const *, wchar_t const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSpecialScript@CScriptAutoDetection@@QEAAJPEB_WPEAW4SPECIAL_SCRIPTS_FOUND_FLAGS@@PEAK2@Z
    long HasSpecialScript(wchar_t const *, int *, unsigned long *, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CScriptAutoDetection@@QEAA@XZ
    ~CScriptAutoDetection();
};
