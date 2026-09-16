#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 8 member(s).
class CCapturingWordSink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndAltPhrase@CCapturingWordSink@@UEAAJXZ
    virtual long EndAltPhrase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutAltWord@CCapturingWordSink@@UEAAJKPEB_WKK@Z
    virtual long PutAltWord(unsigned long, wchar_t const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutBreak@CCapturingWordSink@@UEAAJW4tagWORDREP_BREAK_TYPE@@@Z
    virtual long PutBreak(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutWord@CCapturingWordSink@@UEAAJKPEB_WKK@Z
    virtual long PutWord(unsigned long, wchar_t const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAltPhrase@CCapturingWordSink@@UEAAJXZ
    virtual long StartAltPhrase();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCapturingWordSink@@UEAA@XZ
    virtual ~CCapturingWordSink();
};
