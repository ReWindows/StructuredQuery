#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 12 member(s).
namespace StructuredQuery1 {
class StringRangeNamedEntityHandler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StringRangeNamedEntityHandler@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StringRangeNamedEntityHandler@StructuredQuery1@@SAJAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultPhrase@StringRangeNamedEntityHandler@StructuredQuery1@@UEAAJPEB_WPEBUtagPROPVARIANT@@HPEAPEA_W@Z
    virtual long DefaultPhrase(wchar_t const *, tagPROPVARIANT const *, int, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateForLeaf@StringRangeNamedEntityHandler@StructuredQuery1@@UEAAJPEAUIConditionFactory@@PEB_WW4tagCONDITION_OPERATION@@111PEAUIRichChunk@@33HPEAHPEAPEAUICondition@@@Z
    virtual long GenerateForLeaf(IConditionFactory *, wchar_t const *, int, wchar_t const *, wchar_t const *, wchar_t const *, IRichChunk *, IRichChunk *, IRichChunk *, int, int *, ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@StringRangeNamedEntityHandler@StructuredQuery1@@UEAAJPEAUISchemaProvider@@@Z
    virtual long Initialize(ISchemaProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsReinitialization@StringRangeNamedEntityHandler@StructuredQuery1@@UEAAJKKPEAH@Z
    virtual long NeedsReinitialization(unsigned long, unsigned long, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StringRangeNamedEntityHandler@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecognizeNamedEntities@StringRangeNamedEntityHandler@StructuredQuery1@@UEAAJPEB_WKPEAUITokenCollection@@PEAUINamedEntityCollector@@@Z
    virtual long RecognizeNamedEntities(wchar_t const *, unsigned long, ITokenCollection *, INamedEntityCollector *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reinitialize@StringRangeNamedEntityHandler@StructuredQuery1@@UEAAJPEAUISchemaProvider@@KK@Z
    virtual long Reinitialize(ISchemaProvider *, unsigned long, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StringRangeNamedEntityHandler@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StringRangeNamedEntityHandler@StructuredQuery1@@AEAA@XZ
    StringRangeNamedEntityHandler();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StringRangeNamedEntityHandler@StructuredQuery1@@AEAA@XZ
    ~StringRangeNamedEntityHandler();
};
} // namespace StructuredQuery1
