#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 5 member(s).
class SearchIndexerTraceProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Information@SearchIndexerTraceProvider@@SAXPEB_WI0@Z
    static void Information(wchar_t const *, unsigned int, wchar_t const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@SearchIndexerTraceProvider@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Warning@SearchIndexerTraceProvider@@SAXPEB_WI0@Z
    static void Warning(wchar_t const *, unsigned int, wchar_t const *);
};
