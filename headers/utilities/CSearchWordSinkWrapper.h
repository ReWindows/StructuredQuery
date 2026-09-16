#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 10 member(s).
class CSearchWordSinkWrapper {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchWordSinkWrapper@@QEAA@KPEAUIWordSink@@PEAUtagTEXT_SOURCE@@_N@Z
    CSearchWordSinkWrapper(unsigned long, IWordSink *, tagTEXT_SOURCE *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndAltPhrase@CSearchWordSinkWrapper@@UEAAJXZ
    virtual long EndAltPhrase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutAltWord@CSearchWordSinkWrapper@@UEAAJKPEBGKK@Z
    virtual long PutAltWord(unsigned long, unsigned short const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutBreak@CSearchWordSinkWrapper@@UEAAJW4tagWORDREP_BREAK_TYPE@@@Z
    virtual long PutBreak(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutWord@CSearchWordSinkWrapper@@UEAAJKPEBGKK@Z
    virtual long PutWord(unsigned long, unsigned short const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAltPhrase@CSearchWordSinkWrapper@@UEAAJXZ
    virtual long StartAltPhrase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PutWordInternal@CSearchWordSinkWrapper@@QEAAJ_NKPEBGKK@Z
    long _PutWordInternal(bool, unsigned long, unsigned short const *, unsigned long, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchWordSinkWrapper@@UEAA@XZ
    virtual ~CSearchWordSinkWrapper();
};
