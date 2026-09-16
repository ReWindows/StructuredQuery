#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 11 member(s).
namespace StructuredQuery1 {
class IntegerConditionGenerator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@IntegerConditionGenerator@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@IntegerConditionGenerator@StructuredQuery1@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultPhrase@IntegerConditionGenerator@StructuredQuery1@@UEAAJPEB_WPEBUtagPROPVARIANT@@HPEAPEA_W@Z
    virtual long DefaultPhrase(wchar_t const *, tagPROPVARIANT const *, int, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@IntegerConditionGenerator@StructuredQuery1@@UEAAJPEAUISchemaProvider@@@Z
    virtual long Initialize(ISchemaProvider *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@IntegerConditionGenerator@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecognizeNamedEntities@IntegerConditionGenerator@StructuredQuery1@@UEAAJPEB_WKPEAUITokenCollection@@PEAUINamedEntityCollector@@@Z
    virtual long RecognizeNamedEntities(wchar_t const *, unsigned long, ITokenCollection *, INamedEntityCollector *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@IntegerConditionGenerator@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0IntegerConditionGenerator@StructuredQuery1@@AEAA@XZ
    IntegerConditionGenerator();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IntegerConditionGenerator@StructuredQuery1@@EEAA@XZ
    virtual ~IntegerConditionGenerator();
};
} // namespace StructuredQuery1
