#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 12 member(s).
namespace StructuredQuery1 {
class DateTimeConditionGenerator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DateTimeConditionGenerator@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DateTimeConditionGenerator@StructuredQuery1@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultPhrase@DateTimeConditionGenerator@StructuredQuery1@@UEAAJPEB_WPEBUtagPROPVARIANT@@HPEAPEA_W@Z
    virtual long DefaultPhrase(wchar_t const *, tagPROPVARIANT const *, int, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateForLeaf@DateTimeConditionGenerator@StructuredQuery1@@UEAAJPEAUIConditionFactory@@PEB_WW4tagCONDITION_OPERATION@@111PEAUIRichChunk@@33HPEAHPEAPEAUICondition@@@Z
    virtual long GenerateForLeaf(IConditionFactory *, wchar_t const *, int, wchar_t const *, wchar_t const *, wchar_t const *, IRichChunk *, IRichChunk *, IRichChunk *, int, int *, ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DateTimeConditionGenerator@StructuredQuery1@@UEAAJPEAUISchemaProvider@@@Z
    virtual long Initialize(ISchemaProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsReinitialization@DateTimeConditionGenerator@StructuredQuery1@@UEAAJKKPEAH@Z
    virtual long NeedsReinitialization(unsigned long, unsigned long, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DateTimeConditionGenerator@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecognizeNamedEntities@DateTimeConditionGenerator@StructuredQuery1@@UEAAJPEB_WKPEAUITokenCollection@@PEAUINamedEntityCollector@@@Z
    virtual long RecognizeNamedEntities(wchar_t const *, unsigned long, ITokenCollection *, INamedEntityCollector *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reinitialize@DateTimeConditionGenerator@StructuredQuery1@@UEAAJPEAUISchemaProvider@@KK@Z
    virtual long Reinitialize(ISchemaProvider *, unsigned long, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DateTimeConditionGenerator@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DateTimeConditionGenerator@StructuredQuery1@@AEAA@XZ
    DateTimeConditionGenerator();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DateTimeConditionGenerator@StructuredQuery1@@AEAA@XZ
    ~DateTimeConditionGenerator();
};
} // namespace StructuredQuery1
