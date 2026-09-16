#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 14 member(s).
namespace StructuredQuery1 {
class TokenizerWordSink {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TokenizerWordSink@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndAltPhrase@TokenizerWordSink@StructuredQuery1@@UEAAJXZ
    virtual long EndAltPhrase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWords@TokenizerWordSink@StructuredQuery1@@UEAAJPEAPEAVWordList@2@@Z
    virtual long GetWords(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutAltWord@TokenizerWordSink@StructuredQuery1@@UEAAJKPEB_WKK@Z
    virtual long PutAltWord(unsigned long, wchar_t const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutBreak@TokenizerWordSink@StructuredQuery1@@UEAAJW4tagWORDREP_BREAK_TYPE@@@Z
    virtual long PutBreak(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutWord@TokenizerWordSink@StructuredQuery1@@UEAAJKPEB_WKK@Z
    virtual long PutWord(unsigned long, wchar_t const *, unsigned long, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TokenizerWordSink@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TokenizerWordSink@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAltPhrase@TokenizerWordSink@StructuredQuery1@@UEAAJXZ
    virtual long StartAltPhrase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutWordHelper@TokenizerWordSink@StructuredQuery1@@AEAAJKK@Z
    long PutWordHelper(unsigned long, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TokenizerWordSink@StructuredQuery1@@AEAA@XZ
    ~TokenizerWordSink();
};
} // namespace StructuredQuery1
