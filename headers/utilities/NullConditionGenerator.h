#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 10 member(s).
namespace StructuredQuery1 {
class NullConditionGenerator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@NullConditionGenerator@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@NullConditionGenerator@StructuredQuery1@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultPhrase@NullConditionGenerator@StructuredQuery1@@UEAAJPEB_WPEBUtagPROPVARIANT@@HPEAPEA_W@Z
    virtual long DefaultPhrase(wchar_t const *, tagPROPVARIANT const *, int, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateForLeaf@NullConditionGenerator@StructuredQuery1@@UEAAJPEAUIConditionFactory@@PEB_WW4tagCONDITION_OPERATION@@111PEAUIRichChunk@@33HPEAHPEAPEAUICondition@@@Z
    virtual long GenerateForLeaf(IConditionFactory *, wchar_t const *, int, wchar_t const *, wchar_t const *, wchar_t const *, IRichChunk *, IRichChunk *, IRichChunk *, int, int *, ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@NullConditionGenerator@StructuredQuery1@@UEAAJPEAUISchemaProvider@@@Z
    virtual long Initialize(ISchemaProvider *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@NullConditionGenerator@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecognizeNamedEntities@NullConditionGenerator@StructuredQuery1@@UEAAJPEB_WKPEAUITokenCollection@@PEAUINamedEntityCollector@@@Z
    virtual long RecognizeNamedEntities(wchar_t const *, unsigned long, ITokenCollection *, INamedEntityCollector *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@NullConditionGenerator@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NullConditionGenerator@StructuredQuery1@@AEAA@XZ
    NullConditionGenerator();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NullConditionGenerator@StructuredQuery1@@AEAA@XZ
    ~NullConditionGenerator();
};
} // namespace StructuredQuery1
