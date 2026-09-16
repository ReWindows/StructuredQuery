#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 9 member(s).
namespace StructuredQuery1 {
class KindNamedEntityHandler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@KindNamedEntityHandler@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@KindNamedEntityHandler@StructuredQuery1@@SAJHAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultPhrase@KindNamedEntityHandler@StructuredQuery1@@UEAAJPEB_WPEBUtagPROPVARIANT@@HPEAPEA_W@Z
    virtual long DefaultPhrase(wchar_t const *, tagPROPVARIANT const *, int, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateForLeaf@KindNamedEntityHandler@StructuredQuery1@@UEAAJPEAUIConditionFactory@@PEB_WW4tagCONDITION_OPERATION@@111PEAUIRichChunk@@33HPEAHPEAPEAUICondition@@@Z
    virtual long GenerateForLeaf(IConditionFactory *, wchar_t const *, int, wchar_t const *, wchar_t const *, wchar_t const *, IRichChunk *, IRichChunk *, IRichChunk *, int, int *, ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@KindNamedEntityHandler@StructuredQuery1@@UEAAJPEAUISchemaProvider@@@Z
    virtual long Initialize(ISchemaProvider *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@KindNamedEntityHandler@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecognizeNamedEntities@KindNamedEntityHandler@StructuredQuery1@@UEAAJPEB_WKPEAUITokenCollection@@PEAUINamedEntityCollector@@@Z
    virtual long RecognizeNamedEntities(wchar_t const *, unsigned long, ITokenCollection *, INamedEntityCollector *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@KindNamedEntityHandler@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0KindNamedEntityHandler@StructuredQuery1@@AEAA@H@Z
    KindNamedEntityHandler(int);
};
} // namespace StructuredQuery1
