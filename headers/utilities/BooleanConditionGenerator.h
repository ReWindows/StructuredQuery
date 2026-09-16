#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 10 member(s).
namespace StructuredQuery1 {
class BooleanConditionGenerator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BooleanConditionGenerator@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@BooleanConditionGenerator@StructuredQuery1@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultPhrase@BooleanConditionGenerator@StructuredQuery1@@UEAAJPEB_WPEBUtagPROPVARIANT@@HPEAPEA_W@Z
    virtual long DefaultPhrase(wchar_t const *, tagPROPVARIANT const *, int, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@BooleanConditionGenerator@StructuredQuery1@@UEAAJPEAUISchemaProvider@@@Z
    virtual long Initialize(ISchemaProvider *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BooleanConditionGenerator@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecognizeNamedEntities@BooleanConditionGenerator@StructuredQuery1@@UEAAJPEB_WKPEAUITokenCollection@@PEAUINamedEntityCollector@@@Z
    virtual long RecognizeNamedEntities(wchar_t const *, unsigned long, ITokenCollection *, INamedEntityCollector *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BooleanConditionGenerator@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BooleanConditionGenerator@StructuredQuery1@@EEAA@XZ
    virtual ~BooleanConditionGenerator();
};
} // namespace StructuredQuery1
