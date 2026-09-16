#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 14 member(s).
namespace StructuredQuery1 {
class SourceWordSink {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SourceWordSink@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@SourceWordSink@StructuredQuery1@@SAJPEAVQueryWordNode@2@PEB_W_NPEAV?$GrowableBuffer@UtagHITRANGE@@@@KPEAPEAV12@@Z
    static long Create(WindissectOpaque *, wchar_t const *, bool, WindissectOpaque *, unsigned long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndAltPhrase@SourceWordSink@StructuredQuery1@@UEAAJXZ
    virtual long EndAltPhrase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutAltWord@SourceWordSink@StructuredQuery1@@UEAAJKPEB_WKK@Z
    virtual long PutAltWord(unsigned long, wchar_t const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutBreak@SourceWordSink@StructuredQuery1@@UEAAJW4tagWORDREP_BREAK_TYPE@@@Z
    virtual long PutBreak(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutWord@SourceWordSink@StructuredQuery1@@UEAAJKPEB_WKK@Z
    virtual long PutWord(unsigned long, wchar_t const *, unsigned long, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SourceWordSink@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SourceWordSink@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAltPhrase@SourceWordSink@StructuredQuery1@@UEAAJXZ
    virtual long StartAltPhrase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNewQueryWordTracker@SourceWordSink@StructuredQuery1@@AEAAJKKPEAVQueryWordNode@2@PEAVLinkedListOfHitRanges@2@@Z
    long AddNewQueryWordTracker(unsigned long, unsigned long, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MatchQueryNodeSiblings@SourceWordSink@StructuredQuery1@@AEAAJPEB_WHKKKHPEAVLinkedListOfHitRanges@2@PEAVQueryWordNode@2@@Z
    long MatchQueryNodeSiblings(wchar_t const *, int, unsigned long, unsigned long, unsigned long, int, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutWordHelper@SourceWordSink@StructuredQuery1@@AEAAJKPEB_WKK@Z
    long PutWordHelper(unsigned long, wchar_t const *, unsigned long, unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SourceWordSink@StructuredQuery1@@AEAA@PEAVQueryWordNode@1@_NPEAV?$GrowableBuffer@UtagHITRANGE@@@@K@Z
    SourceWordSink(WindissectOpaque *, bool, WindissectOpaque *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SourceWordSink@StructuredQuery1@@AEAA@XZ
    ~SourceWordSink();
};
} // namespace StructuredQuery1
